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
	 * BlueprintGeneratedClass Xenomorph_Character_BP_Male_Lunar.Xenomorph_Character_BP_Male_Lunar_C
	 * Size -> 0x0051 (FullSize[0x2A61] - InheritedSize[0x2A10])
	 */
	class AXenomorph_Character_BP_Male_Lunar_C : public AXenomorph_Character_BP_Male_C
	{
	public:
		class UDinoCharacterStatusComponent_BP_Xenomorph_Reaper_Surface_C* DinoCharacterStatus_BP_Xenomorph_Reaper_Surface_C1;      // 0x2A10(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      delayBeforeDestroyingOnDaytime;                          // 0x2A18(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      maxRandomizedTimeBeforeDestroying;                       // 0x2A1C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       readyToDestroy;                                          // 0x2A20(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue;                           // 0x2A21(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C5WF[0x6];                                   // 0x2A22(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue;                        // 0x2A28(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class ADayCycleManager*                                    CallFunc_GetDayCycleManager_ReturnValue;                 // 0x2A30(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue2;                       // 0x2A38(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue2;                          // 0x2A40(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YS2K[0x7];                                   // 0x2A41(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADayCycleManager*                                    CallFunc_GetDayCycleManager_ReturnValue2;                // 0x2A48(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate;                    // 0x2A50(0x0010) ZeroConstructor, Transient, DuplicateTransient, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue3;                          // 0x2A60(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void BPTimerServer();
		void InitializeDive();
		void CanDive(bool* Return);
		bool ShouldUnbury();
		void ShouldBury(bool* Result);
		void UserConstructionScript();
		void OnStartDayTime_Xeno();
		void ReceiveBeginPlay();
		void ReceiveDestroyed();
		void ExecuteUbergraph_Xenomorph_Character_BP_Male_Lunar(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
