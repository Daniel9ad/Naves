// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Naves/Nave.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNave() {}
// Cross Module References
	NAVES_API UClass* Z_Construct_UClass_ANave_NoRegister();
	NAVES_API UClass* Z_Construct_UClass_ANave();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Naves();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ANave::StaticRegisterNativesANave()
	{
	}
	UClass* Z_Construct_UClass_ANave_NoRegister()
	{
		return ANave::StaticClass();
	}
	struct Z_Construct_UClass_ANave_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NaveMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NaveMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocidad_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Velocidad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Energia_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Energia;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumVidas_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NumVidas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResEstructura_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ResEstructura;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANave_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Naves,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Nave.h" },
		{ "ModuleRelativePath", "Nave.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Statics::NewProp_NaveMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
		{ "Comment", "// Componente de malla estatica\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Nave.h" },
		{ "ToolTip", "Componente de malla estatica" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANave_Statics::NewProp_NaveMeshComponent = { "NaveMeshComponent", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANave, NaveMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANave_Statics::NewProp_NaveMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Statics::NewProp_NaveMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Statics::NewProp_Velocidad_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "// Velocidad de la nave\n" },
		{ "ModuleRelativePath", "Nave.h" },
		{ "ToolTip", "Velocidad de la nave" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANave_Statics::NewProp_Velocidad = { "Velocidad", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANave, Velocidad), METADATA_PARAMS(Z_Construct_UClass_ANave_Statics::NewProp_Velocidad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Statics::NewProp_Velocidad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Statics::NewProp_Energia_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "// Energia de la nave\n" },
		{ "ModuleRelativePath", "Nave.h" },
		{ "ToolTip", "Energia de la nave" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANave_Statics::NewProp_Energia = { "Energia", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANave, Energia), METADATA_PARAMS(Z_Construct_UClass_ANave_Statics::NewProp_Energia_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Statics::NewProp_Energia_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Statics::NewProp_NumVidas_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "// Numero de vidas\n" },
		{ "ModuleRelativePath", "Nave.h" },
		{ "ToolTip", "Numero de vidas" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ANave_Statics::NewProp_NumVidas = { "NumVidas", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANave, NumVidas), METADATA_PARAMS(Z_Construct_UClass_ANave_Statics::NewProp_NumVidas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Statics::NewProp_NumVidas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Statics::NewProp_ResEstructura_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "// Resistencia de la estructura de la nave\n" },
		{ "ModuleRelativePath", "Nave.h" },
		{ "ToolTip", "Resistencia de la estructura de la nave" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANave_Statics::NewProp_ResEstructura = { "ResEstructura", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANave, ResEstructura), METADATA_PARAMS(Z_Construct_UClass_ANave_Statics::NewProp_ResEstructura_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Statics::NewProp_ResEstructura_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANave_Statics::NewProp_NaveMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANave_Statics::NewProp_Velocidad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANave_Statics::NewProp_Energia,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANave_Statics::NewProp_NumVidas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANave_Statics::NewProp_ResEstructura,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANave_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANave>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANave_Statics::ClassParams = {
		&ANave::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANave_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANave_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANave()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANave_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANave, 3237605569);
	template<> NAVES_API UClass* StaticClass<ANave>()
	{
		return ANave::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANave(Z_Construct_UClass_ANave, &ANave::StaticClass, TEXT("/Script/Naves"), TEXT("ANave"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANave);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
