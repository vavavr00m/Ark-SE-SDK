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
	 * Function Jugbug_Character_BaseBP.Jugbug_Character_BaseBP_C.BPTimerNonDedicated
	 */
	struct AJugbug_Character_BaseBP_C_BPTimerNonDedicated_Params
	{	};

	/**
	 * Function Jugbug_Character_BaseBP.Jugbug_Character_BaseBP_C.BPTimerServer
	 */
	struct AJugbug_Character_BaseBP_C_BPTimerServer_Params
	{	};

	/**
	 * Function Jugbug_Character_BaseBP.Jugbug_Character_BaseBP_C.BlueprintCanAttack
	 */
	struct AJugbug_Character_BaseBP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MHWW[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Jugbug_Character_BaseBP.Jugbug_Character_BaseBP_C.BPGetMultiUseEntries
	 */
	struct AJugbug_Character_BaseBP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Jugbug_Character_BaseBP.Jugbug_Character_BaseBP_C.AddResource
	 */
	struct AJugbug_Character_BaseBP_C_AddResource_Params
	{
	public:
		float                                                      amount;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      NewResourceAmount;                                       // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      AddedResourceAmount;                                     // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Jugbug_Character_BaseBP.Jugbug_Character_BaseBP_C.BPTryMultiUse
	 */
	struct AJugbug_Character_BaseBP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Jugbug_Character_BaseBP.Jugbug_Character_BaseBP_C.RefreshResourceAmount
	 */
	struct AJugbug_Character_BaseBP_C_RefreshResourceAmount_Params
	{	};

	/**
	 * Function Jugbug_Character_BaseBP.Jugbug_Character_BaseBP_C.BlueprintDrawFloatingHUD
	 */
	struct AJugbug_Character_BaseBP_C_BlueprintDrawFloatingHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterX;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterY;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DrawScale;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Jugbug_Character_BaseBP.Jugbug_Character_BaseBP_C.UserConstructionScript
	 */
	struct AJugbug_Character_BaseBP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Jugbug_Character_BaseBP.Jugbug_Character_BaseBP_C.ExecuteUbergraph_Jugbug_Character_BaseBP
	 */
	struct AJugbug_Character_BaseBP_C_ExecuteUbergraph_Jugbug_Character_BaseBP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
