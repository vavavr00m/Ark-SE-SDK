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
	 * BlueprintGeneratedClass DinoAttackStateAoEFlee_Para.DinoAttackStateAoEFlee_Para_C
	 * Size -> 0x001E (FullSize[0x0088] - InheritedSize[0x006A])
	 */
	class UDinoAttackStateAoEFlee_Para_C : public UDinoAttackStateAoEFlee_Base_C
	{
	public:
		unsigned char                                              UnknownData_4B16[0x6];                                   // 0x006A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      FrightenExtraDinoTypes;                                  // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor
		float                                                      FrightenMassThresholdCarnivore;                          // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FrightenMassThresholdHerbivore;                          // 0x0084(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ShouldFrightenCharacter(class APrimalCharacter* Character, bool* ShouldFrighten);
		void GetOctreeGroup(EServerOctreeGroup* OctreeGroup);
		void ExecuteUbergraph_DinoAttackStateAoEFlee_Para(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
