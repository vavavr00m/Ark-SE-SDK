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
	 * Function ProjPoop_Shapeshifter.ProjPoop_Shapeshifter_C.BP_IgnoreProjectileImpact
	 */
	struct AProjPoop_Shapeshifter_C_BP_IgnoreProjectileImpact_Params
	{
	public:
		struct FHitResult                                          ImpactHit;                                               // 0x0000(0x0088)  (Parm)
		bool                                                       ReturnValue;                                             // 0x0088(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CN4K[0x3];                                   // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ProjPoop_Shapeshifter.ProjPoop_Shapeshifter_C.BPProjectileBounced
	 */
	struct AProjPoop_Shapeshifter_C_BPProjectileBounced_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
		struct FVector                                             ImpactVelocity;                                          // 0x0088(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProjPoop_Shapeshifter.ProjPoop_Shapeshifter_C.ReceiveBeginPlay
	 */
	struct AProjPoop_Shapeshifter_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ProjPoop_Shapeshifter.ProjPoop_Shapeshifter_C.UserConstructionScript
	 */
	struct AProjPoop_Shapeshifter_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ProjPoop_Shapeshifter.ProjPoop_Shapeshifter_C.ExecuteUbergraph_ProjPoop_Shapeshifter
	 */
	struct AProjPoop_Shapeshifter_C_ExecuteUbergraph_ProjPoop_Shapeshifter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
