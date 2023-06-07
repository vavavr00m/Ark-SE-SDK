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
	 * Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.BPDeactivated
	 */
	struct ABuff_SpaceWhaleTeleport_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.ReceiveDestroyed
	 */
	struct ABuff_SpaceWhaleTeleport_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.BuffTickClient
	 */
	struct ABuff_SpaceWhaleTeleport_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.BPSetupForInstigator
	 */
	struct ABuff_SpaceWhaleTeleport_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.BPCustomAllowAddBuff
	 */
	struct ABuff_SpaceWhaleTeleport_C_BPCustomAllowAddBuff_Params
	{
	public:
		class APrimalCharacter*                                    forCharacter;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.BPPreventInstigatorMovementMode
	 */
	struct ABuff_SpaceWhaleTeleport_C_BPPreventInstigatorMovementMode_Params
	{
	public:
		EMovementMode                                              NewMovementMode;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              NewCustomMode;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZEYI[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.BPOnOwnerMassTeleportEvent
	 */
	struct ABuff_SpaceWhaleTeleport_C_BPOnOwnerMassTeleportEvent_Params
	{
	public:
		EMassTeleportState                                         EventState;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R3NT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalCharacter*                                    TeleportInitiatedByChar;                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.UserConstructionScript
	 */
	struct ABuff_SpaceWhaleTeleport_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.MultiHyperdriveEffect
	 */
	struct ABuff_SpaceWhaleTeleport_C_MultiHyperdriveEffect_Params
	{
	public:
		class USceneComponent*                                     MeshComp;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Start;                                                   // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             End;                                                     // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.OnMassTeleportTriggered
	 */
	struct ABuff_SpaceWhaleTeleport_C_OnMassTeleportTriggered_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.OnMassTeleportStarted
	 */
	struct ABuff_SpaceWhaleTeleport_C_OnMassTeleportStarted_Params
	{	};

	/**
	 * Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.OnMassTeleportCompleted
	 */
	struct ABuff_SpaceWhaleTeleport_C_OnMassTeleportCompleted_Params
	{	};

	/**
	 * Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.BPActivated
	 */
	struct ABuff_SpaceWhaleTeleport_C_BPActivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.ReceiveBeginPlay
	 */
	struct ABuff_SpaceWhaleTeleport_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.SyncMovementMode
	 */
	struct ABuff_SpaceWhaleTeleport_C_SyncMovementMode_Params
	{	};

	/**
	 * Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.HideMesh
	 */
	struct ABuff_SpaceWhaleTeleport_C_HideMesh_Params
	{
	public:
		bool                                                       Hide;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.ExecuteUbergraph_Buff_SpaceWhaleTeleport
	 */
	struct ABuff_SpaceWhaleTeleport_C_ExecuteUbergraph_Buff_SpaceWhaleTeleport_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
