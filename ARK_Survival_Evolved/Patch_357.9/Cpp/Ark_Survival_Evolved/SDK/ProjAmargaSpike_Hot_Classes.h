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
	 * BlueprintGeneratedClass ProjAmargaSpike_Hot.ProjAmargaSpike_Hot_C
	 * Size -> 0x0008 (FullSize[0x07B8] - InheritedSize[0x07B0])
	 */
	class AProjAmargaSpike_Hot_C : public AProjAmargaSpike_C
	{
	public:
		class UChildActorComponent*                                ChildTrailEmitter;                                       // 0x07B0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_ProjAmargaSpike_Hot(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
