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
	 * BlueprintGeneratedClass Saber_Character_BP.Saber_Character_BP_C
	 * Size -> 0x0028 (FullSize[0x22B0] - InheritedSize[0x2288])
	 */
	class ASaber_Character_BP_C : public ADino_Character_BP_C
	{
	public:
		class UDinoCharacterStatusComponent_BP_Saber_C*            DinoCharacterStatus_BP_Saber_C1;                         // 0x2288(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<class UClass*>                                      ResourceTypesToScale;                                    // 0x2290(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              ResourceTypeScales;                                      // 0x22A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		float BPModifyHarvestingQuantity(float originalQuantity, class UClass* resourceSelected);
		void UserConstructionScript();
		void ExecuteUbergraph_Saber_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
