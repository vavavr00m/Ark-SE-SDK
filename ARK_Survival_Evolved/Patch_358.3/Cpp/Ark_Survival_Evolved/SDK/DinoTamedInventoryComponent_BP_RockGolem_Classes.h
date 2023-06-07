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
	 * BlueprintGeneratedClass DinoTamedInventoryComponent_BP_RockGolem.DinoTamedInventoryComponent_BP_RockGolem_C
	 * Size -> 0x0010 (FullSize[0x05A8] - InheritedSize[0x0598])
	 */
	class UDinoTamedInventoryComponent_BP_RockGolem_C : public UDinoTamedInventoryComponent_BP_Base_C
	{
	public:
		TArray<class UClass*>                                      ForceAllowUseItemClasses;                                // 0x0598(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		bool OverrideUseItem(class UPrimalItem* theItem);
		bool BPAllowUseInInventory(class UPrimalItem* theItem, bool bIsRemoteInventory, class AShooterPlayerController* ByPC);
		void ExecuteUbergraph_DinoTamedInventoryComponent_BP_RockGolem(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
