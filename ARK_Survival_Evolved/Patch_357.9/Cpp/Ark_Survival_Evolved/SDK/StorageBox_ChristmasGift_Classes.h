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
	 * BlueprintGeneratedClass StorageBox_ChristmasGift.StorageBox_ChristmasGift_C
	 * Size -> 0x0022 (FullSize[0x0E32] - InheritedSize[0x0E10])
	 */
	class AStorageBox_ChristmasGift_C : public AStructureItemContainerBaseBP_C
	{
	public:
		class UPrimalInventoryBP_Gift_C*                           PrimalInventoryBP_Gift_C1;                               // 0x0E10(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue;                           // 0x0E18(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OWV3[0x7];                                   // 0x0E19(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AGameState*                                          CallFunc_GetGameState_ReturnValue;                       // 0x0E20(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterGameState*                                   K2Node_DynamicCast_AsShooterGameState;                   // 0x0E28(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x0E30(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NotEqual_NameName_ReturnValue;                  // 0x0E31(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		bool BPOverrideDemolish(class AShooterPlayerController* ForPC);
		bool BPOverrideAllowStructureAccess(class AShooterPlayerController* ForPC, bool bIsAccessAllowed, bool bForInventoryOnly);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_StorageBox_ChristmasGift(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
