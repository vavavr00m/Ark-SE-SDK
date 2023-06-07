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
	 * BlueprintGeneratedClass BaseFuelBurner_GasOnly.BaseFuelBurner_GasOnly_C
	 * Size -> 0x0000 (FullSize[0x0E10] - InheritedSize[0x0E10])
	 */
	class ABaseFuelBurner_GasOnly_C : public ABaseFuelBurner_C
	{
	public:
		void NotifyCraftingFinished();
		void UserConstructionScript();
		void ExecuteUbergraph_BaseFuelBurner_GasOnly(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
