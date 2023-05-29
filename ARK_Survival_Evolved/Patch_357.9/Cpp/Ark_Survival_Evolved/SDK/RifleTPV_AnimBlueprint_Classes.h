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
	 * AnimBlueprintGeneratedClass RifleTPV_AnimBlueprint.RifleTPV_AnimBlueprint_C
	 * Size -> 0x0064 (FullSize[0x03A4] - InheritedSize[0x0340])
	 */
	class URifleTPV_AnimBlueprint_C : public UAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root_1C306F6C40F8D97CBCF5E6B607C5BA33;     // 0x0340(0x0028)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_3F1FD8164408592CBCE8E79B752685E5;     // 0x0368(0x0038)
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x03A0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_RifleTPV_AnimBlueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
