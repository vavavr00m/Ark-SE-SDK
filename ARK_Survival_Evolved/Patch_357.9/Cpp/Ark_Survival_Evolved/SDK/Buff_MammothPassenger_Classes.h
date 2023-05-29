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
	 * BlueprintGeneratedClass Buff_MammothPassenger.Buff_MammothPassenger_C
	 * Size -> 0x0000 (FullSize[0x0980] - InheritedSize[0x0980])
	 */
	class ABuff_MammothPassenger_C : public ABuff_Base_C
	{
	public:
		ECameraStyle BPForceCameraStyle(class APrimalCharacter* ForViewTarget);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_MammothPassenger(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
