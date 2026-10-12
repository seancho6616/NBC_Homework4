// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NBCChat/UI/NBCChatInput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNBCChatInput() {}

// Begin Cross Module References
NBCCHAT_API UClass* Z_Construct_UClass_UNBCChatInput();
NBCCHAT_API UClass* Z_Construct_UClass_UNBCChatInput_NoRegister();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_NBCChat();
// End Cross Module References

// Begin Class UNBCChatInput Function OnChatInputTextCommitted
struct Z_Construct_UFunction_UNBCChatInput_OnChatInputTextCommitted_Statics
{
	struct NBCChatInput_eventOnChatInputTextCommitted_Parms
	{
		FText Text;
		TEnumAsByte<ETextCommit::Type> CommitMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/NBCChatInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CommitMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNBCChatInput_OnChatInputTextCommitted_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NBCChatInput_eventOnChatInputTextCommitted_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNBCChatInput_OnChatInputTextCommitted_Statics::NewProp_CommitMethod = { "CommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NBCChatInput_eventOnChatInputTextCommitted_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(0, nullptr) }; // 1817921380
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNBCChatInput_OnChatInputTextCommitted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNBCChatInput_OnChatInputTextCommitted_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNBCChatInput_OnChatInputTextCommitted_Statics::NewProp_CommitMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNBCChatInput_OnChatInputTextCommitted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNBCChatInput_OnChatInputTextCommitted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNBCChatInput, nullptr, "OnChatInputTextCommitted", nullptr, nullptr, Z_Construct_UFunction_UNBCChatInput_OnChatInputTextCommitted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNBCChatInput_OnChatInputTextCommitted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNBCChatInput_OnChatInputTextCommitted_Statics::NBCChatInput_eventOnChatInputTextCommitted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNBCChatInput_OnChatInputTextCommitted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNBCChatInput_OnChatInputTextCommitted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNBCChatInput_OnChatInputTextCommitted_Statics::NBCChatInput_eventOnChatInputTextCommitted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNBCChatInput_OnChatInputTextCommitted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNBCChatInput_OnChatInputTextCommitted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNBCChatInput::execOnChatInputTextCommitted)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
	P_GET_PROPERTY(FByteProperty,Z_Param_CommitMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnChatInputTextCommitted(Z_Param_Out_Text,ETextCommit::Type(Z_Param_CommitMethod));
	P_NATIVE_END;
}
// End Class UNBCChatInput Function OnChatInputTextCommitted

// Begin Class UNBCChatInput
void UNBCChatInput::StaticRegisterNativesUNBCChatInput()
{
	UClass* Class = UNBCChatInput::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnChatInputTextCommitted", &UNBCChatInput::execOnChatInputTextCommitted },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNBCChatInput);
UClass* Z_Construct_UClass_UNBCChatInput_NoRegister()
{
	return UNBCChatInput::StaticClass();
}
struct Z_Construct_UClass_UNBCChatInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/NBCChatInput.h" },
		{ "ModuleRelativePath", "UI/NBCChatInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditableTextBox_ChatInput_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/NBCChatInput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditableTextBox_ChatInput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNBCChatInput_OnChatInputTextCommitted, "OnChatInputTextCommitted" }, // 2564545412
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNBCChatInput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNBCChatInput_Statics::NewProp_EditableTextBox_ChatInput = { "EditableTextBox_ChatInput", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNBCChatInput, EditableTextBox_ChatInput), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditableTextBox_ChatInput_MetaData), NewProp_EditableTextBox_ChatInput_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNBCChatInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNBCChatInput_Statics::NewProp_EditableTextBox_ChatInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNBCChatInput_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNBCChatInput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_NBCChat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNBCChatInput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNBCChatInput_Statics::ClassParams = {
	&UNBCChatInput::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNBCChatInput_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNBCChatInput_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNBCChatInput_Statics::Class_MetaDataParams), Z_Construct_UClass_UNBCChatInput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNBCChatInput()
{
	if (!Z_Registration_Info_UClass_UNBCChatInput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNBCChatInput.OuterSingleton, Z_Construct_UClass_UNBCChatInput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNBCChatInput.OuterSingleton;
}
template<> NBCCHAT_API UClass* StaticClass<UNBCChatInput>()
{
	return UNBCChatInput::StaticClass();
}
UNBCChatInput::UNBCChatInput(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNBCChatInput);
UNBCChatInput::~UNBCChatInput() {}
// End Class UNBCChatInput

// Begin Registration
struct Z_CompiledInDeferFile_FID_NBCChat_Source_NBCChat_UI_NBCChatInput_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNBCChatInput, UNBCChatInput::StaticClass, TEXT("UNBCChatInput"), &Z_Registration_Info_UClass_UNBCChatInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNBCChatInput), 1984061196U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NBCChat_Source_NBCChat_UI_NBCChatInput_h_2017709180(TEXT("/Script/NBCChat"),
	Z_CompiledInDeferFile_FID_NBCChat_Source_NBCChat_UI_NBCChatInput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NBCChat_Source_NBCChat_UI_NBCChatInput_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
