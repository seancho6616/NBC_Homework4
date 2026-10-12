// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NBCChat/Player/NBCChatPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNBCChatPlayerController() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
NBCCHAT_API UClass* Z_Construct_UClass_ANBCChatPlayerController();
NBCCHAT_API UClass* Z_Construct_UClass_ANBCChatPlayerController_NoRegister();
NBCCHAT_API UClass* Z_Construct_UClass_UNBCChatInput_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_NBCChat();
// End Cross Module References

// Begin Class ANBCChatPlayerController Function ClientRPCPrintChatMessageString
struct NBCChatPlayerController_eventClientRPCPrintChatMessageString_Parms
{
	FString InChatMessageString;
};
static const FName NAME_ANBCChatPlayerController_ClientRPCPrintChatMessageString = FName(TEXT("ClientRPCPrintChatMessageString"));
void ANBCChatPlayerController::ClientRPCPrintChatMessageString(const FString& InChatMessageString)
{
	NBCChatPlayerController_eventClientRPCPrintChatMessageString_Parms Parms;
	Parms.InChatMessageString=InChatMessageString;
	UFunction* Func = FindFunctionChecked(NAME_ANBCChatPlayerController_ClientRPCPrintChatMessageString);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ANBCChatPlayerController_ClientRPCPrintChatMessageString_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/NBCChatPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InChatMessageString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InChatMessageString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ANBCChatPlayerController_ClientRPCPrintChatMessageString_Statics::NewProp_InChatMessageString = { "InChatMessageString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NBCChatPlayerController_eventClientRPCPrintChatMessageString_Parms, InChatMessageString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InChatMessageString_MetaData), NewProp_InChatMessageString_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANBCChatPlayerController_ClientRPCPrintChatMessageString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANBCChatPlayerController_ClientRPCPrintChatMessageString_Statics::NewProp_InChatMessageString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBCChatPlayerController_ClientRPCPrintChatMessageString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANBCChatPlayerController_ClientRPCPrintChatMessageString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANBCChatPlayerController, nullptr, "ClientRPCPrintChatMessageString", nullptr, nullptr, Z_Construct_UFunction_ANBCChatPlayerController_ClientRPCPrintChatMessageString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANBCChatPlayerController_ClientRPCPrintChatMessageString_Statics::PropPointers), sizeof(NBCChatPlayerController_eventClientRPCPrintChatMessageString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBCChatPlayerController_ClientRPCPrintChatMessageString_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANBCChatPlayerController_ClientRPCPrintChatMessageString_Statics::Function_MetaDataParams) };
static_assert(sizeof(NBCChatPlayerController_eventClientRPCPrintChatMessageString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANBCChatPlayerController_ClientRPCPrintChatMessageString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANBCChatPlayerController_ClientRPCPrintChatMessageString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANBCChatPlayerController::execClientRPCPrintChatMessageString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InChatMessageString);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientRPCPrintChatMessageString_Implementation(Z_Param_InChatMessageString);
	P_NATIVE_END;
}
// End Class ANBCChatPlayerController Function ClientRPCPrintChatMessageString

// Begin Class ANBCChatPlayerController Function ServerRPCPrintChatMessageString
struct NBCChatPlayerController_eventServerRPCPrintChatMessageString_Parms
{
	FString InChatMessageString;
};
static const FName NAME_ANBCChatPlayerController_ServerRPCPrintChatMessageString = FName(TEXT("ServerRPCPrintChatMessageString"));
void ANBCChatPlayerController::ServerRPCPrintChatMessageString(const FString& InChatMessageString)
{
	NBCChatPlayerController_eventServerRPCPrintChatMessageString_Parms Parms;
	Parms.InChatMessageString=InChatMessageString;
	UFunction* Func = FindFunctionChecked(NAME_ANBCChatPlayerController_ServerRPCPrintChatMessageString);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ANBCChatPlayerController_ServerRPCPrintChatMessageString_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/NBCChatPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InChatMessageString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InChatMessageString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ANBCChatPlayerController_ServerRPCPrintChatMessageString_Statics::NewProp_InChatMessageString = { "InChatMessageString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NBCChatPlayerController_eventServerRPCPrintChatMessageString_Parms, InChatMessageString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InChatMessageString_MetaData), NewProp_InChatMessageString_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANBCChatPlayerController_ServerRPCPrintChatMessageString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANBCChatPlayerController_ServerRPCPrintChatMessageString_Statics::NewProp_InChatMessageString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBCChatPlayerController_ServerRPCPrintChatMessageString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANBCChatPlayerController_ServerRPCPrintChatMessageString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANBCChatPlayerController, nullptr, "ServerRPCPrintChatMessageString", nullptr, nullptr, Z_Construct_UFunction_ANBCChatPlayerController_ServerRPCPrintChatMessageString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANBCChatPlayerController_ServerRPCPrintChatMessageString_Statics::PropPointers), sizeof(NBCChatPlayerController_eventServerRPCPrintChatMessageString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBCChatPlayerController_ServerRPCPrintChatMessageString_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANBCChatPlayerController_ServerRPCPrintChatMessageString_Statics::Function_MetaDataParams) };
static_assert(sizeof(NBCChatPlayerController_eventServerRPCPrintChatMessageString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANBCChatPlayerController_ServerRPCPrintChatMessageString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANBCChatPlayerController_ServerRPCPrintChatMessageString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANBCChatPlayerController::execServerRPCPrintChatMessageString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InChatMessageString);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerRPCPrintChatMessageString_Implementation(Z_Param_InChatMessageString);
	P_NATIVE_END;
}
// End Class ANBCChatPlayerController Function ServerRPCPrintChatMessageString

// Begin Class ANBCChatPlayerController
void ANBCChatPlayerController::StaticRegisterNativesANBCChatPlayerController()
{
	UClass* Class = ANBCChatPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClientRPCPrintChatMessageString", &ANBCChatPlayerController::execClientRPCPrintChatMessageString },
		{ "ServerRPCPrintChatMessageString", &ANBCChatPlayerController::execServerRPCPrintChatMessageString },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANBCChatPlayerController);
UClass* Z_Construct_UClass_ANBCChatPlayerController_NoRegister()
{
	return ANBCChatPlayerController::StaticClass();
}
struct Z_Construct_UClass_ANBCChatPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/NBCChatPlayerController.h" },
		{ "ModuleRelativePath", "Player/NBCChatPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatInputWidgetClass_MetaData[] = {
		{ "Category", "NBCChatPlayerController" },
		{ "ModuleRelativePath", "Player/NBCChatPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatInputWidgetInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/NBCChatPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotificationTextWidgetClass_MetaData[] = {
		{ "Category", "NBCChatPlayerController" },
		{ "ModuleRelativePath", "Player/NBCChatPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotificationTextWidgetInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/NBCChatPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotificationText_MetaData[] = {
		{ "Category", "NBCChatPlayerController" },
		{ "ModuleRelativePath", "Player/NBCChatPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ChatInputWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChatInputWidgetInstance;
	static const UECodeGen_Private::FClassPropertyParams NewProp_NotificationTextWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NotificationTextWidgetInstance;
	static const UECodeGen_Private::FTextPropertyParams NewProp_NotificationText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANBCChatPlayerController_ClientRPCPrintChatMessageString, "ClientRPCPrintChatMessageString" }, // 3192924146
		{ &Z_Construct_UFunction_ANBCChatPlayerController_ServerRPCPrintChatMessageString, "ServerRPCPrintChatMessageString" }, // 178902777
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANBCChatPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANBCChatPlayerController_Statics::NewProp_ChatInputWidgetClass = { "ChatInputWidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBCChatPlayerController, ChatInputWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNBCChatInput_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatInputWidgetClass_MetaData), NewProp_ChatInputWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANBCChatPlayerController_Statics::NewProp_ChatInputWidgetInstance = { "ChatInputWidgetInstance", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBCChatPlayerController, ChatInputWidgetInstance), Z_Construct_UClass_UNBCChatInput_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatInputWidgetInstance_MetaData), NewProp_ChatInputWidgetInstance_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANBCChatPlayerController_Statics::NewProp_NotificationTextWidgetClass = { "NotificationTextWidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBCChatPlayerController, NotificationTextWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotificationTextWidgetClass_MetaData), NewProp_NotificationTextWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANBCChatPlayerController_Statics::NewProp_NotificationTextWidgetInstance = { "NotificationTextWidgetInstance", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBCChatPlayerController, NotificationTextWidgetInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotificationTextWidgetInstance_MetaData), NewProp_NotificationTextWidgetInstance_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ANBCChatPlayerController_Statics::NewProp_NotificationText = { "NotificationText", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBCChatPlayerController, NotificationText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotificationText_MetaData), NewProp_NotificationText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANBCChatPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBCChatPlayerController_Statics::NewProp_ChatInputWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBCChatPlayerController_Statics::NewProp_ChatInputWidgetInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBCChatPlayerController_Statics::NewProp_NotificationTextWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBCChatPlayerController_Statics::NewProp_NotificationTextWidgetInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBCChatPlayerController_Statics::NewProp_NotificationText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBCChatPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANBCChatPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_NBCChat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBCChatPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANBCChatPlayerController_Statics::ClassParams = {
	&ANBCChatPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANBCChatPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANBCChatPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANBCChatPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ANBCChatPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANBCChatPlayerController()
{
	if (!Z_Registration_Info_UClass_ANBCChatPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANBCChatPlayerController.OuterSingleton, Z_Construct_UClass_ANBCChatPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANBCChatPlayerController.OuterSingleton;
}
template<> NBCCHAT_API UClass* StaticClass<ANBCChatPlayerController>()
{
	return ANBCChatPlayerController::StaticClass();
}
void ANBCChatPlayerController::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_NotificationText(TEXT("NotificationText"));
	const bool bIsValid = true
		&& Name_NotificationText == ClassReps[(int32)ENetFields_Private::NotificationText].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ANBCChatPlayerController"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANBCChatPlayerController);
ANBCChatPlayerController::~ANBCChatPlayerController() {}
// End Class ANBCChatPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_NBCChat_Source_NBCChat_Player_NBCChatPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANBCChatPlayerController, ANBCChatPlayerController::StaticClass, TEXT("ANBCChatPlayerController"), &Z_Registration_Info_UClass_ANBCChatPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANBCChatPlayerController), 1715727599U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NBCChat_Source_NBCChat_Player_NBCChatPlayerController_h_3660550553(TEXT("/Script/NBCChat"),
	Z_CompiledInDeferFile_FID_NBCChat_Source_NBCChat_Player_NBCChatPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NBCChat_Source_NBCChat_Player_NBCChatPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
