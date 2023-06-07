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
	 * Function WeapFlareGun.WeapFlareGun_C.BPWeaponCanFire
	 */
	struct AWeapFlareGun_C_BPWeaponCanFire_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WDA5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapFlareGun.WeapFlareGun_C.UserConstructionScript
	 */
	struct AWeapFlareGun_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WeapFlareGun.WeapFlareGun_C.ExecuteUbergraph_WeapFlareGun
	 */
	struct AWeapFlareGun_C_ExecuteUbergraph_WeapFlareGun_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
