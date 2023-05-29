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
	 * BlueprintGeneratedClass WoodElevatorPlatform_Base.WoodElevatorPlatform_Base_C
	 * Size -> 0x0000 (FullSize[0x0BA8] - InheritedSize[0x0BA8])
	 */
	class AWoodElevatorPlatform_Base_C : public AElevatorPlatform_Base_C
	{
	public:
		void GetTopSwitch(class AWoodElevatorTopSwitch_C** Switch);
		void BPElevatorStopped(bool bSwitchedDirection, EPrimalStructureElevatorState NewDirection);
		void UserConstructionScript();
		void ExecuteUbergraph_WoodElevatorPlatform_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
