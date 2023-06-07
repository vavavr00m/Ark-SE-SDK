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
	 * BlueprintGeneratedClass RhynioResinProj_Glob.RhynioResinProj_Glob_C
	 * Size -> 0x0008 (FullSize[0x0830] - InheritedSize[0x0828])
	 */
	class ARhynioResinProj_Glob_C : public ARhynioResinProj_C
	{
	public:
		class UChildActorComponent*                                ChildTrailEmitter;                                       // 0x0828(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_RhynioResinProj_Glob(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
