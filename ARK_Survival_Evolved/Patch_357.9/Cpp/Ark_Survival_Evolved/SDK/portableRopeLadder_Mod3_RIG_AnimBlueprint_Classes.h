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
	 * AnimBlueprintGeneratedClass portableRopeLadder_Mod3_RIG_AnimBlueprint.portableRopeLadder_Mod3_RIG_AnimBlueprint_C
	 * Size -> 0x0064 (FullSize[0x03A4] - InheritedSize[0x0340])
	 */
	class UportableRopeLadder_Mod3_RIG_AnimBlueprint_C : public UAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root_FC3A7E6D4CDCA6E4F43BDBB928ABA558;     // 0x0340(0x0028)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_08A1C1DE4758EFB05B0E06B40025C264;     // 0x0368(0x0038)
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x03A0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_portableRopeLadder_Mod3_RIG_AnimBlueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
