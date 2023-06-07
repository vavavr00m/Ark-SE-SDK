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
	 * Function ProjAmargaSpike.ProjAmargaSpike_C.BPProjectileBounced
	 */
	struct AProjAmargaSpike_C_BPProjectileBounced_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
		struct FVector                                             ImpactVelocity;                                          // 0x0088(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProjAmargaSpike.ProjAmargaSpike_C.ReceiveHit
	 */
	struct AProjAmargaSpike_C_ReceiveHit_Params
	{
	public:
		class UPrimitiveComponent*                                 MyComp;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              Other;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSelfMoved;                                              // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_573O[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             HitLocation;                                             // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             HitNormal;                                               // 0x0028(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NormalImpulse;                                           // 0x0034(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          Hit;                                                     // 0x0040(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ProjAmargaSpike.ProjAmargaSpike_C.ReceiveBeginPlay
	 */
	struct AProjAmargaSpike_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ProjAmargaSpike.ProjAmargaSpike_C.OnExplode
	 */
	struct AProjAmargaSpike_C_OnExplode_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ProjAmargaSpike.ProjAmargaSpike_C.UserConstructionScript
	 */
	struct AProjAmargaSpike_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ProjAmargaSpike.ProjAmargaSpike_C.Timeline_LerpSpikeMesh__FinishedFunc
	 */
	struct AProjAmargaSpike_C_Timeline_LerpSpikeMesh__FinishedFunc_Params
	{	};

	/**
	 * Function ProjAmargaSpike.ProjAmargaSpike_C.Timeline_LerpSpikeMesh__UpdateFunc
	 */
	struct AProjAmargaSpike_C_Timeline_LerpSpikeMesh__UpdateFunc_Params
	{	};

	/**
	 * Function ProjAmargaSpike.ProjAmargaSpike_C.Multi_PostExplode
	 */
	struct AProjAmargaSpike_C_Multi_PostExplode_Params
	{
	public:
		TArray<struct FVector>                                     Locs;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       FailedForInst;                                           // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsSpawn;                                                 // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O3OE[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            SpawnRot;                                                // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProjAmargaSpike.ProjAmargaSpike_C.LerpSpikeMesh
	 */
	struct AProjAmargaSpike_C_LerpSpikeMesh_Params
	{	};

	/**
	 * Function ProjAmargaSpike.ProjAmargaSpike_C.Multi_AddMoveIgnoreActor
	 */
	struct AProjAmargaSpike_C_Multi_AddMoveIgnoreActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProjAmargaSpike.ProjAmargaSpike_C.ExecuteUbergraph_ProjAmargaSpike
	 */
	struct AProjAmargaSpike_C_ExecuteUbergraph_ProjAmargaSpike_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
