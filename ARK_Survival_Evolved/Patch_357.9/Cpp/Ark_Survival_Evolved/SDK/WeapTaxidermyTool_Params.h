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
	 * Function WeapTaxidermyTool.WeapTaxidermyTool_C.BPGetSelectedMeleeAttackAnim
	 */
	struct AWeapTaxidermyTool_C_BPGetSelectedMeleeAttackAnim_Params
	{
	public:
		struct FWeaponAnim                                         ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTaxidermyTool.WeapTaxidermyTool_C.UserConstructionScript
	 */
	struct AWeapTaxidermyTool_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WeapTaxidermyTool.WeapTaxidermyTool_C.ExecuteUbergraph_WeapTaxidermyTool
	 */
	struct AWeapTaxidermyTool_C_ExecuteUbergraph_WeapTaxidermyTool_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
