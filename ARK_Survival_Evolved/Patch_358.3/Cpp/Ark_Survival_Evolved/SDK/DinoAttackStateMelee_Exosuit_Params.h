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
	 * Function DinoAttackStateMelee_Exosuit.DinoAttackStateMelee_Exosuit_C.BPGetSocketLocation
	 */
	struct UDinoAttackStateMelee_Exosuit_C_BPGetSocketLocation_Params
	{
	public:
		class FName                                                SocketName;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             SocketLocation;                                          // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackStateMelee_Exosuit.DinoAttackStateMelee_Exosuit_C.ExecuteUbergraph_DinoAttackStateMelee_Exosuit
	 */
	struct UDinoAttackStateMelee_Exosuit_C_ExecuteUbergraph_DinoAttackStateMelee_Exosuit_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
