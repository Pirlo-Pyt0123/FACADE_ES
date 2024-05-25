// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FACADE_ES/SATELITE_ABANDONADO.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSATELITE_ABANDONADO() {}
// Cross Module References
	FACADE_ES_API UClass* Z_Construct_UClass_ASATELITE_ABANDONADO_NoRegister();
	FACADE_ES_API UClass* Z_Construct_UClass_ASATELITE_ABANDONADO();
	FACADE_ES_API UClass* Z_Construct_UClass_AGENERAL_OBSTACLE();
	UPackage* Z_Construct_UPackage__Script_FACADE_ES();
// End Cross Module References
	void ASATELITE_ABANDONADO::StaticRegisterNativesASATELITE_ABANDONADO()
	{
	}
	UClass* Z_Construct_UClass_ASATELITE_ABANDONADO_NoRegister()
	{
		return ASATELITE_ABANDONADO::StaticClass();
	}
	struct Z_Construct_UClass_ASATELITE_ABANDONADO_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASATELITE_ABANDONADO_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGENERAL_OBSTACLE,
		(UObject* (*)())Z_Construct_UPackage__Script_FACADE_ES,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASATELITE_ABANDONADO_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SATELITE_ABANDONADO.h" },
		{ "ModuleRelativePath", "SATELITE_ABANDONADO.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASATELITE_ABANDONADO_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASATELITE_ABANDONADO>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASATELITE_ABANDONADO_Statics::ClassParams = {
		&ASATELITE_ABANDONADO::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASATELITE_ABANDONADO_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASATELITE_ABANDONADO_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASATELITE_ABANDONADO()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASATELITE_ABANDONADO_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASATELITE_ABANDONADO, 2347943918);
	template<> FACADE_ES_API UClass* StaticClass<ASATELITE_ABANDONADO>()
	{
		return ASATELITE_ABANDONADO::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASATELITE_ABANDONADO(Z_Construct_UClass_ASATELITE_ABANDONADO, &ASATELITE_ABANDONADO::StaticClass, TEXT("/Script/FACADE_ES"), TEXT("ASATELITE_ABANDONADO"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASATELITE_ABANDONADO);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
