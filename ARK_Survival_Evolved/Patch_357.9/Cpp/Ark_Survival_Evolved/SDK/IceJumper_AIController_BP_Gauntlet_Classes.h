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
	 * BlueprintGeneratedClass IceJumper_AIController_BP_Gauntlet.IceJumper_AIController_BP_Gauntlet_C
	 * Size -> 0x0004 (FullSize[0x0A1C] - InheritedSize[0x0A18])
	 */
	class AIceJumper_AIController_BP_Gauntlet_C : public AIceJumper_AIController_BP_C
	{
	public:
		float                                                      AIShouldMeleeDuration;                                   // 0x0A18(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UpdateMelee();
		void UserConstructionScript();
		void ExecuteUbergraph_IceJumper_AIController_BP_Gauntlet(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
