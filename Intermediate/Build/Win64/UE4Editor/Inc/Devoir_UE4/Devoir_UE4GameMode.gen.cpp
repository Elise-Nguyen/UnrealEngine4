// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Devoir_UE4/Devoir_UE4GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDevoir_UE4GameMode() {}
// Cross Module References
	DEVOIR_UE4_API UClass* Z_Construct_UClass_ADevoir_UE4GameMode_NoRegister();
	DEVOIR_UE4_API UClass* Z_Construct_UClass_ADevoir_UE4GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Devoir_UE4();
// End Cross Module References
	void ADevoir_UE4GameMode::StaticRegisterNativesADevoir_UE4GameMode()
	{
	}
	UClass* Z_Construct_UClass_ADevoir_UE4GameMode_NoRegister()
	{
		return ADevoir_UE4GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ADevoir_UE4GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADevoir_UE4GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Devoir_UE4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADevoir_UE4GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Devoir_UE4GameMode.h" },
		{ "ModuleRelativePath", "Devoir_UE4GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADevoir_UE4GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADevoir_UE4GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADevoir_UE4GameMode_Statics::ClassParams = {
		&ADevoir_UE4GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADevoir_UE4GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADevoir_UE4GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADevoir_UE4GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADevoir_UE4GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADevoir_UE4GameMode, 3575765572);
	template<> DEVOIR_UE4_API UClass* StaticClass<ADevoir_UE4GameMode>()
	{
		return ADevoir_UE4GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADevoir_UE4GameMode(Z_Construct_UClass_ADevoir_UE4GameMode, &ADevoir_UE4GameMode::StaticClass, TEXT("/Script/Devoir_UE4"), TEXT("ADevoir_UE4GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADevoir_UE4GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
