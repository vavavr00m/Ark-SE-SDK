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
	 * BlueprintGeneratedClass BeerBarrel.BeerBarrel_C
	 * Size -> 0x0010 (FullSize[0x0F40] - InheritedSize[0x0F30])
	 */
	class ABeerBarrel_C : public AWaterTankBaseBP_NoInv_C
	{
	public:
		class UParticleSystemComponent*                            BeerParticles;                                           // 0x0F30(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UPrimalInventoryBP_BeerBarrel_C*                     PrimalInventoryBP_BeerBarrel_C1;                         // 0x0F38(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void BPUpdateItemVisuals();
		void ExecuteUbergraph_BeerBarrel(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
