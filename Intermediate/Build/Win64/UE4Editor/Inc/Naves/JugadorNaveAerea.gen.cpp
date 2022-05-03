// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Naves/JugadorNaveAerea.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJugadorNaveAerea() {}
// Cross Module References
	NAVES_API UClass* Z_Construct_UClass_AJugadorNaveAerea_NoRegister();
	NAVES_API UClass* Z_Construct_UClass_AJugadorNaveAerea();
	NAVES_API UClass* Z_Construct_UClass_ANaveAerea();
	UPackage* Z_Construct_UPackage__Script_Naves();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AJugadorNaveAerea::StaticRegisterNativesAJugadorNaveAerea()
	{
	}
	UClass* Z_Construct_UClass_AJugadorNaveAerea_NoRegister()
	{
		return AJugadorNaveAerea::StaticClass();
	}
	struct Z_Construct_UClass_AJugadorNaveAerea_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GunOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FireRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJugadorNaveAerea_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveAerea,
		(UObject* (*)())Z_Construct_UPackage__Script_Naves,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJugadorNaveAerea_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "JugadorNaveAerea.h" },
		{ "ModuleRelativePath", "JugadorNaveAerea.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJugadorNaveAerea_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "//La camara\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "JugadorNaveAerea.h" },
		{ "ToolTip", "La camara" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJugadorNaveAerea_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJugadorNaveAerea, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJugadorNaveAerea_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJugadorNaveAerea_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJugadorNaveAerea_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "//Algo que coloca la camara sobre el personaje\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "JugadorNaveAerea.h" },
		{ "ToolTip", "Algo que coloca la camara sobre el personaje" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJugadorNaveAerea_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJugadorNaveAerea, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJugadorNaveAerea_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJugadorNaveAerea_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJugadorNaveAerea_Statics::NewProp_GunOffset_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "// Desplazamiento desde la ubicaci?n de loa naves para generar proyectiles\n" },
		{ "ModuleRelativePath", "JugadorNaveAerea.h" },
		{ "ToolTip", "Desplazamiento desde la ubicaci?n de loa naves para generar proyectiles" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AJugadorNaveAerea_Statics::NewProp_GunOffset = { "GunOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJugadorNaveAerea, GunOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AJugadorNaveAerea_Statics::NewProp_GunOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJugadorNaveAerea_Statics::NewProp_GunOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJugadorNaveAerea_Statics::NewProp_FireRate_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "// Qu? tan r?pido disparar? el arma\n" },
		{ "ModuleRelativePath", "JugadorNaveAerea.h" },
		{ "ToolTip", "Qu? tan r?pido disparar? el arma" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AJugadorNaveAerea_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJugadorNaveAerea, FireRate), METADATA_PARAMS(Z_Construct_UClass_AJugadorNaveAerea_Statics::NewProp_FireRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJugadorNaveAerea_Statics::NewProp_FireRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AJugadorNaveAerea_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJugadorNaveAerea_Statics::NewProp_CameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJugadorNaveAerea_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJugadorNaveAerea_Statics::NewProp_GunOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJugadorNaveAerea_Statics::NewProp_FireRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJugadorNaveAerea_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJugadorNaveAerea>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AJugadorNaveAerea_Statics::ClassParams = {
		&AJugadorNaveAerea::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AJugadorNaveAerea_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AJugadorNaveAerea_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AJugadorNaveAerea_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AJugadorNaveAerea_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AJugadorNaveAerea()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AJugadorNaveAerea_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AJugadorNaveAerea, 1008655279);
	template<> NAVES_API UClass* StaticClass<AJugadorNaveAerea>()
	{
		return AJugadorNaveAerea::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AJugadorNaveAerea(Z_Construct_UClass_AJugadorNaveAerea, &AJugadorNaveAerea::StaticClass, TEXT("/Script/Naves"), TEXT("AJugadorNaveAerea"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJugadorNaveAerea);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
