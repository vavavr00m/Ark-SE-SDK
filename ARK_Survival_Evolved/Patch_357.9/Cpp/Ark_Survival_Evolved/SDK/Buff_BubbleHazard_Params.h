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
	 * Function Buff_BubbleHazard.Buff_BubbleHazard_C.BPDeactivated
	 */
	struct ABuff_BubbleHazard_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BubbleHazard.Buff_BubbleHazard_C.BP_OverrideCharacterFlyingVelocity
	 */
	struct ABuff_BubbleHazard_C_BP_OverrideCharacterFlyingVelocity_Params
	{
	public:
		struct FVector                                             InitialVelocity;                                         // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             Gravity;                                                 // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BubbleHazard.Buff_BubbleHazard_C.PopBubble
	 */
	struct ABuff_BubbleHazard_C_PopBubble_Params
	{	};

	/**
	 * Function Buff_BubbleHazard.Buff_BubbleHazard_C.BPServerHandleNetExecCommand
	 */
	struct ABuff_BubbleHazard_C_BPServerHandleNetExecCommand_Params
	{
	public:
		class APlayerController*                                   FromPC;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                CommandName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0010(0x0040)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BubbleHazard.Buff_BubbleHazard_C.BPHandleOnStartFire
	 */
	struct ABuff_BubbleHazard_C_BPHandleOnStartFire_Params
	{
	public:
		bool                                                       bFromGamepad;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5KTK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_BubbleHazard.Buff_BubbleHazard_C.BuffTickClient
	 */
	struct ABuff_BubbleHazard_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1H7R[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_BubbleHazard.Buff_BubbleHazard_C.AttachBubble
	 */
	struct ABuff_BubbleHazard_C_AttachBubble_Params
	{
	public:
		struct FVector                                             BubbleLocation;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BubbleHazard.Buff_BubbleHazard_C.BP_OverrideCharacterSwimmingVelocity
	 */
	struct ABuff_BubbleHazard_C_BP_OverrideCharacterSwimmingVelocity_Params
	{
	public:
		struct FVector                                             InitialVelocity;                                         // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             Gravity;                                                 // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      FluidFriction;                                           // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      NetBuoyancy;                                             // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x0024(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BubbleHazard.Buff_BubbleHazard_C.BuffTickServer
	 */
	struct ABuff_BubbleHazard_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_51I2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_BubbleHazard.Buff_BubbleHazard_C.BPSetupForInstigator
	 */
	struct ABuff_BubbleHazard_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BubbleHazard.Buff_BubbleHazard_C.UserConstructionScript
	 */
	struct ABuff_BubbleHazard_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_BubbleHazard.Buff_BubbleHazard_C.InitLocation
	 */
	struct ABuff_BubbleHazard_C_InitLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Scale;                                                   // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BubbleHazard.Buff_BubbleHazard_C.ExecuteUbergraph_Buff_BubbleHazard
	 */
	struct ABuff_BubbleHazard_C_ExecuteUbergraph_Buff_BubbleHazard_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
