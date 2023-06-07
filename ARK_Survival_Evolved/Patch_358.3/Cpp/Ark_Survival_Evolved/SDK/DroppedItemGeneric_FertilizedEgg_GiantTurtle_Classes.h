#pragma once

/**
 * Name: Ark_Survival_Evolved
 * Version: Patch_358.3
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
	 * BlueprintGeneratedClass DroppedItemGeneric_FertilizedEgg_GiantTurtle.DroppedItemGeneric_FertilizedEgg_GiantTurtle_C
	 * Size -> 0x0001 (FullSize[0x0741] - InheritedSize[0x0740])
	 */
	class ADroppedItemGeneric_FertilizedEgg_GiantTurtle_C : public ADroppedItemGeneric_FertilizedEgg_C
	{
	public:
		bool                                                       AllowIncubation;                                         // 0x0740(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor

	public:
		void ReceiveBeginPlay();
		void UpdateAllowIncubation();
		void GetDefaultEggValues(float* DefaultEggDurabilityLoss, float* DefaultEggMinTemp, float* DefaultEggMaxTemp);
		void OnRep_AllowIncubation();
		void GetAllowIncubation(bool* Allow);
		void ThrottledTick();
		void UserConstructionScript();
		void ExecuteUbergraph_DroppedItemGeneric_FertilizedEgg_GiantTurtle(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
