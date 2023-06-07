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
	 * Function BTT_MoveAroundTarget.BTT_MoveAroundTarget_C.GetPointsAroundTarget
	 */
	struct UBTT_MoveAroundTarget_C_GetPointsAroundTarget_Params
	{
	public:
		float                                                      Direction;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             StartLoc;                                                // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             EndLoc;                                                  // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BTT_MoveAroundTarget.BTT_MoveAroundTarget_C.ReceiveTick
	 */
	struct UBTT_MoveAroundTarget_C_ReceiveTick_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DeltaSeconds;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BTT_MoveAroundTarget.BTT_MoveAroundTarget_C.ReceiveExecute
	 */
	struct UBTT_MoveAroundTarget_C_ReceiveExecute_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BTT_MoveAroundTarget.BTT_MoveAroundTarget_C.ExecuteUbergraph_BTT_MoveAroundTarget
	 */
	struct UBTT_MoveAroundTarget_C_ExecuteUbergraph_BTT_MoveAroundTarget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
