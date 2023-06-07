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
	 * BlueprintGeneratedClass MissionServerSidePoint_Race_StartingLine.MissionServerSidePoint_Race_StartingLine_C
	 * Size -> 0x0008 (FullSize[0x04B8] - InheritedSize[0x04B0])
	 */
	class AMissionServerSidePoint_Race_StartingLine_C : public AMissionServerSidePoint
	{
	public:
		class UParticleSystemComponent*                            ParticleSystem1;                                         // 0x04B0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_MissionServerSidePoint_Race_StartingLine(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
