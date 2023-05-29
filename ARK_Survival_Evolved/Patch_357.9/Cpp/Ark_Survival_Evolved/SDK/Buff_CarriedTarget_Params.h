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
	 * Function Buff_CarriedTarget.Buff_CarriedTarget_C.Sruggle
	 */
	struct ABuff_CarriedTarget_C_Sruggle_Params
	{	};

	/**
	 * Function Buff_CarriedTarget.Buff_CarriedTarget_C.Validate
	 */
	struct ABuff_CarriedTarget_C_Validate_Params
	{	};

	/**
	 * Function Buff_CarriedTarget.Buff_CarriedTarget_C.SetIsHostileBuff
	 */
	struct ABuff_CarriedTarget_C_SetIsHostileBuff_Params
	{
	public:
		bool                                                       NewSetting;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_CarriedTarget.Buff_CarriedTarget_C.GetBuffDescription
	 */
	struct ABuff_CarriedTarget_C_GetBuffDescription_Params
	{
	public:
		struct FStatusValueModifierDescription                     ReturnValue;                                             // 0x0000(0x0050)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Buff_CarriedTarget.Buff_CarriedTarget_C.UpdateEquipmentDOT
	 */
	struct ABuff_CarriedTarget_C_UpdateEquipmentDOT_Params
	{
	public:
		float                                                      B;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_CarriedTarget.Buff_CarriedTarget_C.UpdateStruggle
	 */
	struct ABuff_CarriedTarget_C_UpdateStruggle_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_CarriedTarget.Buff_CarriedTarget_C.BPActivated
	 */
	struct ABuff_CarriedTarget_C_BPActivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_CarriedTarget.Buff_CarriedTarget_C.BPGetHUDElements
	 */
	struct ABuff_CarriedTarget_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Buff_CarriedTarget.Buff_CarriedTarget_C.BuffTickServer
	 */
	struct ABuff_CarriedTarget_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_CarriedTarget.Buff_CarriedTarget_C.BPHandleOnStartAltFire
	 */
	struct ABuff_CarriedTarget_C_BPHandleOnStartAltFire_Params
	{
	public:
		bool                                                       bFromGamepad;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_CarriedTarget.Buff_CarriedTarget_C.TryStruggle
	 */
	struct ABuff_CarriedTarget_C_TryStruggle_Params
	{	};

	/**
	 * Function Buff_CarriedTarget.Buff_CarriedTarget_C.PreventJump
	 */
	struct ABuff_CarriedTarget_C_PreventJump_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_CarriedTarget.Buff_CarriedTarget_C.BPHandleOnStartFire
	 */
	struct ABuff_CarriedTarget_C_BPHandleOnStartFire_Params
	{
	public:
		bool                                                       bFromGamepad;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_CarriedTarget.Buff_CarriedTarget_C.GetBuffPostprocessIntensity
	 */
	struct ABuff_CarriedTarget_C_GetBuffPostprocessIntensity_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_CarriedTarget.Buff_CarriedTarget_C.AllowPostProcessEffect
	 */
	struct ABuff_CarriedTarget_C_AllowPostProcessEffect_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LECD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_CarriedTarget.Buff_CarriedTarget_C.BPDeactivated
	 */
	struct ABuff_CarriedTarget_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_CarriedTarget.Buff_CarriedTarget_C.BPSetupForInstigator
	 */
	struct ABuff_CarriedTarget_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_CarriedTarget.Buff_CarriedTarget_C.UserConstructionScript
	 */
	struct ABuff_CarriedTarget_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_CarriedTarget.Buff_CarriedTarget_C.ServerRequestStruggle
	 */
	struct ABuff_CarriedTarget_C_ServerRequestStruggle_Params
	{	};

	/**
	 * Function Buff_CarriedTarget.Buff_CarriedTarget_C.ClientOnStruggle
	 */
	struct ABuff_CarriedTarget_C_ClientOnStruggle_Params
	{	};

	/**
	 * Function Buff_CarriedTarget.Buff_CarriedTarget_C.MultiOnArmorDurabilityDamage
	 */
	struct ABuff_CarriedTarget_C_MultiOnArmorDurabilityDamage_Params
	{	};

	/**
	 * Function Buff_CarriedTarget.Buff_CarriedTarget_C.ExecuteUbergraph_Buff_CarriedTarget
	 */
	struct ABuff_CarriedTarget_C_ExecuteUbergraph_Buff_CarriedTarget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
