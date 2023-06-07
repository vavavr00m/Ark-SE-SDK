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
	 * BlueprintGeneratedClass DinoTamedInventoryComponent_TekStrider.DinoTamedInventoryComponent_TekStrider_C
	 * Size -> 0x0001 (FullSize[0x0599] - InheritedSize[0x0598])
	 */
	class UDinoTamedInventoryComponent_TekStrider_C : public UDinoTamedInventoryComponent_BP_Base_C
	{
	public:
		bool                                                       retbool;                                                 // 0x0598(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool BPPreventEquipItem(class UPrimalItem* theItem);
		void ExecuteUbergraph_DinoTamedInventoryComponent_TekStrider(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
