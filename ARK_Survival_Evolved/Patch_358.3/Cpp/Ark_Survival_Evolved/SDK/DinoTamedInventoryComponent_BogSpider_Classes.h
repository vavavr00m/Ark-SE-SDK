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
	 * BlueprintGeneratedClass DinoTamedInventoryComponent_BogSpider.DinoTamedInventoryComponent_BogSpider_C
	 * Size -> 0x000C (FullSize[0x05A4] - InheritedSize[0x0598])
	 */
	class UDinoTamedInventoryComponent_BogSpider_C : public UDinoTamedInventoryComponent_BP_Base_C
	{
	public:
		class UClass*                                              BloodPackClass;                                          // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      BloodPackUseInterval;                                    // 0x05A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		float BPOverrideItemMinimumUseInterval(class UPrimalItem* theItem);
		void ExecuteUbergraph_DinoTamedInventoryComponent_BogSpider(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
