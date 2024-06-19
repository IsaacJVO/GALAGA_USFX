// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB02/EnemigaIterator4.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigaIterator4() {}
// Cross Module References
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_AEnemigaIterator4_NoRegister();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_AEnemigaIterator4();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB02();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AEnemigaIterator4::StaticRegisterNativesAEnemigaIterator4()
	{
	}
	UClass* Z_Construct_UClass_AEnemigaIterator4_NoRegister()
	{
		return AEnemigaIterator4::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigaIterator4_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MallaI_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MallaI;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigaIterator4_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigaIterator4_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemigaIterator4.h" },
		{ "ModuleRelativePath", "EnemigaIterator4.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigaIterator4_Statics::NewProp_MallaI_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Reloj" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemigaIterator4.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemigaIterator4_Statics::NewProp_MallaI = { "MallaI", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemigaIterator4, MallaI), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemigaIterator4_Statics::NewProp_MallaI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigaIterator4_Statics::NewProp_MallaI_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemigaIterator4_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigaIterator4_Statics::NewProp_MallaI,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigaIterator4_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigaIterator4>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigaIterator4_Statics::ClassParams = {
		&AEnemigaIterator4::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemigaIterator4_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigaIterator4_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemigaIterator4_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigaIterator4_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigaIterator4()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigaIterator4_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigaIterator4, 2753754802);
	template<> GALAGA_USFX_LAB02_API UClass* StaticClass<AEnemigaIterator4>()
	{
		return AEnemigaIterator4::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigaIterator4(Z_Construct_UClass_AEnemigaIterator4, &AEnemigaIterator4::StaticClass, TEXT("/Script/Galaga_USFX_LAB02"), TEXT("AEnemigaIterator4"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigaIterator4);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
