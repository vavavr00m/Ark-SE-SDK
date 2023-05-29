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
	 * BlueprintGeneratedClass Rhino_Character_BP.Rhino_Character_BP_C
	 * Size -> 0x000C (FullSize[0x2294] - InheritedSize[0x2288])
	 */
	class ARhino_Character_BP_C : public ADino_Character_BP_C
	{
	public:
		class UDinoCharacterStatusComponent_BP_Rhino_C*            DinoCharacterStatus_BP_Rhino_C1;                         // 0x2288(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MaxExtraSpeedAdditionalDamagePercent;                    // 0x2290(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetBestExtraRunSpeedModifier(float* Out);
		float BPGetExtraMeleeDamageModifier();
		float BPGetHUDOverrideBuffProgressBarPercent();
		void GetExtraRunSpeedModifierPercent(float* PercentVal);
		void UserConstructionScript();
		void ExecuteUbergraph_Rhino_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
