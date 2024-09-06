// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeneticTrainerBPL/Public/GeneticTrainerBPLBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeneticTrainerBPLBPLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GENETICTRAINERBPL_API UClass* Z_Construct_UClass_UGeneticTrainerBPLBPLibrary();
GENETICTRAINERBPL_API UClass* Z_Construct_UClass_UGeneticTrainerBPLBPLibrary_NoRegister();
GENETICTRAINERBPL_API UScriptStruct* Z_Construct_UScriptStruct_FFloatingPointGenome();
UPackage* Z_Construct_UPackage__Script_GeneticTrainerBPL();
// End Cross Module References

// Begin ScriptStruct FFloatingPointGenome
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FloatingPointGenome;
class UScriptStruct* FFloatingPointGenome::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FloatingPointGenome.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FloatingPointGenome.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFloatingPointGenome, (UObject*)Z_Construct_UPackage__Script_GeneticTrainerBPL(), TEXT("FloatingPointGenome"));
	}
	return Z_Registration_Info_UScriptStruct_FloatingPointGenome.OuterSingleton;
}
template<> GENETICTRAINERBPL_API UScriptStruct* StaticStruct<FFloatingPointGenome>()
{
	return FFloatingPointGenome::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFloatingPointGenome_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
#endif
		{ "ModuleRelativePath", "Public/GeneticTrainerBPLBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_genes_MetaData[] = {
		{ "Category", "Genetic Algorithm" },
		{ "ModuleRelativePath", "Public/GeneticTrainerBPLBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_genes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_genes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFloatingPointGenome>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFloatingPointGenome_Statics::NewProp_genes_Inner = { "genes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFloatingPointGenome_Statics::NewProp_genes = { "genes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloatingPointGenome, genes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_genes_MetaData), NewProp_genes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFloatingPointGenome_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatingPointGenome_Statics::NewProp_genes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatingPointGenome_Statics::NewProp_genes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatingPointGenome_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFloatingPointGenome_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeneticTrainerBPL,
	nullptr,
	&NewStructOps,
	"FloatingPointGenome",
	Z_Construct_UScriptStruct_FFloatingPointGenome_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatingPointGenome_Statics::PropPointers),
	sizeof(FFloatingPointGenome),
	alignof(FFloatingPointGenome),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatingPointGenome_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFloatingPointGenome_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFloatingPointGenome()
{
	if (!Z_Registration_Info_UScriptStruct_FloatingPointGenome.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FloatingPointGenome.InnerSingleton, Z_Construct_UScriptStruct_FFloatingPointGenome_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FloatingPointGenome.InnerSingleton;
}
// End ScriptStruct FFloatingPointGenome

// Begin Class UGeneticTrainerBPLBPLibrary Function MakeNextGeneration
struct Z_Construct_UFunction_UGeneticTrainerBPLBPLibrary_MakeNextGeneration_Statics
{
	struct GeneticTrainerBPLBPLibrary_eventMakeNextGeneration_Parms
	{
		TArray<FFloatingPointGenome> currentGeneration;
		float mutationRate;
		TArray<FFloatingPointGenome> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GeneticTrainer" },
		{ "CPP_Default_mutationRate", "0.700000" },
		{ "DisplayName", "Create a new generation of genomes" },
		{ "Keywords", "GeneticTrainerBPL genetic generation" },
		{ "ModuleRelativePath", "Public/GeneticTrainerBPLBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_currentGeneration_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_currentGeneration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_mutationRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeneticTrainerBPLBPLibrary_MakeNextGeneration_Statics::NewProp_currentGeneration_Inner = { "currentGeneration", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFloatingPointGenome, METADATA_PARAMS(0, nullptr) }; // 2277765036
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeneticTrainerBPLBPLibrary_MakeNextGeneration_Statics::NewProp_currentGeneration = { "currentGeneration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeneticTrainerBPLBPLibrary_eventMakeNextGeneration_Parms, currentGeneration), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2277765036
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeneticTrainerBPLBPLibrary_MakeNextGeneration_Statics::NewProp_mutationRate = { "mutationRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeneticTrainerBPLBPLibrary_eventMakeNextGeneration_Parms, mutationRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeneticTrainerBPLBPLibrary_MakeNextGeneration_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFloatingPointGenome, METADATA_PARAMS(0, nullptr) }; // 2277765036
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeneticTrainerBPLBPLibrary_MakeNextGeneration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeneticTrainerBPLBPLibrary_eventMakeNextGeneration_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2277765036
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeneticTrainerBPLBPLibrary_MakeNextGeneration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneticTrainerBPLBPLibrary_MakeNextGeneration_Statics::NewProp_currentGeneration_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneticTrainerBPLBPLibrary_MakeNextGeneration_Statics::NewProp_currentGeneration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneticTrainerBPLBPLibrary_MakeNextGeneration_Statics::NewProp_mutationRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneticTrainerBPLBPLibrary_MakeNextGeneration_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneticTrainerBPLBPLibrary_MakeNextGeneration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneticTrainerBPLBPLibrary_MakeNextGeneration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeneticTrainerBPLBPLibrary_MakeNextGeneration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeneticTrainerBPLBPLibrary, nullptr, "MakeNextGeneration", nullptr, nullptr, Z_Construct_UFunction_UGeneticTrainerBPLBPLibrary_MakeNextGeneration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneticTrainerBPLBPLibrary_MakeNextGeneration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeneticTrainerBPLBPLibrary_MakeNextGeneration_Statics::GeneticTrainerBPLBPLibrary_eventMakeNextGeneration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneticTrainerBPLBPLibrary_MakeNextGeneration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeneticTrainerBPLBPLibrary_MakeNextGeneration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeneticTrainerBPLBPLibrary_MakeNextGeneration_Statics::GeneticTrainerBPLBPLibrary_eventMakeNextGeneration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeneticTrainerBPLBPLibrary_MakeNextGeneration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeneticTrainerBPLBPLibrary_MakeNextGeneration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeneticTrainerBPLBPLibrary::execMakeNextGeneration)
{
	P_GET_TARRAY(FFloatingPointGenome,Z_Param_currentGeneration);
	P_GET_PROPERTY(FFloatProperty,Z_Param_mutationRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FFloatingPointGenome>*)Z_Param__Result=UGeneticTrainerBPLBPLibrary::MakeNextGeneration(Z_Param_currentGeneration,Z_Param_mutationRate);
	P_NATIVE_END;
}
// End Class UGeneticTrainerBPLBPLibrary Function MakeNextGeneration

// Begin Class UGeneticTrainerBPLBPLibrary
void UGeneticTrainerBPLBPLibrary::StaticRegisterNativesUGeneticTrainerBPLBPLibrary()
{
	UClass* Class = UGeneticTrainerBPLBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MakeNextGeneration", &UGeneticTrainerBPLBPLibrary::execMakeNextGeneration },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeneticTrainerBPLBPLibrary);
UClass* Z_Construct_UClass_UGeneticTrainerBPLBPLibrary_NoRegister()
{
	return UGeneticTrainerBPLBPLibrary::StaticClass();
}
struct Z_Construct_UClass_UGeneticTrainerBPLBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GeneticTrainerBPLBPLibrary.h" },
		{ "ModuleRelativePath", "Public/GeneticTrainerBPLBPLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeneticTrainerBPLBPLibrary_MakeNextGeneration, "MakeNextGeneration" }, // 2416866618
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeneticTrainerBPLBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGeneticTrainerBPLBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_GeneticTrainerBPL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeneticTrainerBPLBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeneticTrainerBPLBPLibrary_Statics::ClassParams = {
	&UGeneticTrainerBPLBPLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeneticTrainerBPLBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UGeneticTrainerBPLBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGeneticTrainerBPLBPLibrary()
{
	if (!Z_Registration_Info_UClass_UGeneticTrainerBPLBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeneticTrainerBPLBPLibrary.OuterSingleton, Z_Construct_UClass_UGeneticTrainerBPLBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGeneticTrainerBPLBPLibrary.OuterSingleton;
}
template<> GENETICTRAINERBPL_API UClass* StaticClass<UGeneticTrainerBPLBPLibrary>()
{
	return UGeneticTrainerBPLBPLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGeneticTrainerBPLBPLibrary);
UGeneticTrainerBPLBPLibrary::~UGeneticTrainerBPLBPLibrary() {}
// End Class UGeneticTrainerBPLBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_UE5_GeneticTrainer_Plugins_GeneticTrainerBPL_Source_GeneticTrainerBPL_Public_GeneticTrainerBPLBPLibrary_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFloatingPointGenome::StaticStruct, Z_Construct_UScriptStruct_FFloatingPointGenome_Statics::NewStructOps, TEXT("FloatingPointGenome"), &Z_Registration_Info_UScriptStruct_FloatingPointGenome, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFloatingPointGenome), 2277765036U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGeneticTrainerBPLBPLibrary, UGeneticTrainerBPLBPLibrary::StaticClass, TEXT("UGeneticTrainerBPLBPLibrary"), &Z_Registration_Info_UClass_UGeneticTrainerBPLBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeneticTrainerBPLBPLibrary), 2663748696U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_UE5_GeneticTrainer_Plugins_GeneticTrainerBPL_Source_GeneticTrainerBPL_Public_GeneticTrainerBPLBPLibrary_h_3610918059(TEXT("/Script/GeneticTrainerBPL"),
	Z_CompiledInDeferFile_FID_projects_UE5_GeneticTrainer_Plugins_GeneticTrainerBPL_Source_GeneticTrainerBPL_Public_GeneticTrainerBPLBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_UE5_GeneticTrainer_Plugins_GeneticTrainerBPL_Source_GeneticTrainerBPL_Public_GeneticTrainerBPLBPLibrary_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_projects_UE5_GeneticTrainer_Plugins_GeneticTrainerBPL_Source_GeneticTrainerBPL_Public_GeneticTrainerBPLBPLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_UE5_GeneticTrainer_Plugins_GeneticTrainerBPL_Source_GeneticTrainerBPL_Public_GeneticTrainerBPLBPLibrary_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
