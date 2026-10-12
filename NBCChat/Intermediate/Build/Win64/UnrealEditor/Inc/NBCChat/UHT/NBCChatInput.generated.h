// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/NBCChatInput.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NBCCHAT_NBCChatInput_generated_h
#error "NBCChatInput.generated.h already included, missing '#pragma once' in NBCChatInput.h"
#endif
#define NBCCHAT_NBCChatInput_generated_h

#define FID_NBCChat_Source_NBCChat_UI_NBCChatInput_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnChatInputTextCommitted);


#define FID_NBCChat_Source_NBCChat_UI_NBCChatInput_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNBCChatInput(); \
	friend struct Z_Construct_UClass_UNBCChatInput_Statics; \
public: \
	DECLARE_CLASS(UNBCChatInput, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NBCChat"), NO_API) \
	DECLARE_SERIALIZER(UNBCChatInput)


#define FID_NBCChat_Source_NBCChat_UI_NBCChatInput_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNBCChatInput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNBCChatInput(UNBCChatInput&&); \
	UNBCChatInput(const UNBCChatInput&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNBCChatInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNBCChatInput); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNBCChatInput) \
	NO_API virtual ~UNBCChatInput();


#define FID_NBCChat_Source_NBCChat_UI_NBCChatInput_h_14_PROLOG
#define FID_NBCChat_Source_NBCChat_UI_NBCChatInput_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NBCChat_Source_NBCChat_UI_NBCChatInput_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NBCChat_Source_NBCChat_UI_NBCChatInput_h_17_INCLASS_NO_PURE_DECLS \
	FID_NBCChat_Source_NBCChat_UI_NBCChatInput_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NBCCHAT_API UClass* StaticClass<class UNBCChatInput>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NBCChat_Source_NBCChat_UI_NBCChatInput_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
