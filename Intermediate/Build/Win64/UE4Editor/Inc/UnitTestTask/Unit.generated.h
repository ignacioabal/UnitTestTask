// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundWave;
#ifdef UNITTESTTASK_Unit_generated_h
#error "Unit.generated.h already included, missing '#pragma once' in Unit.h"
#endif
#define UNITTESTTASK_Unit_generated_h

#define UnitTestTask_Source_UnitTestTask_Unit_h_15_SPARSE_DATA
#define UnitTestTask_Source_UnitTestTask_Unit_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnUnitAction) \
	{ \
		P_GET_OBJECT(USoundWave,Z_Param_UnitVoiceLine); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnUnitAction(Z_Param_UnitVoiceLine); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnUnitSelect) \
	{ \
		P_GET_OBJECT(USoundWave,Z_Param_UnitVoiceLine); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnUnitSelect(Z_Param_UnitVoiceLine); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomVoiceLine) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USoundWave**)Z_Param__Result=P_THIS->GetRandomVoiceLine(); \
		P_NATIVE_END; \
	}


#define UnitTestTask_Source_UnitTestTask_Unit_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnUnitAction) \
	{ \
		P_GET_OBJECT(USoundWave,Z_Param_UnitVoiceLine); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnUnitAction(Z_Param_UnitVoiceLine); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnUnitSelect) \
	{ \
		P_GET_OBJECT(USoundWave,Z_Param_UnitVoiceLine); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnUnitSelect(Z_Param_UnitVoiceLine); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomVoiceLine) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USoundWave**)Z_Param__Result=P_THIS->GetRandomVoiceLine(); \
		P_NATIVE_END; \
	}


#define UnitTestTask_Source_UnitTestTask_Unit_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUnit(); \
	friend struct Z_Construct_UClass_AUnit_Statics; \
public: \
	DECLARE_CLASS(AUnit, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnitTestTask"), NO_API) \
	DECLARE_SERIALIZER(AUnit)


#define UnitTestTask_Source_UnitTestTask_Unit_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAUnit(); \
	friend struct Z_Construct_UClass_AUnit_Statics; \
public: \
	DECLARE_CLASS(AUnit, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnitTestTask"), NO_API) \
	DECLARE_SERIALIZER(AUnit)


#define UnitTestTask_Source_UnitTestTask_Unit_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUnit(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUnit) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnit); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnit); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnit(AUnit&&); \
	NO_API AUnit(const AUnit&); \
public:


#define UnitTestTask_Source_UnitTestTask_Unit_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnit(AUnit&&); \
	NO_API AUnit(const AUnit&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnit); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnit); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUnit)


#define UnitTestTask_Source_UnitTestTask_Unit_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__UnitVoiceLines() { return STRUCT_OFFSET(AUnit, UnitVoiceLines); } \
	FORCEINLINE static uint32 __PPO__VolumeMultiplier() { return STRUCT_OFFSET(AUnit, VolumeMultiplier); } \
	FORCEINLINE static uint32 __PPO__SoundStartTime() { return STRUCT_OFFSET(AUnit, SoundStartTime); } \
	FORCEINLINE static uint32 __PPO__SoundAttenuation() { return STRUCT_OFFSET(AUnit, SoundAttenuation); } \
	FORCEINLINE static uint32 __PPO__SoundConcurrency() { return STRUCT_OFFSET(AUnit, SoundConcurrency); }


#define UnitTestTask_Source_UnitTestTask_Unit_h_12_PROLOG
#define UnitTestTask_Source_UnitTestTask_Unit_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnitTestTask_Source_UnitTestTask_Unit_h_15_PRIVATE_PROPERTY_OFFSET \
	UnitTestTask_Source_UnitTestTask_Unit_h_15_SPARSE_DATA \
	UnitTestTask_Source_UnitTestTask_Unit_h_15_RPC_WRAPPERS \
	UnitTestTask_Source_UnitTestTask_Unit_h_15_INCLASS \
	UnitTestTask_Source_UnitTestTask_Unit_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnitTestTask_Source_UnitTestTask_Unit_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnitTestTask_Source_UnitTestTask_Unit_h_15_PRIVATE_PROPERTY_OFFSET \
	UnitTestTask_Source_UnitTestTask_Unit_h_15_SPARSE_DATA \
	UnitTestTask_Source_UnitTestTask_Unit_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	UnitTestTask_Source_UnitTestTask_Unit_h_15_INCLASS_NO_PURE_DECLS \
	UnitTestTask_Source_UnitTestTask_Unit_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNITTESTTASK_API UClass* StaticClass<class AUnit>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnitTestTask_Source_UnitTestTask_Unit_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
