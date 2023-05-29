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
	 * BlueprintGeneratedClass Achatina_Character_BP.Achatina_Character_BP_C
	 * Size -> 0x0033 (FullSize[0x22BB] - InheritedSize[0x2288])
	 */
	class AAchatina_Character_BP_C : public ADino_Character_BP_C
	{
	public:
		class UParticleSystemComponent*                            trail;                                                   // 0x2288(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UDinoCharacterStatusComponent_BP_Achatina_C*         DinoCharacterStatus_BP_Achatina_C1;                      // 0x2290(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UClass*                                              AchaSleepingDinoSettings;                                // 0x2298(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate;                    // 0x22A0(0x0010) ZeroConstructor, Transient, DuplicateTransient, NoDestructor
		class APrimalCharacter*                                    K2Node_CustomEvent_DiedCharacter;                        // 0x22B0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue;                  // 0x22B8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue;                           // 0x22B9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue;                         // 0x22BA(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void BPDinoARKDownloadedBegin();
		void BPCharacterUnsleeped();
		void BPCharacterSleeped();
		void BPOnMovementModeChangedNotify(EMovementMode PrevMovementMode, unsigned char PreviousCustomMode);
		void BPTimerNonDedicated();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void OnDied_Event(class APrimalCharacter* DiedCharacter);
		void ExecuteUbergraph_Achatina_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
