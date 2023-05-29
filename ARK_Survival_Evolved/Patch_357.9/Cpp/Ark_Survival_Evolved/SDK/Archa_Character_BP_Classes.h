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
	 * BlueprintGeneratedClass Archa_Character_BP.Archa_Character_BP_C
	 * Size -> 0x0044 (FullSize[0x22CC] - InheritedSize[0x2288])
	 */
	class AArcha_Character_BP_C : public ADino_Character_BP_C
	{
	public:
		class UDinoCharacterStatusComponent_BP_Archa_C*            DinoCharacterStatus_BP_Archa_C1;                         // 0x2288(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TreeOverlapRange;                                        // 0x2290(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TimeSpentOnTreeCache;                                    // 0x2294(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      IntervalGiveSapOnTree;                                   // 0x2298(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_R6OJ[0x4];                                   // 0x229C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              SapItemClass;                                            // 0x22A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bPreventGlide;                                           // 0x22A8(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor
		bool                                                       bWasMountedFalling;                                      // 0x22A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BFG0[0x2];                                   // 0x22AA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MountedAirControl;                                       // 0x22AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CallFunc_PlayAnimMontage_ReturnValue;                    // 0x22B0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             K2Node_CustomEvent_relLoc;                               // 0x22B4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            K2Node_CustomEvent_relRot;                               // 0x22C0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		float DoOverrideMountedAirControl(float AirControlIn);
		bool BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams);
		void OnRep_bPreventGlide();
		void HandleMountedDinoAction(class AShooterPlayerController* PC);
		void BPCharacterSleeped();
		void GiveSap();
		bool BPOnAttachmentReplication();
		void BPOnSetMountedDino();
		void BPOnClearMountedDino();
		void ReceiveTick(float DeltaSeconds);
		float BPGetGravityZScale();
		void UserConstructionScript();
		void MultiFinishAttachingToTree(const struct FVector& relLoc, const struct FRotator& relRot);
		void ExecuteUbergraph_Archa_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
