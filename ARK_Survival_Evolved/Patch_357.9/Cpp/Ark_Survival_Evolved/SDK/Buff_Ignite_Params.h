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
	 * Function Buff_Ignite.Buff_Ignite_C.BPCustomAllowAddBuff
	 */
	struct ABuff_Ignite_C_BPCustomAllowAddBuff_Params
	{
	public:
		class APrimalCharacter*                                    forCharacter;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Ignite.Buff_Ignite_C.BPPreventAddingOtherBuff
	 */
	struct ABuff_Ignite_C_BPPreventAddingOtherBuff_Params
	{
	public:
		class UClass*                                              anotherBuffClass;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Ignite.Buff_Ignite_C.MeleeIncIgnite
	 */
	struct ABuff_Ignite_C_MeleeIncIgnite_Params
	{	};

	/**
	 * Function Buff_Ignite.Buff_Ignite_C.UpdateBuffDescription
	 */
	struct ABuff_Ignite_C_UpdateBuffDescription_Params
	{	};

	/**
	 * Function Buff_Ignite.Buff_Ignite_C.GetBuffDescription
	 */
	struct ABuff_Ignite_C_GetBuffDescription_Params
	{
	public:
		struct FStatusValueModifierDescription                     ReturnValue;                                             // 0x0000(0x0050)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Buff_Ignite.Buff_Ignite_C.BPServerHandleNetExecCommand
	 */
	struct ABuff_Ignite_C_BPServerHandleNetExecCommand_Params
	{
	public:
		class APlayerController*                                   FromPC;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                CommandName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0010(0x0040)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Ignite.Buff_Ignite_C.GetBuffPostprocessIntensity
	 */
	struct ABuff_Ignite_C_GetBuffPostprocessIntensity_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Ignite.Buff_Ignite_C.BuffTickClient
	 */
	struct ABuff_Ignite_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Ignite.Buff_Ignite_C.Initialize
	 */
	struct ABuff_Ignite_C_Initialize_Params
	{	};

	/**
	 * Function Buff_Ignite.Buff_Ignite_C.BuffTickServer
	 */
	struct ABuff_Ignite_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QNBI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Ignite.Buff_Ignite_C.ApplyOnFireDebuff
	 */
	struct ABuff_Ignite_C_ApplyOnFireDebuff_Params
	{	};

	/**
	 * Function Buff_Ignite.Buff_Ignite_C.AddIgnite
	 */
	struct ABuff_Ignite_C_AddIgnite_Params
	{
	public:
		float                                                      amount;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Time;                                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Ignite.Buff_Ignite_C.CheckDeactivateCondition
	 */
	struct ABuff_Ignite_C_CheckDeactivateCondition_Params
	{	};

	/**
	 * Function Buff_Ignite.Buff_Ignite_C.BPDeactivated
	 */
	struct ABuff_Ignite_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Ignite.Buff_Ignite_C.UserConstructionScript
	 */
	struct ABuff_Ignite_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_Ignite.Buff_Ignite_C.MultiExtendBuffTime
	 */
	struct ABuff_Ignite_C_MultiExtendBuffTime_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Ignite.Buff_Ignite_C.MultiAddIgnite
	 */
	struct ABuff_Ignite_C_MultiAddIgnite_Params
	{
	public:
		float                                                      amount;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Time;                                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Ignite.Buff_Ignite_C.ReceiveBeginPlay
	 */
	struct ABuff_Ignite_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_Ignite.Buff_Ignite_C.ApplyOnFire
	 */
	struct ABuff_Ignite_C_ApplyOnFire_Params
	{	};

	/**
	 * Function Buff_Ignite.Buff_Ignite_C.ChangeIgniteVFX
	 */
	struct ABuff_Ignite_C_ChangeIgniteVFX_Params
	{	};

	/**
	 * Function Buff_Ignite.Buff_Ignite_C.ExecuteUbergraph_Buff_Ignite
	 */
	struct ABuff_Ignite_C_ExecuteUbergraph_Buff_Ignite_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
