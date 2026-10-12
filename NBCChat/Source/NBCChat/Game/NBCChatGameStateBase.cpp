// Fill out your copyright notice in the Description page of Project Settings.


#include "Game/NBCChatGameStateBase.h"

#include "Kismet/GameplayStatics.h"
#include "Player/NBCChatPlayerController.h"


void ANBCChatGameStateBase::MulticastRPCBroadcastLoginMessage_Implementation(const FString& InNameString)
{
	if (HasAuthority() == false)
	{
		APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
		if (IsValid(PC))
		{
			ANBCChatPlayerController* NBCPC = Cast<ANBCChatPlayerController>(PC);
			if (IsValid(NBCPC))
			{
				FString NotificationString = InNameString + TEXT(" has joined the game.");
				NBCPC->PrintChatMessageString(NotificationString);
			}
		}
	}
}
