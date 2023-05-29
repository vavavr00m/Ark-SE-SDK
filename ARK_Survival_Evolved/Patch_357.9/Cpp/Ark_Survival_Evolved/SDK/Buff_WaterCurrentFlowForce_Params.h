#pragma once

/**
 * Name: Ark_Survival_Evolved
 * Version: Patch_357.9
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
	 * Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.OnClearPassenger
	 */
	struct ABuff_WaterCurrentFlowForce_C_OnClearPassenger_Params
	{
	public:
		class APrimalCharacter*                                    Passenger;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APrimalDinoCharacter*                                ForDino;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    SeatIndex;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IJAF[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.OnClearRider
	 */
	struct ABuff_WaterCurrentFlowForce_C_OnClearRider_Params
	{
	public:
		class AShooterCharacter*                                   forCharacter;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APrimalDinoCharacter*                                ForDino;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.On Set Passenger
	 */
	struct ABuff_WaterCurrentFlowForce_C_OnSetPassenger_Params
	{
	public:
		class APrimalCharacter*                                    Passenger;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APrimalDinoCharacter*                                ForDino;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    SeatIndex;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.OnSetRider
	 */
	struct ABuff_WaterCurrentFlowForce_C_OnSetRider_Params
	{
	public:
		class AShooterCharacter*                                   forCharacter;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APrimalDinoCharacter*                                ForDino;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.SetWaterCurrentBuffActivation
	 */
	struct ABuff_WaterCurrentFlowForce_C_SetWaterCurrentBuffActivation_Params
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.BPCustomAllowAddBuff
	 */
	struct ABuff_WaterCurrentFlowForce_C_BPCustomAllowAddBuff_Params
	{
	public:
		class APrimalCharacter*                                    forCharacter;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1BGG[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.BPSetupForInstigator
	 */
	struct ABuff_WaterCurrentFlowForce_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.BPOnInstigatorMovementModeChangedNotify
	 */
	struct ABuff_WaterCurrentFlowForce_C_BPOnInstigatorMovementModeChangedNotify_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              PreviousCustomMode;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EMovementMode                                              NewMovementMode;                                         // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              NewCustomMode;                                           // 0x0003(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.BP_OverrideCharacterSwimmingVelocity
	 */
	struct ABuff_WaterCurrentFlowForce_C_BP_OverrideCharacterSwimmingVelocity_Params
	{
	public:
		struct FVector                                             InitialVelocity;                                         // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             Gravity;                                                 // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      FluidFriction;                                           // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      NetBuoyancy;                                             // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x0024(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.AllowPostProcessEffect
	 */
	struct ABuff_WaterCurrentFlowForce_C_AllowPostProcessEffect_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.BuffTickServer
	 */
	struct ABuff_WaterCurrentFlowForce_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.BPDeactivated
	 */
	struct ABuff_WaterCurrentFlowForce_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.BPActivated
	 */
	struct ABuff_WaterCurrentFlowForce_C_BPActivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.UserConstructionScript
	 */
	struct ABuff_WaterCurrentFlowForce_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.ExecuteUbergraph_Buff_WaterCurrentFlowForce
	 */
	struct ABuff_WaterCurrentFlowForce_C_ExecuteUbergraph_Buff_WaterCurrentFlowForce_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
