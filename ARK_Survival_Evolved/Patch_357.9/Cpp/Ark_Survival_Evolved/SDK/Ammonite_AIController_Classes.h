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
	 * BlueprintGeneratedClass Ammonite_AIController.Ammonite_AIController_C
	 * Size -> 0x0002 (FullSize[0x091B] - InheritedSize[0x0919])
	 */
	class AAmmonite_AIController_C : public ADino_AIController_BP_C
	{
	public:
		bool                                                       onlyNotifyWaterAndAmphibiousNeighbors;                   // 0x0919(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       onlyNotifyCarnivoreNeighbors;                            // 0x091A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool BPShouldNotifyNeighbor(class APrimalDinoCharacter* neighbor);
		void UserConstructionScript();
		void ExecuteUbergraph_Ammonite_AIController(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
