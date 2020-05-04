// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnitTestTask/UnitTestTaskPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnitTestTaskPlayerController() {}
// Cross Module References
	UNITTESTTASK_API UClass* Z_Construct_UClass_AUnitTestTaskPlayerController_NoRegister();
	UNITTESTTASK_API UClass* Z_Construct_UClass_AUnitTestTaskPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_UnitTestTask();
// End Cross Module References
	void AUnitTestTaskPlayerController::StaticRegisterNativesAUnitTestTaskPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AUnitTestTaskPlayerController_NoRegister()
	{
		return AUnitTestTaskPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AUnitTestTaskPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnitTestTaskPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_UnitTestTask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnitTestTaskPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UnitTestTaskPlayerController.h" },
		{ "ModuleRelativePath", "UnitTestTaskPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnitTestTaskPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnitTestTaskPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnitTestTaskPlayerController_Statics::ClassParams = {
		&AUnitTestTaskPlayerController::StaticClass,
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
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUnitTestTaskPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnitTestTaskPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnitTestTaskPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnitTestTaskPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnitTestTaskPlayerController, 2268240359);
	template<> UNITTESTTASK_API UClass* StaticClass<AUnitTestTaskPlayerController>()
	{
		return AUnitTestTaskPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnitTestTaskPlayerController(Z_Construct_UClass_AUnitTestTaskPlayerController, &AUnitTestTaskPlayerController::StaticClass, TEXT("/Script/UnitTestTask"), TEXT("AUnitTestTaskPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnitTestTaskPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
