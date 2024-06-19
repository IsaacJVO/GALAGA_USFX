// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GALAGA_USFX_LAB02_Galaga_USFX_LAB02Pawn_generated_h
#error "Galaga_USFX_LAB02Pawn.generated.h already included, missing '#pragma once' in Galaga_USFX_LAB02Pawn.h"
#endif
#define GALAGA_USFX_LAB02_Galaga_USFX_LAB02Pawn_generated_h

#define Galaga_USFX_LAB02_Source_Galaga_USFX_LAB02_Galaga_USFX_LAB02Pawn_h_11_SPARSE_DATA
#define Galaga_USFX_LAB02_Source_Galaga_USFX_LAB02_Galaga_USFX_LAB02Pawn_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDisplayGameOverMessage);


#define Galaga_USFX_LAB02_Source_Galaga_USFX_LAB02_Galaga_USFX_LAB02Pawn_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisplayGameOverMessage);


#define Galaga_USFX_LAB02_Source_Galaga_USFX_LAB02_Galaga_USFX_LAB02Pawn_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGalaga_USFX_LAB02Pawn(); \
	friend struct Z_Construct_UClass_AGalaga_USFX_LAB02Pawn_Statics; \
public: \
	DECLARE_CLASS(AGalaga_USFX_LAB02Pawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Galaga_USFX_LAB02"), NO_API) \
	DECLARE_SERIALIZER(AGalaga_USFX_LAB02Pawn)


#define Galaga_USFX_LAB02_Source_Galaga_USFX_LAB02_Galaga_USFX_LAB02Pawn_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAGalaga_USFX_LAB02Pawn(); \
	friend struct Z_Construct_UClass_AGalaga_USFX_LAB02Pawn_Statics; \
public: \
	DECLARE_CLASS(AGalaga_USFX_LAB02Pawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Galaga_USFX_LAB02"), NO_API) \
	DECLARE_SERIALIZER(AGalaga_USFX_LAB02Pawn)


#define Galaga_USFX_LAB02_Source_Galaga_USFX_LAB02_Galaga_USFX_LAB02Pawn_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGalaga_USFX_LAB02Pawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGalaga_USFX_LAB02Pawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGalaga_USFX_LAB02Pawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGalaga_USFX_LAB02Pawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGalaga_USFX_LAB02Pawn(AGalaga_USFX_LAB02Pawn&&); \
	NO_API AGalaga_USFX_LAB02Pawn(const AGalaga_USFX_LAB02Pawn&); \
public:


#define Galaga_USFX_LAB02_Source_Galaga_USFX_LAB02_Galaga_USFX_LAB02Pawn_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGalaga_USFX_LAB02Pawn(AGalaga_USFX_LAB02Pawn&&); \
	NO_API AGalaga_USFX_LAB02Pawn(const AGalaga_USFX_LAB02Pawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGalaga_USFX_LAB02Pawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGalaga_USFX_LAB02Pawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGalaga_USFX_LAB02Pawn)


#define Galaga_USFX_LAB02_Source_Galaga_USFX_LAB02_Galaga_USFX_LAB02Pawn_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GameOverSound() { return STRUCT_OFFSET(AGalaga_USFX_LAB02Pawn, GameOverSound); } \
	FORCEINLINE static uint32 __PPO__BackgroundAudioComponent() { return STRUCT_OFFSET(AGalaga_USFX_LAB02Pawn, BackgroundAudioComponent); } \
	FORCEINLINE static uint32 __PPO__BackgroundSound() { return STRUCT_OFFSET(AGalaga_USFX_LAB02Pawn, BackgroundSound); } \
	FORCEINLINE static uint32 __PPO__ShipMeshComponent() { return STRUCT_OFFSET(AGalaga_USFX_LAB02Pawn, ShipMeshComponent); } \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(AGalaga_USFX_LAB02Pawn, CameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AGalaga_USFX_LAB02Pawn, CameraBoom); }


#define Galaga_USFX_LAB02_Source_Galaga_USFX_LAB02_Galaga_USFX_LAB02Pawn_h_8_PROLOG
#define Galaga_USFX_LAB02_Source_Galaga_USFX_LAB02_Galaga_USFX_LAB02Pawn_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaga_USFX_LAB02_Source_Galaga_USFX_LAB02_Galaga_USFX_LAB02Pawn_h_11_PRIVATE_PROPERTY_OFFSET \
	Galaga_USFX_LAB02_Source_Galaga_USFX_LAB02_Galaga_USFX_LAB02Pawn_h_11_SPARSE_DATA \
	Galaga_USFX_LAB02_Source_Galaga_USFX_LAB02_Galaga_USFX_LAB02Pawn_h_11_RPC_WRAPPERS \
	Galaga_USFX_LAB02_Source_Galaga_USFX_LAB02_Galaga_USFX_LAB02Pawn_h_11_INCLASS \
	Galaga_USFX_LAB02_Source_Galaga_USFX_LAB02_Galaga_USFX_LAB02Pawn_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Galaga_USFX_LAB02_Source_Galaga_USFX_LAB02_Galaga_USFX_LAB02Pawn_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaga_USFX_LAB02_Source_Galaga_USFX_LAB02_Galaga_USFX_LAB02Pawn_h_11_PRIVATE_PROPERTY_OFFSET \
	Galaga_USFX_LAB02_Source_Galaga_USFX_LAB02_Galaga_USFX_LAB02Pawn_h_11_SPARSE_DATA \
	Galaga_USFX_LAB02_Source_Galaga_USFX_LAB02_Galaga_USFX_LAB02Pawn_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Galaga_USFX_LAB02_Source_Galaga_USFX_LAB02_Galaga_USFX_LAB02Pawn_h_11_INCLASS_NO_PURE_DECLS \
	Galaga_USFX_LAB02_Source_Galaga_USFX_LAB02_Galaga_USFX_LAB02Pawn_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GALAGA_USFX_LAB02_API UClass* StaticClass<class AGalaga_USFX_LAB02Pawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Galaga_USFX_LAB02_Source_Galaga_USFX_LAB02_Galaga_USFX_LAB02Pawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
