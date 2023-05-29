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
	 * BlueprintGeneratedClass Buff_BiomeApplied_Gen2NoTick.Buff_BiomeApplied_Gen2NoTick_C
	 * Size -> 0x0005 (FullSize[0x0985] - InheritedSize[0x0980])
	 */
	class ABuff_BiomeApplied_Gen2NoTick_C : public ABuff_Base_C
	{
	public:
		float                                                      BuffZoneRemovalTimeThreshold;                            // 0x0980(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bDeactivationTimerActive;                                // 0x0984(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_BiomeApplied_Gen2NoTick(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
