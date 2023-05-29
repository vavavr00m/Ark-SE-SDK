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
	 * BlueprintGeneratedClass WeapFlamethrower.WeapFlamethrower_C
	 * Size -> 0x004D (FullSize[0x0E65] - InheritedSize[0x0E18])
	 */
	class AWeapFlamethrower_C : public AShooterWeapon_FlameThrower
	{
	public:
		class UAudioComponent*                                     IdleSFX;                                                 // 0x0E18(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            lighter3p;                                               // 0x0E20(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            lighter;                                                 // 0x0E28(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bIsReloading;                                            // 0x0E30(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KIAU[0x3];                                   // 0x0E31(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Lighter1POffset;                                         // 0x0E34(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             Lighter1PScale;                                          // 0x0E40(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             Lighter3POffset;                                         // 0x0E4C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             Lighter3PScale;                                          // 0x0E58(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue;                  // 0x0E64(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void TogglePilotLight(bool IsActive);
		void StartUnequipEvent();
		void BPAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject);
		void RefreshLighterState();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void AnimNotify_Pilot_On();
		void AnimNotify_Pilot_Off();
		void ExecuteUbergraph_WeapFlamethrower(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
