// Fill out your copyright notice in the Description page of Project Settings.


#include "Game/NBCChatGameModeBase.h"

#include "Game/NBCChatGameStateBase.h"
#include "Player/NBCChatPlayerController.h"
#include "Player/NBCChatPlayerState.h"
#include "EngineUtils.h"

void ANBCChatGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	SecretNumberString = GenerateSecretNumber();

	UE_LOG(LogTemp, Error, TEXT("%s"), *SecretNumberString);
}

void ANBCChatGameModeBase::OnPostLogin(AController* NewPlayer)
{
	Super::OnPostLogin(NewPlayer);

	/*ANBCChatGameStateBase* NBCGameStateBase = GetGameState<ANBCChatGameStateBase>();
	if (IsValid(NBCGameStateBase))
	{
		NBCGameStateBase->MulticastRPCBroadcastLoginMessage(TEXT("XXXXXX"));
	}

	ANBCChatPlayerController* NBCPlayerController = Cast<ANBCChatPlayerController>(NewPlayer);
	if (IsValid(NBCPlayerController))
	{
		AllPlayerControllers.Add(NBCPlayerController);
	}*/
	ANBCChatPlayerController* NBCPlayerController = Cast<ANBCChatPlayerController>(NewPlayer);
	if (IsValid(NBCPlayerController))
	{
		NBCPlayerController->NotificationText = FText::FromString(TEXT("Connected to the game server."));

		AllPlayerControllers.Add(NBCPlayerController);

		ANBCChatPlayerState* NBCPS = NBCPlayerController->GetPlayerState<ANBCChatPlayerState>();
		if (IsValid(NBCPS))
		{
			NBCPS->PlayerNameString = TEXT("Player") + FString::FromInt(AllPlayerControllers.Num());
		}
		ANBCChatGameStateBase* NBCGameStateBase = GetGameState<ANBCChatGameStateBase>();
		if (IsValid(NBCGameStateBase))
		{
			NBCGameStateBase->MulticastRPCBroadcastLoginMessage(NBCPS->PlayerNameString);
		}
	}
}

FString ANBCChatGameModeBase::GenerateSecretNumber()
{
	TArray<int32> Numbers;
	for (int32 i = 1; i <= 9; ++i)
	{
		Numbers.Add(i);
	}

	FMath::RandInit(FDateTime::Now().GetTicks());
	Numbers = Numbers.FilterByPredicate([](int32 Num) { return Num > 0; });

	FString Result;

	for (int32 i = 0; i < 3; i++)
	{
		int32 Index = FMath::RandRange(0, Numbers.Num() - 1);
		Result.Append(FString::FromInt(Numbers[Index]));
		Numbers.RemoveAt(Index);
	}

	return Result;
}

bool ANBCChatGameModeBase::IsGuessNumberString(const FString& InNumberString)
{
	bool bCanPlay = false;

	do {
		if (InNumberString.Len() != 3)
		{
			break;
		}
		bool bIsUnique = true;
		TSet<TCHAR> UniqueDigits;
		for (TCHAR C : InNumberString)
		{
			if (FChar::IsDigit(C) == false || C == '0')
			{
				bIsUnique = false;
				break;
			}

			UniqueDigits.Add(C);
		}

		if (bIsUnique == false)
		{
			break;
		}

		bCanPlay = true;
	} while (false);

	return bCanPlay;
}

FString ANBCChatGameModeBase::JudgeResult(const FString& InSecretNumberString, const FString& InGuessNumberString)
{
	int32 StrikeCount = 0, BallCount = 0;

	for (int32 i = 0; i < 3; ++i)
	{
		if (InSecretNumberString[i] == InGuessNumberString[i])
		{
			StrikeCount++;
		}
		else
		{
			FString PlayerGuessChar = FString::Printf(TEXT("%c"), InGuessNumberString[i]);
			if (InSecretNumberString.Contains(PlayerGuessChar))
			{
				BallCount++;
			}
		}
	}

	if (StrikeCount == 0 && BallCount == 0)
	{
		return TEXT("OUT");
	}


	return FString::Printf(TEXT("%dS%dB"), StrikeCount, BallCount);
}

void ANBCChatGameModeBase::PrintChatMessageString(ANBCChatPlayerController* InChattingPlayerController, const FString& InChatMessageString)
{
	FString ChatMessageString = InChatMessageString;
	int Index = InChatMessageString.Len() - 3;
	FString GuessNumberString = InChatMessageString.RightChop(Index);
	ANBCChatPlayerState* NBCPS = InChattingPlayerController->GetPlayerState<ANBCChatPlayerState>();
	if (IsValid(NBCPS))
	{
		if (IsGuessNumberString(GuessNumberString))
		{
			if (NBCPS->CurrentGuessCount >= NBCPS->MaxGuessCount)
			{
				FString PlayerChat = NBCPS->GetPlayerInfoString() + TEXT(": No more Chance!");

				for (TActorIterator<ANBCChatPlayerController> It(GetWorld()); It; ++It)
				{
					ANBCChatPlayerController* NBCPlayerController = *It;
					if (IsValid(NBCPlayerController))
					{
						NBCPlayerController->ClientRPCPrintChatMessageString(PlayerChat);
						return;
					}
				}
			}
			IncreaseGuessCount(InChattingPlayerController);

			FString PlayerChatCount = NBCPS->GetPlayerInfoString() + TEXT(": ") + InChatMessageString;
			FString JudgeResultString = JudgeResult(SecretNumberString, GuessNumberString);

			for (TActorIterator<ANBCChatPlayerController> It(GetWorld()); It; ++It)
			{
				ANBCChatPlayerController* NBCPlayerController = *It;
				if (IsValid(NBCPlayerController))
				{
					FString CombinedMessageString = PlayerChatCount + TEXT("->") + JudgeResultString;
					NBCPlayerController->ClientRPCPrintChatMessageString(CombinedMessageString);

					int32 StrikeCount = FCString::Atoi(*JudgeResultString.Left(1));
					JudgeGame(InChattingPlayerController, StrikeCount);
				}
			}
		}
		else
		{
			for (TActorIterator<ANBCChatPlayerController> It(GetWorld()); It; ++It)
			{
				ANBCChatPlayerController* NBCPlayerController = *It;
				if (IsValid(NBCPlayerController))
				{
					FString PlayerChatCount = NBCPS->GetPlayerInfoString() + TEXT(": ") + InChatMessageString;

					NBCPlayerController->ClientRPCPrintChatMessageString(PlayerChatCount);
				}
			}
		}
	}
}

void ANBCChatGameModeBase::IncreaseGuessCount(ANBCChatPlayerController* InChattingPlayerController)
{
	ANBCChatPlayerState* NBCPS = InChattingPlayerController->GetPlayerState<ANBCChatPlayerState>();
	if (IsValid(NBCPS))
	{
		NBCPS->CurrentGuessCount++;
	}
}

void ANBCChatGameModeBase::ResetGame()
{
	SecretNumberString = GenerateSecretNumber();

	for (const auto& NBCPlayerController : AllPlayerControllers)
	{
		ANBCChatPlayerState* NBCPS = NBCPlayerController->GetPlayerState<ANBCChatPlayerState>();
		if (IsValid(NBCPS))
		{
			NBCPS->CurrentGuessCount = 0;
		}
	}
}

void ANBCChatGameModeBase::JudgeGame(ANBCChatPlayerController* InChattingPlayerController, int InStrikeCount)
{
	if (3 == InStrikeCount)
	{
		ANBCChatPlayerState* NBCPS = InChattingPlayerController->GetPlayerState<ANBCChatPlayerState>();
		for (const auto& NBCPlayerController : AllPlayerControllers)
		{
			if (IsValid(NBCPS))
			{
				FString CombinedMessageString = NBCPS->PlayerNameString + TEXT(" has won the game.");
				NBCPlayerController->NotificationText = FText::FromString(CombinedMessageString);

				ResetGame();
			}
		}
	}
	else
	{
		bool bIsDraw = true;
		for (const auto& NBCPlayerController : AllPlayerControllers)
		{
			ANBCChatPlayerState* NBCPS = NBCPlayerController->GetPlayerState<ANBCChatPlayerState>();
			if (IsValid(NBCPS))
			{
				if (NBCPS->CurrentGuessCount < NBCPS->MaxGuessCount)
				{
					bIsDraw = false;
					break;
				}
			}
		}
		if (bIsDraw)
		{
			for (const auto& NBCPlayerController : AllPlayerControllers)
			{
				NBCPlayerController->NotificationText = FText::FromString(TEXT("Draw.."));

				ResetGame();
			}
		}
	}
}
