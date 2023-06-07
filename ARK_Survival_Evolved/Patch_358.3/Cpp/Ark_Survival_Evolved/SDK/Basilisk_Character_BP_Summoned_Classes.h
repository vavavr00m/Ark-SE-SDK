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
	 * BlueprintGeneratedClass Basilisk_Character_BP_Summoned.Basilisk_Character_BP_Summoned_C
	 * Size -> 0x0000 (FullSize[0x2960] - InheritedSize[0x2960])
	 */
	class ABasilisk_Character_BP_Summoned_C : public ABasilisk_Character_BP_C
	{
	public:
		void InitializeDive();
		void FindNearbyEggs(bool StartSeeking);
		void UserConstructionScript();
		void ExecuteUbergraph_Basilisk_Character_BP_Summoned(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
