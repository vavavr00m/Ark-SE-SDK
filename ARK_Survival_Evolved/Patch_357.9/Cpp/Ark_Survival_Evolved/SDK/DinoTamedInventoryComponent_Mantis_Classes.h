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
	 * BlueprintGeneratedClass DinoTamedInventoryComponent_Mantis.DinoTamedInventoryComponent_Mantis_C
	 * Size -> 0x0010 (FullSize[0x05A8] - InheritedSize[0x0598])
	 */
	class UDinoTamedInventoryComponent_Mantis_C : public UDinoTamedInventoryComponent_BP_Base_C
	{
	public:
		TArray<class UClass*>                                      PreventEquipItemClasses;                                 // 0x0598(0x0010) Edit, BlueprintVisible, ZeroConstructor

	public:
		bool BPPreventEquipItem(class UPrimalItem* theItem);
		void ExecuteUbergraph_DinoTamedInventoryComponent_Mantis(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
