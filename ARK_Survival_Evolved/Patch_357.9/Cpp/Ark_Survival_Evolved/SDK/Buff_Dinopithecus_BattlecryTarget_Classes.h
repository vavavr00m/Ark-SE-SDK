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
	 * BlueprintGeneratedClass Buff_Dinopithecus_BattlecryTarget.Buff_Dinopithecus_BattlecryTarget_C
	 * Size -> 0x0024 (FullSize[0x09A4] - InheritedSize[0x0980])
	 */
	class ABuff_Dinopithecus_BattlecryTarget_C : public ABuff_Base_C
	{
	public:
		struct FVector                                             PlayerAttachedOffset;                                    // 0x0980(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             PlayerAttachedScale;                                     // 0x098C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            PlayerAttachedRotation;                                  // 0x0998(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BPSetupForInstigator(class AActor* ForInstigator);
		void ReceiveBeginPlay();
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_Dinopithecus_BattlecryTarget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
