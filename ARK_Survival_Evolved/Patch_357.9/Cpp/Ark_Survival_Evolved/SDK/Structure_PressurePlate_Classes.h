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
	 * BlueprintGeneratedClass Structure_PressurePlate.Structure_PressurePlate_C
	 * Size -> 0x0000 (FullSize[0x11A0] - InheritedSize[0x11A0])
	 */
	class AStructure_PressurePlate_C : public AStructure_TekAlarm_C
	{
	public:
		void ReceiveBeginPlay();
		void UserConstructionScript();
		void ExecuteUbergraph_Structure_PressurePlate(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
