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
	 * Function Buff_GasBagsExhale.Buff_GasBagsExhale_C.BPOnInstigatorMovementModeChangedNotify
	 */
	struct ABuff_GasBagsExhale_C_BPOnInstigatorMovementModeChangedNotify_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              PreviousCustomMode;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EMovementMode                                              NewMovementMode;                                         // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              NewCustomMode;                                           // 0x0003(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_GasBagsExhale.Buff_GasBagsExhale_C.BuffTickServer
	 */
	struct ABuff_GasBagsExhale_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RCW5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_GasBagsExhale.Buff_GasBagsExhale_C.SetupExhale
	 */
	struct ABuff_GasBagsExhale_C_SetupExhale_Params
	{
	public:
		struct FVector                                             Direction;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Strength;                                                // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_GasBagsExhale.Buff_GasBagsExhale_C.BPActivated
	 */
	struct ABuff_GasBagsExhale_C_BPActivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_GasBagsExhale.Buff_GasBagsExhale_C.UserConstructionScript
	 */
	struct ABuff_GasBagsExhale_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_GasBagsExhale.Buff_GasBagsExhale_C.ExecuteUbergraph_Buff_GasBagsExhale
	 */
	struct ABuff_GasBagsExhale_C_ExecuteUbergraph_Buff_GasBagsExhale_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
