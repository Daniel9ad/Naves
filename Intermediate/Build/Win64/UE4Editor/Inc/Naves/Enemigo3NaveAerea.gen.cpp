// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Naves/Enemigo3NaveAerea.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigo3NaveAerea() {}
// Cross Module References
	NAVES_API UClass* Z_Construct_UClass_AEnemigo3NaveAerea_NoRegister();
	NAVES_API UClass* Z_Construct_UClass_AEnemigo3NaveAerea();
	NAVES_API UClass* Z_Construct_UClass_ANaveAerea();
	UPackage* Z_Construct_UPackage__Script_Naves();
// End Cross Module References
	void AEnemigo3NaveAerea::StaticRegisterNativesAEnemigo3NaveAerea()
	{
	}
	UClass* Z_Construct_UClass_AEnemigo3NaveAerea_NoRegister()
	{
		return AEnemigo3NaveAerea::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigo3NaveAerea_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigo3NaveAerea_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveAerea,
		(UObject* (*)())Z_Construct_UPackage__Script_Naves,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigo3NaveAerea_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemigo3NaveAerea.h" },
		{ "ModuleRelativePath", "Enemigo3NaveAerea.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigo3NaveAerea_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigo3NaveAerea>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigo3NaveAerea_Statics::ClassParams = {
		&AEnemigo3NaveAerea::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEnemigo3NaveAerea_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo3NaveAerea_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigo3NaveAerea()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigo3NaveAerea_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigo3NaveAerea, 1922836382);
	template<> NAVES_API UClass* StaticClass<AEnemigo3NaveAerea>()
	{
		return AEnemigo3NaveAerea::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigo3NaveAerea(Z_Construct_UClass_AEnemigo3NaveAerea, &AEnemigo3NaveAerea::StaticClass, TEXT("/Script/Naves"), TEXT("AEnemigo3NaveAerea"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigo3NaveAerea);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
