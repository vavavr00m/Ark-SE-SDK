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
	 * AnimBlueprintGeneratedClass portableRopeLadder_Mod2_RIG_AnimBlueprint.portableRopeLadder_Mod2_RIG_AnimBlueprint_C
	 * Size -> 0x0178 (FullSize[0x04B8] - InheritedSize[0x0340])
	 */
	class UportableRopeLadder_Mod2_RIG_AnimBlueprint_C : public UAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root_71AB55C348177F4F08E728985C7792EC;     // 0x0340(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4CFE880F4680D0F918AF2AA4BC2E08E2; // 0x0368(0x0030)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_06C7B0D5422A61F77F5D49804C71FE6A; // 0x0398(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_36F608E74EA4B48AED1CC290CBA12744; // 0x03C0(0x0030)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_3B37A44C4BC206A90A7228835BAD00EC; // 0x03F0(0x0028)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2E3ECAE6478D60F3FCE50AA49AA1EA53; // 0x0418(0x0060)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_4FC6D756480CFBADE3E1948AA6F9FF28;     // 0x0478(0x0038)
		bool                                                       bIsRetracted;                                            // 0x04B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6Q26[0x3];                                   // 0x04B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x04B4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_portableRopeLadder_Mod2_RIG_AnimBlueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
