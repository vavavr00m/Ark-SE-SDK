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
	 * Function Buff_ForceFlee_RhynioTaunt.Buff_ForceFlee_RhynioTaunt_C.BPCustomAllowAddBuff
	 */
	struct ABuff_ForceFlee_RhynioTaunt_C_BPCustomAllowAddBuff_Params
	{
	public:
		class APrimalCharacter*                                    forCharacter;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ForceFlee_RhynioTaunt.Buff_ForceFlee_RhynioTaunt_C.DinoInstigatorClearedRider
	 */
	struct ABuff_ForceFlee_RhynioTaunt_C_DinoInstigatorClearedRider_Params
	{	};

	/**
	 * Function Buff_ForceFlee_RhynioTaunt.Buff_ForceFlee_RhynioTaunt_C.GetBuffPostprocessIntensity
	 */
	struct ABuff_ForceFlee_RhynioTaunt_C_GetBuffPostprocessIntensity_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ForceFlee_RhynioTaunt.Buff_ForceFlee_RhynioTaunt_C.DinoInstigatorReceivedRider
	 */
	struct ABuff_ForceFlee_RhynioTaunt_C_DinoInstigatorReceivedRider_Params
	{
	public:
		class AShooterCharacter*                                   Rider;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ForceFlee_RhynioTaunt.Buff_ForceFlee_RhynioTaunt_C.DisplayRiderNotif
	 */
	struct ABuff_ForceFlee_RhynioTaunt_C_DisplayRiderNotif_Params
	{
	public:
		bool                                                       ForAttack;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4X9Y[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_ForceFlee_RhynioTaunt.Buff_ForceFlee_RhynioTaunt_C.BuffTickServer
	 */
	struct ABuff_ForceFlee_RhynioTaunt_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ForceFlee_RhynioTaunt.Buff_ForceFlee_RhynioTaunt_C.RefreshStaticFleeing
	 */
	struct ABuff_ForceFlee_RhynioTaunt_C_RefreshStaticFleeing_Params
	{	};

	/**
	 * Function Buff_ForceFlee_RhynioTaunt.Buff_ForceFlee_RhynioTaunt_C.BPSetupForInstigator
	 */
	struct ABuff_ForceFlee_RhynioTaunt_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ForceFlee_RhynioTaunt.Buff_ForceFlee_RhynioTaunt_C.UserConstructionScript
	 */
	struct ABuff_ForceFlee_RhynioTaunt_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_ForceFlee_RhynioTaunt.Buff_ForceFlee_RhynioTaunt_C.InpActEvt_Fire_K2Node_InputActionEvent_430
	 */
	struct ABuff_ForceFlee_RhynioTaunt_C_InpActEvt_Fire_K2Node_InputActionEvent_430_Params
	{	};

	/**
	 * Function Buff_ForceFlee_RhynioTaunt.Buff_ForceFlee_RhynioTaunt_C.InpActEvt_Targeting_K2Node_InputActionEvent_429
	 */
	struct ABuff_ForceFlee_RhynioTaunt_C_InpActEvt_Targeting_K2Node_InputActionEvent_429_Params
	{	};

	/**
	 * Function Buff_ForceFlee_RhynioTaunt.Buff_ForceFlee_RhynioTaunt_C.InpActEvt_Crouch_K2Node_InputActionEvent_428
	 */
	struct ABuff_ForceFlee_RhynioTaunt_C_InpActEvt_Crouch_K2Node_InputActionEvent_428_Params
	{	};

	/**
	 * Function Buff_ForceFlee_RhynioTaunt.Buff_ForceFlee_RhynioTaunt_C.InpActEvt_Jump_K2Node_InputActionEvent_427
	 */
	struct ABuff_ForceFlee_RhynioTaunt_C_InpActEvt_Jump_K2Node_InputActionEvent_427_Params
	{	};

	/**
	 * Function Buff_ForceFlee_RhynioTaunt.Buff_ForceFlee_RhynioTaunt_C.Multi_SetStaticFleeDest
	 */
	struct ABuff_ForceFlee_RhynioTaunt_C_Multi_SetStaticFleeDest_Params
	{
	public:
		struct FVector                                             Loc;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ForceFlee_RhynioTaunt.Buff_ForceFlee_RhynioTaunt_C.Client_DisplayRiderNotif
	 */
	struct ABuff_ForceFlee_RhynioTaunt_C_Client_DisplayRiderNotif_Params
	{
	public:
		bool                                                       ForAttack;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ForceFlee_RhynioTaunt.Buff_ForceFlee_RhynioTaunt_C.Multi_UpdateRiderInput
	 */
	struct ABuff_ForceFlee_RhynioTaunt_C_Multi_UpdateRiderInput_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Enable;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ForceFlee_RhynioTaunt.Buff_ForceFlee_RhynioTaunt_C.ExecuteUbergraph_Buff_ForceFlee_RhynioTaunt
	 */
	struct ABuff_ForceFlee_RhynioTaunt_C_ExecuteUbergraph_Buff_ForceFlee_RhynioTaunt_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
