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
	 * BlueprintGeneratedClass Gigant_Character_BP_Base.Gigant_Character_BP_Base_C
	 * Size -> 0x0008 (FullSize[0x2290] - InheritedSize[0x2288])
	 */
	class AGigant_Character_BP_Base_C : public ADino_Character_BP_C
	{
	public:
		class UDinoCharacterStatusComponent_BP_Gigant_C*           DinoCharacterStatus_BP_Gigant_C1;                        // 0x2288(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Gigant_Character_BP_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
