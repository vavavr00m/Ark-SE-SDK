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
	 * BlueprintGeneratedClass Buff_Companion_BaseBP.Buff_Companion_BaseBP_C
	 * Size -> 0x0000 (FullSize[0x1130] - InheritedSize[0x1130])
	 */
	class ABuff_Companion_BaseBP_C : public APrimalBuff_Companion
	{
	public:
		void BPInstigatorPossessed(class AController* ByController);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_Companion_BaseBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
