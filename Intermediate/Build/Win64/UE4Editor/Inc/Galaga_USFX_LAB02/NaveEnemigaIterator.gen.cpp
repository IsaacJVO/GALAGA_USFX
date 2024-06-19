// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB02/NaveEnemigaIterator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigaIterator() {}
// Cross Module References
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_UNaveEnemigaIterator_NoRegister();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_UNaveEnemigaIterator();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB02();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_UIIterator_NoRegister();
// End Cross Module References
	void UNaveEnemigaIterator::StaticRegisterNativesUNaveEnemigaIterator()
	{
	}
	UClass* Z_Construct_UClass_UNaveEnemigaIterator_NoRegister()
	{
		return UNaveEnemigaIterator::StaticClass();
	}
	struct Z_Construct_UClass_UNaveEnemigaIterator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNaveEnemigaIterator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNaveEnemigaIterator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NaveEnemigaIterator.h" },
		{ "ModuleRelativePath", "NaveEnemigaIterator.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNaveEnemigaIterator_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIIterator_NoRegister, (int32)VTABLE_OFFSET(UNaveEnemigaIterator, IIIterator), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNaveEnemigaIterator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNaveEnemigaIterator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNaveEnemigaIterator_Statics::ClassParams = {
		&UNaveEnemigaIterator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNaveEnemigaIterator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNaveEnemigaIterator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNaveEnemigaIterator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNaveEnemigaIterator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNaveEnemigaIterator, 1575582690);
	template<> GALAGA_USFX_LAB02_API UClass* StaticClass<UNaveEnemigaIterator>()
	{
		return UNaveEnemigaIterator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNaveEnemigaIterator(Z_Construct_UClass_UNaveEnemigaIterator, &UNaveEnemigaIterator::StaticClass, TEXT("/Script/Galaga_USFX_LAB02"), TEXT("UNaveEnemigaIterator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNaveEnemigaIterator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
