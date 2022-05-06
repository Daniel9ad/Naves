// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Naves/Rayo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRayo() {}
// Cross Module References
	NAVES_API UClass* Z_Construct_UClass_ARayo_NoRegister();
	NAVES_API UClass* Z_Construct_UClass_ARayo();
	NAVES_API UClass* Z_Construct_UClass_AProyectil();
	UPackage* Z_Construct_UPackage__Script_Naves();
// End Cross Module References
	void ARayo::StaticRegisterNativesARayo()
	{
	}
	UClass* Z_Construct_UClass_ARayo_NoRegister()
	{
		return ARayo::StaticClass();
	}
	struct Z_Construct_UClass_ARayo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARayo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AProyectil,
		(UObject* (*)())Z_Construct_UPackage__Script_Naves,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARayo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Rayo.h" },
		{ "ModuleRelativePath", "Rayo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARayo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARayo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARayo_Statics::ClassParams = {
		&ARayo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ARayo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARayo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARayo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARayo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARayo, 67170481);
	template<> NAVES_API UClass* StaticClass<ARayo>()
	{
		return ARayo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARayo(Z_Construct_UClass_ARayo, &ARayo::StaticClass, TEXT("/Script/Naves"), TEXT("ARayo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARayo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
