// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Naves/Bomba.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBomba() {}
// Cross Module References
	NAVES_API UClass* Z_Construct_UClass_ABomba_NoRegister();
	NAVES_API UClass* Z_Construct_UClass_ABomba();
	NAVES_API UClass* Z_Construct_UClass_AProyectil();
	UPackage* Z_Construct_UPackage__Script_Naves();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
// End Cross Module References
	void ABomba::StaticRegisterNativesABomba()
	{
	}
	UClass* Z_Construct_UClass_ABomba_NoRegister()
	{
		return ABomba::StaticClass();
	}
	struct Z_Construct_UClass_ABomba_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshBomba_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshBomba;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BombaMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BombaMovement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABomba_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AProyectil,
		(UObject* (*)())Z_Construct_UPackage__Script_Naves,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomba_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Bomba.h" },
		{ "ModuleRelativePath", "Bomba.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomba_Statics::NewProp_MeshBomba_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "Comment", "// Malla del proyectil\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Bomba.h" },
		{ "ToolTip", "Malla del proyectil" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomba_Statics::NewProp_MeshBomba = { "MeshBomba", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABomba, MeshBomba), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABomba_Statics::NewProp_MeshBomba_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABomba_Statics::NewProp_MeshBomba_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomba_Statics::NewProp_BombaMovement_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "Comment", "// Componente de movimiento de proyectiles\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Bomba.h" },
		{ "ToolTip", "Componente de movimiento de proyectiles" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomba_Statics::NewProp_BombaMovement = { "BombaMovement", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABomba, BombaMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABomba_Statics::NewProp_BombaMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABomba_Statics::NewProp_BombaMovement_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABomba_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomba_Statics::NewProp_MeshBomba,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomba_Statics::NewProp_BombaMovement,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABomba_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABomba>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABomba_Statics::ClassParams = {
		&ABomba::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABomba_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABomba_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABomba_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABomba_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABomba()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABomba_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABomba, 654275031);
	template<> NAVES_API UClass* StaticClass<ABomba>()
	{
		return ABomba::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABomba(Z_Construct_UClass_ABomba, &ABomba::StaticClass, TEXT("/Script/Naves"), TEXT("ABomba"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABomba);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
