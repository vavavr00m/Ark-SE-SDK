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
	 * Function Buff_FearCourage_WildYutyrannus.Buff_FearCourage_WildYutyrannus_C.DrawBuffFloatingHUD
	 */
	struct ABuff_FearCourage_WildYutyrannus_C_DrawBuffFloatingHUD_Params
	{
	public:
		int32_t                                                    BuffIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KZ0P[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterHUD*                                         HUD;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterX;                                                 // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterY;                                                 // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DrawScale;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZEGY[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_FearCourage_WildYutyrannus.Buff_FearCourage_WildYutyrannus_C.UserConstructionScript
	 */
	struct ABuff_FearCourage_WildYutyrannus_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_FearCourage_WildYutyrannus.Buff_FearCourage_WildYutyrannus_C.ExecuteUbergraph_Buff_FearCourage_WildYutyrannus
	 */
	struct ABuff_FearCourage_WildYutyrannus_C_ExecuteUbergraph_Buff_FearCourage_WildYutyrannus_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
