// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Naves/Misil.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMisil() {}
// Cross Module References
	NAVES_API UClass* Z_Construct_UClass_AMisil_NoRegister();
	NAVES_API UClass* Z_Construct_UClass_AMisil();
	NAVES_API UClass* Z_Construct_UClass_AProyectil();
	UPackage* Z_Construct_UPackage__Script_Naves();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
// End Cross Module References
	void AMisil::StaticRegisterNativesAMisil()
	{
	}
	UClass* Z_Construct_UClass_AMisil_NoRegister()
	{
		return AMisil::StaticClass();
	}
	struct Z_Construct_UClass_AMisil_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshMisil_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshMisil;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MisilMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MisilMovement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMisil_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AProyectil,
		(UObject* (*)())Z_Construct_UPackage__Script_Naves,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMisil_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Misil.h" },
		{ "ModuleRelativePath", "Misil.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMisil_Statics::NewProp_MeshMisil_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "Comment", "// Malla del proyectil\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Misil.h" },
		{ "ToolTip", "Malla del proyectil" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMisil_Statics::NewProp_MeshMisil = { "MeshMisil", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMisil, MeshMisil), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMisil_Statics::NewProp_MeshMisil_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMisil_Statics::NewProp_MeshMisil_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMisil_Statics::NewProp_MisilMovement_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "Comment", "// Componente de movimiento de proyectiles\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Misil.h" },
		{ "ToolTip", "Componente de movimiento de proyectiles" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMisil_Statics::NewProp_MisilMovement = { "MisilMovement", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMisil, MisilMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMisil_Statics::NewProp_MisilMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMisil_Statics::NewProp_MisilMovement_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMisil_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMisil_Statics::NewProp_MeshMisil,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMisil_Statics::NewProp_MisilMovement,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMisil_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMisil>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMisil_Statics::ClassParams = {
		&AMisil::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMisil_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMisil_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMisil_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMisil_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMisil()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMisil_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMisil, 1912050493);
	template<> NAVES_API UClass* StaticClass<AMisil>()
	{
		return AMisil::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMisil(Z_Construct_UClass_AMisil, &AMisil::StaticClass, TEXT("/Script/Naves"), TEXT("AMisil"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMisil);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
