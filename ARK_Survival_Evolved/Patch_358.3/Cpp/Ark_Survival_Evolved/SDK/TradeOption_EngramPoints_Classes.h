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
	 * BlueprintGeneratedClass TradeOption_EngramPoints.TradeOption_EngramPoints_C
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UTradeOption_EngramPoints_C : public UHexagonTradableOption
	{
	public:
		bool BPAllowedToBePurchased(class AShooterPlayerController* PlayerController);
		bool BPOverrideTradeAction(class AShooterPlayerController* PlayerController);
		int32_t BPGetItemCost(class AShooterPlayerController* PlayerController);
		void ExecuteUbergraph_TradeOption_EngramPoints(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
