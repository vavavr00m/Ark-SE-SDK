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
	 * BlueprintGeneratedClass DinoDropInventoryComponent_Carnivore_Deathworm.DinoDropInventoryComponent_Carnivore_Deathworm_C
	 * Size -> 0x0000 (FullSize[0x0598] - InheritedSize[0x0598])
	 */
	class UDinoDropInventoryComponent_Carnivore_Deathworm_C : public UDinoDropInventoryComponent_Carnivore_Huge_C
	{
	public:
		bool BPAllowUseInInventory(class UPrimalItem* theItem, bool bIsRemoteInventory, class AShooterPlayerController* ByPC);
		bool BPRemoteInventoryAllowRemoveItems(class AShooterPlayerController* PC, class UPrimalItem* anItemToTransfer);
		void ExecuteUbergraph_DinoDropInventoryComponent_Carnivore_Deathworm(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
