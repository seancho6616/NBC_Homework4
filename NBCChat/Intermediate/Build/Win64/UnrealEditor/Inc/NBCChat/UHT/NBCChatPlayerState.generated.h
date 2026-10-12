// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/NBCChatPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NBCCHAT_NBCChatPlayerState_generated_h
#error "NBCChatPlayerState.generated.h already included, missing '#pragma once' in NBCChatPlayerState.h"
#endif
#define NBCCHAT_NBCChatPlayerState_generated_h

#define FID_NBCChat_Source_NBCChat_Player_NBCChatPlayerState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANBCChatPlayerState(); \
	friend struct Z_Construct_UClass_ANBCChatPlayerState_Statics; \
public: \
	DECLARE_CLASS(ANBCChatPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NBCChat"), NO_API) \
	DECLARE_SERIALIZER(ANBCChatPlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PlayerNameString=NETFIELD_REP_START, \
		CurrentGuessCount, \
		MaxGuessCount, \
		NETFIELD_REP_END=MaxGuessCount	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_NBCChat_Source_NBCChat_Player_NBCChatPlayerState_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANBCChatPlayerState(ANBCChatPlayerState&&); \
	ANBCChatPlayerState(const ANBCChatPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANBCChatPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANBCChatPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANBCChatPlayerState) \
	NO_API virtual ~ANBCChatPlayerState();


#define FID_NBCChat_Source_NBCChat_Player_NBCChatPlayerState_h_12_PROLOG
#define FID_NBCChat_Source_NBCChat_Player_NBCChatPlayerState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NBCChat_Source_NBCChat_Player_NBCChatPlayerState_h_15_INCLASS_NO_PURE_DECLS \
	FID_NBCChat_Source_NBCChat_Player_NBCChatPlayerState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NBCCHAT_API UClass* StaticClass<class ANBCChatPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NBCChat_Source_NBCChat_Player_NBCChatPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
