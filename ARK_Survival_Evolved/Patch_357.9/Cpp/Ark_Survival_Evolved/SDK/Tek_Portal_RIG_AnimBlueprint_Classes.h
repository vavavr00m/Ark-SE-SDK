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
	 * AnimBlueprintGeneratedClass Tek_Portal_RIG_AnimBlueprint.Tek_Portal_RIG_AnimBlueprint_C
	 * Size -> 0x0110 (FullSize[0x0450] - InheritedSize[0x0340])
	 */
	class UTek_Portal_RIG_AnimBlueprint_C : public UAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root_9DBE49DD450CD76F514CEC84DF6A444B;     // 0x0340(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_67BEDF3C4AE0B7AA7AE7CA9B136D89C8; // 0x0368(0x0060)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_CBEF771F40DAC0B3D12E6EA2EC502EAA; // 0x03C8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_12EEA63846E12D1940BA7D8C1D06D538; // 0x03F8(0x0030)
		bool                                                       bIsActive;                                               // 0x0428(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_P17R[0x7];                                   // 0x0429(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              CallFunc_GetOwningComponent_ReturnValue;                 // 0x0430(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AActor*                                              CallFunc_GetOwner_ReturnValue;                           // 0x0438(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalStructureItemContainer*                       K2Node_DynamicCast_AsPrimalStructureItemContainer;       // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x0448(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JMX3[0x3];                                   // 0x0449(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x044C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Tek_Portal_RIG_AnimBlueprint_AnimGraphNode_BlendListByBool_2932();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_Tek_Portal_RIG_AnimBlueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
