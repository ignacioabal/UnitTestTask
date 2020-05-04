// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnitTestTask/Unit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnit() {}
// Cross Module References
	UNITTESTTASK_API UClass* Z_Construct_UClass_AUnit_NoRegister();
	UNITTESTTASK_API UClass* Z_Construct_UClass_AUnit();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnitTestTask();
	UNITTESTTASK_API UFunction* Z_Construct_UFunction_AUnit_GetRandomVoiceLine();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	UNITTESTTASK_API UFunction* Z_Construct_UFunction_AUnit_OnUnitAction();
	UNITTESTTASK_API UFunction* Z_Construct_UFunction_AUnit_OnUnitSelect();
	ENGINE_API UClass* Z_Construct_UClass_USoundConcurrency_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
// End Cross Module References
	void AUnit::StaticRegisterNativesAUnit()
	{
		UClass* Class = AUnit::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRandomVoiceLine", &AUnit::execGetRandomVoiceLine },
			{ "OnUnitAction", &AUnit::execOnUnitAction },
			{ "OnUnitSelect", &AUnit::execOnUnitSelect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUnit_GetRandomVoiceLine_Statics
	{
		struct Unit_eventGetRandomVoiceLine_Parms
		{
			USoundWave* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUnit_GetRandomVoiceLine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Unit_eventGetRandomVoiceLine_Parms, ReturnValue), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnit_GetRandomVoiceLine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnit_GetRandomVoiceLine_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnit_GetRandomVoiceLine_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Unit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnit_GetRandomVoiceLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnit, nullptr, "GetRandomVoiceLine", nullptr, nullptr, sizeof(Unit_eventGetRandomVoiceLine_Parms), Z_Construct_UFunction_AUnit_GetRandomVoiceLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnit_GetRandomVoiceLine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnit_GetRandomVoiceLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnit_GetRandomVoiceLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnit_GetRandomVoiceLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUnit_GetRandomVoiceLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnit_OnUnitAction_Statics
	{
		struct Unit_eventOnUnitAction_Parms
		{
			USoundWave* UnitVoiceLine;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnitVoiceLine;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUnit_OnUnitAction_Statics::NewProp_UnitVoiceLine = { "UnitVoiceLine", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Unit_eventOnUnitAction_Parms, UnitVoiceLine), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnit_OnUnitAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnit_OnUnitAction_Statics::NewProp_UnitVoiceLine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnit_OnUnitAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Unit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnit_OnUnitAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnit, nullptr, "OnUnitAction", nullptr, nullptr, sizeof(Unit_eventOnUnitAction_Parms), Z_Construct_UFunction_AUnit_OnUnitAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnit_OnUnitAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnit_OnUnitAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnit_OnUnitAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnit_OnUnitAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUnit_OnUnitAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnit_OnUnitSelect_Statics
	{
		struct Unit_eventOnUnitSelect_Parms
		{
			USoundWave* UnitVoiceLine;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnitVoiceLine;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUnit_OnUnitSelect_Statics::NewProp_UnitVoiceLine = { "UnitVoiceLine", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Unit_eventOnUnitSelect_Parms, UnitVoiceLine), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnit_OnUnitSelect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnit_OnUnitSelect_Statics::NewProp_UnitVoiceLine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnit_OnUnitSelect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Unit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnit_OnUnitSelect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnit, nullptr, "OnUnitSelect", nullptr, nullptr, sizeof(Unit_eventOnUnitSelect_Parms), Z_Construct_UFunction_AUnit_OnUnitSelect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnit_OnUnitSelect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnit_OnUnitSelect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnit_OnUnitSelect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnit_OnUnitSelect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUnit_OnUnitSelect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AUnit_NoRegister()
	{
		return AUnit::StaticClass();
	}
	struct Z_Construct_UClass_AUnit_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundConcurrency_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundConcurrency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundAttenuation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundAttenuation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SoundStartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnitVoiceLines_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UnitVoiceLines;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnitVoiceLines_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnitTestTask,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUnit_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUnit_GetRandomVoiceLine, "GetRandomVoiceLine" }, // 2263694901
		{ &Z_Construct_UFunction_AUnit_OnUnitAction, "OnUnitAction" }, // 1118017720
		{ &Z_Construct_UFunction_AUnit_OnUnitSelect, "OnUnitSelect" }, // 4193794512
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnit_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Unit.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Unit.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnit_Statics::NewProp_SoundConcurrency_MetaData[] = {
		{ "Category", "Sound Settings" },
		{ "ModuleRelativePath", "Unit.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnit_Statics::NewProp_SoundConcurrency = { "SoundConcurrency", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnit, SoundConcurrency), Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUnit_Statics::NewProp_SoundConcurrency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnit_Statics::NewProp_SoundConcurrency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnit_Statics::NewProp_SoundAttenuation_MetaData[] = {
		{ "Category", "Sound Settings" },
		{ "ModuleRelativePath", "Unit.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnit_Statics::NewProp_SoundAttenuation = { "SoundAttenuation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnit, SoundAttenuation), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUnit_Statics::NewProp_SoundAttenuation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnit_Statics::NewProp_SoundAttenuation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnit_Statics::NewProp_SoundStartTime_MetaData[] = {
		{ "Category", "Sound Settings" },
		{ "ModuleRelativePath", "Unit.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUnit_Statics::NewProp_SoundStartTime = { "SoundStartTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnit, SoundStartTime), METADATA_PARAMS(Z_Construct_UClass_AUnit_Statics::NewProp_SoundStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnit_Statics::NewProp_SoundStartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnit_Statics::NewProp_VolumeMultiplier_MetaData[] = {
		{ "Category", "Sound Settings" },
		{ "ModuleRelativePath", "Unit.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUnit_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnit, VolumeMultiplier), METADATA_PARAMS(Z_Construct_UClass_AUnit_Statics::NewProp_VolumeMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnit_Statics::NewProp_VolumeMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnit_Statics::NewProp_UnitVoiceLines_MetaData[] = {
		{ "Category", "Unit" },
		{ "ModuleRelativePath", "Unit.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AUnit_Statics::NewProp_UnitVoiceLines = { "UnitVoiceLines", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnit, UnitVoiceLines), METADATA_PARAMS(Z_Construct_UClass_AUnit_Statics::NewProp_UnitVoiceLines_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnit_Statics::NewProp_UnitVoiceLines_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnit_Statics::NewProp_UnitVoiceLines_Inner = { "UnitVoiceLines", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUnit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnit_Statics::NewProp_SoundConcurrency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnit_Statics::NewProp_SoundAttenuation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnit_Statics::NewProp_SoundStartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnit_Statics::NewProp_VolumeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnit_Statics::NewProp_UnitVoiceLines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnit_Statics::NewProp_UnitVoiceLines_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnit>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnit_Statics::ClassParams = {
		&AUnit::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AUnit_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AUnit_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUnit_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnit()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnit_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnit, 3629172040);
	template<> UNITTESTTASK_API UClass* StaticClass<AUnit>()
	{
		return AUnit::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnit(Z_Construct_UClass_AUnit, &AUnit::StaticClass, TEXT("/Script/UnitTestTask"), TEXT("AUnit"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnit);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
