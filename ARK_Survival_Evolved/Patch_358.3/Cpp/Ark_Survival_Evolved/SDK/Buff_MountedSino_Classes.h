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
	 * BlueprintGeneratedClass Buff_MountedSino.Buff_MountedSino_C
	 * Size -> 0x05B9 (FullSize[0x0F39] - InheritedSize[0x0980])
	 */
	class ABuff_MountedSino_C : public ABuff_Base_C
	{
	public:
		struct FHUDElement                                         DinoFoodHUDElement;                                      // 0x0980(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		struct FHUDElement                                         DinoStaminaHUDElement;                                   // 0x0AD0(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		double                                                     LastScreamTime;                                          // 0x0C20(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ScreamInterval;                                          // 0x0C28(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SGFT[0x4];                                   // 0x0C2C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHUDElement                                         ScreamHUDElement;                                        // 0x0C30(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      BuddyTraceDistance;                                      // 0x0D80(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CDSR[0x4];                                   // 0x0D84(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterCharacter*                                   BuddyCharacter;                                          // 0x0D88(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FHUDElement                                         GliderBuffHUDElement;                                    // 0x0D90(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		struct FLinearColor                                        BuddyCrosshairColor;                                     // 0x0EE0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AShooterCharacter*                                   K2Node_CustomEvent_Character;                            // 0x0EF0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FBPNetExecParams                                    K2Node_MakeStruct_BPNetExecParams;                       // 0x0EF8(0x0040) Transient, DuplicateTransient
		bool                                                       CallFunc_BPServerHandleNetExecCommand_ReturnValue;       // 0x0F38(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void GetSinoFoodVals(float* current, float* Max);
		void BPClientDoMultiUse(class APlayerController* ForPC, int32_t ClientUseIndex);
		bool BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex);
		TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
		void BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements);
		void BuffTickServer(float DeltaTime);
		void SetLastScreamTime(double Time);
		void BuffTickClient(float DeltaTime);
		void HideCrosshair();
		struct FColor BPGetCrosshairColor();
		void CheckForBuddyThrow();
		void GetSinoStaminaVals(float* current, float* Max);
		void UserConstructionScript();
		void Server_SetMountedSinoBuddyChar(class AShooterCharacter* Character);
		void ExecuteUbergraph_Buff_MountedSino(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
