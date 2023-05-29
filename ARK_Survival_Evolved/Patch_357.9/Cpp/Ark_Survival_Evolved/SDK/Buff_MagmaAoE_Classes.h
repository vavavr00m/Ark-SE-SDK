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
	 * BlueprintGeneratedClass Buff_MagmaAoE.Buff_MagmaAoE_C
	 * Size -> 0x022A (FullSize[0x0BB2] - InheritedSize[0x0988])
	 */
	class ABuff_MagmaAoE_C : public ABuff_Base_AoE_C
	{
	public:
		float                                                      Timeline_0_NewTrack_0_5EA1A6014C420D4E7E5BFC81D170ED5C;  // 0x0988(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         Timeline_0__Direction_5EA1A6014C420D4E7E5BFC81D170ED5C;  // 0x098C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_W7SZ[0x3];                                   // 0x098D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x0990(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FlameOilSlicksRadius;                                    // 0x0998(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DelayBeforeIgnite;                                       // 0x099C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             OriginLocation;                                          // 0x09A0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxDistanceFromOriginLocation;                           // 0x09AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      timeBeforeFadeout;                                       // 0x09B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JAB5[0x4];                                   // 0x09B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalStructure*                                    collidingStructure;                                      // 0x09B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       hasStructure;                                            // 0x09C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bHasFadedOut;                                            // 0x09C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ECV6[0x6];                                   // 0x09C2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FParticleSysParam                                   ProjectileMeshScalar;                                    // 0x09C8(0x0040) Edit, BlueprintVisible
		struct FVector                                             FireBuffOffset;                                          // 0x0A08(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3399[0x4];                                   // 0x0A14(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue;                        // 0x0A18(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue;                // 0x0A20(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue;                           // 0x0A2C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MQ52[0x3];                                   // 0x0A2D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      CallFunc_ServerOctreeOverlapActorsBitMask_ReturnValue;   // 0x0A30(0x0010) ZeroConstructor, Transient, DuplicateTransient
		int32_t                                                    CallFunc_Array_Length_ReturnValue;                       // 0x0A40(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x0A44(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_FloatFloat_ReturnValue;                    // 0x0A45(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue;                         // 0x0A46(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GSCY[0x1];                                   // 0x0A47(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Event_DeltaSeconds;                               // 0x0A48(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Subtract_FloatFloat_ReturnValue;                // 0x0A4C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    Temp_int_Loop_Counter_Variable;                          // 0x0A50(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue;                            // 0x0A54(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_IntInt_ReturnValue;                        // 0x0A55(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GCZU[0x2];                                   // 0x0A56(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              CallFunc_Array_Get_Item;                                 // 0x0A58(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue;                         // 0x0A60(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QW09[0x4];                                   // 0x0A64(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABuff_OilSlick_C*                                    K2Node_DynamicCast_AsBuff_OilSlick_C;                    // 0x0A68(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x0A70(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WCBD[0x3];                                   // 0x0A71(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue2;               // 0x0A74(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Subtract_VectorVector_ReturnValue;              // 0x0A80(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_VSize_ReturnValue;                              // 0x0A8C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_FloatFloat_ReturnValue2;                   // 0x0A90(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_FloatFloat_ReturnValue3;                   // 0x0A91(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue2;                          // 0x0A92(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5KCY[0x5];                                   // 0x0A93(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalStructure*                                    K2Node_CustomEvent_NewParam;                             // 0x0A98(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue;                  // 0x0AA0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue2;                       // 0x0AA1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_35J6[0x6];                                   // 0x0AA2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue2;                       // 0x0AA8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_StaticGetTimeSince_ReturnValue;                 // 0x0AB0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Subtract_FloatFloat_ReturnValue2;               // 0x0AB4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue;                 // 0x0AB8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue3;                       // 0x0AB9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue2;                        // 0x0ABA(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_K7UZ[0x5];                                   // 0x0ABB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue3;                       // 0x0AC0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_RandomFloatInRange_ReturnValue;                 // 0x0AC8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0FA2[0x4];                                   // 0x0ACC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADayCycleManager*                                    CallFunc_GetDayCycleManager_ReturnValue;                 // 0x0AD0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue2;                           // 0x0AD8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_O4MW[0x3];                                   // 0x0AD9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue3;               // 0x0ADC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Add_VectorVector_ReturnValue;                   // 0x0AE8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Add_VectorVector_ReturnValue2;                  // 0x0AF4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue3;                          // 0x0B00(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UPSR[0x7];                                   // 0x0B01(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty; // 0x0B08(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm
		struct FHitResult                                          CallFunc_LineTraceSingle_NEW_OutHit;                     // 0x0B18(0x0088) Transient, DuplicateTransient
		bool                                                       CallFunc_LineTraceSingle_NEW_ReturnValue;                // 0x0BA0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GNED[0x3];                                   // 0x0BA1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue4;               // 0x0BA4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsRainingAtLocation_ReturnValue;                // 0x0BB0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsPVEServer_ReturnValue;                        // 0x0BB1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		bool BPExcludeAoEActor(class AActor* ActorToConsider);
		void UserConstructionScript();
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void ReceiveTick(float DeltaSeconds);
		void SetStructure(class APrimalStructure* NewParam);
		void DoFadeOutMesh();
		void CheckForRain();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_Buff_MagmaAoE(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
