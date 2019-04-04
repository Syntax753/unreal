// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScriptingBasic/ScriptingBasicGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScriptingBasicGameMode() {}
// Cross Module References
	SCRIPTINGBASIC_API UClass* Z_Construct_UClass_AScriptingBasicGameMode_NoRegister();
	SCRIPTINGBASIC_API UClass* Z_Construct_UClass_AScriptingBasicGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ScriptingBasic();
// End Cross Module References
	void AScriptingBasicGameMode::StaticRegisterNativesAScriptingBasicGameMode()
	{
	}
	UClass* Z_Construct_UClass_AScriptingBasicGameMode_NoRegister()
	{
		return AScriptingBasicGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AScriptingBasicGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AScriptingBasicGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ScriptingBasic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScriptingBasicGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ScriptingBasicGameMode.h" },
		{ "ModuleRelativePath", "ScriptingBasicGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AScriptingBasicGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AScriptingBasicGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AScriptingBasicGameMode_Statics::ClassParams = {
		&AScriptingBasicGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_AScriptingBasicGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AScriptingBasicGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AScriptingBasicGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AScriptingBasicGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AScriptingBasicGameMode, 159728161);
	template<> SCRIPTINGBASIC_API UClass* StaticClass<AScriptingBasicGameMode>()
	{
		return AScriptingBasicGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AScriptingBasicGameMode(Z_Construct_UClass_AScriptingBasicGameMode, &AScriptingBasicGameMode::StaticClass, TEXT("/Script/ScriptingBasic"), TEXT("AScriptingBasicGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AScriptingBasicGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
