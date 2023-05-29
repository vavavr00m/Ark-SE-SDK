﻿#pragma once

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
	 * AnimBlueprintGeneratedClass FPVGrenadeWeaponAnimBP_Base.FPVGrenadeWeaponAnimBP_Base_C
	 * Size -> 0x03D9 (FullSize[0x0719] - InheritedSize[0x0340])
	 */
	class UFPVGrenadeWeaponAnimBP_Base_C : public UAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root_0D3CF8AB438CF6126D5A70AB69D024DE;     // 0x0340(0x0028)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_B206C34648D7B3DF25DBF4A0BB87B0CC;     // 0x0368(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8675460947DA1BD805F667AEFBA16B05; // 0x03A0(0x0018)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_1BD0E40E4257F4C4FF89738069785D32; // 0x03B8(0x0018)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_712AF3BA4419DF3EE67540ABF25E35E3; // 0x03D0(0x0018)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_92507CBE477D195D755C0DAEA751B535; // 0x03E8(0x0018)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_911F953E420F53C8A0E0A8A12EE839EE; // 0x0400(0x0018)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_F2B4E4444691477469F152B08D81BC45; // 0x0418(0x0018)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_A3210B25477D0A20428B45BD2E4ECBAA; // 0x0430(0x0018)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_D259CF964DFA27654346779CB890D548; // 0x0448(0x0018)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7692159645FE59473A9DADAB125361C7; // 0x0460(0x0018)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_E514FF044D4D9E6571BAFAA6D1003209; // 0x0478(0x0030)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_157B5D9840BFB0DB9401488A77C20C25; // 0x04A8(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_40FADBA7497ED0AAAAABDFBDABB9FCBA; // 0x04D0(0x0030)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_52B4BA2F4E4630537D2053B5F150F2AE; // 0x0500(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_B4EE986D46B22ABA5A4919A36CB0E407; // 0x0528(0x0030)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_AF7BF12549971D6FF288BAA8A3B1F5CB; // 0x0558(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5E81C8A146DC2502360915824F86EC9A; // 0x0580(0x0030)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_2EF39194482EC3340C9705B9B6B82403; // 0x05B0(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_D6BDE35D4736904AA8A240BF49BB6EAC; // 0x05D8(0x0030)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_86852191454A6F2F0E918CAF18BB0E80; // 0x0608(0x0028)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_5A8B1FA247EB3F72FD48D186C1807F2E; // 0x0630(0x0060)
		bool                                                       IsRunning;                                               // 0x0690(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsMoving;                                                // 0x0691(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsCooking;                                               // 0x0692(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BH51[0x1];                                   // 0x0693(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CookingTime;                                             // 0x0694(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CallFunc_GetAnimAssetPlayerTimeFromEndFraction_ReturnValue; // 0x0698(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_FloatFloat_ReturnValue;                    // 0x069C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x069D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue;                         // 0x069E(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue2;                       // 0x069F(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue;                 // 0x06A0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue2;                        // 0x06A1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue3;                       // 0x06A2(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue4;                       // 0x06A3(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue5;                       // 0x06A4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue3;                        // 0x06A5(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue4;                        // 0x06A6(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue6;                       // 0x06A7(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue;                          // 0x06A8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8I4Y[0x3];                                   // 0x06A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x06AC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AActor*                                              CallFunc_GetOwningActor_ReturnValue;                     // 0x06B0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterWeapon*                                      K2Node_DynamicCast_AsShooterWeapon;                      // 0x06B8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x06C0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_46CT[0x7];                                   // 0x06C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalWeaponGrenade*                                K2Node_DynamicCast_AsPrimalWeaponGrenade;                // 0x06C8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast2_CastSuccess;                         // 0x06D0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OZ90[0x7];                                   // 0x06D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterCharacter*                                   CallFunc_GetPawnOwner_ReturnValue;                       // 0x06D8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterCharacter*                                   K2Node_DynamicCast_AsShooterCharacter;                   // 0x06E0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast3_CastSuccess;                         // 0x06E8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_M24D[0x3];                                   // 0x06E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_GetVelocity_ReturnValue;                        // 0x06EC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue7;                       // 0x06F8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7NWM[0x3];                                   // 0x06F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_BreakVector_X;                                  // 0x06FC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Y;                                  // 0x0700(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Z;                                  // 0x0704(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector2D                                           CallFunc_MakeVector2D_ReturnValue;                       // 0x0708(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsRunning_ReturnValue;                          // 0x0710(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OHTM[0x3];                                   // 0x0711(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_VSize2D_ReturnValue;                            // 0x0714(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue2;                // 0x0718(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVGrenadeWeaponAnimBP_Base_AnimGraphNode_TransitionResult_54();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVGrenadeWeaponAnimBP_Base_AnimGraphNode_TransitionResult_53();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVGrenadeWeaponAnimBP_Base_AnimGraphNode_TransitionResult_52();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVGrenadeWeaponAnimBP_Base_AnimGraphNode_TransitionResult_51();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVGrenadeWeaponAnimBP_Base_AnimGraphNode_TransitionResult_50();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVGrenadeWeaponAnimBP_Base_AnimGraphNode_TransitionResult_49();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVGrenadeWeaponAnimBP_Base_AnimGraphNode_TransitionResult_48();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVGrenadeWeaponAnimBP_Base_AnimGraphNode_TransitionResult_47();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVGrenadeWeaponAnimBP_Base_AnimGraphNode_TransitionResult_46();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_FPVGrenadeWeaponAnimBP_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
