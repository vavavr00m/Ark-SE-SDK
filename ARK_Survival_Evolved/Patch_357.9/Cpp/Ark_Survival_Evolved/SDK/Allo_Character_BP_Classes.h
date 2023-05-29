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
	 * BlueprintGeneratedClass Allo_Character_BP.Allo_Character_BP_C
	 * Size -> 0x000C (FullSize[0x2328] - InheritedSize[0x231C])
	 */
	class AAllo_Character_BP_C : public ADino_Character_BP_Pack_C
	{
	public:
		unsigned char                                              UnknownData_OEBI[0x4];                                   // 0x231C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDinoCharacterStatusComponent_BP_Allo_C*             DinoCharacterStatus_BP_Allo_C2;                          // 0x2320(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Allo_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
