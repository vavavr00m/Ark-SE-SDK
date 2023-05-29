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
	 * BlueprintGeneratedClass Buff_Phoenix_OnFire.Buff_Phoenix_OnFire_C
	 * Size -> 0x0000 (FullSize[0x09A0] - InheritedSize[0x09A0])
	 */
	class ABuff_Phoenix_OnFire_C : public ABuff_FlameThrower_OnFire_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_Phoenix_OnFire(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
