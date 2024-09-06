// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeneticTrainerBPLBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFloatingPointGenome;
#ifdef GENETICTRAINERBPL_GeneticTrainerBPLBPLibrary_generated_h
#error "GeneticTrainerBPLBPLibrary.generated.h already included, missing '#pragma once' in GeneticTrainerBPLBPLibrary.h"
#endif
#define GENETICTRAINERBPL_GeneticTrainerBPLBPLibrary_generated_h

#define FID_projects_UE5_GeneticTrainer_Plugins_GeneticTrainerBPL_Source_GeneticTrainerBPL_Public_GeneticTrainerBPLBPLibrary_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFloatingPointGenome_Statics; \
	GENETICTRAINERBPL_API static class UScriptStruct* StaticStruct();


template<> GENETICTRAINERBPL_API UScriptStruct* StaticStruct<struct FFloatingPointGenome>();

#define FID_projects_UE5_GeneticTrainer_Plugins_GeneticTrainerBPL_Source_GeneticTrainerBPL_Public_GeneticTrainerBPLBPLibrary_h_39_RPC_WRAPPERS \
	DECLARE_FUNCTION(execMakeNextGeneration);


#define FID_projects_UE5_GeneticTrainer_Plugins_GeneticTrainerBPL_Source_GeneticTrainerBPL_Public_GeneticTrainerBPLBPLibrary_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUGeneticTrainerBPLBPLibrary(); \
	friend struct Z_Construct_UClass_UGeneticTrainerBPLBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UGeneticTrainerBPLBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeneticTrainerBPL"), NO_API) \
	DECLARE_SERIALIZER(UGeneticTrainerBPLBPLibrary)


#define FID_projects_UE5_GeneticTrainer_Plugins_GeneticTrainerBPL_Source_GeneticTrainerBPL_Public_GeneticTrainerBPLBPLibrary_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeneticTrainerBPLBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeneticTrainerBPLBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeneticTrainerBPLBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeneticTrainerBPLBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGeneticTrainerBPLBPLibrary(UGeneticTrainerBPLBPLibrary&&); \
	UGeneticTrainerBPLBPLibrary(const UGeneticTrainerBPLBPLibrary&); \
public: \
	NO_API virtual ~UGeneticTrainerBPLBPLibrary();


#define FID_projects_UE5_GeneticTrainer_Plugins_GeneticTrainerBPL_Source_GeneticTrainerBPL_Public_GeneticTrainerBPLBPLibrary_h_36_PROLOG
#define FID_projects_UE5_GeneticTrainer_Plugins_GeneticTrainerBPL_Source_GeneticTrainerBPL_Public_GeneticTrainerBPLBPLibrary_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_UE5_GeneticTrainer_Plugins_GeneticTrainerBPL_Source_GeneticTrainerBPL_Public_GeneticTrainerBPLBPLibrary_h_39_RPC_WRAPPERS \
	FID_projects_UE5_GeneticTrainer_Plugins_GeneticTrainerBPL_Source_GeneticTrainerBPL_Public_GeneticTrainerBPLBPLibrary_h_39_INCLASS \
	FID_projects_UE5_GeneticTrainer_Plugins_GeneticTrainerBPL_Source_GeneticTrainerBPL_Public_GeneticTrainerBPLBPLibrary_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GENETICTRAINERBPL_API UClass* StaticClass<class UGeneticTrainerBPLBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_UE5_GeneticTrainer_Plugins_GeneticTrainerBPL_Source_GeneticTrainerBPL_Public_GeneticTrainerBPLBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
