// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FACADE_ES/ALIEN.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeALIEN() {}
// Cross Module References
	FACADE_ES_API UClass* Z_Construct_UClass_AALIEN_NoRegister();
	FACADE_ES_API UClass* Z_Construct_UClass_AALIEN();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FACADE_ES();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AALIEN::StaticRegisterNativesAALIEN()
	{
	}
	UClass* Z_Construct_UClass_AALIEN_NoRegister()
	{
		return AALIEN::StaticClass();
	}
	struct Z_Construct_UClass_AALIEN_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fea_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_fea;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AALIEN_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FACADE_ES,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALIEN_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ALIEN.h" },
		{ "ModuleRelativePath", "ALIEN.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALIEN_Statics::NewProp_fea_MetaData[] = {
		{ "Category", "Alien PE" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ALIEN.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AALIEN_Statics::NewProp_fea = { "fea", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AALIEN, fea), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AALIEN_Statics::NewProp_fea_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AALIEN_Statics::NewProp_fea_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AALIEN_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALIEN_Statics::NewProp_fea,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AALIEN_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AALIEN>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AALIEN_Statics::ClassParams = {
		&AALIEN::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AALIEN_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AALIEN_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AALIEN_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AALIEN_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AALIEN()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AALIEN_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AALIEN, 2337424944);
	template<> FACADE_ES_API UClass* StaticClass<AALIEN>()
	{
		return AALIEN::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AALIEN(Z_Construct_UClass_AALIEN, &AALIEN::StaticClass, TEXT("/Script/FACADE_ES"), TEXT("AALIEN"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AALIEN);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
