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
	 * Function ProjTekShoulderCannon_Base.ProjTekShoulderCannon_Base_C.BPIgnoreRadialDamageVictim
	 */
	struct AProjTekShoulderCannon_Base_C_BPIgnoreRadialDamageVictim_Params
	{
	public:
		class AActor*                                              Victim;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4MV6[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ProjTekShoulderCannon_Base.ProjTekShoulderCannon_Base_C.UserConstructionScript
	 */
	struct AProjTekShoulderCannon_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ProjTekShoulderCannon_Base.ProjTekShoulderCannon_Base_C.ReceiveBeginPlay
	 */
	struct AProjTekShoulderCannon_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ProjTekShoulderCannon_Base.ProjTekShoulderCannon_Base_C.OnExplode
	 */
	struct AProjTekShoulderCannon_Base_C_OnExplode_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ProjTekShoulderCannon_Base.ProjTekShoulderCannon_Base_C.ExecuteUbergraph_ProjTekShoulderCannon_Base
	 */
	struct AProjTekShoulderCannon_Base_C_ExecuteUbergraph_ProjTekShoulderCannon_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
