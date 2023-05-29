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
	 * BlueprintGeneratedClass Sarco_Character_BP.Sarco_Character_BP_C
	 * Size -> 0x04E7 (FullSize[0x276F] - InheritedSize[0x2288])
	 */
	class ASarco_Character_BP_C : public ADino_Character_BP_C
	{
	public:
		class UDinoCharacterStatusComponent_BP_Sarco_C*            DinoCharacterStatus_BP_Sarco_C1;                         // 0x2288(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FRotator                                            TargetRotation;                                          // 0x2290(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RotationRateModifier;                                    // 0x229C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FrightenRadius;                                          // 0x22A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      NextFrighten;                                            // 0x22A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       JumpDown;                                                // 0x22A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ED0J[0x3];                                   // 0x22A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TargetRotationRate;                                      // 0x22AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AActor*                                              LungeTarget;                                             // 0x22B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxLungeXVelocity;                                       // 0x22B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxLungeZVelocity;                                       // 0x22BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CrosshairCharTraceLength;                                // 0x22C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    Temp_int_Loop_Counter_Variable;                          // 0x22C4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue;                // 0x22C8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue;                         // 0x22CC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    Temp_int_Loop_Counter_Variable2;                         // 0x22D0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue2;                        // 0x22D4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsLocallyControlled_ReturnValue;                // 0x22D8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FYH9[0x3];                                   // 0x22D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            CallFunc_GetControlRotation_ReturnValue;                 // 0x22DC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Pitch;                                 // 0x22E8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Yaw;                                   // 0x22EC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Roll;                                  // 0x22F0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_MakeRot_ReturnValue;                            // 0x22F4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_GetWorldDeltaSeconds_ReturnValue;               // 0x2300(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_K2_GetActorRotation_ReturnValue;                // 0x2304(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue2;               // 0x2310(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_RLerp_ReturnValue;                              // 0x2314(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_SetActorRotation_ReturnValue;                   // 0x2320(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0TXK[0x3];                                   // 0x2321(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            CallFunc_NormalizedDeltaRotator_ReturnValue;             // 0x2324(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Pitch2;                                // 0x2330(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Yaw2;                                  // 0x2334(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Roll2;                                 // 0x2338(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Abs_ReturnValue;                                // 0x233C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AActor*                                              K2Node_CustomEvent_LungeTarget;                          // 0x2340(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_CustomEvent_Direction;                            // 0x2348(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue;                 // 0x234C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OFTG[0x3];                                   // 0x234D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            CallFunc_MakeRot_ReturnValue2;                           // 0x2350(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue;                // 0x235C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_GetControlRotation_ReturnValue2;                // 0x2368(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_CanAttack_ReturnValue;                          // 0x2374(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A5S2[0x3];                                   // 0x2375(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_BreakRot_Pitch3;                                // 0x2378(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Yaw3;                                  // 0x237C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Roll3;                                 // 0x2380(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_MakeRot_ReturnValue3;                           // 0x2384(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_DoAttack_ReturnValue;                           // 0x2390(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsLocallyControlled_ReturnValue2;               // 0x2391(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue;                           // 0x2392(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NotEqual_ByteByte_ReturnValue;                  // 0x2393(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_GetControlRotation_ReturnValue3;                // 0x2394(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       Temp_bool_True_if_break_was_hit_Variable;                // 0x23A0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z4HV[0x3];                                   // 0x23A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_BreakRot_Pitch4;                                // 0x23A4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Yaw4;                                  // 0x23A8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Roll4;                                 // 0x23AC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_MakeRot_ReturnValue4;                           // 0x23B0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x23BC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2Y1B[0x3];                                   // 0x23BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AController*                                         CallFunc_GetController_ReturnValue;                      // 0x23C0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APlayerController*                                   K2Node_DynamicCast_AsPlayerController;                   // 0x23C8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x23D0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FVPD[0x3];                                   // 0x23D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            CallFunc_GetControlRotation_ReturnValue4;                // 0x23D4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetForwardVector_ReturnValue;                   // 0x23E0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetCameraLocation_ReturnValue;                  // 0x23EC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue;                        // 0x23F8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_MakeVector_ReturnValue;                         // 0x2400(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue;                            // 0x240C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YP0A[0x3];                                   // 0x240D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue2;                       // 0x2410(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue2;                       // 0x2418(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VV0S[0x3];                                   // 0x2419(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_GetActorForwardVector_ReturnValue;              // 0x241C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Dot_VectorVector_ReturnValue;                   // 0x2428(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue2;                           // 0x242C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue2;                // 0x242D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MYSM[0x2];                                   // 0x242E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            CallFunc_GetControlRotation_ReturnValue5;                // 0x2430(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetForwardVector_ReturnValue2;                  // 0x243C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue2;               // 0x2448(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue3;               // 0x2454(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Subtract_VectorVector_ReturnValue;              // 0x2460(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Subtract_VectorVector_ReturnValue2;             // 0x246C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Dot_VectorVector_ReturnValue2;                  // 0x2478(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_VSize_ReturnValue;                              // 0x247C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Multiply_VectorFloat_ReturnValue;               // 0x2480(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_FloatFloat_ReturnValue;                    // 0x248C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MROJ[0x3];                                   // 0x248D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_Add_VectorVector_ReturnValue;                   // 0x2490(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue4;               // 0x249C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue2;                          // 0x24A8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XY8F[0x7];                                   // 0x24A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EObjectTypeQuery>                                   K2Node_MakeArray_Array;                                  // 0x24B0(0x0010) ZeroConstructor, Transient, DuplicateTransient
		struct FRotator                                            CallFunc_K2_GetActorRotation_ReturnValue2;               // 0x24C0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_K2_GetActorRotation_ReturnValue3;               // 0x24CC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GreaterGreater_VectorRotator_ReturnValue;       // 0x24D8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GreaterGreater_VectorRotator_ReturnValue2;      // 0x24E4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Add_VectorVector_ReturnValue2;                  // 0x24F0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Add_VectorVector_ReturnValue3;                  // 0x24FC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		TArray<class AActor*>                                      CallFunc_SphereTraceMultiForObjects_ActorsToIgnore_RefProperty; // 0x2508(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm
		TArray<struct FHitResult>                                  CallFunc_SphereTraceMultiForObjects_OutHits;             // 0x2518(0x0010) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       CallFunc_SphereTraceMultiForObjects_ReturnValue;         // 0x2528(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6H91[0x3];                                   // 0x2529(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            CallFunc_K2_GetActorRotation_ReturnValue4;               // 0x252C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Array_Length_ReturnValue;                       // 0x2538(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetRightVector_ReturnValue;                     // 0x253C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_IntInt_ReturnValue;                        // 0x2548(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AYGL[0x3];                                   // 0x2549(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_Multiply_VectorFloat_ReturnValue2;              // 0x254C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Add_VectorVector_ReturnValue4;                  // 0x2558(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VAYB[0x4];                                   // 0x2564(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHitResult                                          CallFunc_Array_Get_Item;                                 // 0x2568(0x0088) Transient, DuplicateTransient
		struct FVector                                             CallFunc_BreakHitResult_Location;                        // 0x25F0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_BreakHitResult_Normal;                          // 0x25FC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_BreakHitResult_ImpactPoint;                     // 0x2608(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_BreakHitResult_ImpactNormal;                    // 0x2614(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UPhysicalMaterial*                                   CallFunc_BreakHitResult_PhysMat;                         // 0x2620(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AActor*                                              CallFunc_BreakHitResult_HitActor;                        // 0x2628(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UPrimitiveComponent*                                 CallFunc_BreakHitResult_HitComponent;                    // 0x2630(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class FName                                                CallFunc_BreakHitResult_HitBoneName;                     // 0x2638(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_BreakHitResult_HitItem;                         // 0x2640(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BreakHitResult_BlockingHit;                     // 0x2644(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3FSC[0x3];                                   // 0x2645(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_Multiply_VectorFloat_ReturnValue3;              // 0x2648(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZN1M[0x4];                                   // 0x2654(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalCharacter*                                    K2Node_DynamicCast_AsPrimalCharacter;                    // 0x2658(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast2_CastSuccess;                         // 0x2660(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Y5AO[0x3];                                   // 0x2661(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_Add_VectorVector_ReturnValue5;                  // 0x2664(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		TArray<struct FHitResult>                                  CallFunc_VTraceMultiBP_OutHits;                          // 0x2670(0x0010) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       CallFunc_VTraceMultiBP_ReturnValue;                      // 0x2680(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FLFE[0x7];                                   // 0x2681(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHitResult                                          CallFunc_Array_Get_Item2;                                // 0x2688(0x0088) Transient, DuplicateTransient
		struct FVector                                             CallFunc_BreakHitResult_Location2;                       // 0x2710(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_BreakHitResult_Normal2;                         // 0x271C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_BreakHitResult_ImpactPoint2;                    // 0x2728(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_BreakHitResult_ImpactNormal2;                   // 0x2734(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UPhysicalMaterial*                                   CallFunc_BreakHitResult_PhysMat2;                        // 0x2740(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AActor*                                              CallFunc_BreakHitResult_HitActor2;                       // 0x2748(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UPrimitiveComponent*                                 CallFunc_BreakHitResult_HitComponent2;                   // 0x2750(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class FName                                                CallFunc_BreakHitResult_HitBoneName2;                    // 0x2758(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_BreakHitResult_HitItem2;                        // 0x2760(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BreakHitResult_BlockingHit2;                    // 0x2764(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NS0Z[0x3];                                   // 0x2765(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Array_Length_ReturnValue2;                      // 0x2768(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsPrimalCharacter_ReturnValue;                  // 0x276C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_IntInt_ReturnValue2;                       // 0x276D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue;                         // 0x276E(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		bool BPCanBeBaseForCharacter(class APawn* Pawn);
		float BPGetGravityZScale();
		void TriggerLungeImpulse();
		void K2_OnMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode);
		void BPNotifyBumpedPawn(class APrimalCharacter* BumpedPawn);
		struct FVector BPOverrideCharacterNewFallVelocity(struct FVector* InitialVelocity, struct FVector* Gravity, float DeltaTime);
		float BPGetCrosshairAlpha();
		bool BPAllowCarryCharacter(class APrimalCharacter* checkCharacter);
		void ComputeAllowCarry(class APrimalCharacter* Target, bool* Allow);
		float BP_GetCustomModifier_RotationRate();
		int32_t BPAdjustAttackIndex(int32_t AttackIndex);
		void ComputeAttackIndex(int32_t AttackIndexIn, int32_t* AttackIndexOut);
		void UserConstructionScript();
		void InpActEvt_Crouch_K2Node_InputActionEvent_77();
		void InpActEvt_Crouch_K2Node_InputActionEvent_76();
		void AnimNotify_TurnForAttack();
		void RotateAttack();
		void AnimNotify_AttackTurnFinished();
		void AnimNotify_Lunge();
		void RequestLunge(class AActor* LungeTarget, float Direction);
		void UpdateCrosshair();
		void AnimNotify_Roll();
		void ExecuteUbergraph_Sarco_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
