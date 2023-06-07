#pragma once

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
	 * BlueprintGeneratedClass MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C
	 * Size -> 0x0168 (FullSize[0x0A38] - InheritedSize[0x08D0])
	 */
	class AMissionTrigger_RaceCheckpoint_C : public AMissionTrigger
	{
	public:
		class UParticleSystemComponent*                            CheckpointParticleComp;                                  // 0x08D0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UBillboardComponent*                                 Billboard1;                                              // 0x08D8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTextRenderComponent*                                TextRender1;                                             // 0x08E0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_FadeInCheckpoint_FadeAlpha_E0A1929A4A5F047E14B5F281D62D703A; // 0x08E8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         Timeline_FadeInCheckpoint__Direction_E0A1929A4A5F047E14B5F281D62D703A; // 0x08EC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_X6C0[0x3];                                   // 0x08ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_FadeInCheckpoint;                               // 0x08F0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_CheckpointActivate_alpha_4CF8EA73481895C205540D8F22172025; // 0x08F8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         Timeline_CheckpointActivate__Direction_4CF8EA73481895C205540D8F22172025; // 0x08FC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IGGJ[0x3];                                   // 0x08FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_CheckpointActivate;                             // 0x0900(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_PulseColor_Alpha_C908EDEB4DBDEDF4007F0699DD63901D; // 0x0908(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         Timeline_PulseColor__Direction_C908EDEB4DBDEDF4007F0699DD63901D; // 0x090C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EEOR[0x3];                                   // 0x090D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_PulseColor;                                     // 0x0910(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             VFXOffset;                                               // 0x0918(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HGSM[0x4];                                   // 0x0924(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AMissionTrigger_RacePowerUp_C*>               PowerUpsToEnable;                                        // 0x0928(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate
		class UParticleSystem*                                     ActivePowerUpVFX;                                        // 0x0938(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             TriggerSize;                                             // 0x0940(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             ScaleMultiplier;                                         // 0x094C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        CheckpointColor_Hit;                                     // 0x0958(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        CheckpointColor_Default;                                 // 0x0968(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        CheckpointColor_Inactive;                                // 0x0978(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bIsCheckpointEnabled;                                    // 0x0988(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QG6A[0x3];                                   // 0x0989(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ParamName_FadeStationary;                                // 0x098C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                ParamName_FadeMoving;                                    // 0x0994(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                ParamName_CheckpointColor;                               // 0x099C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TimelinePlayRate_Pulse;                                  // 0x09A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TimelinePlayRate_Fade;                                   // 0x09A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TimelinePlayRate_Enable;                                 // 0x09AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bHasInitialized;                                         // 0x09B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bCheckpointActive;                                       // 0x09B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bDebugCheckpoints;                                       // 0x09B2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_API9[0x1];                                   // 0x09B3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        CheckpointColor_Miss;                                    // 0x09B4(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bCheckpointMissed;                                       // 0x09C4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ByteByte_ReturnValue;                // 0x09C5(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UWLD[0x2];                                   // 0x09C6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        CallFunc_LinearColorLerp_ReturnValue;                    // 0x09C8(0x0010) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsCheckpointActive_PURE_bResult;                // 0x09D8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x09D9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0PX9[0x6];                                   // 0x09DA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CallFunc_GetDisplayName_ReturnValue;                     // 0x09E0(0x0010) ZeroConstructor, Transient, DuplicateTransient
		class APrimalCharacter*                                    K2Node_CustomEvent_TriggeringActor;                      // 0x09F0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class FString                                              CallFunc_Concat_StrStr_ReturnValue;                      // 0x09F8(0x0010) ZeroConstructor, Transient, DuplicateTransient
		class FString                                              CallFunc_Concat_StrStr_ReturnValue2;                     // 0x0A08(0x0010) ZeroConstructor, Transient, DuplicateTransient
		struct FLinearColor                                        CallFunc_SelectColor_ReturnValue;                        // 0x0A18(0x0010) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FLinearColor                                        CallFunc_LinearColorLerp_ReturnValue2;                   // 0x0A28(0x0010) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void ReceiveBeginPlay();
		void ResetCheckpoint();
		void IsCheckpointActive_PURE(bool* bResult);
		void IsCheckpointActive(bool* bResult);
		void DeactivateCheckpoint();
		void InitCheckpoint();
		void SetCheckpointEnabled(bool NewEnabled);
		void OnCheckpointHit();
		void SetCheckpointFX_Active(bool newActive, bool AlsoEnable);
		struct FVector BP_OverrideTargetingLocation(class AActor* Attacker);
		void UserConstructionScript();
		void Timeline_PulseColor__FinishedFunc();
		void Timeline_PulseColor__UpdateFunc();
		void Timeline_CheckpointActivate__FinishedFunc();
		void Timeline_CheckpointActivate__UpdateFunc();
		void Timeline_FadeInCheckpoint__FinishedFunc();
		void Timeline_FadeInCheckpoint__UpdateFunc();
		void FadeOut();
		void FadeIn();
		void CheckpointPulse();
		void DisableCheckpoint();
		void EnableCheckpoint();
		void DisableCheckpoint_NOW();
		void EnableCheckpoint_NOW();
		void CheckpointHitServerReaction(class APrimalCharacter* TriggeringActor);
		void ExecuteUbergraph_MissionTrigger_RaceCheckpoint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
