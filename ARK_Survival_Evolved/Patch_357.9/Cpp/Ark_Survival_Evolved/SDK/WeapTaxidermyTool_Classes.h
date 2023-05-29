#pragma once

/**
 * Name: Ark_Survival_Evolved
 * Version: Patch_357.9
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
	 * BlueprintGeneratedClass WeapTaxidermyTool.WeapTaxidermyTool_C
	 * Size -> 0x0018 (FullSize[0x0DA0] - InheritedSize[0x0D88])
	 */
	class AWeapTaxidermyTool_C : public AShooterWeapon_Melee
	{
	public:
		class UStaticMeshComponent*                                TPTool;                                                  // 0x0D88(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                FPTool;                                                  // 0x0D90(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class AShooterCharacter*                                   ShooterCharRef;                                          // 0x0D98(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		struct FWeaponAnim BPGetSelectedMeleeAttackAnim();
		void UserConstructionScript();
		void ExecuteUbergraph_WeapTaxidermyTool(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
