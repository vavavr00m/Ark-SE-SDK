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
	 * BlueprintGeneratedClass Buff_Lionfish_Lion_RoarBoost.Buff_Lionfish_Lion_RoarBoost_C
	 * Size -> 0x0000 (FullSize[0x0980] - InheritedSize[0x0980])
	 */
	class ABuff_Lionfish_Lion_RoarBoost_C : public APrimalBuff
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_Lionfish_Lion_RoarBoost(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
