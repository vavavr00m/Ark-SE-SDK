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
	 * BlueprintGeneratedClass PrimalItemSkin_SunGlasses.PrimalItemSkin_SunGlasses_C
	 * Size -> 0x0020 (FullSize[0x0B08] - InheritedSize[0x0AE8])
	 */
	class UPrimalItemSkin_SunGlasses_C : public UPrimalItemSkinGeneric_C
	{
	public:
		class UStaticMeshComponent*                                SunglassesMeshComponent;                                 // 0x0AE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UStaticMesh*                                         SunglassesMesh;                                          // 0x0AF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                HoldingSocketName;                                       // 0x0AF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                GlassesSocketName;                                       // 0x0B00(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OrbitCameraChanged(bool bEnabled);
		void EnteredThirdPerson();
		void EnteredFirstPerson();
		void CreateSunglassesComponent(class USkeletalMeshComponent* ParentComponent, bool* Created);
		void BPAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject);
		void ExecuteUbergraph_PrimalItemSkin_SunGlasses(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
