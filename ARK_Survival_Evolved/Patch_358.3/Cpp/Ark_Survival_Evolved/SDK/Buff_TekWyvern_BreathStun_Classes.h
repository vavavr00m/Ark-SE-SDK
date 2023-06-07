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
	 * BlueprintGeneratedClass Buff_TekWyvern_BreathStun.Buff_TekWyvern_BreathStun_C
	 * Size -> 0x0000 (FullSize[0x0998] - InheritedSize[0x0998])
	 */
	class ABuff_TekWyvern_BreathStun_C : public ABuff_Stunned_C
	{
	public:
		class UClass* BPOverrideBuffToGiveOnDeactivation();
		bool BPCustomAllowAddBuff(class APrimalCharacter* forCharacter, class AActor* DamageCauser);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_TekWyvern_BreathStun(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
