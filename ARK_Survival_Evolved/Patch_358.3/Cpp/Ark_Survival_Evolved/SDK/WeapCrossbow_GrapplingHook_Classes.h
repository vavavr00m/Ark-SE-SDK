#pragma once

/**
 * Name: Ark_Survival_Evolved
 * Version: Patch_358.3
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass WeapCrossbow_GrapplingHook.WeapCrossbow_GrapplingHook_C
	 * Size -> 0x0028 (FullSize[0x0E88] - InheritedSize[0x0E60])
	 */
	class AWeapCrossbow_GrapplingHook_C : public APrimalWeaponGrapplingHook
	{
	public:
		class USceneComponent*                                     CableStart3P;                                            // 0x0E60(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USkeletalMeshComponent*                              MechanismMesh3P;                                         // 0x0E68(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                ProjectileMesh1P;                                        // 0x0E70(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USceneComponent*                                     CableStart1P;                                            // 0x0E78(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USkeletalMeshComponent*                              MechanismMesh1P;                                         // 0x0E80(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_WeapCrossbow_GrapplingHook(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
