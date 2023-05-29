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
	 * BlueprintGeneratedClass Wyvern_Character_BP_Lightning.Wyvern_Character_BP_Lightning_C
	 * Size -> 0x000C (FullSize[0x23CC] - InheritedSize[0x23C0])
	 */
	class AWyvern_Character_BP_Lightning_C : public AWyvern_Character_BP_Base_C
	{
	public:
		struct FVector                                             TargetAimOffset;                                         // 0x23C0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		struct FVector BPModifyAimOffsetTargetLocation(struct FVector* AimTargetLocation);
		void UserConstructionScript();
		void ExecuteUbergraph_Wyvern_Character_BP_Lightning(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
