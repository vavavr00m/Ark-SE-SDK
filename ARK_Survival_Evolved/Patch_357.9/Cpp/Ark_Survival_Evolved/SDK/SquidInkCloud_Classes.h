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
	 * BlueprintGeneratedClass SquidInkCloud.SquidInkCloud_C
	 * Size -> 0x0000 (FullSize[0x0980] - InheritedSize[0x0980])
	 */
	class ASquidInkCloud_C : public ABuff_PoisonTrap_C
	{
	public:
		bool BPCustomAllowAddBuff(class APrimalCharacter* forCharacter, class AActor* DamageCauser);
		void UserConstructionScript();
		void ExecuteUbergraph_SquidInkCloud(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
