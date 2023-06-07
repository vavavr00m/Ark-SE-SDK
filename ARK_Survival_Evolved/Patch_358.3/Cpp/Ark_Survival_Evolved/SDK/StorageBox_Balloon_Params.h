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
	 * Function StorageBox_Balloon.StorageBox_Balloon_C.BlueprintDrawHUD
	 */
	struct AStorageBox_Balloon_C_BlueprintDrawHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterX;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterY;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StorageBox_Balloon.StorageBox_Balloon_C.BPPostInitializeComponents
	 */
	struct AStorageBox_Balloon_C_BPPostInitializeComponents_Params
	{	};

	/**
	 * Function StorageBox_Balloon.StorageBox_Balloon_C.BPPostLoadedFromSaveGame
	 */
	struct AStorageBox_Balloon_C_BPPostLoadedFromSaveGame_Params
	{	};

	/**
	 * Function StorageBox_Balloon.StorageBox_Balloon_C.GetBasedWeight
	 */
	struct AStorageBox_Balloon_C_GetBasedWeight_Params
	{
	public:
		float                                                      Weight;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StorageBox_Balloon.StorageBox_Balloon_C.HasClearance
	 */
	struct AStorageBox_Balloon_C_HasClearance_Params
	{
	public:
		bool                                                       Clearance;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_N4GB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function StorageBox_Balloon.StorageBox_Balloon_C.Set Optimal Cruising Altitude
	 */
	struct AStorageBox_Balloon_C_SetOptimalCruisingAltitude_Params
	{	};

	/**
	 * Function StorageBox_Balloon.StorageBox_Balloon_C.ChangeBalloonSize
	 */
	struct AStorageBox_Balloon_C_ChangeBalloonSize_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StorageBox_Balloon.StorageBox_Balloon_C.BPOverrideCantBuildReasonString
	 */
	struct AStorageBox_Balloon_C_BPOverrideCantBuildReasonString_Params
	{
	public:
		int32_t                                                    CantBuildReason;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JZVZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function StorageBox_Balloon.StorageBox_Balloon_C.BPIsAllowedToBuildEx
	 */
	struct AStorageBox_Balloon_C_BPIsAllowedToBuildEx_Params
	{
	public:
		struct FPlacementData                                      OutPlacementData;                                        // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
		int32_t                                                    CurrentAllowedReason;                                    // 0x0060(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TAKS[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APlayerController*                                   PC;                                                      // 0x0068(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bFinalPlacement;                                         // 0x0070(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bChoosingRotation;                                       // 0x0071(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AG38[0x2];                                   // 0x0072(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0074(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StorageBox_Balloon.StorageBox_Balloon_C.BPPreventPlacingOnFloorStructure
	 */
	struct AStorageBox_Balloon_C_BPPreventPlacingOnFloorStructure_Params
	{
	public:
		struct FPlacementData                                      theOutPlacementData;                                     // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
		class APrimalStructure*                                    FloorStructure;                                          // 0x0060(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StorageBox_Balloon.StorageBox_Balloon_C.CheckOptimalZDistance
	 */
	struct AStorageBox_Balloon_C_CheckOptimalZDistance_Params
	{	};

	/**
	 * Function StorageBox_Balloon.StorageBox_Balloon_C.GetInventoryWeight
	 */
	struct AStorageBox_Balloon_C_GetInventoryWeight_Params
	{
	public:
		float                                                      InvWeight;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StorageBox_Balloon.StorageBox_Balloon_C.SetBalloonSpeed
	 */
	struct AStorageBox_Balloon_C_SetBalloonSpeed_Params
	{	};

	/**
	 * Function StorageBox_Balloon.StorageBox_Balloon_C.CalcLandingVector
	 */
	struct AStorageBox_Balloon_C_CalcLandingVector_Params
	{
	public:
		int32_t                                                    coord1;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    coord2;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StorageBox_Balloon.StorageBox_Balloon_C.OnRep_LocationString
	 */
	struct AStorageBox_Balloon_C_OnRep_LocationString_Params
	{	};

	/**
	 * Function StorageBox_Balloon.StorageBox_Balloon_C.BPClientDoMultiUse
	 */
	struct AStorageBox_Balloon_C_BPClientDoMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ClientUseIndex;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StorageBox_Balloon.StorageBox_Balloon_C.BPAdjustDamage
	 */
	struct AStorageBox_Balloon_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4L1Z[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T723[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StorageBox_Balloon.StorageBox_Balloon_C.ReceivePointDamage
	 */
	struct AStorageBox_Balloon_C_ReceivePointDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ATYW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             HitLocation;                                             // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             HitNormal;                                               // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                BoneName;                                                // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ShotFromDirection;                                       // 0x0038(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AMKR[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AController*                                         InstigatedBy;                                            // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0050(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StorageBox_Balloon.StorageBox_Balloon_C.BPTryMultiUse
	 */
	struct AStorageBox_Balloon_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StorageBox_Balloon.StorageBox_Balloon_C.BPGetMultiUseEntries
	 */
	struct AStorageBox_Balloon_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function StorageBox_Balloon.StorageBox_Balloon_C.UserConstructionScript
	 */
	struct AStorageBox_Balloon_C_UserConstructionScript_Params
	{	};

	/**
	 * Function StorageBox_Balloon.StorageBox_Balloon_C.DeployItemBalloon
	 */
	struct AStorageBox_Balloon_C_DeployItemBalloon_Params
	{	};

	/**
	 * Function StorageBox_Balloon.StorageBox_Balloon_C.BalloonLiftoff
	 */
	struct AStorageBox_Balloon_C_BalloonLiftoff_Params
	{	};

	/**
	 * Function StorageBox_Balloon.StorageBox_Balloon_C.DetachBalloon
	 */
	struct AStorageBox_Balloon_C_DetachBalloon_Params
	{	};

	/**
	 * Function StorageBox_Balloon.StorageBox_Balloon_C.SetFlightTravel
	 */
	struct AStorageBox_Balloon_C_SetFlightTravel_Params
	{	};

	/**
	 * Function StorageBox_Balloon.StorageBox_Balloon_C.GetNextTravelPoint
	 */
	struct AStorageBox_Balloon_C_GetNextTravelPoint_Params
	{	};

	/**
	 * Function StorageBox_Balloon.StorageBox_Balloon_C.On_SetLocation
	 */
	struct AStorageBox_Balloon_C_On_SetLocation_Params
	{
	public:
		bool                                                       bIsSet;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StorageBox_Balloon.StorageBox_Balloon_C.DeployItemBalloon_Debug
	 */
	struct AStorageBox_Balloon_C_DeployItemBalloon_Debug_Params
	{	};

	/**
	 * Function StorageBox_Balloon.StorageBox_Balloon_C.ROC_OnLand
	 */
	struct AStorageBox_Balloon_C_ROC_OnLand_Params
	{	};

	/**
	 * Function StorageBox_Balloon.StorageBox_Balloon_C.ClearFlight
	 */
	struct AStorageBox_Balloon_C_ClearFlight_Params
	{	};

	/**
	 * Function StorageBox_Balloon.StorageBox_Balloon_C.RandomizeSway
	 */
	struct AStorageBox_Balloon_C_RandomizeSway_Params
	{	};

	/**
	 * Function StorageBox_Balloon.StorageBox_Balloon_C.DrawOnClient
	 */
	struct AStorageBox_Balloon_C_DrawOnClient_Params
	{
	public:
		struct FVector                                             VectorToDraw;                                            // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsServer;                                               // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StorageBox_Balloon.StorageBox_Balloon_C.DraweShit
	 */
	struct AStorageBox_Balloon_C_DraweShit_Params
	{
	public:
		struct FVector                                             NewParam;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StorageBox_Balloon.StorageBox_Balloon_C.ReceiveTick
	 */
	struct AStorageBox_Balloon_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StorageBox_Balloon.StorageBox_Balloon_C.ReceiveBeginPlay
	 */
	struct AStorageBox_Balloon_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function StorageBox_Balloon.StorageBox_Balloon_C.StopDeflation
	 */
	struct AStorageBox_Balloon_C_StopDeflation_Params
	{	};

	/**
	 * Function StorageBox_Balloon.StorageBox_Balloon_C.BndEvt__BalloonCollision_K2Node_ComponentBoundEvent_328_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AStorageBox_Balloon_C_BndEvt__BalloonCollision_K2Node_ComponentBoundEvent_328_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    OtherBodyIndex;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bFromSweep;                                              // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J9IO[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0018(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function StorageBox_Balloon.StorageBox_Balloon_C.BndEvt__BalloonCollision_K2Node_ComponentBoundEvent_334_ComponentHitSignature__DelegateSignature
	 */
	struct AStorageBox_Balloon_C_BndEvt__BalloonCollision_K2Node_ComponentBoundEvent_334_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NormalImpulse;                                           // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RVU8[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          Hit;                                                     // 0x0020(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function StorageBox_Balloon.StorageBox_Balloon_C.ExecuteUbergraph_StorageBox_Balloon
	 */
	struct AStorageBox_Balloon_C_ExecuteUbergraph_StorageBox_Balloon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
