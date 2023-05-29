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
	 * BlueprintGeneratedClass Buff_NearChrufe.Buff_NearChrufe_C
	 * Size -> 0x0004 (FullSize[0x0984] - InheritedSize[0x0980])
	 */
	class ABuff_NearChrufe_C : public ABuff_Base_C
	{
	public:
		int32_t                                                    HeatLevel;                                               // 0x0980(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BPDeactivated(class AActor* ForInstigator);
		void BuffTickClient(float DeltaTime);
		void UpdateHeatLevel(int32_t IncreasedHeatlevel);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_NearChrufe(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
