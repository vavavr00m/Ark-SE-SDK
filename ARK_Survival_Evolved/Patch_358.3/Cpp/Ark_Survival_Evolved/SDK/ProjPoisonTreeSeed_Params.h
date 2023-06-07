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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function ProjPoisonTreeSeed.ProjPoisonTreeSeed_C.BPInitializedVelocity
	 */
	struct AProjPoisonTreeSeed_C_BPInitializedVelocity_Params
	{
	public:
		struct FVector                                             InVelocity;                                              // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      CustomSpeed;                                             // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProjPoisonTreeSeed.ProjPoisonTreeSeed_C.UserConstructionScript
	 */
	struct AProjPoisonTreeSeed_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ProjPoisonTreeSeed.ProjPoisonTreeSeed_C.OnExplode
	 */
	struct AProjPoisonTreeSeed_C_OnExplode_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ProjPoisonTreeSeed.ProjPoisonTreeSeed_C.ReceiveTick
	 */
	struct AProjPoisonTreeSeed_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProjPoisonTreeSeed.ProjPoisonTreeSeed_C.ReceiveBeginPlay
	 */
	struct AProjPoisonTreeSeed_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ProjPoisonTreeSeed.ProjPoisonTreeSeed_C.Multi_PlayLandingVFX
	 */
	struct AProjPoisonTreeSeed_C_Multi_PlayLandingVFX_Params
	{
	public:
		struct FVector                                             Loc;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProjPoisonTreeSeed.ProjPoisonTreeSeed_C.ExecuteUbergraph_ProjPoisonTreeSeed
	 */
	struct AProjPoisonTreeSeed_C_ExecuteUbergraph_ProjPoisonTreeSeed_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
