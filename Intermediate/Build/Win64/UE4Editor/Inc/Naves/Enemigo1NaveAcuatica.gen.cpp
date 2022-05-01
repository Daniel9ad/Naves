// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Naves/Enemigo1NaveAcuatica.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigo1NaveAcuatica() {}
// Cross Module References
	NAVES_API UClass* Z_Construct_UClass_AEnemigo1NaveAcuatica_NoRegister();
	NAVES_API UClass* Z_Construct_UClass_AEnemigo1NaveAcuatica();
	NAVES_API UClass* Z_Construct_UClass_ANaveAcuatica();
	UPackage* Z_Construct_UPackage__Script_Naves();
// End Cross Module References
	void AEnemigo1NaveAcuatica::StaticRegisterNativesAEnemigo1NaveAcuatica()
	{
	}
	UClass* Z_Construct_UClass_AEnemigo1NaveAcuatica_NoRegister()
	{
		return AEnemigo1NaveAcuatica::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigo1NaveAcuatica_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigo1NaveAcuatica_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveAcuatica,
		(UObject* (*)())Z_Construct_UPackage__Script_Naves,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigo1NaveAcuatica_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemigo1NaveAcuatica.h" },
		{ "ModuleRelativePath", "Enemigo1NaveAcuatica.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigo1NaveAcuatica_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigo1NaveAcuatica>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigo1NaveAcuatica_Statics::ClassParams = {
		&AEnemigo1NaveAcuatica::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEnemigo1NaveAcuatica_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo1NaveAcuatica_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigo1NaveAcuatica()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigo1NaveAcuatica_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigo1NaveAcuatica, 3635383949);
	template<> NAVES_API UClass* StaticClass<AEnemigo1NaveAcuatica>()
	{
		return AEnemigo1NaveAcuatica::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigo1NaveAcuatica(Z_Construct_UClass_AEnemigo1NaveAcuatica, &AEnemigo1NaveAcuatica::StaticClass, TEXT("/Script/Naves"), TEXT("AEnemigo1NaveAcuatica"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigo1NaveAcuatica);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
