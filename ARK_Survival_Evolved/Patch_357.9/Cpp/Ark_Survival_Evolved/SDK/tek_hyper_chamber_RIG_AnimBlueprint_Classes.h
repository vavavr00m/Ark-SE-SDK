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
	 * AnimBlueprintGeneratedClass tek_hyper_chamber_RIG_AnimBlueprint.tek_hyper_chamber_RIG_AnimBlueprint_C
	 * Size -> 0x0110 (FullSize[0x0450] - InheritedSize[0x0340])
	 */
	class Utek_hyper_chamber_RIG_AnimBlueprint_C : public UAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root_A89EC9134F0A05E1E98792859CD272FD;     // 0x0340(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_DD2BA2F542E72D91C626B3953181D679; // 0x0368(0x0060)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_1FA3311449EEDD6459E621A26B618897; // 0x03C8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_BEC569BF42F50B587E70FCBD077E8BBC; // 0x03F8(0x0030)
		bool                                                       bIsActive;                                               // 0x0428(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4UXZ[0x7];                                   // 0x0429(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              CallFunc_GetOwningComponent_ReturnValue;                 // 0x0430(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AActor*                                              CallFunc_GetOwner_ReturnValue;                           // 0x0438(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalStructureSeating*                             K2Node_DynamicCast_AsPrimalStructureSeating;             // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x0448(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue;                            // 0x0449(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_79A2[0x2];                                   // 0x044A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x044C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_tek_hyper_chamber_RIG_AnimBlueprint_AnimGraphNode_BlendListByBool_2928();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_tek_hyper_chamber_RIG_AnimBlueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
