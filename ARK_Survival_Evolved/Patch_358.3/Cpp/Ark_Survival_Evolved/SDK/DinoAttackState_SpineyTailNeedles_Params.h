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
	 * Function DinoAttackState_SpineyTailNeedles.DinoAttackState_SpineyTailNeedles_C.GetGravityBias
	 */
	struct UDinoAttackState_SpineyTailNeedles_C_GetGravityBias_Params
	{
	public:
		struct FVector                                             Velocity;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             StartLocation;                                           // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             TargetLocation;                                          // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ZBias;                                                   // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackState_SpineyTailNeedles.DinoAttackState_SpineyTailNeedles_C.Get Socket Location
	 */
	struct UDinoAttackState_SpineyTailNeedles_C_GetSocketLocation_Params
	{
	public:
		class FName                                                SocketName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Offset;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Location;                                                // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackState_SpineyTailNeedles.DinoAttackState_SpineyTailNeedles_C.OffsetVectorRandomly
	 */
	struct UDinoAttackState_SpineyTailNeedles_C_OffsetVectorRandomly_Params
	{
	public:
		struct FVector                                             VectorIn;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             newVector;                                               // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackState_SpineyTailNeedles.DinoAttackState_SpineyTailNeedles_C.ExecuteUbergraph_DinoAttackState_SpineyTailNeedles
	 */
	struct UDinoAttackState_SpineyTailNeedles_C_ExecuteUbergraph_DinoAttackState_SpineyTailNeedles_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
