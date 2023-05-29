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
	 * BlueprintGeneratedClass PrimalItem_BossTributeGeneric.PrimalItem_BossTributeGeneric_C
	 * Size -> 0x0018 (FullSize[0x0B00] - InheritedSize[0x0AE8])
	 */
	class UPrimalItem_BossTributeGeneric_C : public UPrimalItem_Base_C
	{
	public:
		class UClass*                                              BossArenaManagerClass;                                   // 0x0AE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UClass*>                                      AdditionalBossArenaManagersToCheck;                      // 0x0AF0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		class FString BPAllowCrafting(class AShooterPlayerController* ForPC);
		void ExecuteUbergraph_PrimalItem_BossTributeGeneric(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
