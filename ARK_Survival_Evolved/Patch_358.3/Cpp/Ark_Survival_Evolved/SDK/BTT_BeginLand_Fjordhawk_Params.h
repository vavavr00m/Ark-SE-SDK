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
	 * Function BTT_BeginLand_Fjordhawk.BTT_BeginLand_Fjordhawk_C.ReceiveExecute
	 */
	struct UBTT_BeginLand_Fjordhawk_C_ReceiveExecute_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BTT_BeginLand_Fjordhawk.BTT_BeginLand_Fjordhawk_C.ReceiveTick
	 */
	struct UBTT_BeginLand_Fjordhawk_C_ReceiveTick_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DeltaSeconds;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BTT_BeginLand_Fjordhawk.BTT_BeginLand_Fjordhawk_C.StartLanding
	 */
	struct UBTT_BeginLand_Fjordhawk_C_StartLanding_Params
	{
	public:
		class AFjordhawk_Character_BP_C*                           Dino;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AFjordhawk_AIController_BP_C*                        Controller;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BTT_BeginLand_Fjordhawk.BTT_BeginLand_Fjordhawk_C.ExecuteUbergraph_BTT_BeginLand_Fjordhawk
	 */
	struct UBTT_BeginLand_Fjordhawk_C_ExecuteUbergraph_BTT_BeginLand_Fjordhawk_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
