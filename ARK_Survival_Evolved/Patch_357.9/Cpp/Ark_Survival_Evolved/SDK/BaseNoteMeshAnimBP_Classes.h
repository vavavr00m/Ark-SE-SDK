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
	 * AnimBlueprintGeneratedClass BaseNoteMeshAnimBP.BaseNoteMeshAnimBP_C
	 * Size -> 0x021C (FullSize[0x055C] - InheritedSize[0x0340])
	 */
	class UBaseNoteMeshAnimBP_C : public UAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root_BB430FF34E27A2A408537DA5C70EF3CE;     // 0x0340(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_E0B3D8864861E3A72BFECEAAC0C96898; // 0x0368(0x0018)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9560BA0F4AB7265CCD47E9850C12815E; // 0x0380(0x0018)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_E78474224DADFA75DA9EEEB85881A02E; // 0x0398(0x0030)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_72D9E2A84787E26663FB37A1B28973DF; // 0x03C8(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7AB8197743067507F0B4C2A00905C7D5; // 0x03F0(0x0030)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_A764C9D547700928AA11728FCFAAE3E1; // 0x0420(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7DCDA5CC4A737258D9F64A93A6899F22; // 0x0448(0x0030)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_BEC211B64EEE1FC75C0B96AC00D1C564; // 0x0478(0x0028)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_DAF5E144422BE9263FF0BFAFBDDBFDF8; // 0x04A0(0x0060)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_9C7C2F9E4BD57E22337C768D811E1E3C;     // 0x0500(0x0038)
		class UAnimMontage*                                        CloseAnim;                                               // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TimeToExitOpeningStateOverride;                          // 0x0540(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsOpening;                                              // 0x0544(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_FloatFloat_ReturnValue;              // 0x0545(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue;                 // 0x0546(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x0547(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_GetAnimAssetPlayerTimeFromEnd_ReturnValue;      // 0x0548(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_GetCurrentStateElapsedTime_ReturnValue;         // 0x054C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_FloatFloat_ReturnValue;                    // 0x0550(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue2;                // 0x0551(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue;                         // 0x0552(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue2;                        // 0x0553(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue;                          // 0x0554(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0UP8[0x3];                                   // 0x0555(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x0558(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void BlueprintTriggerAnimationEvent(const class FName& AnimationEventName, float* playedAnimLength);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseNoteMeshAnimBP_AnimGraphNode_TransitionResult_3444();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseNoteMeshAnimBP_AnimGraphNode_TransitionResult_3443();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_BaseNoteMeshAnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
