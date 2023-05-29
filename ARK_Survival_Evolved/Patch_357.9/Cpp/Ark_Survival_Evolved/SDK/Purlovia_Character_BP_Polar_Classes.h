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
	 * BlueprintGeneratedClass Purlovia_Character_BP_Polar.Purlovia_Character_BP_Polar_C
	 * Size -> 0x0008 (FullSize[0x2A80] - InheritedSize[0x2A78])
	 */
	class APurlovia_Character_BP_Polar_C : public APurlovia_Character_BP_C
	{
	public:
		class UDinoCharacterStatusComponent_BP_Purlovia_Polar_C*   DinoCharacterStatus_BP_Purlovia_Polar_C1;                // 0x2A78(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Purlovia_Character_BP_Polar(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
