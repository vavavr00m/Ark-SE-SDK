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
	 * BlueprintGeneratedClass Buff_WyvernFire_OnFire_Ember.Buff_WyvernFire_OnFire_Ember_C
	 * Size -> 0x0000 (FullSize[0x09A0] - InheritedSize[0x09A0])
	 */
	class ABuff_WyvernFire_OnFire_Ember_C : public ABuff_WyvernFire_OnFire_C
	{
	public:
		void CalcDamageMultiplier();
		void BPResetBuffStart();
		void ReceiveBeginPlay();
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_WyvernFire_OnFire_Ember(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
