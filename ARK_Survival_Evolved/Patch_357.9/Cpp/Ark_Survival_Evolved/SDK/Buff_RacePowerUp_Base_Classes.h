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
	 * BlueprintGeneratedClass Buff_RacePowerUp_Base.Buff_RacePowerUp_Base_C
	 * Size -> 0x0000 (FullSize[0x0980] - InheritedSize[0x0980])
	 */
	class ABuff_RacePowerUp_Base_C : public ABuff_Base_C
	{
	public:
		void InitRacePowerUp(class AMissionType_Race_C* FromRaceMission);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_RacePowerUp_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
