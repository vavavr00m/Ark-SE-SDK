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
	 * BlueprintGeneratedClass Buff_HoverSkiff_CarryingCharacters.Buff_HoverSkiff_CarryingCharacters_C
	 * Size -> 0x0000 (FullSize[0x0980] - InheritedSize[0x0980])
	 */
	class ABuff_HoverSkiff_CarryingCharacters_C : public ABuff_Base_C
	{
	public:
		bool BPPreventRunning();
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_HoverSkiff_CarryingCharacters(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
