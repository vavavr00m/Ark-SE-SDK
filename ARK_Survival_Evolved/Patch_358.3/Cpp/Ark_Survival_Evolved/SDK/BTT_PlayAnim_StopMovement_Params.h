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
	 * Function BTT_PlayAnim_StopMovement.BTT_PlayAnim_StopMovement_C.ReceiveExecute
	 */
	struct UBTT_PlayAnim_StopMovement_C_ReceiveExecute_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BTT_PlayAnim_StopMovement.BTT_PlayAnim_StopMovement_C.ReceiveTick
	 */
	struct UBTT_PlayAnim_StopMovement_C_ReceiveTick_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DeltaSeconds;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BTT_PlayAnim_StopMovement.BTT_PlayAnim_StopMovement_C.ExecuteUbergraph_BTT_PlayAnim_StopMovement
	 */
	struct UBTT_PlayAnim_StopMovement_C_ExecuteUbergraph_BTT_PlayAnim_StopMovement_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
