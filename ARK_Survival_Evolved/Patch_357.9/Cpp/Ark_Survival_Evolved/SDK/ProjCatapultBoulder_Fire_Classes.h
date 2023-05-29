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
	 * BlueprintGeneratedClass ProjCatapultBoulder_Fire.ProjCatapultBoulder_Fire_C
	 * Size -> 0x001C (FullSize[0x06A4] - InheritedSize[0x0688])
	 */
	class AProjCatapultBoulder_Fire_C : public AProjCatapultBoulder_C
	{
	public:
		float                                                      ImpactSurfaceHeightOffsetForTraces;                      // 0x0688(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TraceLength;                                             // 0x068C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    NumberOfRandomTraces;                                    // 0x0690(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    MaxNumberOfFiresToSpawn;                                 // 0x0694(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            RotationOffset;                                          // 0x0698(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnExplode(struct FHitResult* Result);
		void UserConstructionScript();
		void ExecuteUbergraph_ProjCatapultBoulder_Fire(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
