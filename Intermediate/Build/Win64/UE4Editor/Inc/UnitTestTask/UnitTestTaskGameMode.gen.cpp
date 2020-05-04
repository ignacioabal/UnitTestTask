// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnitTestTask/UnitTestTaskGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnitTestTaskGameMode() {}
// Cross Module References
	UNITTESTTASK_API UClass* Z_Construct_UClass_AUnitTestTaskGameMode_NoRegister();
	UNITTESTTASK_API UClass* Z_Construct_UClass_AUnitTestTaskGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UnitTestTask();
// End Cross Module References
	void AUnitTestTaskGameMode::StaticRegisterNativesAUnitTestTaskGameMode()
	{
	}
	UClass* Z_Construct_UClass_AUnitTestTaskGameMode_NoRegister()
	{
		return AUnitTestTaskGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AUnitTestTaskGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnitTestTaskGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnitTestTask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnitTestTaskGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UnitTestTaskGameMode.h" },
		{ "ModuleRelativePath", "UnitTestTaskGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnitTestTaskGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnitTestTaskGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnitTestTaskGameMode_Statics::ClassParams = {
		&AUnitTestTaskGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AUnitTestTaskGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnitTestTaskGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnitTestTaskGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnitTestTaskGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnitTestTaskGameMode, 3825006025);
	template<> UNITTESTTASK_API UClass* StaticClass<AUnitTestTaskGameMode>()
	{
		return AUnitTestTaskGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnitTestTaskGameMode(Z_Construct_UClass_AUnitTestTaskGameMode, &AUnitTestTaskGameMode::StaticClass, TEXT("/Script/UnitTestTask"), TEXT("AUnitTestTaskGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnitTestTaskGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
