// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FACADE_ES/FA_DIFICULT.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFA_DIFICULT() {}
// Cross Module References
	FACADE_ES_API UClass* Z_Construct_UClass_AFA_DIFICULT_NoRegister();
	FACADE_ES_API UClass* Z_Construct_UClass_AFA_DIFICULT();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FACADE_ES();
// End Cross Module References
	void AFA_DIFICULT::StaticRegisterNativesAFA_DIFICULT()
	{
	}
	UClass* Z_Construct_UClass_AFA_DIFICULT_NoRegister()
	{
		return AFA_DIFICULT::StaticClass();
	}
	struct Z_Construct_UClass_AFA_DIFICULT_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFA_DIFICULT_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FACADE_ES,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFA_DIFICULT_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FA_DIFICULT.h" },
		{ "ModuleRelativePath", "FA_DIFICULT.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFA_DIFICULT_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFA_DIFICULT>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFA_DIFICULT_Statics::ClassParams = {
		&AFA_DIFICULT::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFA_DIFICULT_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFA_DIFICULT_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFA_DIFICULT()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFA_DIFICULT_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFA_DIFICULT, 253845979);
	template<> FACADE_ES_API UClass* StaticClass<AFA_DIFICULT>()
	{
		return AFA_DIFICULT::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFA_DIFICULT(Z_Construct_UClass_AFA_DIFICULT, &AFA_DIFICULT::StaticClass, TEXT("/Script/FACADE_ES"), TEXT("AFA_DIFICULT"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFA_DIFICULT);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
