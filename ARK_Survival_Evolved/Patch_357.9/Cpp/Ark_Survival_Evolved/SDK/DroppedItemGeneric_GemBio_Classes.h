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
	 * BlueprintGeneratedClass DroppedItemGeneric_GemBio.DroppedItemGeneric_GemBio_C
	 * Size -> 0x0000 (FullSize[0x0728] - InheritedSize[0x0728])
	 */
	class ADroppedItemGeneric_GemBio_C : public ADroppedItemGeneric_Gem_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_DroppedItemGeneric_GemBio(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
