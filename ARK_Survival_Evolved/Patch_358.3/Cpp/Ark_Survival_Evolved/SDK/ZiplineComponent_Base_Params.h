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
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.GetFinishedAttach_InterfaceCall
	 */
	struct UZiplineComponent_Base_C_GetFinishedAttach_InterfaceCall_Params
	{
	public:
		bool                                                       bOutAttached;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.GetActiveTargetedZipline
	 */
	struct UZiplineComponent_Base_C_GetActiveTargetedZipline_Params
	{
	public:
		class APrimalStructure*                                    Zipline;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Process Move to Order_InterfaceCall
	 */
	struct UZiplineComponent_Base_C_GetProcessMovetoOrder_InterfaceCall_Params
	{
	public:
		bool                                                       Return;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Current Move to Order Location_InterfaceCall
	 */
	struct UZiplineComponent_Base_C_GetCurrentMovetoOrderLocation_InterfaceCall_Params
	{
	public:
		struct FVector                                             OutLocation;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.GetClosestLocationToPointFromArray_InterfaceCall
	 */
	struct UZiplineComponent_Base_C_GetClosestLocationToPointFromArray_InterfaceCall_Params
	{
	public:
		struct FVector                                             InPoint;                                                 // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DXWB[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FVector>                                     InArray;                                                 // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		struct FVector                                             OutClosestPoint;                                         // 0x0020(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    OutIndex;                                                // 0x002C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Zipline Buff_Interface Call
	 */
	struct UZiplineComponent_Base_C_GetZiplineBuff_InterfaceCall_Params
	{
	public:
		class APrimalBuff*                                         Buff;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.GetKeepHanging_InterfaceCall
	 */
	struct UZiplineComponent_Base_C_GetKeepHanging_InterfaceCall_Params
	{
	public:
		bool                                                       bKeepHanging;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.Try Attaching to Zipline_InterfaceCall
	 */
	struct UZiplineComponent_Base_C_TryAttachingtoZipline_InterfaceCall_Params
	{
	public:
		class APrimalStructure*                                    OverrideAnchor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             OverrideStartLocation;                                   // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      OverrideFindLocationDistance;                            // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             OverrideFindLocationDirection;                           // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bDontUseLineOfSightCheck;                                // 0x0024(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSuccess;                                                // 0x0025(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_263G[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Is Hanging_InterfaceCall
	 */
	struct UZiplineComponent_Base_C_GetIsHanging_InterfaceCall_Params
	{
	public:
		bool                                                       bIsHanging;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Attach from Below_InterfaceCall
	 */
	struct UZiplineComponent_Base_C_GetAttachfromBelow_InterfaceCall_Params
	{
	public:
		bool                                                       bAttachFromBelow;                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Zipline New Target Location_InterfaceCall
	 */
	struct UZiplineComponent_Base_C_GetZiplineNewTargetLocation_InterfaceCall_Params
	{
	public:
		struct FVector                                             NewTargetLocation;                                       // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Is Zipline Jumping_InterfaceCall
	 */
	struct UZiplineComponent_Base_C_GetIsZiplineJumping_InterfaceCall_Params
	{
	public:
		bool                                                       bZiplineJumping;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Sliding_InterfaceCall
	 */
	struct UZiplineComponent_Base_C_GetSliding_InterfaceCall_Params
	{
	public:
		bool                                                       bSliding;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Current Targeted Zipline_InterfaceCall
	 */
	struct UZiplineComponent_Base_C_GetCurrentTargetedZipline_InterfaceCall_Params
	{
	public:
		class APrimalStructure*                                    Anchor;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Using Zipline_InterfaceCall
	 */
	struct UZiplineComponent_Base_C_GetUsingZipline_InterfaceCall_Params
	{
	public:
		bool                                                       bUsingZipline;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Allow Zipline Jumping_InterfaceCall
	 */
	struct UZiplineComponent_Base_C_GetAllowZiplineJumping_InterfaceCall_Params
	{
	public:
		bool                                                       bAllowZiplineJumping;                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.FinishedAttaching
	 */
	struct UZiplineComponent_Base_C_FinishedAttaching_Params
	{	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.SoftSetTransform
	 */
	struct UZiplineComponent_Base_C_SoftSetTransform_Params
	{
	public:
		struct UObject_FTransform                                  NewTransform;                                            // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.AnimNotifyCustomEvent
	 */
	struct UZiplineComponent_Base_C_AnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.OverrideMoveToOrder
	 */
	struct UZiplineComponent_Base_C_OverrideMoveToOrder_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverride;                                               // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YJMJ[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.TryAttachingToZipline
	 */
	struct UZiplineComponent_Base_C_TryAttachingToZipline_Params
	{
	public:
		class AZipline_Anchor_C*                                   OverrideAnchor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             OverrideStartLocation;                                   // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      OverrideFindLocationDistance;                            // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             OverrideFindLocationDirection;                           // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSuccess;                                                // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TYB3[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.Create Zipline Buff and Start Riding
	 */
	struct UZiplineComponent_Base_C_CreateZiplineBuffandStartRiding_Params
	{
	public:
		class AZipline_Anchor_C*                                   Anchor;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.IsTargetZiplineBlocked
	 */
	struct UZiplineComponent_Base_C_IsTargetZiplineBlocked_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NKUK[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AZipline_Anchor_C*                                   Anchor;                                                  // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      OverrideFindLocationDistance;                            // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R5P5[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          HitResult;                                               // 0x0020(0x0088)  (Parm, OutParm)
		bool                                                       HitReturn;                                               // 0x00A8(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JQE5[0x3];                                   // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             StartLocation;                                           // 0x00AC(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.OnStartJump
	 */
	struct UZiplineComponent_Base_C_OnStartJump_Params
	{
	public:
		bool                                                       Return;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.NotifyClearRider
	 */
	struct UZiplineComponent_Base_C_NotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.NotifyRider
	 */
	struct UZiplineComponent_Base_C_NotifyRider_Params
	{
	public:
		class AShooterCharacter*                                   Rider;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.SetServerTickEveryFrame
	 */
	struct UZiplineComponent_Base_C_SetServerTickEveryFrame_Params
	{
	public:
		bool                                                       tickEveryFrame;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HACU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.TimerServer
	 */
	struct UZiplineComponent_Base_C_TimerServer_Params
	{	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.TimerNonDedicated
	 */
	struct UZiplineComponent_Base_C_TimerNonDedicated_Params
	{	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Target Mesh Relative Transform Pure
	 */
	struct UZiplineComponent_Base_C_GetTargetMeshRelativeTransformPure_Params
	{
	public:
		struct UObject_FTransform                                  Result;                                                  // 0x0000(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.Update TPView Offset
	 */
	struct UZiplineComponent_Base_C_UpdateTPViewOffset_Params
	{	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.Update Non Dedi Active
	 */
	struct UZiplineComponent_Base_C_UpdateNonDediActive_Params
	{	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Closest Point on Line
	 */
	struct UZiplineComponent_Base_C_GetClosestPointonLine_Params
	{
	public:
		struct FVector                                             A;                                                       // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             B;                                                       // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Point;                                                   // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             closestPoint;                                            // 0x0024(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.Update Crosshair
	 */
	struct UZiplineComponent_Base_C_UpdateCrosshair_Params
	{	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.GetClosestLocationToPointFromArray
	 */
	struct UZiplineComponent_Base_C_GetClosestLocationToPointFromArray_Params
	{
	public:
		TArray<struct FVector>                                     LocationsToTest;                                         // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		struct FVector                                             Point;                                                   // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ClosestLocation;                                         // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ArrayIndex;                                              // 0x0028(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.GetZiplineBuff
	 */
	struct UZiplineComponent_Base_C_GetZiplineBuff_Params
	{
	public:
		class ABuff_Zipline_DinoBase_C*                            ZiplineBuff;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.GetTargetedZipline
	 */
	struct UZiplineComponent_Base_C_GetTargetedZipline_Params
	{
	public:
		class AZipline_Anchor_C*                                   targetedZipline;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.UpdateNonDediLimits
	 */
	struct UZiplineComponent_Base_C_UpdateNonDediLimits_Params
	{	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.SetNonDediTimerTickEveryFrame
	 */
	struct UZiplineComponent_Base_C_SetNonDediTimerTickEveryFrame_Params
	{
	public:
		bool                                                       tickEveryFrame;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5TRM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.InterpMeshRelativeTransform
	 */
	struct UZiplineComponent_Base_C_InterpMeshRelativeTransform_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2BWA[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.BPOnComponentCreated
	 */
	struct UZiplineComponent_Base_C_BPOnComponentCreated_Params
	{	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.ZiplineNonDediLogic
	 */
	struct UZiplineComponent_Base_C_ZiplineNonDediLogic_Params
	{	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.Multi Soft Set Transform_InterfaceCall
	 */
	struct UZiplineComponent_Base_C_MultiSoftSetTransform_InterfaceCall_Params
	{
	public:
		struct UObject_FTransform                                  NewTransform;                                            // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.Set Initial Velocity Multicast_InterfaceCall
	 */
	struct UZiplineComponent_Base_C_SetInitialVelocityMulticast_InterfaceCall_Params
	{
	public:
		struct FVector                                             Velocity;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.Set Is Hanging_InterfaceCall
	 */
	struct UZiplineComponent_Base_C_SetIsHanging_InterfaceCall_Params
	{
	public:
		bool                                                       bNewIsHanging;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.Set Non Dedi Tick Every Frame_InterfaceCall
	 */
	struct UZiplineComponent_Base_C_SetNonDediTickEveryFrame_InterfaceCall_Params
	{
	public:
		bool                                                       bNewTickEveryFrame;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.Set Sliding_InterfaceCall
	 */
	struct UZiplineComponent_Base_C_SetSliding_InterfaceCall_Params
	{
	public:
		bool                                                       bNewSliding;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.Set Zipline Jump Off Direction AI_InterfaceCall
	 */
	struct UZiplineComponent_Base_C_SetZiplineJumpOffDirectionAI_InterfaceCall_Params
	{
	public:
		struct FVector                                             NewZiplineJumpOffDirectionAI;                            // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.Set Zipline New Target Location_InterfaceCall
	 */
	struct UZiplineComponent_Base_C_SetZiplineNewTargetLocation_InterfaceCall_Params
	{
	public:
		struct FVector                                             NewLocation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.Start Zipline Jumping_InterfaceCall
	 */
	struct UZiplineComponent_Base_C_StartZiplineJumping_InterfaceCall_Params
	{	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.SetKeepHanging_InterfaceCall
	 */
	struct UZiplineComponent_Base_C_SetKeepHanging_InterfaceCall_Params
	{
	public:
		bool                                                       bNewKeepHanging;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.SetUsingZipline_InterfaceCall
	 */
	struct UZiplineComponent_Base_C_SetUsingZipline_InterfaceCall_Params
	{
	public:
		bool                                                       bUsingZipline;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.Set Zipline Jump Off Impulse AI_InterfaceCall
	 */
	struct UZiplineComponent_Base_C_SetZiplineJumpOffImpulseAI_InterfaceCall_Params
	{
	public:
		struct FVector                                             NewZiplineJumpOffImpulseAI;                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.Set Finished Attach_Interface Call
	 */
	struct UZiplineComponent_Base_C_SetFinishedAttach_InterfaceCall_Params
	{
	public:
		bool                                                       bNewFinishedAttach;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.SetProcessMoveToOrder_InterfaceCall
	 */
	struct UZiplineComponent_Base_C_SetProcessMoveToOrder_InterfaceCall_Params
	{
	public:
		bool                                                       NewValue;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.Set Current Move To Order Location Interface Call
	 */
	struct UZiplineComponent_Base_C_SetCurrentMoveToOrderLocationInterfaceCall_Params
	{
	public:
		struct FVector                                             NewLocation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.ZiplineTargetingTimer
	 */
	struct UZiplineComponent_Base_C_ZiplineTargetingTimer_Params
	{	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.ResetZiplineJumping_RunOnServer
	 */
	struct UZiplineComponent_Base_C_ResetZiplineJumping_RunOnServer_Params
	{	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.ResetZiplineJumping_Multicast
	 */
	struct UZiplineComponent_Base_C_ResetZiplineJumping_Multicast_Params
	{	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.StartZiplineJumping
	 */
	struct UZiplineComponent_Base_C_StartZiplineJumping_Params
	{	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.AttachToZipline_RunOnServer
	 */
	struct UZiplineComponent_Base_C_AttachToZipline_RunOnServer_Params
	{
	public:
		class AZipline_Anchor_C*                                   ZiplineAnchor;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.AttachToZipline_Multicast
	 */
	struct UZiplineComponent_Base_C_AttachToZipline_Multicast_Params
	{
	public:
		class AZipline_Anchor_C*                                   ZiplineAnchor;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.TryAttachToZipline_RunOnServer
	 */
	struct UZiplineComponent_Base_C_TryAttachToZipline_RunOnServer_Params
	{	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.DoZiplineTurn
	 */
	struct UZiplineComponent_Base_C_DoZiplineTurn_Params
	{	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.PreZiplineTurn_Multicast
	 */
	struct UZiplineComponent_Base_C_PreZiplineTurn_Multicast_Params
	{	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.SetInitialVelocity_Multicast
	 */
	struct UZiplineComponent_Base_C_SetInitialVelocity_Multicast_Params
	{
	public:
		struct FVector                                             Velocity;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.Multi_SoftSetTransform
	 */
	struct UZiplineComponent_Base_C_Multi_SoftSetTransform_Params
	{
	public:
		struct UObject_FTransform                                  NewTransform;                                            // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ZiplineComponent_Base.ZiplineComponent_Base_C.ExecuteUbergraph_ZiplineComponent_Base
	 */
	struct UZiplineComponent_Base_C_ExecuteUbergraph_ZiplineComponent_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
