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
	 * BlueprintGeneratedClass WeapEmptyCryopod.WeapEmptyCryopod_C
	 * Size -> 0x0728 (FullSize[0x15C8] - InheritedSize[0x0EA0])
	 */
	class AWeapEmptyCryopod_C : public APrimalWeaponGrenade
	{
	public:
		class UAudioComponent*                                     CatchingSFX;                                             // 0x0EA0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            FX_Captured_1P;                                          // 0x0EA8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            FX_CryoPod_1P;                                           // 0x0EB0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            FX_Captured_3P;                                          // 0x0EB8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            FX_CryoPod_3P;                                           // 0x0EC0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                Cryopod3P;                                               // 0x0EC8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                Cryopod1P;                                               // 0x0ED0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Capturing;                                               // 0x0ED8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_B8HP[0x7];                                   // 0x0ED9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalDinoCharacter*                                CapturingDino;                                           // 0x0EE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     StartedCapturing;                                        // 0x0EE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            CaptureFX;                                               // 0x0EF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      NewVar;                                                  // 0x0EF8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NIDQ[0x4];                                   // 0x0EFC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              NeuteredString;                                          // 0x0F00(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              GenderString;                                            // 0x0F10(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UPrimalGameData*                                     CallFunc_BPGetGameData_ReturnValue;                      // 0x0F20(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AActor*                                              CallFunc_GetOwner_ReturnValue;                           // 0x0F28(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		TArray<class AActor*>                                      K2Node_MakeArray_Array;                                  // 0x0F30(0x0010) ZeroConstructor, Transient, DuplicateTransient
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue;                // 0x0F40(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0E70[0x4];                                   // 0x0F4C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              CallFunc_GetOwner_ReturnValue2;                          // 0x0F50(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Add_VectorVector_ReturnValue;                   // 0x0F58(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GKXN[0x4];                                   // 0x0F64(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      K2Node_MakeArray_Array2;                                 // 0x0F68(0x0010) ZeroConstructor, Transient, DuplicateTransient
		class AShooterCharacter*                                   K2Node_DynamicCast_AsShooterCharacter;                   // 0x0F78(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x0F80(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EQIG[0x3];                                   // 0x0F81(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue2;               // 0x0F84(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_GetControlRotation_ReturnValue;                 // 0x0F90(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Add_VectorVector_ReturnValue2;                  // 0x0F9C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetForwardVector_ReturnValue;                   // 0x0FA8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Multiply_VectorFloat_ReturnValue;               // 0x0FB4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterCharacter*                                   K2Node_DynamicCast_AsShooterCharacter2;                  // 0x0FC0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast2_CastSuccess;                         // 0x0FC8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_N9CB[0x3];                                   // 0x0FC9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_Add_VectorVector_ReturnValue3;                  // 0x0FCC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AController*                                         CallFunc_GetController_ReturnValue;                      // 0x0FD8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FHitResult                                          CallFunc_SphereTraceSingle_NEW_OutHit;                   // 0x0FE0(0x0088) Transient, DuplicateTransient
		bool                                                       CallFunc_SphereTraceSingle_NEW_ReturnValue;              // 0x1068(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_85KE[0x7];                                   // 0x1069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterPlayerController*                            K2Node_DynamicCast_AsShooterPlayerController;            // 0x1070(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast3_CastSuccess;                         // 0x1078(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5V0U[0x3];                                   // 0x1079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_BreakHitResult_Location;                        // 0x107C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_BreakHitResult_Normal;                          // 0x1088(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_BreakHitResult_ImpactPoint;                     // 0x1094(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_BreakHitResult_ImpactNormal;                    // 0x10A0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IW9G[0x4];                                   // 0x10AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPhysicalMaterial*                                   CallFunc_BreakHitResult_PhysMat;                         // 0x10B0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AActor*                                              CallFunc_BreakHitResult_HitActor;                        // 0x10B8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UPrimitiveComponent*                                 CallFunc_BreakHitResult_HitComponent;                    // 0x10C0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class FName                                                CallFunc_BreakHitResult_HitBoneName;                     // 0x10C8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_BreakHitResult_HitItem;                         // 0x10D0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BreakHitResult_BlockingHit;                     // 0x10D4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YWZC[0x3];                                   // 0x10D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            CallFunc_GetControlRotation_ReturnValue2;                // 0x10D8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_79C3[0x4];                                   // 0x10E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalDinoCharacter*                                K2Node_DynamicCast_AsPrimalDinoCharacter;                // 0x10E8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast4_CastSuccess;                         // 0x10F0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J6E9[0x3];                                   // 0x10F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_GetForwardVector_ReturnValue2;                  // 0x10F4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_CanCapture_Capture;                             // 0x1100(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_O432[0x3];                                   // 0x1101(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_Multiply_VectorFloat_ReturnValue2;              // 0x1104(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Add_VectorVector_ReturnValue4;                  // 0x1110(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CPON[0x4];                                   // 0x111C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHitResult                                          CallFunc_SphereTraceSingle_NEW_OutHit2;                  // 0x1120(0x0088) Transient, DuplicateTransient
		bool                                                       CallFunc_SphereTraceSingle_NEW_ReturnValue2;             // 0x11A8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CL7V[0x3];                                   // 0x11A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_BreakHitResult_Location2;                       // 0x11AC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_BreakHitResult_Normal2;                         // 0x11B8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_BreakHitResult_ImpactPoint2;                    // 0x11C4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_BreakHitResult_ImpactNormal2;                   // 0x11D0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AA72[0x4];                                   // 0x11DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPhysicalMaterial*                                   CallFunc_BreakHitResult_PhysMat2;                        // 0x11E0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AActor*                                              CallFunc_BreakHitResult_HitActor2;                       // 0x11E8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UPrimitiveComponent*                                 CallFunc_BreakHitResult_HitComponent2;                   // 0x11F0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class FName                                                CallFunc_BreakHitResult_HitBoneName2;                    // 0x11F8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_BreakHitResult_HitItem2;                        // 0x1200(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BreakHitResult_BlockingHit2;                    // 0x1204(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_M8K8[0x3];                                   // 0x1205(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue;                        // 0x1208(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		double                                                     CallFunc_TimeSeconds_ReturnValue;                        // 0x1210(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ObjectObject_ReturnValue;            // 0x1218(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue;                         // 0x1219(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8ERF[0x6];                                   // 0x121A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue2;                       // 0x1220(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_TimeSince_ReturnValue;                          // 0x1228(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_29GH[0x4];                                   // 0x122C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class APrimalBuff*>                                 CallFunc_GetBuffs_TheBuffs;                              // 0x1230(0x0010) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue;                 // 0x1240(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_42MG[0x3];                                   // 0x1241(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_GetBitmaskForBuffs_ReturnValue;                 // 0x1244(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class FString                                              CallFunc_Conv_IntToString_ReturnValue;                   // 0x1248(0x0010) ZeroConstructor, Transient, DuplicateTransient
		class FString                                              CallFunc_GetColorSetInidcesAsString_ReturnValue;         // 0x1258(0x0010) ZeroConstructor, Transient, DuplicateTransient
		TArray<class FName>                                        CallFunc_GetColorSetNamesAsArray_ReturnValue;            // 0x1268(0x0010) ZeroConstructor, Transient, DuplicateTransient
		struct FARKDinoData                                        CallFunc_GetDinoData_OutDinoData;                        // 0x1278(0x0040) Transient, DuplicateTransient
		TArray<class APrimalStructureExplosive*>                   CallFunc_GetAllAttachedExplosives_ReturnValue;           // 0x12B8(0x0010) ZeroConstructor, Transient, DuplicateTransient
		struct FCustomItemByteArray                                K2Node_MakeStruct_CustomItemByteArray;                   // 0x12C8(0x0010) Transient, DuplicateTransient
		int32_t                                                    CallFunc_Array_Length_ReturnValue;                       // 0x12D8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IJRC[0x4];                                   // 0x12DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      K2Node_MakeArray_Array3;                                 // 0x12E0(0x0010) ZeroConstructor, Transient, DuplicateTransient
		TArray<class UObject*>                                     K2Node_MakeArray_Array4;                                 // 0x12F0(0x0010) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       CallFunc_IsServer_ReturnValue;                           // 0x1300(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_CanCapture_Capture2;                            // 0x1301(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_E6GP[0x6];                                   // 0x1302(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue3;                       // 0x1308(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		double                                                     CallFunc_TimeSeconds_ReturnValue2;                       // 0x1310(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		double                                                     CallFunc_Conv_FloatToDouble_ReturnValue;                 // 0x1318(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		double                                                     CallFunc_Add_DoubleDouble_ReturnValue;                   // 0x1320(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_IncludeInstigator;                    // 0x1328(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ME55[0x7];                                   // 0x1329(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        K2Node_CustomEvent_TPV;                                  // 0x1330(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        K2Node_CustomEvent_FPV;                                  // 0x1338(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterCharacter*                                   CallFunc_GetPawnOwner_ReturnValue;                       // 0x1340(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_PlayAnimMontage_ReturnValue;                    // 0x1348(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A9NA[0x4];                                   // 0x134C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterCharacter*                                   CallFunc_GetPawnOwner_ReturnValue2;                      // 0x1350(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsLocallyControlled_ReturnValue;                // 0x1358(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9RBF[0x7];                                   // 0x1359(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimInstance*                                       CallFunc_GetAnimInstance_ReturnValue;                    // 0x1360(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Montage_Play_ReturnValue;                       // 0x1368(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LZY6[0x4];                                   // 0x136C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalDinoCharacter*                                K2Node_CustomEvent_CapturingDino;                        // 0x1370(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AActor*                                              CallFunc_GetOwner_ReturnValue3;                          // 0x1378(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterCharacter*                                   K2Node_DynamicCast_AsShooterCharacter3;                  // 0x1380(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast5_CastSuccess;                         // 0x1388(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BF42[0x3];                                   // 0x1389(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_Multiply_VectorFloat_ReturnValue3;              // 0x138C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            CallFunc_SpawnEmitterAttached_ReturnValue;               // 0x1398(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Divide_FloatFloat_ReturnValue;                  // 0x13A0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_MakeVector_ReturnValue;                         // 0x13A4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             K2Node_CustomEvent_Location3;                            // 0x13B0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            K2Node_CustomEvent_Rotation3;                            // 0x13BC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_CustomEvent_Radius;                               // 0x13C8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_MakeVector_ReturnValue2;                        // 0x13CC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            CallFunc_SpawnEmitterAtLocation_ReturnValue;             // 0x13D8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UAudioComponent*                                     CallFunc_PlaySoundAttached_ReturnValue;                  // 0x13E0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_K2_GetActorRotation_ReturnValue;                // 0x13E8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue3;               // 0x13F4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Divide_FloatFloat_ReturnValue2;                 // 0x1400(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             K2Node_CustomEvent_Location2;                            // 0x1404(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            K2Node_CustomEvent_Rotation2;                            // 0x1410(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_CustomEvent_Scale;                                // 0x141C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_MakeVector_ReturnValue3;                        // 0x1420(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2TLY[0x4];                                   // 0x142C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            CallFunc_SpawnEmitterAtLocation_ReturnValue2;            // 0x1430(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UAudioComponent*                                     CallFunc_PlaySoundAttached_ReturnValue2;                 // 0x1438(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             K2Node_CustomEvent_Location;                             // 0x1440(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            K2Node_CustomEvent_rotation;                             // 0x144C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            CallFunc_SpawnEmitterAtLocation_ReturnValue3;            // 0x1458(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UAudioComponent*                                     CallFunc_PlaySoundAttached_ReturnValue3;                 // 0x1460(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		double                                                     CallFunc_GetGameTimeInSeconds_ReturnValue;               // 0x1468(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsFirstPerson_ReturnValue;                      // 0x1470(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HS9A[0x7];                                   // 0x1471(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      CallFunc_GetSaddleData_Bytes;                            // 0x1478(0x0010) ZeroConstructor, Transient, DuplicateTransient
		struct FCustomItemByteArray                                K2Node_MakeStruct_CustomItemByteArray2;                  // 0x1488(0x0010) Transient, DuplicateTransient
		TArray<struct FCustomItemByteArray>                        K2Node_MakeArray_Array5;                                 // 0x1498(0x0010) ZeroConstructor, Transient, DuplicateTransient
		struct FCustomItemByteArrays                               K2Node_MakeStruct_CustomItemByteArrays;                  // 0x14A8(0x0010) Transient, DuplicateTransient
		TArray<float>                                              CallFunc_Get_Character_StatsAsFloats_Stats;              // 0x14B8(0x0010) ZeroConstructor, Transient, DuplicateTransient
		double                                                     CallFunc_GetGameTimeInSeconds_ReturnValue2;              // 0x14C8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Conv_IntToFloat_ReturnValue;                    // 0x14D0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1QEB[0x4];                                   // 0x14D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CallFunc_Conv_FloatToDouble_ReturnValue2;                // 0x14D8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		double                                                     CallFunc_Conv_FloatToDouble_ReturnValue3;                // 0x14E0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Conv_IntToFloat_ReturnValue2;                   // 0x14E8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_52UM[0x4];                                   // 0x14EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CallFunc_Conv_FloatToDouble_ReturnValue4;                // 0x14F0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		double                                                     CallFunc_Subtract_DoubleDouble_ReturnValue;              // 0x14F8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    Temp_int_Loop_Counter_Variable;                          // 0x1500(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_I7XJ[0x4];                                   // 0x1504(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<double>                                             K2Node_MakeArray_Array6;                                 // 0x1508(0x0010) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       CallFunc_Less_IntInt_ReturnValue;                        // 0x1518(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AFVD[0x7];                                   // 0x1519(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCustomItemDoubles                                  K2Node_MakeStruct_CustomItemDoubles;                     // 0x1520(0x0010) Transient, DuplicateTransient
		class APrimalStructureExplosive*                           CallFunc_Array_Get_Item;                                 // 0x1530(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue;                         // 0x1538(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue;                            // 0x153C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JILW[0x3];                                   // 0x153D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      K2Node_MakeArray_Array7;                                 // 0x1540(0x0010) ZeroConstructor, Transient, DuplicateTransient
		struct FCustomItemData                                     K2Node_MakeStruct_CustomItemData;                        // 0x1550(0x0078) Transient, DuplicateTransient

	public:
		void DoFireProjectileCustom(bool bExplodeInHand);
		void GetContainedDinoClass(struct FCustomItemData* CustomItemData, class UClass** ReturnedClass);
		void GetCharacterStatsAsFloats(class APrimalDinoCharacter* Character, TArray<float>* Stats);
		void ReportSuccess();
		void GetSaddleData(TArray<unsigned char>* Bytes);
		void ReceiveBeginPlay();
		void UpdateContainsFX(bool ForceOff);
		void BPFiredWeapon();
		void CanCapture(class APrimalDinoCharacter* Dino, bool* Capture);
		bool BPTryFireWeapon();
		void BPStartEquippedNotify();
		void UserConstructionScript();
		void Capture();
		void Ingest();
		void StartIngestion();
		void ClientPlayAnimation(bool IncludeInstigator, class UAnimMontage* TPV, class UAnimMontage* FPV);
		void Reload();
		void StartCaptureLoop(class APrimalDinoCharacter* CapturingDino);
		void EndCaptureLoop();
		void CaptureSuccess(const struct FVector& Location, const struct FRotator& Rotation, float Radius);
		void DeploySuccess(const struct FVector& Location, const struct FRotator& Rotation, float Scale);
		void DeployFailure(const struct FVector& Location, const struct FRotator& Rotation);
		void ExecuteUbergraph_WeapEmptyCryopod(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
