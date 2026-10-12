// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/NBCChatPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NBCCHAT_NBCChatPlayerController_generated_h
#error "NBCChatPlayerController.generated.h already included, missing '#pragma once' in NBCChatPlayerController.h"
#endif
#define NBCCHAT_NBCChatPlayerController_generated_h

#define FID_NBCChat_Source_NBCChat_Player_NBCChatPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerRPCPrintChatMessageString_Implementation(const FString& InChatMessageString); \
	virtual void ClientRPCPrintChatMessageString_Implementation(const FString& InChatMessageString); \
	DECLARE_FUNCTION(execServerRPCPrintChatMessageString); \
	DECLARE_FUNCTION(execClientRPCPrintChatMessageString);


#define FID_NBCChat_Source_NBCChat_Player_NBCChatPlayerController_h_15_CALLBACK_WRAPPERS
#define FID_NBCChat_Source_NBCChat_Player_NBCChatPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANBCChatPlayerController(); \
	friend struct Z_Construct_UClass_ANBCChatPlayerController_Statics; \
public: \
	DECLARE_CLASS(ANBCChatPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NBCChat"), NO_API) \
	DECLARE_SERIALIZER(ANBCChatPlayerController) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		NotificationText=NETFIELD_REP_START, \
		NETFIELD_REP_END=NotificationText	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_NBCChat_Source_NBCChat_Player_NBCChatPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANBCChatPlayerController(ANBCChatPlayerController&&); \
	ANBCChatPlayerController(const ANBCChatPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANBCChatPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANBCChatPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANBCChatPlayerController) \
	NO_API virtual ~ANBCChatPlayerController();


#define FID_NBCChat_Source_NBCChat_Player_NBCChatPlayerController_h_12_PROLOG
#define FID_NBCChat_Source_NBCChat_Player_NBCChatPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NBCChat_Source_NBCChat_Player_NBCChatPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NBCChat_Source_NBCChat_Player_NBCChatPlayerController_h_15_CALLBACK_WRAPPERS \
	FID_NBCChat_Source_NBCChat_Player_NBCChatPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	FID_NBCChat_Source_NBCChat_Player_NBCChatPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NBCCHAT_API UClass* StaticClass<class ANBCChatPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NBCChat_Source_NBCChat_Player_NBCChatPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
