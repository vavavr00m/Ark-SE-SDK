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
	 * Function BP_ShipRoot.BP_ShipRoot_C.GetMatineeLengthsAndPlayRates
	 */
	struct ABP_ShipRoot_C_GetMatineeLengthsAndPlayRates_Params
	{
	public:
		struct FVector2D                                           WarmUp;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector2D                                           Loop;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector2D                                           Cooldown;                                                // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ShipRoot.BP_ShipRoot_C.BindDCM
	 */
	struct ABP_ShipRoot_C_BindDCM_Params
	{	};

	/**
	 * Function BP_ShipRoot.BP_ShipRoot_C.UserConstructionScript
	 */
	struct ABP_ShipRoot_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_ShipRoot.BP_ShipRoot_C.BindMatineeUpdateFromDCM
	 */
	struct ABP_ShipRoot_C_BindMatineeUpdateFromDCM_Params
	{	};

	/**
	 * Function BP_ShipRoot.BP_ShipRoot_C.OnDCMUpdated
	 */
	struct ABP_ShipRoot_C_OnDCMUpdated_Params
	{	};

	/**
	 * Function BP_ShipRoot.BP_ShipRoot_C.ReceiveBeginPlay
	 */
	struct ABP_ShipRoot_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_ShipRoot.BP_ShipRoot_C.RecieveMatineeUpdated
	 */
	struct ABP_ShipRoot_C_RecieveMatineeUpdated_Params
	{	};

	/**
	 * Function BP_ShipRoot.BP_ShipRoot_C.ExecuteUbergraph_BP_ShipRoot
	 */
	struct ABP_ShipRoot_C_ExecuteUbergraph_BP_ShipRoot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
