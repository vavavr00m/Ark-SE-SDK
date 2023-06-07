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
	 * BlueprintGeneratedClass Buff_Thornmail_Poison_Boosted.Buff_Thornmail_Poison_Boosted_C
	 * Size -> 0x0000 (FullSize[0x09A4] - InheritedSize[0x09A4])
	 */
	class ABuff_Thornmail_Poison_Boosted_C : public ABuff_Thornmail_Poison_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_Thornmail_Poison_Boosted(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
