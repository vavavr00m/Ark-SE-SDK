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
	 * AnimBlueprintGeneratedClass whip_TPV_RIG_AnimBlueprint.whip_TPV_RIG_AnimBlueprint_C
	 * Size -> 0x0094 (FullSize[0x03D4] - InheritedSize[0x0340])
	 */
	class Uwhip_TPV_RIG_AnimBlueprint_C : public UAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root_68016FA2492144DE9981EEBC5EE48D48;     // 0x0340(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6A0D8DBE4DE4B2BF540627918F3A335D; // 0x0368(0x0030)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_8494C2204511AE29D4DBA9862E5AC296;     // 0x0398(0x0038)
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x03D0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_whip_TPV_RIG_AnimBlueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
