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
	 * Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.BPGetHUDElements
	 */
	struct ABuff_TekStrider_SilenceCannon_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.is ai controlled
	 */
	struct ABuff_TekStrider_SilenceCannon_C_isaicontrolled_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A6HX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.is target within angle
	 */
	struct ABuff_TekStrider_SilenceCannon_C_istargetwithinangle_Params
	{
	public:
		class APrimalDinoCharacter*                                NewParam;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       NewParam1;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NM7I[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.CanFire
	 */
	struct ABuff_TekStrider_SilenceCannon_C_CanFire_Params
	{
	public:
		bool                                                       fromanimbp;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QSXC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABuff_ChargeEmitter_Strider_C*                       AsBuff_ChargeEmitter_Strider_C;                          // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.BuffTickClient
	 */
	struct ABuff_TekStrider_SilenceCannon_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.Trigger
	 */
	struct ABuff_TekStrider_SilenceCannon_C_Trigger_Params
	{	};

	/**
	 * Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.BPSetupForInstigator
	 */
	struct ABuff_TekStrider_SilenceCannon_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.IsDinoInCone?
	 */
	struct ABuff_TekStrider_SilenceCannon_C_IsDinoInCone_Params
	{
	public:
		class APrimalCharacter*                                    Dino;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHitResult>                                  hitresult;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       IsInCone;                                                // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6QT0[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.Get Cone Forward
	 */
	struct ABuff_TekStrider_SilenceCannon_C_GetConeForward_Params
	{
	public:
		struct FVector                                             Forward;                                                 // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WTQ6[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.GetConeOrigin
	 */
	struct ABuff_TekStrider_SilenceCannon_C_GetConeOrigin_Params
	{
	public:
		struct FVector                                             ConeOrigin;                                              // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.UserConstructionScript
	 */
	struct ABuff_TekStrider_SilenceCannon_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.Multicast_Fire
	 */
	struct ABuff_TekStrider_SilenceCannon_C_Multicast_Fire_Params
	{	};

	/**
	 * Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.ExecuteUbergraph_Buff_TekStrider_SilenceCannon
	 */
	struct ABuff_TekStrider_SilenceCannon_C_ExecuteUbergraph_Buff_TekStrider_SilenceCannon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
