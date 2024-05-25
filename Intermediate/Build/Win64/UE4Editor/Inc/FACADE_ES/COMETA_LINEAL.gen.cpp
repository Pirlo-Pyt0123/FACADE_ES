// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FACADE_ES/COMETA_LINEAL.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCOMETA_LINEAL() {}
// Cross Module References
	FACADE_ES_API UClass* Z_Construct_UClass_ACOMETA_LINEAL_NoRegister();
	FACADE_ES_API UClass* Z_Construct_UClass_ACOMETA_LINEAL();
	FACADE_ES_API UClass* Z_Construct_UClass_AGENERAL_OBSTACLE();
	UPackage* Z_Construct_UPackage__Script_FACADE_ES();
// End Cross Module References
	void ACOMETA_LINEAL::StaticRegisterNativesACOMETA_LINEAL()
	{
	}
	UClass* Z_Construct_UClass_ACOMETA_LINEAL_NoRegister()
	{
		return ACOMETA_LINEAL::StaticClass();
	}
	struct Z_Construct_UClass_ACOMETA_LINEAL_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACOMETA_LINEAL_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGENERAL_OBSTACLE,
		(UObject* (*)())Z_Construct_UPackage__Script_FACADE_ES,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACOMETA_LINEAL_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "COMETA_LINEAL.h" },
		{ "ModuleRelativePath", "COMETA_LINEAL.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACOMETA_LINEAL_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACOMETA_LINEAL>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACOMETA_LINEAL_Statics::ClassParams = {
		&ACOMETA_LINEAL::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACOMETA_LINEAL_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACOMETA_LINEAL_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACOMETA_LINEAL()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACOMETA_LINEAL_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACOMETA_LINEAL, 4092710358);
	template<> FACADE_ES_API UClass* StaticClass<ACOMETA_LINEAL>()
	{
		return ACOMETA_LINEAL::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACOMETA_LINEAL(Z_Construct_UClass_ACOMETA_LINEAL, &ACOMETA_LINEAL::StaticClass, TEXT("/Script/FACADE_ES"), TEXT("ACOMETA_LINEAL"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACOMETA_LINEAL);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
