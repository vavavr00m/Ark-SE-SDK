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
	 * Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.BuffTickServer
	 */
	struct ABuff_SpaceWhale_Passenger_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.ReceiveBeginPlay
	 */
	struct ABuff_SpaceWhale_Passenger_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.BPHandleOnStopFire
	 */
	struct ABuff_SpaceWhale_Passenger_C_BPHandleOnStopFire_Params
	{
	public:
		bool                                                       bFromGamepad;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.BPHandleOnStartFire
	 */
	struct ABuff_SpaceWhale_Passenger_C_BPHandleOnStartFire_Params
	{
	public:
		bool                                                       bFromGamepad;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.BuffTickClient
	 */
	struct ABuff_SpaceWhale_Passenger_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DB85[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.BPCheckPreventInput
	 */
	struct ABuff_SpaceWhale_Passenger_C_BPCheckPreventInput_Params
	{
	public:
		EPrimalCharacterInputType                                  inputType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.GetFireTransform
	 */
	struct ABuff_SpaceWhale_Passenger_C_GetFireTransform_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Heading;                                                 // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       FireLeft;                                                // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.IsElectricalStormActive
	 */
	struct ABuff_SpaceWhale_Passenger_C_IsElectricalStormActive_Params
	{
	public:
		bool                                                       Return;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A21L[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.GetSocketClampDelta
	 */
	struct ABuff_SpaceWhale_Passenger_C_GetSocketClampDelta_Params
	{
	public:
		float                                                      OutSocketClampDelta;                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.BPSetupForInstigator
	 */
	struct ABuff_SpaceWhale_Passenger_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.BPDrawBuffStatusHUD
	 */
	struct ABuff_SpaceWhale_Passenger_C_BPDrawBuffStatusHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      XPos;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      YPos;                                                    // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ScaleMult;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.IsAllowedToFire
	 */
	struct ABuff_SpaceWhale_Passenger_C_IsAllowedToFire_Params
	{
	public:
		bool                                                       bAllowed;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WG8C[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.SetTargeting
	 */
	struct ABuff_SpaceWhale_Passenger_C_SetTargeting_Params
	{
	public:
		bool                                                       bTargetingEnabled;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.LocalDoAttack
	 */
	struct ABuff_SpaceWhale_Passenger_C_LocalDoAttack_Params
	{
	public:
		bool                                                       bDidFire;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PVP8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.GetTekSaddleItem
	 */
	struct ABuff_SpaceWhale_Passenger_C_GetTekSaddleItem_Params
	{
	public:
		class UPrimalItem*                                         TekSaddleItem;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.UserConstructionScript
	 */
	struct ABuff_SpaceWhale_Passenger_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.ServerDoAttack
	 */
	struct ABuff_SpaceWhale_Passenger_C_ServerDoAttack_Params
	{
	public:
		struct FVector                                             AimAtLoc;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ServerSpawnAtLoc;                                        // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       FireLeft;                                                // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.DoAttack
	 */
	struct ABuff_SpaceWhale_Passenger_C_DoAttack_Params
	{
	public:
		struct FVector                                             AimAtLoc;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ServerSpawnAtLoc;                                        // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AShooterCharacter*                                   Shooter;                                                 // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       FireLeft;                                                // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.CheckForItem
	 */
	struct ABuff_SpaceWhale_Passenger_C_CheckForItem_Params
	{	};

	/**
	 * Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.ServerNotifyCurrentAimRotation
	 */
	struct ABuff_SpaceWhale_Passenger_C_ServerNotifyCurrentAimRotation_Params
	{
	public:
		struct FRotator                                            Rot;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.ExecuteUbergraph_Buff_SpaceWhale_Passenger
	 */
	struct ABuff_SpaceWhale_Passenger_C_ExecuteUbergraph_Buff_SpaceWhale_Passenger_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
