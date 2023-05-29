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
	 * AnimBlueprintGeneratedClass Tek_Generator_RIG_AnimBP.Tek_Generator_RIG_AnimBP_C
	 * Size -> 0x0110 (FullSize[0x0450] - InheritedSize[0x0340])
	 */
	class UTek_Generator_RIG_AnimBP_C : public UAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root_4CC475E441381CCF5643A397341A4C18;     // 0x0340(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_FF256B734C47B743B56CD0B4689A15C0; // 0x0368(0x0060)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_C66F9CE945C454929FECBDB317FF58A3; // 0x03C8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5FADAE6B4263EECA846CEBB16B33B7CF; // 0x03F8(0x0030)
		bool                                                       bIsActive;                                               // 0x0428(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LE45[0x7];                                   // 0x0429(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              CallFunc_GetOwningComponent_ReturnValue;                 // 0x0430(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AActor*                                              CallFunc_GetOwner_ReturnValue;                           // 0x0438(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalStructureItemContainer*                       K2Node_DynamicCast_AsPrimalStructureItemContainer;       // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x0448(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7OFI[0x3];                                   // 0x0449(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x044C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Tek_Generator_RIG_AnimBP_AnimGraphNode_BlendListByBool_2818();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_Tek_Generator_RIG_AnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
