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
	 * BlueprintGeneratedClass ProjArrow_CupidArrow_Flame.ProjArrow_CupidArrow_Flame_C
	 * Size -> 0x0008 (FullSize[0x06A8] - InheritedSize[0x06A0])
	 */
	class AProjArrow_CupidArrow_Flame_C : public AProjArrow_Flame_C
	{
	public:
		class UParticleSystemComponent*                            ParticleSystem1;                                         // 0x06A0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void OnExplode(struct FHitResult* Result);
		void UserConstructionScript();
		void ExecuteUbergraph_ProjArrow_CupidArrow_Flame(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
