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
	 * BlueprintGeneratedClass DinoTamedInventoryComponent_Jugbug_Oil.DinoTamedInventoryComponent_Jugbug_Oil_C
	 * Size -> 0x0001 (FullSize[0x0599] - InheritedSize[0x0598])
	 */
	class UDinoTamedInventoryComponent_Jugbug_Oil_C : public UDinoDropInventoryComponent_BP_Base_C
	{
	public:
		bool                                                       bWasAddedItems;                                          // 0x0598(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BPInventoryRefresh();
		void ExecuteUbergraph_DinoTamedInventoryComponent_Jugbug_Oil(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
