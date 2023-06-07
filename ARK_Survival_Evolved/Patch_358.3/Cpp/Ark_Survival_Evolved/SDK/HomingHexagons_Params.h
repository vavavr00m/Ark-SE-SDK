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
	 * Function HomingHexagons.HomingHexagons_C.BeginMovingDirectlyToActor
	 */
	struct AHomingHexagons_C_BeginMovingDirectlyToActor_Params
	{	};

	/**
	 * Function HomingHexagons.HomingHexagons_C.HoverThenAttract
	 */
	struct AHomingHexagons_C_HoverThenAttract_Params
	{	};

	/**
	 * Function HomingHexagons.HomingHexagons_C.Spread Out
	 */
	struct AHomingHexagons_C_SpreadOut_Params
	{	};

	/**
	 * Function HomingHexagons.HomingHexagons_C.SetVolume
	 */
	struct AHomingHexagons_C_SetVolume_Params
	{
	public:
		float                                                      NewVolume;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HomingHexagons.HomingHexagons_C.constantly rotate
	 */
	struct AHomingHexagons_C_constantlyrotate_Params
	{	};

	/**
	 * Function HomingHexagons.HomingHexagons_C.ReceiveBeginPlay
	 */
	struct AHomingHexagons_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function HomingHexagons.HomingHexagons_C.UserConstructionScript
	 */
	struct AHomingHexagons_C_UserConstructionScript_Params
	{	};

	/**
	 * Function HomingHexagons.HomingHexagons_C.Timeline_0__FinishedFunc
	 */
	struct AHomingHexagons_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function HomingHexagons.HomingHexagons_C.Timeline_0__UpdateFunc
	 */
	struct AHomingHexagons_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function HomingHexagons.HomingHexagons_C.Timeline_1__FinishedFunc
	 */
	struct AHomingHexagons_C_Timeline_1__FinishedFunc_Params
	{	};

	/**
	 * Function HomingHexagons.HomingHexagons_C.Timeline_1__UpdateFunc
	 */
	struct AHomingHexagons_C_Timeline_1__UpdateFunc_Params
	{	};

	/**
	 * Function HomingHexagons.HomingHexagons_C.Timeline_2__FinishedFunc
	 */
	struct AHomingHexagons_C_Timeline_2__FinishedFunc_Params
	{	};

	/**
	 * Function HomingHexagons.HomingHexagons_C.Timeline_2__UpdateFunc
	 */
	struct AHomingHexagons_C_Timeline_2__UpdateFunc_Params
	{	};

	/**
	 * Function HomingHexagons.HomingHexagons_C.burst__FinishedFunc
	 */
	struct AHomingHexagons_C_burst__FinishedFunc_Params
	{	};

	/**
	 * Function HomingHexagons.HomingHexagons_C.burst__UpdateFunc
	 */
	struct AHomingHexagons_C_burst__UpdateFunc_Params
	{	};

	/**
	 * Function HomingHexagons.HomingHexagons_C.begin move towards screen position
	 */
	struct AHomingHexagons_C_beginmovetowardsscreenposition_Params
	{	};

	/**
	 * Function HomingHexagons.HomingHexagons_C.begin moving towards point in screen space
	 */
	struct AHomingHexagons_C_beginmovingtowardspointinscreenspace_Params
	{
	public:
		class AActor*                                              AttachActor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HomingHexagons.HomingHexagons_C.begin moving towards point attached to actor
	 */
	struct AHomingHexagons_C_beginmovingtowardspointattachedtoactor_Params
	{
	public:
		class AActor*                                              AttachActor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HomingHexagons.HomingHexagons_C.skip hover
	 */
	struct AHomingHexagons_C_skiphover_Params
	{	};

	/**
	 * Function HomingHexagons.HomingHexagons_C.ExecuteUbergraph_HomingHexagons
	 */
	struct AHomingHexagons_C_ExecuteUbergraph_HomingHexagons_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
