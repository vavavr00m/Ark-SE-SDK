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
	 * Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.DinoUberpounce
	 */
	struct AShapeshifter_Large_AIController_BP_C_DinoUberpounce_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WBP0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.LocationUberpounce
	 */
	struct AShapeshifter_Large_AIController_BP_C_LocationUberpounce_Params
	{	};

	/**
	 * Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.AllowSurfaceNormalForUberpounce
	 */
	struct AShapeshifter_Large_AIController_BP_C_AllowSurfaceNormalForUberpounce_Params
	{
	public:
		struct FVector                                             surfaceNormal;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsValid;                                                 // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_V7VU[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.Enable
	 */
	struct AShapeshifter_Large_AIController_BP_C_Enable_Params
	{	};

	/**
	 * Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.Start Uberpounce
	 */
	struct AShapeshifter_Large_AIController_BP_C_StartUberpounce_Params
	{
	public:
		struct FUberpounceData                                     Data;                                                    // 0x0000(0x0030)  (Parm)
	};

	/**
	 * Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.Deinonychus AttackedWhileLatched
	 */
	struct AShapeshifter_Large_AIController_BP_C_DeinonychusAttackedWhileLatched_Params
	{	};

	/**
	 * Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.OnUberpounceStateChanged
	 */
	struct AShapeshifter_Large_AIController_BP_C_OnUberpounceStateChanged_Params
	{
	public:
		EUberpounceState                                           NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EUberpounceState                                           PrevState;                                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z23C[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.UpdateUberpounce
	 */
	struct AShapeshifter_Large_AIController_BP_C_UpdateUberpounce_Params
	{	};

	/**
	 * Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.ReceiveBeginPlay
	 */
	struct AShapeshifter_Large_AIController_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.ReceiveTick
	 */
	struct AShapeshifter_Large_AIController_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.GetPrimalTarget
	 */
	struct AShapeshifter_Large_AIController_BP_C_GetPrimalTarget_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.GetDino
	 */
	struct AShapeshifter_Large_AIController_BP_C_GetDino_Params
	{
	public:
		class ADeinonychus_Character_BP_C*                         Ret;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.UserConstructionScript
	 */
	struct AShapeshifter_Large_AIController_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.ExecuteUbergraph_Shapeshifter_Large_AIController_BP
	 */
	struct AShapeshifter_Large_AIController_BP_C_ExecuteUbergraph_Shapeshifter_Large_AIController_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
