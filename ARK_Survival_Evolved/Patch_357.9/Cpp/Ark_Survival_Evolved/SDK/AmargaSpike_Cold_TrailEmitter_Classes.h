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
	 * BlueprintGeneratedClass AmargaSpike_Cold_TrailEmitter.AmargaSpike_Cold_TrailEmitter_C
	 * Size -> 0x0001 (FullSize[0x0519] - InheritedSize[0x0518])
	 */
	class AAmargaSpike_Cold_TrailEmitter_C : public APrimalEmitterSpawnable
	{
	public:
		bool                                                       bIsInWater;                                              // 0x0518(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ReceiveBeginPlay();
		void InWaterCheck();
		void UserConstructionScript();
		void ExecuteUbergraph_AmargaSpike_Cold_TrailEmitter(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
