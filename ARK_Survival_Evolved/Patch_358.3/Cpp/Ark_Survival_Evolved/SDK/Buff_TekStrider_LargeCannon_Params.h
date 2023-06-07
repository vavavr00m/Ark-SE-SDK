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
	 * Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.prevent ai doubleshooting
	 */
	struct ABuff_TekStrider_LargeCannon_C_preventaidoubleshooting_Params
	{	};

	/**
	 * Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.is cannon blocked
	 */
	struct ABuff_TekStrider_LargeCannon_C_iscannonblocked_Params
	{
	public:
		bool                                                       fromanimbp;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.Delay Check for Valid Shot Loc
	 */
	struct ABuff_TekStrider_LargeCannon_C_DelayCheckforValidShotLoc_Params
	{	};

	/**
	 * Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.get start and end location
	 */
	struct ABuff_TekStrider_LargeCannon_C_getstartandendlocation_Params
	{
	public:
		bool                                                       usepassedinloc;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y5K6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             EndPoint;                                                // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.BPServerHandleNetExecCommand
	 */
	struct ABuff_TekStrider_LargeCannon_C_BPServerHandleNetExecCommand_Params
	{
	public:
		class APlayerController*                                   FromPC;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                CommandName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0010(0x0040)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T15G[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.BPGetHUDElements
	 */
	struct ABuff_TekStrider_LargeCannon_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.target is within angle
	 */
	struct ABuff_TekStrider_LargeCannon_C_targetiswithinangle_Params
	{
	public:
		class APrimalDinoCharacter*                                NewParam;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       NewParam1;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ENR5[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.is ai controlled
	 */
	struct ABuff_TekStrider_LargeCannon_C_isaicontrolled_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L6LL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.Delay Fire
	 */
	struct ABuff_TekStrider_LargeCannon_C_DelayFire_Params
	{	};

	/**
	 * Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.Get Fire Start And End Location
	 */
	struct ABuff_TekStrider_LargeCannon_C_GetFireStartAndEndLocation_Params
	{
	public:
		bool                                                       usevalidatedloc;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8MUO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             StartLoc;                                                // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             EndLoc;                                                  // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.Can Fire
	 */
	struct ABuff_TekStrider_LargeCannon_C_CanFire_Params
	{
	public:
		bool                                                       fromanimbp;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.Delay Deactivate Charge
	 */
	struct ABuff_TekStrider_LargeCannon_C_DelayDeactivateCharge_Params
	{	};

	/**
	 * Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.Trigger
	 */
	struct ABuff_TekStrider_LargeCannon_C_Trigger_Params
	{	};

	/**
	 * Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.Can Fire? logic
	 */
	struct ABuff_TekStrider_LargeCannon_C_CanFirelogic_Params
	{
	public:
		bool                                                       fromanimbp;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.FireCannonProjectile
	 */
	struct ABuff_TekStrider_LargeCannon_C_FireCannonProjectile_Params
	{	};

	/**
	 * Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.BPSetupForInstigator
	 */
	struct ABuff_TekStrider_LargeCannon_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.UserConstructionScript
	 */
	struct ABuff_TekStrider_LargeCannon_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.multicast fire events
	 */
	struct ABuff_TekStrider_LargeCannon_C_multicastfireevents_Params
	{	};

	/**
	 * Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.multicast prepare to fire
	 */
	struct ABuff_TekStrider_LargeCannon_C_multicastpreparetofire_Params
	{	};

	/**
	 * Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.trace line
	 */
	struct ABuff_TekStrider_LargeCannon_C_traceline_Params
	{
	public:
		struct FVector                                             NewParam;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NewParam1;                                               // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.Request Player Shot Loc
	 */
	struct ABuff_TekStrider_LargeCannon_C_RequestPlayerShotLoc_Params
	{	};

	/**
	 * Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.ExecuteUbergraph_Buff_TekStrider_LargeCannon
	 */
	struct ABuff_TekStrider_LargeCannon_C_ExecuteUbergraph_Buff_TekStrider_LargeCannon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
