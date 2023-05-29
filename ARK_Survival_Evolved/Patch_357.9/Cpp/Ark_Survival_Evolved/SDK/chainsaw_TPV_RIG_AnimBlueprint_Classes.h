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
	 * AnimBlueprintGeneratedClass chainsaw_TPV_RIG_AnimBlueprint.chainsaw_TPV_RIG_AnimBlueprint_C
	 * Size -> 0x0079 (FullSize[0x03B9] - InheritedSize[0x0340])
	 */
	class Uchainsaw_TPV_RIG_AnimBlueprint_C : public UAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root_D0F0057140685B9E549E87B17B367567;     // 0x0340(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2377EAC74AD9650E59252BBF0CFA08F9; // 0x0368(0x0030)
		float                                                      AttackPlayRate;                                          // 0x0398(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x039C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FInterpTo_ReturnValue;                          // 0x03A0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FInterpTo_ReturnValue2;                         // 0x03A4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AActor*                                              CallFunc_GetOwningActor_ReturnValue;                     // 0x03A8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AWeapChainSaw_C*                                     K2Node_DynamicCast_AsWeapChainSaw_C;                     // 0x03B0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x03B8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_chainsaw_TPV_RIG_AnimBlueprint_AnimGraphNode_SequencePlayer_4118();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_chainsaw_TPV_RIG_AnimBlueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
