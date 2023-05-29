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
	 * BlueprintGeneratedClass Buff_Grappled_BAse.Buff_Grappled_Base_C
	 * Size -> 0x0000 (FullSize[0x0B88] - InheritedSize[0x0B88])
	 */
	class ABuff_Grappled_Base_C : public APrimalBuff_Grappled
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_Grappled_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
