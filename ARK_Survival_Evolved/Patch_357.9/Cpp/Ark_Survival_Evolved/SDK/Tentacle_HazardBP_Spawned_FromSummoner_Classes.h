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
	 * BlueprintGeneratedClass Tentacle_HazardBP_Spawned_FromSummoner.Tentacle_HazardBP_Spawned_FromSummoner_C
	 * Size -> 0x0008 (FullSize[0x15E8] - InheritedSize[0x15E0])
	 */
	class ATentacle_HazardBP_Spawned_FromSummoner_C : public ATentacle_HazardBP_Spawned_C
	{
	public:
		class UStaticMeshComponent*                                StaticMesh1;                                             // 0x15E0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Tentacle_HazardBP_Spawned_FromSummoner(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
