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
	 * BlueprintGeneratedClass Wyvern_Character_BP_ZombieLightning.Wyvern_Character_BP_ZombieLightning_C
	 * Size -> 0x000E (FullSize[0x248C] - InheritedSize[0x247E])
	 */
	class AWyvern_Character_BP_ZombieLightning_C : public AWyvern_Character_BP_ZombieBase_C
	{
	public:
		unsigned char                                              UnknownData_ADR5[0x2];                                   // 0x247E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             TargetAimOffset;                                         // 0x2480(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		struct FVector BPModifyAimOffsetTargetLocation(struct FVector* AimTargetLocation);
		void UserConstructionScript();
		void ExecuteUbergraph_Wyvern_Character_BP_ZombieLightning(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
