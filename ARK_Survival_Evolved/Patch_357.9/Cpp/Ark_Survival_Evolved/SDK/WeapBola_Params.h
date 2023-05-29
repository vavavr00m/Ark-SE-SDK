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
	 * Function WeapBola.WeapBola_C.BPWeaponCanFire
	 */
	struct AWeapBola_C_BPWeaponCanFire_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapBola.WeapBola_C.BPGetProjectileSpeed
	 */
	struct AWeapBola_C_BPGetProjectileSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapBola.WeapBola_C.UserConstructionScript
	 */
	struct AWeapBola_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WeapBola.WeapBola_C.ExecuteUbergraph_WeapBola
	 */
	struct AWeapBola_C_ExecuteUbergraph_WeapBola_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
