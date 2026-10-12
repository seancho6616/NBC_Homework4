// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/NBCChatPlayerController.h"

#include "UI/NBCChatInput.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Game/NBCChatGameModeBase.h"
#include "NBCChat.h"
#include "EngineUtils.h"
#include "Player/NBCChatPlayerState.h"
#include "Net/UnrealNetwork.h"

ANBCChatPlayerController::ANBCChatPlayerController()
{
	bReplicates = true;
}

void ANBCChatPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (IsLocalController() == false)
	{
		return;
	}

	FInputModeUIOnly InputModeUIOnly;
	SetInputMode(InputModeUIOnly);

	if (IsValid(ChatInputWidgetClass) == true)
	{
		ChatInputWidgetInstance = CreateWidget<UNBCChatInput>(this, ChatInputWidgetClass);
		if (IsValid(ChatInputWidgetInstance))
		{
			ChatInputWidgetInstance->AddToViewport();
		}
	}

	if (IsValid(NotificationTextWidgetClass))
	{
		NotificationTextWidgetInstance = CreateWidget<UUserWidget>(this, NotificationTextWidgetClass);
		if (IsValid(NotificationTextWidgetInstance))
		{
			NotificationTextWidgetInstance->AddToViewport();
		}
	}
}

void ANBCChatPlayerController::SetChatMessageString(const FString& InChatMessageString)
{
	ChatMessageString = InChatMessageString;

	//PrintChatMessageString(ChatMessageString);
	if (IsLocalController())
	{
		//ServerRPCPrintChatMessageString(InChatMessageString);

		ANBCChatPlayerState* NBCPS = GetPlayerState<ANBCChatPlayerState>();

		if (IsValid(NBCPS))
		{
			//FString CombinedMessageString = NBCPS->PlayerNameString + TEXT(": ") + InChatMessageString;
			//FString CombinedMessageString = NBCPS->GetPlayerInfoString() + TEXT(": ") + InChatMessageString;
			//ServerRPCPrintChatMessageString(CombinedMessageString);

			ServerRPCPrintChatMessageString(InChatMessageString);
		}
	}
}

void ANBCChatPlayerController::PrintChatMessageString(const FString& InChatMessageString)
{
	//UKismetSystemLibrary::PrintString(this, ChatMessageString, true, true, FLinearColor::Red, 5.0f);
	//FString NetModeString = FunctionLibrary::GetNetModeString(this);
	//FString CombinedMessageString = FString::Printf(TEXT("%s: %s"), *NetModeString, *InChatMessageString);
	//FunctionLibrary::MyPrintString(this, CombinedMessageString, 10.f);

	FunctionLibrary::MyPrintString(this, InChatMessageString, 10.f);
}

void ANBCChatPlayerController::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, NotificationText);
}

void ANBCChatPlayerController::ClientRPCPrintChatMessageString_Implementation(const FString& InChatMessageString)
{
	PrintChatMessageString(InChatMessageString);
}

void ANBCChatPlayerController::ServerRPCPrintChatMessageString_Implementation(const FString& InChatMessageString)
{
	/*for (TActorIterator<ANBCChatPlayerController> It(GetWorld()); It; ++It)
	{
		ANBCChatPlayerController* NBCPlayerController = *It;
		if (IsValid(NBCPlayerController))
		{
			NBCPlayerController->ClientRPCPrintChatMessageString(InChatMessageString);
		}
	}*/

	AGameModeBase* GM = UGameplayStatics::GetGameMode(this);
	if (IsValid(GM))
	{
		ANBCChatGameModeBase* NBCGM = Cast<ANBCChatGameModeBase>(GM);
		if (IsValid(NBCGM))
		{
			NBCGM->PrintChatMessageString(this, InChatMessageString);
		}
	}
}
