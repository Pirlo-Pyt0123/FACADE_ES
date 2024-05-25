// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FACADE_ES/FA_LEVEL_DIFICULT_HARD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFA_LEVEL_DIFICULT_HARD() {}
// Cross Module References
	FACADE_ES_API UClass* Z_Construct_UClass_AFA_LEVEL_DIFICULT_HARD_NoRegister();
	FACADE_ES_API UClass* Z_Construct_UClass_AFA_LEVEL_DIFICULT_HARD();
	FACADE_ES_API UClass* Z_Construct_UClass_AFA_LEVEL_DIFICULT();
	UPackage* Z_Construct_UPackage__Script_FACADE_ES();
// End Cross Module References
	void AFA_LEVEL_DIFICULT_HARD::StaticRegisterNativesAFA_LEVEL_DIFICULT_HARD()
	{
	}
	UClass* Z_Construct_UClass_AFA_LEVEL_DIFICULT_HARD_NoRegister()
	{
		return AFA_LEVEL_DIFICULT_HARD::StaticClass();
	}
	struct Z_Construct_UClass_AFA_LEVEL_DIFICULT_HARD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFA_LEVEL_DIFICULT_HARD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFA_LEVEL_DIFICULT,
		(UObject* (*)())Z_Construct_UPackage__Script_FACADE_ES,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFA_LEVEL_DIFICULT_HARD_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FA_LEVEL_DIFICULT_HARD.h" },
		{ "ModuleRelativePath", "FA_LEVEL_DIFICULT_HARD.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFA_LEVEL_DIFICULT_HARD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFA_LEVEL_DIFICULT_HARD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFA_LEVEL_DIFICULT_HARD_Statics::ClassParams = {
		&AFA_LEVEL_DIFICULT_HARD::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFA_LEVEL_DIFICULT_HARD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFA_LEVEL_DIFICULT_HARD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFA_LEVEL_DIFICULT_HARD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFA_LEVEL_DIFICULT_HARD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFA_LEVEL_DIFICULT_HARD, 2010543228);
	template<> FACADE_ES_API UClass* StaticClass<AFA_LEVEL_DIFICULT_HARD>()
	{
		return AFA_LEVEL_DIFICULT_HARD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFA_LEVEL_DIFICULT_HARD(Z_Construct_UClass_AFA_LEVEL_DIFICULT_HARD, &AFA_LEVEL_DIFICULT_HARD::StaticClass, TEXT("/Script/FACADE_ES"), TEXT("AFA_LEVEL_DIFICULT_HARD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFA_LEVEL_DIFICULT_HARD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
