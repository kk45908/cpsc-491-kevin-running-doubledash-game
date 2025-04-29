// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Senior_Project491/Public/InvisibleWall.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInvisibleWall() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
SENIOR_PROJECT491_API UClass* Z_Construct_UClass_AInvisibleWall();
SENIOR_PROJECT491_API UClass* Z_Construct_UClass_AInvisibleWall_NoRegister();
UPackage* Z_Construct_UPackage__Script_Senior_Project491();
// End Cross Module References

// Begin Class AInvisibleWall
void AInvisibleWall::StaticRegisterNativesAInvisibleWall()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInvisibleWall);
UClass* Z_Construct_UClass_AInvisibleWall_NoRegister()
{
	return AInvisibleWall::StaticClass();
}
struct Z_Construct_UClass_AInvisibleWall_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "InvisibleWall.h" },
		{ "ModuleRelativePath", "Public/InvisibleWall.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInvisibleWall>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AInvisibleWall_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Senior_Project491,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInvisibleWall_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInvisibleWall_Statics::ClassParams = {
	&AInvisibleWall::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInvisibleWall_Statics::Class_MetaDataParams), Z_Construct_UClass_AInvisibleWall_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AInvisibleWall()
{
	if (!Z_Registration_Info_UClass_AInvisibleWall.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInvisibleWall.OuterSingleton, Z_Construct_UClass_AInvisibleWall_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInvisibleWall.OuterSingleton;
}
template<> SENIOR_PROJECT491_API UClass* StaticClass<AInvisibleWall>()
{
	return AInvisibleWall::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInvisibleWall);
AInvisibleWall::~AInvisibleWall() {}
// End Class AInvisibleWall

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_kk459_Desktop_Unreal_Projects_cpsc_491_kevin_running_doubledash_game_Senior_Project491_Source_Senior_Project491_Public_InvisibleWall_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInvisibleWall, AInvisibleWall::StaticClass, TEXT("AInvisibleWall"), &Z_Registration_Info_UClass_AInvisibleWall, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInvisibleWall), 3759528076U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kk459_Desktop_Unreal_Projects_cpsc_491_kevin_running_doubledash_game_Senior_Project491_Source_Senior_Project491_Public_InvisibleWall_h_1039786040(TEXT("/Script/Senior_Project491"),
	Z_CompiledInDeferFile_FID_Users_kk459_Desktop_Unreal_Projects_cpsc_491_kevin_running_doubledash_game_Senior_Project491_Source_Senior_Project491_Public_InvisibleWall_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kk459_Desktop_Unreal_Projects_cpsc_491_kevin_running_doubledash_game_Senior_Project491_Source_Senior_Project491_Public_InvisibleWall_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
