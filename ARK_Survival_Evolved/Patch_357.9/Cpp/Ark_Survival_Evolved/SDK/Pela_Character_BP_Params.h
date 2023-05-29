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
	 * Function Pela_Character_BP.Pela_Character_BP_C.BP_ForceAllowMountedWeapon
	 */
	struct APela_Character_BP_C_BP_ForceAllowMountedWeapon_Params
	{
	public:
		class UClass*                                              WeaponTemplate;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Pela_Character_BP.Pela_Character_BP_C.GetDefaultPela
	 */
	struct APela_Character_BP_C_GetDefaultPela_Params
	{
	public:
		class APela_Character_BP_C*                                Default;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Pela_Character_BP.Pela_Character_BP_C.BPNotifyClearRider
	 */
	struct APela_Character_BP_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Pela_Character_BP.Pela_Character_BP_C.InterpCamera TPV
	 */
	struct APela_Character_BP_C_InterpCameraTPV_Params
	{
	public:
		struct FVector                                             TargetOffset;                                            // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Pela_Character_BP.Pela_Character_BP_C.UserConstructionScript
	 */
	struct APela_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Pela_Character_BP.Pela_Character_BP_C.ReceiveTick
	 */
	struct APela_Character_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Pela_Character_BP.Pela_Character_BP_C.ExecuteUbergraph_Pela_Character_BP
	 */
	struct APela_Character_BP_C_ExecuteUbergraph_Pela_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
