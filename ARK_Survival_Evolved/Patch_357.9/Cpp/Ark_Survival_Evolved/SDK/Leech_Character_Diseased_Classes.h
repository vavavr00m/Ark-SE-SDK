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
	 * BlueprintGeneratedClass Leech_Character_Diseased.Leech_Character_Diseased_C
	 * Size -> 0x0008 (FullSize[0x2298] - InheritedSize[0x2290])
	 */
	class ALeech_Character_Diseased_C : public ALeech_Character_C
	{
	public:
		class UDinoCharacterStatusComponent_BP_Leech_Diseased_C*   DinoCharacterStatus_BP_Leech_Diseased_C1;                // 0x2290(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Leech_Character_Diseased(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
