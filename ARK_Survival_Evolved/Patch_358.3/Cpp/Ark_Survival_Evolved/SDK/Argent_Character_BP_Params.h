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
	 * Function Argent_Character_BP.Argent_Character_BP_C.BPDidClearCarriedCharacter
	 */
	struct AArgent_Character_BP_C_BPDidClearCarriedCharacter_Params
	{
	public:
		class APrimalCharacter*                                    PreviousCarriedCharacter;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Argent_Character_BP.Argent_Character_BP_C.Allow Passenger in Slot
	 */
	struct AArgent_Character_BP_C_AllowPassengerinSlot_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    Slot;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Allowed;                                                 // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OD60[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Argent_Character_BP.Argent_Character_BP_C.BPAllowCarryCharacter
	 */
	struct AArgent_Character_BP_C_BPAllowCarryCharacter_Params
	{
	public:
		class APrimalCharacter*                                    checkCharacter;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Argent_Character_BP.Argent_Character_BP_C.Remove Passenger In Slot
	 */
	struct AArgent_Character_BP_C_RemovePassengerInSlot_Params
	{
	public:
		int32_t                                                    Slot;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Argent_Character_BP.Argent_Character_BP_C.Get Passenger
	 */
	struct AArgent_Character_BP_C_GetPassenger_Params
	{
	public:
		int32_t                                                    Slot;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1N8W[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalCharacter*                                    Char;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Argent_Character_BP.Argent_Character_BP_C.Has Passenger In Slot
	 */
	struct AArgent_Character_BP_C_HasPassengerInSlot_Params
	{
	public:
		int32_t                                                    Slot;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       returnvalue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Argent_Character_BP.Argent_Character_BP_C.BPNotifyClearRider
	 */
	struct AArgent_Character_BP_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Argent_Character_BP.Argent_Character_BP_C.BPDoAttack
	 */
	struct AArgent_Character_BP_C_BPDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Argent_Character_BP.Argent_Character_BP_C.UpdateCarryAnim
	 */
	struct AArgent_Character_BP_C_UpdateCarryAnim_Params
	{	};

	/**
	 * Function Argent_Character_BP.Argent_Character_BP_C.BPOnMovementModeChangedNotify
	 */
	struct AArgent_Character_BP_C_BPOnMovementModeChangedNotify_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              PreviousCustomMode;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Argent_Character_BP.Argent_Character_BP_C.ReceiveBeginPlay
	 */
	struct AArgent_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Argent_Character_BP.Argent_Character_BP_C.BPNotifyClearPassenger
	 */
	struct AArgent_Character_BP_C_BPNotifyClearPassenger_Params
	{
	public:
		class APrimalCharacter*                                    PassengerChar;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    SeatIndex;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Argent_Character_BP.Argent_Character_BP_C.ReceiveTick
	 */
	struct AArgent_Character_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Argent_Character_BP.Argent_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct AArgent_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Argent_Character_BP.Argent_Character_BP_C.BPCanTakePassenger
	 */
	struct AArgent_Character_BP_C_BPCanTakePassenger_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    PassengerSeatIndex;                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForcePassenger;                                         // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bAllowFlyersAndWaterDinos;                               // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000E(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Argent_Character_BP.Argent_Character_BP_C.BPNotifyAddPassenger
	 */
	struct AArgent_Character_BP_C_BPNotifyAddPassenger_Params
	{
	public:
		class APrimalCharacter*                                    PassengerChar;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    SeatIndex;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K7V3[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Argent_Character_BP.Argent_Character_BP_C.UserConstructionScript
	 */
	struct AArgent_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Argent_Character_BP.Argent_Character_BP_C.MulticastOnAttack
	 */
	struct AArgent_Character_BP_C_MulticastOnAttack_Params
	{	};

	/**
	 * Function Argent_Character_BP.Argent_Character_BP_C.MulticastUpdateCarryAnim
	 */
	struct AArgent_Character_BP_C_MulticastUpdateCarryAnim_Params
	{	};

	/**
	 * Function Argent_Character_BP.Argent_Character_BP_C.ExecuteUbergraph_Argent_Character_BP
	 */
	struct AArgent_Character_BP_C_ExecuteUbergraph_Argent_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
