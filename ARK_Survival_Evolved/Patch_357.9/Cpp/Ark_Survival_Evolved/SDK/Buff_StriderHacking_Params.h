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
	 * Function Buff_StriderHacking.Buff_StriderHacking_C.Update Buff Timer server logic
	 */
	struct ABuff_StriderHacking_C_UpdateBuffTimerserverlogic_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       fromplayertrigger;                                       // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_StriderHacking.Buff_StriderHacking_C.UpdateBuffTimer
	 */
	struct ABuff_StriderHacking_C_UpdateBuffTimer_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       fromplayertrigger;                                       // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_StriderHacking.Buff_StriderHacking_C.Recieved Input
	 */
	struct ABuff_StriderHacking_C_RecievedInput_Params
	{
	public:
		EPrimalCharacterInputType                                  inputtype;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       fromplayerinput;                                         // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_StriderHacking.Buff_StriderHacking_C.Beat Reached The End
	 */
	struct ABuff_StriderHacking_C_BeatReachedTheEnd_Params
	{	};

	/**
	 * Function Buff_StriderHacking.Buff_StriderHacking_C.BPCheckPreventInput
	 */
	struct ABuff_StriderHacking_C_BPCheckPreventInput_Params
	{
	public:
		EPrimalCharacterInputType                                  inputType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_StriderHacking.Buff_StriderHacking_C.BuffTickServer
	 */
	struct ABuff_StriderHacking_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_61YY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_StriderHacking.Buff_StriderHacking_C.BPSetupForInstigator
	 */
	struct ABuff_StriderHacking_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_StriderHacking.Buff_StriderHacking_C.BPOnInputEvent
	 */
	struct ABuff_StriderHacking_C_BPOnInputEvent_Params
	{
	public:
		EPrimalCharacterInputType                                  inputType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_StriderHacking.Buff_StriderHacking_C.ReceiveAnyDamage
	 */
	struct ABuff_StriderHacking_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B58W[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_StriderHacking.Buff_StriderHacking_C.UserConstructionScript
	 */
	struct ABuff_StriderHacking_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_StriderHacking.Buff_StriderHacking_C.do hacking vfx
	 */
	struct ABuff_StriderHacking_C_dohackingvfx_Params
	{	};

	/**
	 * Function Buff_StriderHacking.Buff_StriderHacking_C.cancel early
	 */
	struct ABuff_StriderHacking_C_cancelearly_Params
	{	};

	/**
	 * Function Buff_StriderHacking.Buff_StriderHacking_C.ExecuteUbergraph_Buff_StriderHacking
	 */
	struct ABuff_StriderHacking_C_ExecuteUbergraph_Buff_StriderHacking_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_StriderHacking.Buff_StriderHacking_C.on hack hit success__DelegateSignature
	 */
	struct ABuff_StriderHacking_C_onhackhitsuccess__DelegateSignature_Params
	{	};

	/**
	 * Function Buff_StriderHacking.Buff_StriderHacking_C.on hack hit miss__DelegateSignature
	 */
	struct ABuff_StriderHacking_C_onhackhitmiss__DelegateSignature_Params
	{	};

	/**
	 * Function Buff_StriderHacking.Buff_StriderHacking_C.Hacking Success__DelegateSignature
	 */
	struct ABuff_StriderHacking_C_HackingSuccess__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
