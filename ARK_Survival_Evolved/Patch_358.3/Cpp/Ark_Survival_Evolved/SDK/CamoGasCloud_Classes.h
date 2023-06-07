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
	 * BlueprintGeneratedClass CamoGasCloud.CamoGasCloud_C
	 * Size -> 0x0003 (FullSize[0x0983] - InheritedSize[0x0980])
	 */
	class ACamoGasCloud_C : public ABuff_PoisonTrap_C
	{
	public:
		bool                                                       drainStaminaAffectsDinos;                                // 0x0980(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       drainStaminaAffectsBigDinos;                             // 0x0981(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       drainStaminaAffectsTamedDinos;                           // 0x0982(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool BPExcludeAoEActor(class AActor* ActorToConsider);
		void UserConstructionScript();
		void ExecuteUbergraph_CamoGasCloud(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
