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
	 * Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.BPTimerNonDedicated
	 */
	struct AXenomorph_Character_BP_Female_C_BPTimerNonDedicated_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.HasBuffsOfClasses
	 */
	struct AXenomorph_Character_BP_Female_C_HasBuffsOfClasses_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<class UClass*>                                      ParentClassesArray;                                      // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IL82[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.ReadyToImpregnateNonPure
	 */
	struct AXenomorph_Character_BP_Female_C_ReadyToImpregnateNonPure_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.ReadyToImpregnate
	 */
	struct AXenomorph_Character_BP_Female_C_ReadyToImpregnate_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.GetNewTimeForImpregnate
	 */
	struct AXenomorph_Character_BP_Female_C_GetNewTimeForImpregnate_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.InitializeDive
	 */
	struct AXenomorph_Character_BP_Female_C_InitializeDive_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.OnChargeEvent
	 */
	struct AXenomorph_Character_BP_Female_C_OnChargeEvent_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.BPAdjustDamage
	 */
	struct AXenomorph_Character_BP_Female_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DK4G[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RXXC[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7DL3[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.BPDidClearCarriedCharacter
	 */
	struct AXenomorph_Character_BP_Female_C_BPDidClearCarriedCharacter_Params
	{
	public:
		class APrimalCharacter*                                    PreviousCarriedCharacter;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.BlueprintCanAttack
	 */
	struct AXenomorph_Character_BP_Female_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SCVT[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.BPDidSetCarriedCharacter
	 */
	struct AXenomorph_Character_BP_Female_C_BPDidSetCarriedCharacter_Params
	{
	public:
		class APrimalCharacter*                                    PreviousCarriedCharacter;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.DisableEyeGlow
	 */
	struct AXenomorph_Character_BP_Female_C_DisableEyeGlow_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.UserConstructionScript
	 */
	struct AXenomorph_Character_BP_Female_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.AnimNotify_EndBury
	 */
	struct AXenomorph_Character_BP_Female_C_AnimNotify_EndBury_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.AnimNotify_CheckForGrab
	 */
	struct AXenomorph_Character_BP_Female_C_AnimNotify_CheckForGrab_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.AnimNotify_Impregnate
	 */
	struct AXenomorph_Character_BP_Female_C_AnimNotify_Impregnate_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.ImpregnateStart
	 */
	struct AXenomorph_Character_BP_Female_C_ImpregnateStart_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.AnimNotify_StartBury
	 */
	struct AXenomorph_Character_BP_Female_C_AnimNotify_StartBury_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.AnimNotify_ImpregnateRelease
	 */
	struct AXenomorph_Character_BP_Female_C_AnimNotify_ImpregnateRelease_Params
	{	};

	/**
	 * Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.ExecuteUbergraph_Xenomorph_Character_BP_Female
	 */
	struct AXenomorph_Character_BP_Female_C_ExecuteUbergraph_Xenomorph_Character_BP_Female_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
