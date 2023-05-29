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
	 * BlueprintGeneratedClass WaterPipe_Base_Intake.WaterPipe_Base_Intake_C
	 * Size -> 0x0000 (FullSize[0x0B08] - InheritedSize[0x0B08])
	 */
	class AWaterPipe_Base_Intake_C : public AWaterPipeBaseBP_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_WaterPipe_Base_Intake(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
