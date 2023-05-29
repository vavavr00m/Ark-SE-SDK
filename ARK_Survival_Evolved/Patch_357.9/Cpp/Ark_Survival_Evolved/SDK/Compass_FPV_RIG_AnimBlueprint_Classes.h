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
	 * AnimBlueprintGeneratedClass Compass_FPV_RIG_AnimBlueprint.Compass_FPV_RIG_AnimBlueprint_C
	 * Size -> 0x0168 (FullSize[0x04A8] - InheritedSize[0x0340])
	 */
	class UCompass_FPV_RIG_AnimBlueprint_C : public UAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root_E85AD4B64BD5BC39313A5B887860BB39;     // 0x0340(0x0028)
		unsigned char                                              UnknownData_D3OF[0x8];                                   // 0x0368(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_759C5DD74CA12F5CA286C4B48616C589; // 0x0370(0x00B0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_F51D9E34412983B9D8EEADA7D17930EE; // 0x0420(0x0028)
		struct FAnimNode_MeshSpaceRefPose                          AnimGraphNode_MeshRefPose_2CD03C0B4E0F0626011A1E9549701789; // 0x0448(0x0010)
		struct FRotator                                            CompassIndicatorRotation;                                // 0x0458(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q60Z[0x4];                                   // 0x0464(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              CallFunc_GetOwningActor_ReturnValue;                     // 0x0468(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalWeaponGPS*                                    K2Node_DynamicCast_AsPrimalWeaponGPS;                    // 0x0470(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x0478(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V9ID[0x3];                                   // 0x0479(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue;                // 0x047C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Pitch;                                 // 0x0480(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Yaw;                                   // 0x0484(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Roll;                                  // 0x0488(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue2;               // 0x048C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue3;               // 0x0490(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Add_FloatFloat_ReturnValue;                     // 0x0494(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_MakeRot_ReturnValue;                            // 0x0498(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x04A4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Compass_FPV_RIG_AnimBlueprint_AnimGraphNode_ModifyBone_500();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_Compass_FPV_RIG_AnimBlueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
