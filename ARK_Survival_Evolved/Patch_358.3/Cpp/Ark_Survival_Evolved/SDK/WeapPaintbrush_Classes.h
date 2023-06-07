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
	 * BlueprintGeneratedClass WeapPaintbrush.WeapPaintbrush_C
	 * Size -> 0x0008 (FullSize[0x0D90] - InheritedSize[0x0D88])
	 */
	class AWeapPaintbrush_C : public AShooterWeapon_Melee
	{
	public:
		class AShooterCharacter*                                   ShooterCharRef;                                          // 0x0D88(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		struct FWeaponAnim BPGetSelectedMeleeAttackAnim();
		void BPAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject);
		void UserConstructionScript();
		void ExecuteUbergraph_WeapPaintbrush(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
