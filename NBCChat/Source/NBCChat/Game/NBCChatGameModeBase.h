// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "NBCChatGameModeBase.generated.h"

class ANBCChatPlayerController;

UCLASS()
class NBCCHAT_API ANBCChatGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	virtual void BeginPlay() override;

	virtual void OnPostLogin(AController* NewPlayer) override;

	FString GenerateSecretNumber();

	bool IsGuessNumberString(const FString& InNumberString);

	FString JudgeResult(const FString& InSecretNumberString, const FString& InGuessNumberString);

	void PrintChatMessageString(ANBCChatPlayerController* InChattingPlayerController, const FString& InChatMessageString);

	void IncreaseGuessCount(ANBCChatPlayerController* InChattingPlayerController);

	void ResetGame();

	void JudgeGame(ANBCChatPlayerController* InChattingPlayerController, int InStrikeCount);

protected:
	FString SecretNumberString;

	TArray<TObjectPtr<ANBCChatPlayerController>> AllPlayerControllers;
};
