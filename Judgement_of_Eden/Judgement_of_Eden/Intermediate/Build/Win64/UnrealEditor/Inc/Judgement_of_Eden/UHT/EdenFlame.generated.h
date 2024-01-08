// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EdenFlame.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef JUDGEMENT_OF_EDEN_EdenFlame_generated_h
#error "EdenFlame.generated.h already included, missing '#pragma once' in EdenFlame.h"
#endif
#define JUDGEMENT_OF_EDEN_EdenFlame_generated_h

#define FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_EdenFlame_h_14_SPARSE_DATA
#define FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_EdenFlame_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyFireDamage); \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_EdenFlame_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyFireDamage); \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_EdenFlame_h_14_ACCESSORS
#define FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_EdenFlame_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEdenFlame(); \
	friend struct Z_Construct_UClass_AEdenFlame_Statics; \
public: \
	DECLARE_CLASS(AEdenFlame, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Judgement_of_Eden"), NO_API) \
	DECLARE_SERIALIZER(AEdenFlame)


#define FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_EdenFlame_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAEdenFlame(); \
	friend struct Z_Construct_UClass_AEdenFlame_Statics; \
public: \
	DECLARE_CLASS(AEdenFlame, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Judgement_of_Eden"), NO_API) \
	DECLARE_SERIALIZER(AEdenFlame)


#define FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_EdenFlame_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEdenFlame(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEdenFlame) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEdenFlame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEdenFlame); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEdenFlame(AEdenFlame&&); \
	NO_API AEdenFlame(const AEdenFlame&); \
public: \
	NO_API virtual ~AEdenFlame();


#define FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_EdenFlame_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEdenFlame(AEdenFlame&&); \
	NO_API AEdenFlame(const AEdenFlame&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEdenFlame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEdenFlame); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEdenFlame) \
	NO_API virtual ~AEdenFlame();


#define FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_EdenFlame_h_11_PROLOG
#define FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_EdenFlame_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_EdenFlame_h_14_SPARSE_DATA \
	FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_EdenFlame_h_14_RPC_WRAPPERS \
	FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_EdenFlame_h_14_ACCESSORS \
	FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_EdenFlame_h_14_INCLASS \
	FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_EdenFlame_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_EdenFlame_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_EdenFlame_h_14_SPARSE_DATA \
	FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_EdenFlame_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_EdenFlame_h_14_ACCESSORS \
	FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_EdenFlame_h_14_INCLASS_NO_PURE_DECLS \
	FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_EdenFlame_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JUDGEMENT_OF_EDEN_API UClass* StaticClass<class AEdenFlame>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_EdenFlame_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
