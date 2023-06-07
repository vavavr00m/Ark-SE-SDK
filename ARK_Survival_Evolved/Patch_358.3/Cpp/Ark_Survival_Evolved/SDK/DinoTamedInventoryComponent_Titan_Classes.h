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
	 * BlueprintGeneratedClass DinoTamedInventoryComponent_Titan.DinoTamedInventoryComponent_Titan_C
	 * Size -> 0x0000 (FullSize[0x0598] - InheritedSize[0x0598])
	 */
	class UDinoTamedInventoryComponent_Titan_C : public UDinoTamedInventoryComponent_BP_Base_C
	{
	public:
		bool BPRemoteInventoryAllowRemoveItems(class AShooterPlayerController* PC, class UPrimalItem* anItemToTransfer);
		void BPNotifyItemAdded(class UPrimalItem* anItem, bool bEquipItem);
		bool BPAllowUseInInventory(class UPrimalItem* theItem, bool bIsRemoteInventory, class AShooterPlayerController* ByPC);
		void ExecuteUbergraph_DinoTamedInventoryComponent_Titan(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
