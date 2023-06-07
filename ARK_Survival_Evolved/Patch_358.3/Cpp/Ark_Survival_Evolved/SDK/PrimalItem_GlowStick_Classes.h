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
	 * BlueprintGeneratedClass PrimalItem_GlowStick.PrimalItem_GlowStick_C
	 * Size -> 0x0000 (FullSize[0x0AE8] - InheritedSize[0x0AE8])
	 */
	class UPrimalItem_GlowStick_C : public UPrimalItem_Base_C
	{
	public:
		void BPPostInitializeItem(class UWorld* OptionalInitWorld);
		void BPItemBroken();
		void ExecuteUbergraph_PrimalItem_GlowStick(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
