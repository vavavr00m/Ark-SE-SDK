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
	 * AnimBlueprintGeneratedClass turret_rig_AnimBlueprint.turret_rig_AnimBlueprint_C
	 * Size -> 0x01D8 (FullSize[0x0518] - InheritedSize[0x0340])
	 */
	class Uturret_rig_AnimBlueprint_C : public UAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root_97ADCB9A41ED48AA62925F936A28B534;     // 0x0340(0x0028)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_0971199F4C45A79156D6C6BEBFA5CDC5; // 0x0368(0x0028)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_D7DF9AD84F4A7E0E6AC42C84513AA951; // 0x0390(0x00B0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_6336BE7E4627EBDA59DC77B2EFC754F3; // 0x0440(0x00B0)
		struct FRotator                                            TurretAimRotOffset;                                      // 0x04F0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ILZC[0x4];                                   // 0x04FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              CallFunc_GetOwningActor_ReturnValue;                     // 0x0500(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalStructureTurret*                              K2Node_DynamicCast_AsPrimalStructureTurret;              // 0x0508(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x0510(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SZB1[0x3];                                   // 0x0511(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x0514(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_turret_rig_AnimBlueprint_AnimGraphNode_ModifyBone_636();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_turret_rig_AnimBlueprint_AnimGraphNode_ModifyBone_635();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_turret_rig_AnimBlueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
