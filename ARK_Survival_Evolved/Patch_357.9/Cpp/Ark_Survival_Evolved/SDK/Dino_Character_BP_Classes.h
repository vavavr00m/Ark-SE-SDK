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
	 * BlueprintGeneratedClass Dino_Character_BP.Dino_Character_BP_C
	 * Size -> 0x0010 (FullSize[0x2288] - InheritedSize[0x2278])
	 */
	class ADino_Character_BP_C : public APrimalDinoCharacter
	{
	public:
		unsigned char                                              UnknownData_NP0K[0x8];                                   // 0x2278(0x0008) Fix Super Size
		class USphereComponent*                                    StasisComponent;                                         // 0x2280(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Dino_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
