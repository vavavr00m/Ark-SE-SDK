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
	 * Function AmargaSpike.AmargaSpike_C.BPOnDemolish
	 */
	struct AAmargaSpike_C_BPOnDemolish_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AmargaSpike.AmargaSpike_C.CheckApplySpikeDebuff
	 */
	struct AAmargaSpike_C_CheckApplySpikeDebuff_Params
	{
	public:
		class AActor*                                              forActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AmargaSpike.AmargaSpike_C.CheckApplySpikeDamage
	 */
	struct AAmargaSpike_C_CheckApplySpikeDamage_Params
	{
	public:
		class AActor*                                              forActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AmargaSpike.AmargaSpike_C.UpdateSpikeRelLoc
	 */
	struct AAmargaSpike_C_UpdateSpikeRelLoc_Params
	{	};

	/**
	 * Function AmargaSpike.AmargaSpike_C.BPUpdatedHealth
	 */
	struct AAmargaSpike_C_BPUpdatedHealth_Params
	{
	public:
		bool                                                       bDoReplication;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AmargaSpike.AmargaSpike_C.InitSpike
	 */
	struct AAmargaSpike_C_InitSpike_Params
	{	};

	/**
	 * Function AmargaSpike.AmargaSpike_C.RefreshTeamColorVisuals
	 */
	struct AAmargaSpike_C_RefreshTeamColorVisuals_Params
	{	};

	/**
	 * Function AmargaSpike.AmargaSpike_C.UserConstructionScript
	 */
	struct AAmargaSpike_C_UserConstructionScript_Params
	{	};

	/**
	 * Function AmargaSpike.AmargaSpike_C.SpikeTick
	 */
	struct AAmargaSpike_C_SpikeTick_Params
	{	};

	/**
	 * Function AmargaSpike.AmargaSpike_C.ReceiveBeginPlay
	 */
	struct AAmargaSpike_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function AmargaSpike.AmargaSpike_C.BndEvt__MyStaticMesh_K2Node_ComponentBoundEvent_276_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AAmargaSpike_C_BndEvt__MyStaticMesh_K2Node_ComponentBoundEvent_276_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    OtherBodyIndex;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bFromSweep;                                              // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FX0D[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0018(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function AmargaSpike.AmargaSpike_C.BndEvt__DebuffCollision_K2Node_ComponentBoundEvent_366_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AAmargaSpike_C_BndEvt__DebuffCollision_K2Node_ComponentBoundEvent_366_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    OtherBodyIndex;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bFromSweep;                                              // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H4R4[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0018(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function AmargaSpike.AmargaSpike_C.BndEvt__DebuffCollision_K2Node_ComponentBoundEvent_392_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct AAmargaSpike_C_BndEvt__DebuffCollision_K2Node_ComponentBoundEvent_392_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    OtherBodyIndex;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AmargaSpike.AmargaSpike_C.BindOnSpawnedOnStructureDestroyed
	 */
	struct AAmargaSpike_C_BindOnSpawnedOnStructureDestroyed_Params
	{	};

	/**
	 * Function AmargaSpike.AmargaSpike_C.OnSpawnedOnStructureDestroyed
	 */
	struct AAmargaSpike_C_OnSpawnedOnStructureDestroyed_Params
	{	};

	/**
	 * Function AmargaSpike.AmargaSpike_C.ExecuteUbergraph_AmargaSpike
	 */
	struct AAmargaSpike_C_ExecuteUbergraph_AmargaSpike_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
