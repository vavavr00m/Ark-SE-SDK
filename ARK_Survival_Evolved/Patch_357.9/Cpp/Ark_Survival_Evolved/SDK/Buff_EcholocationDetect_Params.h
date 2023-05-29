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
	 * Function Buff_EcholocationDetect.Buff_EcholocationDetect_C.Set Custom Depth Stencil ValueForActor
	 */
	struct ABuff_EcholocationDetect_C_SetCustomDepthStencilValueForActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    StencilValue;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HasCustomDepth;                                          // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J81Y[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_EcholocationDetect.Buff_EcholocationDetect_C.BuffTickClient
	 */
	struct ABuff_EcholocationDetect_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_EcholocationDetect.Buff_EcholocationDetect_C.BPDeactivated
	 */
	struct ABuff_EcholocationDetect_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_EcholocationDetect.Buff_EcholocationDetect_C.ReceiveBeginPlay
	 */
	struct ABuff_EcholocationDetect_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_EcholocationDetect.Buff_EcholocationDetect_C.UserConstructionScript
	 */
	struct ABuff_EcholocationDetect_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_EcholocationDetect.Buff_EcholocationDetect_C.ExecuteUbergraph_Buff_EcholocationDetect
	 */
	struct ABuff_EcholocationDetect_C_ExecuteUbergraph_Buff_EcholocationDetect_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
