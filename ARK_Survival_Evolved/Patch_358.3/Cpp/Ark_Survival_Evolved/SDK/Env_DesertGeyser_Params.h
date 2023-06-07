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
	 * Function Env_DesertGeyser.Env_DesertGeyser_C.IsCharacterInGeyser
	 */
	struct AEnv_DesertGeyser_C_IsCharacterInGeyser_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       returnvalue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4KH5[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Env_DesertGeyser.Env_DesertGeyser_C.UserConstructionScript
	 */
	struct AEnv_DesertGeyser_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Env_DesertGeyser.Env_DesertGeyser_C.BndEvt__LaunchArea_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AEnv_DesertGeyser_C_BndEvt__LaunchArea_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    OtherBodyIndex;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bFromSweep;                                              // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9PU7[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0018(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Env_DesertGeyser.Env_DesertGeyser_C.ServerRequestLaunch
	 */
	struct AEnv_DesertGeyser_C_ServerRequestLaunch_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Env_DesertGeyser.Env_DesertGeyser_C.ReceiveTick
	 */
	struct AEnv_DesertGeyser_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Env_DesertGeyser.Env_DesertGeyser_C.TurnGeyserOff
	 */
	struct AEnv_DesertGeyser_C_TurnGeyserOff_Params
	{	};

	/**
	 * Function Env_DesertGeyser.Env_DesertGeyser_C.Multi_ToggleParticles
	 */
	struct AEnv_DesertGeyser_C_Multi_ToggleParticles_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Env_DesertGeyser.Env_DesertGeyser_C.ReceiveBeginPlay
	 */
	struct AEnv_DesertGeyser_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Env_DesertGeyser.Env_DesertGeyser_C.ExecuteUbergraph_Env_DesertGeyser
	 */
	struct AEnv_DesertGeyser_C_ExecuteUbergraph_Env_DesertGeyser_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
