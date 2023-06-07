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
	 * BlueprintGeneratedClass Titanosaur_Character_BP.Titanosaur_Character_BP_C
	 * Size -> 0x0128 (FullSize[0x23B0] - InheritedSize[0x2288])
	 */
	class ATitanosaur_Character_BP_C : public ADino_Character_BP_C
	{
	public:
		class UBoxComponent*                                       PlatformSaddleBuildArea;                                 // 0x2288(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UDinoCharacterStatusComponent_BP_Titanosaur_C*       DinoCharacterStatus_BP_Titanosaur_C2;                    // 0x2290(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USphereComponent*                                    ExtraOverlapActiveSphere;                                // 0x2298(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<class FName>                                        TorporHeadBoneNames;                                     // 0x22A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		double                                                     LastCharacterStatusTickTime;                             // 0x22B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastHasMovedRecentlyTime;                                // 0x22B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             LastHasMovedRecentlyLocation;                            // 0x22C0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       LastHasMovedRecentlyRetVal;                              // 0x22CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_330S[0x3];                                   // 0x22CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             TorporStartedDamageLocation;                             // 0x22D0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TorporDamageLocationCache;                               // 0x22DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxTorporDamageForLocation;                              // 0x22E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TorporDamageLocationDistanceReset;                       // 0x22E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    SwimmingAttackIndex;                                     // 0x22E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LM5W[0x4];                                   // 0x22EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CallFunc_GetGameTimeInSeconds_ReturnValue;               // 0x22F0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_RandomFloatInRange_ReturnValue;                 // 0x22F8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BPIsTamed_ReturnValue;                          // 0x22FC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ITJA[0x3];                                   // 0x22FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CallFunc_GetGameTimeInSeconds_ReturnValue2;              // 0x2300(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Conv_DoubleToFloat_ReturnValue;                 // 0x2308(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2OH6[0x4];                                   // 0x230C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CallFunc_Subtract_DoubleDouble_ReturnValue;              // 0x2310(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue;                 // 0x2318(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T24L[0x3];                                   // 0x2319(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Conv_DoubleToFloat_ReturnValue2;                // 0x231C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsAlive_ReturnValue;                            // 0x2320(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue;                         // 0x2321(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue;                           // 0x2322(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LBED[0x1];                                   // 0x2323(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_PlayAnimEx_ReturnValue;                         // 0x2324(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BPIsConscious_ReturnValue;                      // 0x2328(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8MBA[0x3];                                   // 0x2329(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Event_DeltaSeconds;                               // 0x232C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue2;                        // 0x2330(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue2;                          // 0x2331(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BPIsTamed_ReturnValue2;                         // 0x2332(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8DSL[0x5];                                   // 0x2333(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AController*                                         CallFunc_GetController_ReturnValue;                      // 0x2338(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x2340(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DWN5[0x7];                                   // 0x2341(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalDinoAIController*                             K2Node_DynamicCast_AsPrimalDinoAIController;             // 0x2348(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x2350(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue3;                        // 0x2351(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8JDE[0x6];                                   // 0x2352(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              CallFunc_GetTarget_ReturnValue;                          // 0x2358(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue;                // 0x2360(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue2;               // 0x236C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_X;                                  // 0x2378(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Y;                                  // 0x237C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Z;                                  // 0x2380(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_X2;                                 // 0x2384(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Y2;                                 // 0x2388(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Z2;                                 // 0x238C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Subtract_FloatFloat_ReturnValue;                // 0x2390(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Add_FloatFloat_ReturnValue;                     // 0x2394(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue2;                // 0x2398(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue3;                // 0x2399(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue;                            // 0x239A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VI82[0x5];                                   // 0x239B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty; // 0x23A0(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm

	public:
		class FName GetSocketForMeleeTraceForHitBlockers(int32_t AttackIndex);
		bool BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget);
		bool BlueprintCanRiderAttack(int32_t AttackIndex);
		void BPSetupTamed(bool bWasJustTamed);
		void CheckTorporDistanceTravel(float torporIn, bool* outValidDistanceTravel);
		void IsHeadObstructed(bool* OutVal);
		void HasMovedRecently(bool* bHasMoved);
		bool GiveKillExperience();
		void BPPostInitializeComponents();
		void ReceiveBeginPlay();
		float BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo);
		void UserConstructionScript();
		void ForceTamedTick();
		void ClearTorporHit();
		void TorporHit();
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_Titanosaur_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
