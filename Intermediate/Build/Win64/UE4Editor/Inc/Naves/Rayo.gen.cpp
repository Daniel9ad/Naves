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
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshRayo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshRayo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RayoMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RayoMovement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARayo_Statics::NewProp_MeshRayo_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "Comment", "// Malla del proyectil\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Rayo.h" },
		{ "ToolTip", "Malla del proyectil" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARayo_Statics::NewProp_MeshRayo = { "MeshRayo", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARayo, MeshRayo), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARayo_Statics::NewProp_MeshRayo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARayo_Statics::NewProp_MeshRayo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARayo_Statics::NewProp_RayoMovement_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "Comment", "// Componente de movimiento de proyectiles\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Rayo.h" },
		{ "ToolTip", "Componente de movimiento de proyectiles" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARayo_Statics::NewProp_RayoMovement = { "RayoMovement", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARayo, RayoMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARayo_Statics::NewProp_RayoMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARayo_Statics::NewProp_RayoMovement_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARayo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARayo_Statics::NewProp_MeshRayo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARayo_Statics::NewProp_RayoMovement,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARayo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARayo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARayo_Statics::ClassParams = {
		&ARayo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARayo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARayo_Statics::PropPointers),
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
	IMPLEMENT_CLASS(ARayo, 3648075329);
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
