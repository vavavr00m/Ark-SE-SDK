﻿#pragma once

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
	 * AnimBlueprintGeneratedClass SK_CruiseMissile_RIG_AnimBlueprint.SK_CruiseMissile_RIG_AnimBlueprint_C
	 * Size -> 0x0188 (FullSize[0x04C8] - InheritedSize[0x0340])
	 */
	class USK_CruiseMissile_RIG_AnimBlueprint_C : public UAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root_976FE30A4213CEE0F80C088365539396;     // 0x0340(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_143813B843E177C0FE9380B7337CF794; // 0x0368(0x0018)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_91EABF114AB994646C3C3CAB4D36B9B6; // 0x0380(0x0018)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_664783D74749E876C3B325B218F8190F; // 0x0398(0x0030)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_3ACC73CF4AC9E58D4786C082E65F1E2B; // 0x03C8(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5C0B2A214E0FF44E938C68A687D82A89; // 0x03F0(0x0030)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_3C1DA14D48BA57F2B393FB9D5373DA93; // 0x0420(0x0028)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2CA1FBC347DA11505ADC58B23195596D; // 0x0448(0x0060)
		bool                                                       starteddeploying;                                        // 0x04A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MGPA[0x7];                                   // 0x04A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APawn*                                               CallFunc_TryGetPawnOwner_ReturnValue;                    // 0x04B0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class ATekCruiseMissile_Character_BP_C*                    K2Node_DynamicCast_AsTekCruiseMissile_Character_BP_C;    // 0x04B8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x04C0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x04C1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VIGB[0x2];                                   // 0x04C2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x04C4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CruiseMissile_RIG_AnimBlueprint_AnimGraphNode_TransitionResult_3026();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CruiseMissile_RIG_AnimBlueprint_AnimGraphNode_TransitionResult_3025();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_SK_CruiseMissile_RIG_AnimBlueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
