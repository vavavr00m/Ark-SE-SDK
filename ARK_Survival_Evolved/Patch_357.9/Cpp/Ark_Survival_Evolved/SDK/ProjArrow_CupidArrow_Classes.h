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
	 * BlueprintGeneratedClass ProjArrow_CupidArrow.ProjArrow_CupidArrow_C
	 * Size -> 0x0008 (FullSize[0x0698] - InheritedSize[0x0690])
	 */
	class AProjArrow_CupidArrow_C : public AProjArrow_C
	{
	public:
		class UParticleSystemComponent*                            ParticleSystem1;                                         // 0x0690(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void OnExplode(struct FHitResult* Result);
		void UserConstructionScript();
		void ExecuteUbergraph_ProjArrow_CupidArrow(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
