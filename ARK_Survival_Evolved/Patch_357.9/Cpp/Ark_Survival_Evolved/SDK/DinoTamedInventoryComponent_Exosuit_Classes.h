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
	 * BlueprintGeneratedClass DinoTamedInventoryComponent_Exosuit.DinoTamedInventoryComponent_Exosuit_C
	 * Size -> 0x0000 (FullSize[0x0598] - InheritedSize[0x0598])
	 */
	class UDinoTamedInventoryComponent_Exosuit_C : public UDinoTamedInventoryComponent_BP_Base_C
	{
	public:
		void BPPreInitDefaultInventory();
		void ExecuteUbergraph_DinoTamedInventoryComponent_Exosuit(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
