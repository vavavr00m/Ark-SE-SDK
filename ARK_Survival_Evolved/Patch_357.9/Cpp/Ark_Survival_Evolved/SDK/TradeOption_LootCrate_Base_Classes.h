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
	 * BlueprintGeneratedClass TradeOption_LootCrate_Base.TradeOption_LootCrate_Base_C
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UTradeOption_LootCrate_Base_C : public UHexagonTradableOption
	{
	public:
		bool                                                       RetVal;                                                  // 0x0070(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4ROG[0x3];                                   // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    requiredminimumlevel;                                    // 0x0074(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool BPOverrideTradeAction(class AShooterPlayerController* PlayerController);
		bool BPAllowedToBePurchased(class AShooterPlayerController* PlayerController);
		void ExecuteUbergraph_TradeOption_LootCrate_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
