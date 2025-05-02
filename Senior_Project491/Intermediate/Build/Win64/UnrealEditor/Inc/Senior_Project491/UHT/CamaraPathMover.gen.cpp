// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Senior_Project491/CamaraPathMover.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCamaraPathMover() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
SENIOR_PROJECT491_API UClass* Z_Construct_UClass_ACamaraPathMover();
SENIOR_PROJECT491_API UClass* Z_Construct_UClass_ACamaraPathMover_NoRegister();
UPackage* Z_Construct_UPackage__Script_Senior_Project491();
// End Cross Module References

// Begin Class ACamaraPathMover
void ACamaraPathMover::StaticRegisterNativesACamaraPathMover()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACamaraPathMover);
UClass* Z_Construct_UClass_ACamaraPathMover_NoRegister()
{
	return ACamaraPathMover::StaticClass();
}
struct Z_Construct_UClass_ACamaraPathMover_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CamaraPathMover.h" },
		{ "ModuleRelativePath", "CamaraPathMover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraSpline_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CamaraPathMover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CamaraPathMover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "CamaraPathMover.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraSpline;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACamaraPathMover>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACamaraPathMover_Statics::NewProp_CameraSpline = { "CameraSpline", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACamaraPathMover, CameraSpline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraSpline_MetaData), NewProp_CameraSpline_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACamaraPathMover_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACamaraPathMover, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACamaraPathMover_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACamaraPathMover, MovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementSpeed_MetaData), NewProp_MovementSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACamaraPathMover_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamaraPathMover_Statics::NewProp_CameraSpline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamaraPathMover_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamaraPathMover_Statics::NewProp_MovementSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACamaraPathMover_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACamaraPathMover_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Senior_Project491,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACamaraPathMover_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACamaraPathMover_Statics::ClassParams = {
	&ACamaraPathMover::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACamaraPathMover_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACamaraPathMover_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACamaraPathMover_Statics::Class_MetaDataParams), Z_Construct_UClass_ACamaraPathMover_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACamaraPathMover()
{
	if (!Z_Registration_Info_UClass_ACamaraPathMover.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACamaraPathMover.OuterSingleton, Z_Construct_UClass_ACamaraPathMover_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACamaraPathMover.OuterSingleton;
}
template<> SENIOR_PROJECT491_API UClass* StaticClass<ACamaraPathMover>()
{
	return ACamaraPathMover::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACamaraPathMover);
ACamaraPathMover::~ACamaraPathMover() {}
// End Class ACamaraPathMover

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unity_Github_cpsc_491_kevin_running_doubledash_game_Senior_Project491_Source_Senior_Project491_CamaraPathMover_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACamaraPathMover, ACamaraPathMover::StaticClass, TEXT("ACamaraPathMover"), &Z_Registration_Info_UClass_ACamaraPathMover, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACamaraPathMover), 151220808U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unity_Github_cpsc_491_kevin_running_doubledash_game_Senior_Project491_Source_Senior_Project491_CamaraPathMover_h_2503099382(TEXT("/Script/Senior_Project491"),
	Z_CompiledInDeferFile_FID_Unity_Github_cpsc_491_kevin_running_doubledash_game_Senior_Project491_Source_Senior_Project491_CamaraPathMover_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unity_Github_cpsc_491_kevin_running_doubledash_game_Senior_Project491_Source_Senior_Project491_CamaraPathMover_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
