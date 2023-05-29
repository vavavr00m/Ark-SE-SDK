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
	 * BlueprintGeneratedClass Buff_LionfishLionHelper.Buff_LionfishLionHelper_C
	 * Size -> 0x0760 (FullSize[0x10E0] - InheritedSize[0x0980])
	 */
	class ABuff_LionfishLionHelper_C : public APrimalBuff
	{
	public:
		class ALionfishLion_Character_BP_C*                        LionfishRef;                                             // 0x0980(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FHUDElement                                         ComboCounterHUDElementTemplate;                          // 0x0988(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		struct FHUDElement                                         TeleportAttackHUDElementTemplate;                        // 0x0AD8(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		struct FHUDElement                                         StealthAbilityHUDElementTemplate;                        // 0x0C28(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		struct FHUDElement                                         RoarAbilityHUDElement;                                   // 0x0D78(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		class UTexture2D*                                          TeleportTargetIcon;                                      // 0x0EC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector2D                                           TeleWorldHUDElementSize;                                 // 0x0ED0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FAnchors                                            TeleWorldHUDElementAnchor;                               // 0x0ED8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      TeleWorldIndicatorSizeMult;                              // 0x0EE8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        TargetIndicatorColor;                                    // 0x0EEC(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TargetIndicatorOffsetY;                                  // 0x0EFC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UObject*                                             TeleportFillingTexture;                                  // 0x0F00(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UObject*                                             TeleportReadyTexture;                                    // 0x0F08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UObject*                                             StealthFillingTexture;                                   // 0x0F10(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UObject*                                             RoarFillingTexture;                                      // 0x0F18(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UObject*                                             StealthEmptyTexture;                                     // 0x0F20(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UObject*                                             RoarEmptyTexture;                                        // 0x0F28(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UObject*                                             RoarReadyTexture;                                        // 0x0F30(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UObject*                                             StealthReadyTexture;                                     // 0x0F38(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FemaleTeleportHUDLocationX;                              // 0x0F40(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FemaleStealthHUDLocationX;                               // 0x0F44(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        ComboBarColor_Default;                                   // 0x0F48(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        ComboBarColor_Max;                                       // 0x0F58(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        ComboBarColor_Max_Blink;                                 // 0x0F68(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FHUDElement                                         LeapHUDElementTemplate;                                  // 0x0F78(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		class UObject*                                             LeapFillingTexture;                                      // 0x10C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UObject*                                             LeapReadyTexture;                                        // 0x10D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FemaleLeapHUDLocationX;                                  // 0x10D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      NoRiderGlobalHUDOffsetY;                                 // 0x10DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BPActivated(class AActor* ForInstigator);
		void BPDeactivated(class AActor* ForInstigator);
		void ReceiveBeginPlay();
		void BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_LionfishLionHelper(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
