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
	 * BlueprintGeneratedClass Yeti_Character_BP.Yeti_Character_BP_C
	 * Size -> 0x0008 (FullSize[0x2A70] - InheritedSize[0x2A68])
	 */
	class AYeti_Character_BP_C : public ABigfoot_Character_BP_C
	{
	public:
		class UDinoCharacterStatusComponent_BP_Yeti_C*             DinoCharacterStatus_BP_Yeti_C1;                          // 0x2A68(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Yeti_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
