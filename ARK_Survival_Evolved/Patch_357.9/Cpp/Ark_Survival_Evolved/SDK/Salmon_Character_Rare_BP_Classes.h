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
	 * BlueprintGeneratedClass Salmon_Character_Rare_BP.Salmon_Character_Rare_BP_C
	 * Size -> 0x0008 (FullSize[0x2298] - InheritedSize[0x2290])
	 */
	class ASalmon_Character_Rare_BP_C : public ASalmon_Character_BP_C
	{
	public:
		class UParticleSystemComponent*                            ParticleSystem1;                                         // 0x2290(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Salmon_Character_Rare_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
