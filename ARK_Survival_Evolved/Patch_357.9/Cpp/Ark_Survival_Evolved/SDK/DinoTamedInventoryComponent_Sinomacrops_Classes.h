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
	 * BlueprintGeneratedClass DinoTamedInventoryComponent_Sinomacrops.DinoTamedInventoryComponent_Sinomacrops_C
	 * Size -> 0x0000 (FullSize[0x0598] - InheritedSize[0x0598])
	 */
	class UDinoTamedInventoryComponent_Sinomacrops_C : public UDinoTamedInventoryComponent_BP_Base_C
	{
	public:
		bool OverrideUseItem(class UPrimalItem* theItem);
		bool BPAllowUseInInventory(class UPrimalItem* theItem, bool bIsRemoteInventory, class AShooterPlayerController* ByPC);
		void ExecuteUbergraph_DinoTamedInventoryComponent_Sinomacrops(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
