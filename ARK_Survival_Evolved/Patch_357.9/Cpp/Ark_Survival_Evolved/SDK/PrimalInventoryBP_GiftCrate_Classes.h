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
	 * BlueprintGeneratedClass PrimalInventoryBP_GiftCrate.PrimalInventoryBP_GiftCrate_C
	 * Size -> 0x0010 (FullSize[0x05A8] - InheritedSize[0x0598])
	 */
	class UPrimalInventoryBP_GiftCrate_C : public UPrimalInventoryComponent
	{
	public:
		bool                                                       bAccessed;                                               // 0x0598(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DANP[0x3];                                   // 0x0599(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ChanceToSpawn;                                           // 0x059C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              DinoClass;                                               // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BPAccessedInventory(class AShooterPlayerController* ForPC);
		void ExecuteUbergraph_PrimalInventoryBP_GiftCrate(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
