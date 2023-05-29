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
	 * BlueprintGeneratedClass IceJumperProjIceBreath.IceJumperProjIceBreath_C
	 * Size -> 0x0830 (FullSize[0x0E90] - InheritedSize[0x0660])
	 */
	class AIceJumperProjIceBreath_C : public AShooterProjectile
	{
	public:
		class UParticleSystemComponent*                            IceBreath;                                               // 0x0660(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      BeamLength;                                              // 0x0668(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bBeamActive;                                             // 0x066C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_L7NA[0x3];                                   // 0x066D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BeamDamagePerSecond;                                     // 0x0670(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1B74[0x4];                                   // 0x0674(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              BeamDamageType;                                          // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             CurrentStart;                                            // 0x0680(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             CurrentEnd;                                              // 0x068C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DistBetweenFXSpawn;                                      // 0x0698(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FOWT[0x4];                                   // 0x069C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         TargetDistanceToDamageMultiplier;                        // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastEndPointEmitterSpawnTime;                            // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastBeamActiveTime;                                      // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastSpineSpawnTime;                                      // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UParticleSystem*                                     IceBreathImpactEmitter;                                  // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             PrevTargetLagVelocity;                                   // 0x06C8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             PreviousEnd;                                             // 0x06D4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      IceBreathCatchUpSpeed;                                   // 0x06E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J7A3[0x4];                                   // 0x06E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAudioComponent*                                     audio;                                                   // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxAngleOnGround;                                        // 0x06F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      BeamTraceRadius;                                         // 0x06F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                BreathSocket;                                            // 0x06F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bHeadTurningAround;                                      // 0x0700(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GKAE[0x3];                                   // 0x0701(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             PreviousHeadTurningEnd;                                  // 0x0704(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      InterpSpeedOnHeadTurn;                                   // 0x0710(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      IceBreathVFXScaleZ;                                      // 0x0714(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      IceBreathParticleVelocityScaleX;                         // 0x0718(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ShooterCharacterDamageMult;                              // 0x071C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue;                           // 0x0720(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue;                         // 0x0721(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MQFP[0x6];                                   // 0x0722(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AIceJumper_Character_BP_C*                           K2Node_DynamicCast_AsIceJumper_Character_BP_C;           // 0x0728(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x0730(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VL51[0x7];                                   // 0x0731(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue;                        // 0x0738(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		double                                                     CallFunc_GetNetworkTimeInSeconds_ReturnValue;            // 0x0740(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsTimeSince_Network_ReturnValue;                // 0x0748(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J8NN[0x7];                                   // 0x0749(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CallFunc_GetNetworkTimeInSeconds_ReturnValue2;           // 0x0750(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    Temp_int_Loop_Counter_Variable;                          // 0x0758(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue;                         // 0x075C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsTimeSince_Network_ReturnValue2;               // 0x0760(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue2;                        // 0x0761(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_R6AZ[0x6];                                   // 0x0762(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AIceJumper_Character_BP_C*                           K2Node_DynamicCast_AsIceJumper_Character_BP_C2;          // 0x0768(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast2_CastSuccess;                         // 0x0770(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_K0S7[0x3];                                   // 0x0771(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_GetIceBreathRange_Range;                        // 0x0774(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_GetMeleeDamageModifier_ReturnValue;             // 0x0778(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue;                // 0x077C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_GetIceBreathRange_Range2;                       // 0x0780(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Add_FloatFloat_ReturnValue;                     // 0x0784(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsLocallyControlledByPlayer_ReturnValue;        // 0x0788(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NearlyEqual_VectorVector_ReturnValue;           // 0x0789(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x078A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue2;                       // 0x078B(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_GetIceBreathRange_Range3;                       // 0x078C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_SelectRotator_ReturnValue;                      // 0x0790(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_SelectVector_ReturnValue;                       // 0x079C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Conv_RotatorToVector_ReturnValue;               // 0x07A8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Multiply_VectorFloat_ReturnValue;               // 0x07B4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Add_VectorVector_ReturnValue;                   // 0x07C0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9OE3[0x4];                                   // 0x07CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalCharacter*                                    K2Node_DynamicCast_AsPrimalCharacter;                    // 0x07D0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast3_CastSuccess;                         // 0x07D8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3PEO[0x3];                                   // 0x07D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_Get_Normalized_Vector_On_Ice_Jumper_Plane_from_Location_Output; // 0x07DC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetBeamStartEnd_ValidatedStart;                 // 0x07E8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetBeamStartEnd_ValidatedEnd;                   // 0x07F4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_ValidateTick_Result;                            // 0x0800(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DS62[0x7];                                   // 0x0801(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AController*                                         CallFunc_GetController_ReturnValue;                      // 0x0808(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Subtract_VectorVector_ReturnValue;              // 0x0810(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Normal_ReturnValue;                             // 0x081C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_MakeRot_ReturnValue;                            // 0x0828(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_Event_DeltaSeconds;                               // 0x0834(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_AreRotatorsNearlyEqual_ReturnValue;             // 0x0838(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue3;                       // 0x0839(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue3;                        // 0x083A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue;                          // 0x083B(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_GetWorldDeltaSeconds_ReturnValue;               // 0x083C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue4;                        // 0x0840(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		ENetModeBP                                                 CallFunc_SwitchNetworkMode_OutNetworkMode;               // 0x0841(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchEnum_CmpSuccess;                            // 0x0842(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9WX3[0x1];                                   // 0x0843(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             K2Node_CustomEvent_Start;                                // 0x0844(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             K2Node_CustomEvent_End;                                  // 0x0850(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       Temp_bool_True_if_break_was_hit_Variable;                // 0x085C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q7NH[0x3];                                   // 0x085D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             K2Node_CustomEvent_Location;                             // 0x0860(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue4;                       // 0x086C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LJXB[0x3];                                   // 0x086D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_Subtract_VectorVector_ReturnValue2;             // 0x0870(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Normal_ReturnValue2;                            // 0x087C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Subtract_VectorVector_ReturnValue3;             // 0x0888(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Normal_ReturnValue3;                            // 0x0894(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue2;                       // 0x08A0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue;                // 0x08A8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C5T9[0x4];                                   // 0x08B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue3;                       // 0x08B8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Subtract_VectorVector_ReturnValue4;             // 0x08C0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_MakeVector_ReturnValue;                         // 0x08CC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_VSize_ReturnValue;                              // 0x08D8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Multiply_VectorFloat_ReturnValue2;              // 0x08DC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Add_VectorVector_ReturnValue2;                  // 0x08E8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue2;               // 0x08F4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Get_Best_Impact_Location_ImpactLocation;        // 0x0900(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Get_Best_Impact_Location_ImpactNormal;          // 0x090C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Get_Best_Impact_Location_FoundNewimpactLocation; // 0x0918(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1NJ1[0x3];                                   // 0x0919(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_BreakVector_X;                                  // 0x091C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Y;                                  // 0x0920(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Z;                                  // 0x0924(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_Conv_VectorToRotator_ReturnValue;               // 0x0928(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Subtract_VectorVector_ReturnValue5;             // 0x0934(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Pitch;                                 // 0x0940(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Yaw;                                   // 0x0944(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Roll;                                  // 0x0948(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_VSize_ReturnValue2;                             // 0x094C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Add_FloatFloat_ReturnValue2;                    // 0x0950(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Multiply_VectorFloat_ReturnValue3;              // 0x0954(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_MakeRot_ReturnValue2;                           // 0x0960(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Add_VectorVector_ReturnValue3;                  // 0x096C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            CallFunc_SpawnEmitterAtLocation_ReturnValue;             // 0x0978(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AController*                                         CallFunc_GetController_ReturnValue2;                     // 0x0980(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UKAA[0x8];                                   // 0x0988(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct UObject_FTransform                                  CallFunc_GetSocketTransform_ReturnValue;                 // 0x0990(0x0030) Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_BreakTransform_Location;                        // 0x09C0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_BreakTransform_Rotation;                        // 0x09CC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_BreakTransform_Scale;                           // 0x09D8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetActorForwardVector_ReturnValue;              // 0x09E4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Conv_RotatorToVector_ReturnValue2;              // 0x09F0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Multiply_VectorFloat_ReturnValue4;              // 0x09FC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Normal_ReturnValue4;                            // 0x0A08(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Dot_VectorVector_ReturnValue;                   // 0x0A14(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Dot_VectorVector_ReturnValue2;                  // 0x0A18(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Acos_ReturnValue;                               // 0x0A1C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_FloatFloat_ReturnValue;                    // 0x0A20(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_O0YE[0x3];                                   // 0x0A21(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_RadiansToDegrees_ReturnValue;                   // 0x0A24(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Conv_RotatorToVector_ReturnValue3;              // 0x0A28(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetForwardVector_ReturnValue;                   // 0x0A34(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_X2;                                 // 0x0A40(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Y2;                                 // 0x0A44(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Z2;                                 // 0x0A48(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_MakeVector_ReturnValue2;                        // 0x0A4C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		TArray<struct FHitResult>                                  CallFunc_VTraceMultiBP_OutHits;                          // 0x0A58(0x0010) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       CallFunc_VTraceMultiBP_ReturnValue;                      // 0x0A68(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V6D1[0x3];                                   // 0x0A69(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Array_Length_ReturnValue;                       // 0x0A6C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FHitResult                                          CallFunc_Array_Get_Item;                                 // 0x0A70(0x0088) Transient, DuplicateTransient
		bool                                                       CallFunc_Less_IntInt_ReturnValue;                        // 0x0AF8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G0VD[0x3];                                   // 0x0AF9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_BreakHitResult_Location;                        // 0x0AFC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_BreakHitResult_Normal;                          // 0x0B08(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_BreakHitResult_ImpactPoint;                     // 0x0B14(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_BreakHitResult_ImpactNormal;                    // 0x0B20(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QLCF[0x4];                                   // 0x0B2C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPhysicalMaterial*                                   CallFunc_BreakHitResult_PhysMat;                         // 0x0B30(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AActor*                                              CallFunc_BreakHitResult_HitActor;                        // 0x0B38(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UPrimitiveComponent*                                 CallFunc_BreakHitResult_HitComponent;                    // 0x0B40(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class FName                                                CallFunc_BreakHitResult_HitBoneName;                     // 0x0B48(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_BreakHitResult_HitItem;                         // 0x0B50(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BreakHitResult_BlockingHit;                     // 0x0B54(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue5;                        // 0x0B55(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsShooterCharacter_ReturnValue;                 // 0x0B56(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SUAK[0x1];                                   // 0x0B57(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_SelectFloat_ReturnValue;                        // 0x0B58(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue3;               // 0x0B5C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalCharacter*                                    K2Node_DynamicCast_AsPrimalCharacter2;                   // 0x0B68(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast4_CastSuccess;                         // 0x0B70(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JM7Y[0x3];                                   // 0x0B71(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_Subtract_VectorVector_ReturnValue6;             // 0x0B74(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_LineOfSightTo_ReturnValue;                      // 0x0B80(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JADV[0x3];                                   // 0x0B81(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_VSize_ReturnValue3;                             // 0x0B84(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsAlliedWithOtherTeam_ReturnValue;              // 0x0B88(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LGN5[0x7];                                   // 0x0B89(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                CallFunc_Conv_FloatToText_ReturnValue;                   // 0x0B90(0x0018) ELEMENT_SIZE_MISMATCH Transient, DuplicateTransient
		unsigned char                                              UnknownData_ZDQC[0x10];                                  // 0x0BA8(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       CallFunc_Not_PreBool_ReturnValue5;                       // 0x0BB8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UO1U[0x7];                                   // 0x0BB9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFormatTextArgument                                 K2Node_MakeStruct_FormatTextArgument;                    // 0x0BC0(0x0050) Transient, DuplicateTransient
		float                                                      CallFunc_Divide_FloatFloat_ReturnValue;                  // 0x0C10(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_K2_GetActorRotation_ReturnValue;                // 0x0C14(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_GetFloatValue_ReturnValue;                      // 0x0C20(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue4;               // 0x0C24(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue2;               // 0x0C30(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Y5YJ[0x4];                                   // 0x0C34(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            CallFunc_SpawnEmitterAtLocation_ReturnValue2;            // 0x0C38(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue3;               // 0x0C40(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDead_ReturnValue;                             // 0x0C44(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LRB6[0x3];                                   // 0x0C45(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue4;               // 0x0C48(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue6;                       // 0x0C4C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A1C3[0x3];                                   // 0x0C4D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_FMax_ReturnValue;                               // 0x0C50(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NotEqual_ObjectObject_ReturnValue;              // 0x0C54(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8N2Z[0x3];                                   // 0x0C55(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                CallFunc_Conv_FloatToText_ReturnValue2;                  // 0x0C58(0x0018) ELEMENT_SIZE_MISMATCH Transient, DuplicateTransient
		unsigned char                                              UnknownData_R6JJ[0x10];                                  // 0x0C70(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       CallFunc_BooleanAND_ReturnValue6;                        // 0x0C80(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SZ22[0x7];                                   // 0x0C81(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFormatTextArgument                                 K2Node_MakeStruct_FormatTextArgument2;                   // 0x0C88(0x0050) Transient, DuplicateTransient
		bool                                                       CallFunc_BooleanAND_ReturnValue7;                        // 0x0CD8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2OPV[0x7];                                   // 0x0CD9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FFormatTextArgument>                         K2Node_MakeArray_Array;                                  // 0x0CE0(0x0010) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       CallFunc_BooleanAND_ReturnValue8;                        // 0x0CF0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MU4P[0x7];                                   // 0x0CF1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                CallFunc_Format_ReturnValue;                             // 0x0CF8(0x0018) ELEMENT_SIZE_MISMATCH Transient, DuplicateTransient
		unsigned char                                              UnknownData_1ZGP[0x10];                                  // 0x0D10(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FString                                              CallFunc_Conv_TextToString_ReturnValue;                  // 0x0D20(0x0010) ZeroConstructor, Transient, DuplicateTransient
		struct FVector                                             CallFunc_Subtract_VectorVector_ReturnValue7;             // 0x0D30(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Subtract_VectorVector_ReturnValue8;             // 0x0D3C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Normal_ReturnValue5;                            // 0x0D48(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Normal_ReturnValue6;                            // 0x0D54(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_Conv_VectorToRotator_ReturnValue2;              // 0x0D60(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_GetWorldDeltaSeconds_ReturnValue2;              // 0x0D6C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetActorUpVector_ReturnValue;                   // 0x0D70(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue;                 // 0x0D7C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PZC1[0x3];                                   // 0x0D7D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_ProjectVectorOnToPlane_ReturnValue;             // 0x0D80(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue9;                        // 0x0D8C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FVOJ[0x3];                                   // 0x0D8D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_Normal_ReturnValue7;                            // 0x0D90(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Multiply_VectorFloat_ReturnValue5;              // 0x0D9C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Add_VectorVector_ReturnValue4;                  // 0x0DA8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetActorForwardVector_ReturnValue2;             // 0x0DB4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Multiply_VectorFloat_ReturnValue6;              // 0x0DC0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetActorUpVector_ReturnValue2;                  // 0x0DCC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Add_VectorVector_ReturnValue5;                  // 0x0DD8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_ProjectVectorOnToPlane_ReturnValue2;            // 0x0DE4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Normal_ReturnValue8;                            // 0x0DF0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Multiply_VectorFloat_ReturnValue7;              // 0x0DFC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_VInterpTo_Constant_ReturnValue;                 // 0x0E08(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Add_VectorVector_ReturnValue6;                  // 0x0E14(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Subtract_VectorVector_ReturnValue9;             // 0x0E20(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Subtract_VectorVector_ReturnValue10;            // 0x0E2C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Is_Vector_on_RightOf_Forward_Result;            // 0x0E38(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Is_Vector_on_RightOf_Forward_Result2;           // 0x0E39(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NotEqual_BoolBool_ReturnValue;                  // 0x0E3A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_07OC[0x1];                                   // 0x0E3B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_Subtract_VectorVector_ReturnValue11;            // 0x0E3C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_SelectVector_ReturnValue2;                      // 0x0E48(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Normal_ReturnValue9;                            // 0x0E54(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue5;               // 0x0E60(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Subtract_VectorVector_ReturnValue12;            // 0x0E6C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Subtract_VectorVector_ReturnValue13;            // 0x0E78(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_VSize_ReturnValue4;                             // 0x0E84(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_VSize_ReturnValue5;                             // 0x0E88(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_FloatFloat_ReturnValue2;                   // 0x0E8C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_FloatFloat_ReturnValue3;                   // 0x0E8D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue10;                       // 0x0E8E(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue11;                       // 0x0E8F(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void IsVectoronRightOfForward(const struct FVector& TestVector, bool* Result);
		void GetIceBreathInterpSpeed(float* Result);
		void GetNormalizedVectorOnIceJumperPlanefromLocation(const struct FVector& Location, struct FVector* Output);
		void GetBestImpactLocation(const struct FVector& Start, const struct FVector& End, class APrimalCharacter* Rider, struct FVector* ImpactLocation, struct FVector* ImpactNormal, bool* FoundNewimpactLocation);
		void CanCollideWith(class AActor* Actor, bool* Result);
		void ValidateTick(bool* Result);
		void UpdateBeamLength();
		void GetBeamStartEnd(const struct FVector& Start, const struct FVector& End, struct FVector* ValidatedStart, struct FVector* ValidatedEnd);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void EnableBeam();
		void OWNER_DrawDebugLine(const struct FVector& Start, const struct FVector& End);
		void OWNER_DrawDebugSphere(const struct FVector& Location);
		void ExecuteUbergraph_IceJumperProjIceBreath(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
