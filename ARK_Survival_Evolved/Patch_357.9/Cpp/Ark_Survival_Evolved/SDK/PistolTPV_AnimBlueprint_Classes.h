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
	 * AnimBlueprintGeneratedClass PistolTPV_AnimBlueprint.PistolTPV_AnimBlueprint_C
	 * Size -> 0x0064 (FullSize[0x03A4] - InheritedSize[0x0340])
	 */
	class UPistolTPV_AnimBlueprint_C : public UAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root_C80B94E24D9DD0BB025479834142DE11;     // 0x0340(0x0028)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_C4B7107C4E2E71E54748C1BA555D75CA;     // 0x0368(0x0038)
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x03A0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_PistolTPV_AnimBlueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
