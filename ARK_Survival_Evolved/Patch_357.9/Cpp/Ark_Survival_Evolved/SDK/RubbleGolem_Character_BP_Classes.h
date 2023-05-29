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
	 * BlueprintGeneratedClass RubbleGolem_Character_BP.RubbleGolem_Character_BP_C
	 * Size -> 0x000B (FullSize[0x2480] - InheritedSize[0x2475])
	 */
	class ARubbleGolem_Character_BP_C : public ARockGolem_Character_BP_C
	{
	public:
		unsigned char                                              UnknownData_JLRS[0x3];                                   // 0x2475(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDinoCharacterStatusComponent_BP_RubbleGolem_C*      DinoCharacterStatus_BP_RubbleGolem_C1;                   // 0x2478(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_RubbleGolem_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
