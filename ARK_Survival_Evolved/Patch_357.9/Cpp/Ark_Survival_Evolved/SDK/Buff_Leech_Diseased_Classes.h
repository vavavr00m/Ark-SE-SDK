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
	 * BlueprintGeneratedClass Buff_Leech_Diseased.Buff_Leech_Diseased_C
	 * Size -> 0x0000 (FullSize[0x0A00] - InheritedSize[0x0A00])
	 */
	class ABuff_Leech_Diseased_C : public ABuff_Leech_C
	{
	public:
		void BPSetupForInstigator(class AActor* ForInstigator);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_Leech_Diseased(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
