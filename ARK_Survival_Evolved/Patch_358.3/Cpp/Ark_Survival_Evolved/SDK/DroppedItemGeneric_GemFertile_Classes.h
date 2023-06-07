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
	 * BlueprintGeneratedClass DroppedItemGeneric_GemFertile.DroppedItemGeneric_GemFertile_C
	 * Size -> 0x0000 (FullSize[0x0728] - InheritedSize[0x0728])
	 */
	class ADroppedItemGeneric_GemFertile_C : public ADroppedItemGeneric_Gem_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_DroppedItemGeneric_GemFertile(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
