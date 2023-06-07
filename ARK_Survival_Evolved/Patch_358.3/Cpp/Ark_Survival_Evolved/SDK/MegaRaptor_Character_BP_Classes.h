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
	 * BlueprintGeneratedClass MegaRaptor_Character_BP.MegaRaptor_Character_BP_C
	 * Size -> 0x000F (FullSize[0x2668] - InheritedSize[0x2659])
	 */
	class AMegaRaptor_Character_BP_C : public ARaptor_Character_BP_C
	{
	public:
		unsigned char                                              UnknownData_E06R[0x7];                                   // 0x2659(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDinoCharacterStatusComponent_BP_MegaRaptor_C*       DinoCharacterStatus_BP_MegaRaptor_C1;                    // 0x2660(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_MegaRaptor_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
