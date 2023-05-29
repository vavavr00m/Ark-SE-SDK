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
	 * BlueprintGeneratedClass ProjGrenade_Dinopithecus_Infested.ProjGrenade_Dinopithecus_Infested_C
	 * Size -> 0x0008 (FullSize[0x06F8] - InheritedSize[0x06F0])
	 */
	class AProjGrenade_Dinopithecus_Infested_C : public AProjGrenade_Dinopithecus_C
	{
	public:
		class UChildActorComponent*                                ChildActor1;                                             // 0x06F0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_ProjGrenade_Dinopithecus_Infested(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
