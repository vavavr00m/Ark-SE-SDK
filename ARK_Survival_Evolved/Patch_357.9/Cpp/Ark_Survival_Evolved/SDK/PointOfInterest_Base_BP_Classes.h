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
	 * BlueprintGeneratedClass PointOfInterest_Base_BP.PointOfInterest_Base_BP_C
	 * Size -> 0x0000 (FullSize[0x08B0] - InheritedSize[0x08B0])
	 */
	class APointOfInterest_Base_BP_C : public APointOfInterestActor
	{
	public:
		struct FPointOfInterestData GetPointOfInterestData();
		void UserConstructionScript();
		void ExecuteUbergraph_PointOfInterest_Base_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
