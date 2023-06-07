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
	 * Function RhynioResinProj.RhynioResinProj_C.ReceiveDestroyed
	 */
	struct ARhynioResinProj_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function RhynioResinProj.RhynioResinProj_C.BPIgnoreRadialDamageVictim
	 */
	struct ARhynioResinProj_C_BPIgnoreRadialDamageVictim_Params
	{
	public:
		class AActor*                                              Victim;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_40I7[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RhynioResinProj.RhynioResinProj_C.ReceiveBeginPlay
	 */
	struct ARhynioResinProj_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function RhynioResinProj.RhynioResinProj_C.SetupIgnoreActors
	 */
	struct ARhynioResinProj_C_SetupIgnoreActors_Params
	{	};

	/**
	 * Function RhynioResinProj.RhynioResinProj_C.BP_IgnoreProjectileImpact
	 */
	struct ARhynioResinProj_C_BP_IgnoreProjectileImpact_Params
	{
	public:
		struct FHitResult                                          ImpactHit;                                               // 0x0000(0x0088)  (Parm)
		bool                                                       ReturnValue;                                             // 0x0088(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OWWM[0x3];                                   // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RhynioResinProj.RhynioResinProj_C.BPPostInitializeComponents
	 */
	struct ARhynioResinProj_C_BPPostInitializeComponents_Params
	{	};

	/**
	 * Function RhynioResinProj.RhynioResinProj_C.OnExplode
	 */
	struct ARhynioResinProj_C_OnExplode_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function RhynioResinProj.RhynioResinProj_C.UserConstructionScript
	 */
	struct ARhynioResinProj_C_UserConstructionScript_Params
	{	};

	/**
	 * Function RhynioResinProj.RhynioResinProj_C.Multi_Explode
	 */
	struct ARhynioResinProj_C_Multi_Explode_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x0088)  (Parm)
	};

	/**
	 * Function RhynioResinProj.RhynioResinProj_C.Multi_ClientDestroy
	 */
	struct ARhynioResinProj_C_Multi_ClientDestroy_Params
	{	};

	/**
	 * Function RhynioResinProj.RhynioResinProj_C.ExecuteUbergraph_RhynioResinProj
	 */
	struct ARhynioResinProj_C_ExecuteUbergraph_RhynioResinProj_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
