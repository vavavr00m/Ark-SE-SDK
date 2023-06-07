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
	 * BlueprintGeneratedClass Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C
	 * Size -> 0x0078 (FullSize[0x3468] - InheritedSize[0x33F0])
	 */
	class AExosuit_RTS_Character_BP_C : public AExosuit_Character_BP_C
	{
	public:
		class UParticleSystemComponent*                            RTSEmitter;                                              // 0x33F0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		double                                                     ServerLastTimeStartRTS;                                  // 0x33F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      IntervalOfTimeForStartRTS;                               // 0x3400(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           RTSModeKeyOffset;                                        // 0x3404(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YQ7F[0x4];                                   // 0x340C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDinoSelectionGroup>                         RTSGroups;                                               // 0x3410(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, NativeAccessSpecifierPublic
		TArray<class APrimalDinoCharacter*>                        RTSCurrentSelection;                                     // 0x3420(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SaveGame, NativeAccessSpecifierPublic
		class ARTSControlCharacter_C*                              RTSControlChar;                                          // 0x3430(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsGamepadLB_Held;                                        // 0x3438(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsInRtsMode;                                             // 0x3439(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_ZYIG[0x2];                                   // 0x343A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LastOrderedMoveToLocation;                               // 0x343C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxMoveToMultiplier;                                     // 0x3448(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             RTSOffsetPosition;                                       // 0x344C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class AActor*>                                      CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty; // 0x3458(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm

	public:
		void BPNotifyClearRider(class AShooterCharacter* RiderClearing);
		void BPOrderedMoveToLoc(struct FVector* DestLoc);
		float BP_GetCustomModifier_RotationRate();
		void OnRep_IsInRtsMode();
		bool BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams);
		bool BPHandleUseButtonPress(class AShooterPlayerController* RiderController);
		void ServerStartRTS();
		void UserConstructionScript();
		void InpActEvt_ToggleRtsMode_K2Node_InputActionEvent_406();
		void InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_405();
		void InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_404();
		void InpActEvt_RtsGamepadDpadUp_K2Node_InputActionEvent_403();
		void ExecuteUbergraph_Exosuit_RTS_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
