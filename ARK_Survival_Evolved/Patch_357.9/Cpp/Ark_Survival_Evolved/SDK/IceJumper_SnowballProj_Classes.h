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
	 * BlueprintGeneratedClass IceJumper_SnowballProj.IceJumper_SnowballProj_C
	 * Size -> 0x0010 (FullSize[0x0674] - InheritedSize[0x0664])
	 */
	class AIceJumper_SnowballProj_C : public AChalicoProj_Base_C
	{
	public:
		unsigned char                                              UnknownData_JUR1[0x4];                                   // 0x0664(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UChildActorComponent*                                trail;                                                   // 0x0668(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MaxSnowBallScale;                                        // 0x0670(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_IceJumper_SnowballProj(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
