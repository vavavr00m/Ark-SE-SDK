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
	 * Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.CanSpawnDrones
	 */
	struct ABee_Queen_Character_BP_C_CanSpawnDrones_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.On Drone Died
	 */
	struct ABee_Queen_Character_BP_C_OnDroneDied_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ESW1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APawn*                                               InstigatorPawn;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.BPSetupTamed
	 */
	struct ABee_Queen_Character_BP_C_BPSetupTamed_Params
	{
	public:
		bool                                                       bWasJustTamed;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KHI9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.TimerUpdateDrones
	 */
	struct ABee_Queen_Character_BP_C_TimerUpdateDrones_Params
	{	};

	/**
	 * Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.GetHiveSocketName
	 */
	struct ABee_Queen_Character_BP_C_GetHiveSocketName_Params
	{
	public:
		class UHierarchicalInstancedStaticMeshComponent*           Mesh;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                Selected;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.UpdateDrones
	 */
	struct ABee_Queen_Character_BP_C_UpdateDrones_Params
	{	};

	/**
	 * Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.AddBeeReference
	 */
	struct ABee_Queen_Character_BP_C_AddBeeReference_Params
	{
	public:
		class APrimalDinoCharacter*                                BeeReference;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.BPTryMultiUse
	 */
	struct ABee_Queen_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.BPGetMultiUseEntries
	 */
	struct ABee_Queen_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.BPClientDoMultiUse
	 */
	struct ABee_Queen_Character_BP_C_BPClientDoMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ClientUseIndex;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7891[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.BPAdjustDamage
	 */
	struct ABee_Queen_Character_BP_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CHO5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6DQU[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0OUW[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.HideNotify
	 */
	struct ABee_Queen_Character_BP_C_HideNotify_Params
	{	};

	/**
	 * Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.OnRep_bIsHidden
	 */
	struct ABee_Queen_Character_BP_C_OnRep_bIsHidden_Params
	{	};

	/**
	 * Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.SearchTreesForValidHiveSpawnLocation
	 */
	struct ABee_Queen_Character_BP_C_SearchTreesForValidHiveSpawnLocation_Params
	{
	public:
		bool                                                       succeeded;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B28K[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct UObject_FTransform                                  Transform;                                               // 0x0010(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.HideInHive
	 */
	struct ABee_Queen_Character_BP_C_HideInHive_Params
	{
	public:
		class ABeeHive_C*                                          Hive;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.Try to Spawn Drones
	 */
	struct ABee_Queen_Character_BP_C_TrytoSpawnDrones_Params
	{
	public:
		int32_t                                                    NumToSpawn;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       PlayAnim;                                                // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.BPTimerServer
	 */
	struct ABee_Queen_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.UserConstructionScript
	 */
	struct ABee_Queen_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.SpawnDrone
	 */
	struct ABee_Queen_Character_BP_C_SpawnDrone_Params
	{
	public:
		int32_t                                                    NumToSpawn;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       PlayedAnim;                                              // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.BPUnstasis
	 */
	struct ABee_Queen_Character_BP_C_BPUnstasis_Params
	{	};

	/**
	 * Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.Init
	 */
	struct ABee_Queen_Character_BP_C_Init_Params
	{	};

	/**
	 * Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.SpawnSmoke
	 */
	struct ABee_Queen_Character_BP_C_SpawnSmoke_Params
	{	};

	/**
	 * Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.Suicide
	 */
	struct ABee_Queen_Character_BP_C_Suicide_Params
	{	};

	/**
	 * Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.ReceiveBeginPlay
	 */
	struct ABee_Queen_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.OnDied_Event
	 */
	struct ABee_Queen_Character_BP_C_OnDied_Event_Params
	{
	public:
		class APrimalCharacter*                                    DiedCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.SpawnedDronePart
	 */
	struct ABee_Queen_Character_BP_C_SpawnedDronePart_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.ExecuteUbergraph_Bee_Queen_Character_BP
	 */
	struct ABee_Queen_Character_BP_C_ExecuteUbergraph_Bee_Queen_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
