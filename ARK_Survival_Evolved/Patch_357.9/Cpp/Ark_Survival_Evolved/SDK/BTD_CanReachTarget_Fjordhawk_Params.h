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
	 * Function BTD_CanReachTarget_Fjordhawk.BTD_CanReachTarget_Fjordhawk_C.IsFacing
	 */
	struct UBTD_CanReachTarget_Fjordhawk_C_IsFacing_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Point;                                                   // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Angle;                                                   // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Facing;                                                  // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MV6P[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BTD_CanReachTarget_Fjordhawk.BTD_CanReachTarget_Fjordhawk_C.ReceiveConditionCheck
	 */
	struct UBTD_CanReachTarget_Fjordhawk_C_ReceiveConditionCheck_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BTD_CanReachTarget_Fjordhawk.BTD_CanReachTarget_Fjordhawk_C.ExecuteUbergraph_BTD_CanReachTarget_Fjordhawk
	 */
	struct UBTD_CanReachTarget_Fjordhawk_C_ExecuteUbergraph_BTD_CanReachTarget_Fjordhawk_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
