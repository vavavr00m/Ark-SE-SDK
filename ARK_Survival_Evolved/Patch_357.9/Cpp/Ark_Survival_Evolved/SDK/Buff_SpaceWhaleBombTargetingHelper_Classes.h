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
	 * BlueprintGeneratedClass Buff_SpaceWhaleBombTargetingHelper.Buff_SpaceWhaleBombTargetingHelper_C
	 * Size -> 0x0010 (FullSize[0x0990] - InheritedSize[0x0980])
	 */
	class ABuff_SpaceWhaleBombTargetingHelper_C : public APrimalBuff
	{
	public:
		double                                                     StartTime;                                               // 0x0980(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class ASpaceWhale_Character_BP_C*                          Whale;                                                   // 0x0988(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BPSetupForInstigator(class AActor* ForInstigator);
		void BuffTickClient(float DeltaTime);
		bool AllowPostProcessEffect();
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_SpaceWhaleBombTargetingHelper(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
