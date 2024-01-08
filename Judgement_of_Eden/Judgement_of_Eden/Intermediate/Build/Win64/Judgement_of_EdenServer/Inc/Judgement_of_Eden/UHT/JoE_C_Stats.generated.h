// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "JoE_C_Stats.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef JUDGEMENT_OF_EDEN_JoE_C_Stats_generated_h
#error "JoE_C_Stats.generated.h already included, missing '#pragma once' in JoE_C_Stats.h"
#endif
#define JUDGEMENT_OF_EDEN_JoE_C_Stats_generated_h

#define FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_JoE_C_Stats_h_9_DELEGATE \
JUDGEMENT_OF_EDEN_API void FOnAttackModifiedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnAttackModifiedEvent, float PreviousAttackStat, float NewAttackStat);


#define FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_JoE_C_Stats_h_10_DELEGATE \
JUDGEMENT_OF_EDEN_API void FOnDefenceModifiedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnDefenceModifiedEvent, float PreviousDefenceStat, float NewDefenceStat);


#define FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_JoE_C_Stats_h_11_DELEGATE \
JUDGEMENT_OF_EDEN_API void FOnSpeedModifiedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnSpeedModifiedEvent, float PreviousSpeedStat, float NewSpeedStat);


#define FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_JoE_C_Stats_h_12_DELEGATE \
JUDGEMENT_OF_EDEN_API void FOnStaminaModifiedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnStaminaModifiedEvent, float PreviousStaminaStat, float NewStaminaStat);


#define FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_JoE_C_Stats_h_13_DELEGATE \
JUDGEMENT_OF_EDEN_API void FOnMagicModifiedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnMagicModifiedEvent, float PreviousMagicStat, float NewMagicStat);


#define FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_JoE_C_Stats_h_19_SPARSE_DATA
#define FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_JoE_C_Stats_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentMagicStat); \
	DECLARE_FUNCTION(execDecreaseMagicStat); \
	DECLARE_FUNCTION(execIncreaseMagicStat); \
	DECLARE_FUNCTION(execGetCurrentStaminaStat); \
	DECLARE_FUNCTION(execDecreaseStaminaStat); \
	DECLARE_FUNCTION(execIncreaseStaminaStat); \
	DECLARE_FUNCTION(execGetCurrentSpeedStat); \
	DECLARE_FUNCTION(execDecreaseSpeedStat); \
	DECLARE_FUNCTION(execIncreaseSpeedStat); \
	DECLARE_FUNCTION(execGetCurrentDefenceStat); \
	DECLARE_FUNCTION(execDecreaseDefenceStat); \
	DECLARE_FUNCTION(execIncreaseDefenceStat); \
	DECLARE_FUNCTION(execGetCurrentAttackStat); \
	DECLARE_FUNCTION(execDecreaseAttackStat); \
	DECLARE_FUNCTION(execIncreaseAttackStat);


#define FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_JoE_C_Stats_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentMagicStat); \
	DECLARE_FUNCTION(execDecreaseMagicStat); \
	DECLARE_FUNCTION(execIncreaseMagicStat); \
	DECLARE_FUNCTION(execGetCurrentStaminaStat); \
	DECLARE_FUNCTION(execDecreaseStaminaStat); \
	DECLARE_FUNCTION(execIncreaseStaminaStat); \
	DECLARE_FUNCTION(execGetCurrentSpeedStat); \
	DECLARE_FUNCTION(execDecreaseSpeedStat); \
	DECLARE_FUNCTION(execIncreaseSpeedStat); \
	DECLARE_FUNCTION(execGetCurrentDefenceStat); \
	DECLARE_FUNCTION(execDecreaseDefenceStat); \
	DECLARE_FUNCTION(execIncreaseDefenceStat); \
	DECLARE_FUNCTION(execGetCurrentAttackStat); \
	DECLARE_FUNCTION(execDecreaseAttackStat); \
	DECLARE_FUNCTION(execIncreaseAttackStat);


#define FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_JoE_C_Stats_h_19_ACCESSORS
#define FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_JoE_C_Stats_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJoE_C_Stats(); \
	friend struct Z_Construct_UClass_UJoE_C_Stats_Statics; \
public: \
	DECLARE_CLASS(UJoE_C_Stats, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Judgement_of_Eden"), NO_API) \
	DECLARE_SERIALIZER(UJoE_C_Stats)


#define FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_JoE_C_Stats_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUJoE_C_Stats(); \
	friend struct Z_Construct_UClass_UJoE_C_Stats_Statics; \
public: \
	DECLARE_CLASS(UJoE_C_Stats, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Judgement_of_Eden"), NO_API) \
	DECLARE_SERIALIZER(UJoE_C_Stats)


#define FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_JoE_C_Stats_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJoE_C_Stats(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJoE_C_Stats) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJoE_C_Stats); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJoE_C_Stats); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJoE_C_Stats(UJoE_C_Stats&&); \
	NO_API UJoE_C_Stats(const UJoE_C_Stats&); \
public: \
	NO_API virtual ~UJoE_C_Stats();


#define FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_JoE_C_Stats_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJoE_C_Stats(UJoE_C_Stats&&); \
	NO_API UJoE_C_Stats(const UJoE_C_Stats&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJoE_C_Stats); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJoE_C_Stats); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UJoE_C_Stats) \
	NO_API virtual ~UJoE_C_Stats();


#define FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_JoE_C_Stats_h_16_PROLOG
#define FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_JoE_C_Stats_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_JoE_C_Stats_h_19_SPARSE_DATA \
	FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_JoE_C_Stats_h_19_RPC_WRAPPERS \
	FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_JoE_C_Stats_h_19_ACCESSORS \
	FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_JoE_C_Stats_h_19_INCLASS \
	FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_JoE_C_Stats_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_JoE_C_Stats_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_JoE_C_Stats_h_19_SPARSE_DATA \
	FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_JoE_C_Stats_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_JoE_C_Stats_h_19_ACCESSORS \
	FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_JoE_C_Stats_h_19_INCLASS_NO_PURE_DECLS \
	FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_JoE_C_Stats_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JUDGEMENT_OF_EDEN_API UClass* StaticClass<class UJoE_C_Stats>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_JoE_C_Stats_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
