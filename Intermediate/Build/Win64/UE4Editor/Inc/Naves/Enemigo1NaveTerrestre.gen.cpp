// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Naves/Enemigo1NaveTerrestre.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigo1NaveTerrestre() {}
// Cross Module References
	NAVES_API UClass* Z_Construct_UClass_AEnemigo1NaveTerrestre_NoRegister();
	NAVES_API UClass* Z_Construct_UClass_AEnemigo1NaveTerrestre();
	NAVES_API UClass* Z_Construct_UClass_ANaveTerrestre();
	UPackage* Z_Construct_UPackage__Script_Naves();
// End Cross Module References
	void AEnemigo1NaveTerrestre::StaticRegisterNativesAEnemigo1NaveTerrestre()
	{
	}
	UClass* Z_Construct_UClass_AEnemigo1NaveTerrestre_NoRegister()
	{
		return AEnemigo1NaveTerrestre::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigo1NaveTerrestre_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigo1NaveTerrestre_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveTerrestre,
		(UObject* (*)())Z_Construct_UPackage__Script_Naves,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigo1NaveTerrestre_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemigo1NaveTerrestre.h" },
		{ "ModuleRelativePath", "Enemigo1NaveTerrestre.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigo1NaveTerrestre_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigo1NaveTerrestre>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigo1NaveTerrestre_Statics::ClassParams = {
		&AEnemigo1NaveTerrestre::StaticClass,
		"Game",
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
		METADATA_PARAMS(Z_Construct_UClass_AEnemigo1NaveTerrestre_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo1NaveTerrestre_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigo1NaveTerrestre()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigo1NaveTerrestre_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigo1NaveTerrestre, 2584504770);
	template<> NAVES_API UClass* StaticClass<AEnemigo1NaveTerrestre>()
	{
		return AEnemigo1NaveTerrestre::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigo1NaveTerrestre(Z_Construct_UClass_AEnemigo1NaveTerrestre, &AEnemigo1NaveTerrestre::StaticClass, TEXT("/Script/Naves"), TEXT("AEnemigo1NaveTerrestre"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigo1NaveTerrestre);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
