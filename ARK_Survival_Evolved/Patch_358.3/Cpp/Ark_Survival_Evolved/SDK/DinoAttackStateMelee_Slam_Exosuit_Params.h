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
	 * Function DinoAttackStateMelee_Slam_Exosuit.DinoAttackStateMelee_Slam_Exosuit_C.StartAnimationStateEvent
	 */
	struct UDinoAttackStateMelee_Slam_Exosuit_C_StartAnimationStateEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ENetRole                                                   Role;                                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackStateMelee_Slam_Exosuit.DinoAttackStateMelee_Slam_Exosuit_C.BPGetSocketLocation
	 */
	struct UDinoAttackStateMelee_Slam_Exosuit_C_BPGetSocketLocation_Params
	{
	public:
		class FName                                                SocketName;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             SocketLocation;                                          // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackStateMelee_Slam_Exosuit.DinoAttackStateMelee_Slam_Exosuit_C.ExecuteUbergraph_DinoAttackStateMelee_Slam_Exosuit
	 */
	struct UDinoAttackStateMelee_Slam_Exosuit_C_ExecuteUbergraph_DinoAttackStateMelee_Slam_Exosuit_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
