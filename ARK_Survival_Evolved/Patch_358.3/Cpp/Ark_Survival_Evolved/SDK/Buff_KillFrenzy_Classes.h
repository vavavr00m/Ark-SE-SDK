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
	 * BlueprintGeneratedClass Buff_KillFrenzy.Buff_KillFrenzy_C
	 * Size -> 0x0000 (FullSize[0x0980] - InheritedSize[0x0980])
	 */
	class ABuff_KillFrenzy_C : public APrimalBuff
	{
	public:
		bool BPPreventAddingOtherBuff(class UClass* anotherBuffClass);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_KillFrenzy(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
