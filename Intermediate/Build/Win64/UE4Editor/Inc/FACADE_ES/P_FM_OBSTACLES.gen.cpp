// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FACADE_ES/P_FM_OBSTACLES.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeP_FM_OBSTACLES() {}
// Cross Module References
	FACADE_ES_API UClass* Z_Construct_UClass_AP_FM_OBSTACLES_NoRegister();
	FACADE_ES_API UClass* Z_Construct_UClass_AP_FM_OBSTACLES();
	FACADE_ES_API UClass* Z_Construct_UClass_AP_FM_OBSTRUCTIONS();
	UPackage* Z_Construct_UPackage__Script_FACADE_ES();
// End Cross Module References
	void AP_FM_OBSTACLES::StaticRegisterNativesAP_FM_OBSTACLES()
	{
	}
	UClass* Z_Construct_UClass_AP_FM_OBSTACLES_NoRegister()
	{
		return AP_FM_OBSTACLES::StaticClass();
	}
	struct Z_Construct_UClass_AP_FM_OBSTACLES_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AP_FM_OBSTACLES_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AP_FM_OBSTRUCTIONS,
		(UObject* (*)())Z_Construct_UPackage__Script_FACADE_ES,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AP_FM_OBSTACLES_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "P_FM_OBSTACLES.h" },
		{ "ModuleRelativePath", "P_FM_OBSTACLES.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AP_FM_OBSTACLES_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AP_FM_OBSTACLES>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AP_FM_OBSTACLES_Statics::ClassParams = {
		&AP_FM_OBSTACLES::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AP_FM_OBSTACLES_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AP_FM_OBSTACLES_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AP_FM_OBSTACLES()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AP_FM_OBSTACLES_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AP_FM_OBSTACLES, 3646036343);
	template<> FACADE_ES_API UClass* StaticClass<AP_FM_OBSTACLES>()
	{
		return AP_FM_OBSTACLES::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AP_FM_OBSTACLES(Z_Construct_UClass_AP_FM_OBSTACLES, &AP_FM_OBSTACLES::StaticClass, TEXT("/Script/FACADE_ES"), TEXT("AP_FM_OBSTACLES"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AP_FM_OBSTACLES);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
