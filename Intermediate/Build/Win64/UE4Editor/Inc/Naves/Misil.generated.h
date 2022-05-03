// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVES_Misil_generated_h
#error "Misil.generated.h already included, missing '#pragma once' in Misil.h"
#endif
#define NAVES_Misil_generated_h

#define Naves_Source_Naves_Misil_h_15_SPARSE_DATA
#define Naves_Source_Naves_Misil_h_15_RPC_WRAPPERS
#define Naves_Source_Naves_Misil_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Naves_Source_Naves_Misil_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMisil(); \
	friend struct Z_Construct_UClass_AMisil_Statics; \
public: \
	DECLARE_CLASS(AMisil, AProyectil, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Naves"), NO_API) \
	DECLARE_SERIALIZER(AMisil)


#define Naves_Source_Naves_Misil_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMisil(); \
	friend struct Z_Construct_UClass_AMisil_Statics; \
public: \
	DECLARE_CLASS(AMisil, AProyectil, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Naves"), NO_API) \
	DECLARE_SERIALIZER(AMisil)


#define Naves_Source_Naves_Misil_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMisil(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMisil) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMisil); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMisil); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMisil(AMisil&&); \
	NO_API AMisil(const AMisil&); \
public:


#define Naves_Source_Naves_Misil_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMisil(AMisil&&); \
	NO_API AMisil(const AMisil&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMisil); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMisil); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMisil)


#define Naves_Source_Naves_Misil_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshMisil() { return STRUCT_OFFSET(AMisil, MeshMisil); } \
	FORCEINLINE static uint32 __PPO__MisilMovement() { return STRUCT_OFFSET(AMisil, MisilMovement); }


#define Naves_Source_Naves_Misil_h_12_PROLOG
#define Naves_Source_Naves_Misil_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Naves_Source_Naves_Misil_h_15_PRIVATE_PROPERTY_OFFSET \
	Naves_Source_Naves_Misil_h_15_SPARSE_DATA \
	Naves_Source_Naves_Misil_h_15_RPC_WRAPPERS \
	Naves_Source_Naves_Misil_h_15_INCLASS \
	Naves_Source_Naves_Misil_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Naves_Source_Naves_Misil_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Naves_Source_Naves_Misil_h_15_PRIVATE_PROPERTY_OFFSET \
	Naves_Source_Naves_Misil_h_15_SPARSE_DATA \
	Naves_Source_Naves_Misil_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Naves_Source_Naves_Misil_h_15_INCLASS_NO_PURE_DECLS \
	Naves_Source_Naves_Misil_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVES_API UClass* StaticClass<class AMisil>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Naves_Source_Naves_Misil_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
