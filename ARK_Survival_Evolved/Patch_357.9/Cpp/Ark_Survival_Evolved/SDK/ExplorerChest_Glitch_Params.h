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
	 * Function ExplorerChest_Glitch.ExplorerChest_Glitch_C.Delay play Reaction Function
	 */
	struct AExplorerChest_Glitch_C_DelayplayReactionFunction_Params
	{
	public:
		struct FCompanionReactionData                              WithReactionData;                                        // 0x0000(0x00A0)  (Parm, OutParm, ReferenceParm)
		class APrimalBuff_Companion*                               HLNA;                                                    // 0x00A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ExplorerChest_Glitch.ExplorerChest_Glitch_C.delayed reaction
	 */
	struct AExplorerChest_Glitch_C_delayedreaction_Params
	{	};

	/**
	 * Function ExplorerChest_Glitch.ExplorerChest_Glitch_C.UnlockGen2ExplorerNote
	 */
	struct AExplorerChest_Glitch_C_UnlockGen2ExplorerNote_Params
	{	};

	/**
	 * Function ExplorerChest_Glitch.ExplorerChest_Glitch_C.DrawBasicFloatingHUD
	 */
	struct AExplorerChest_Glitch_C_DrawBasicFloatingHUD_Params
	{
	public:
		class AHUD*                                                ForHUD;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ExplorerChest_Glitch.ExplorerChest_Glitch_C.PlayExplorerNoteOnHLNA
	 */
	struct AExplorerChest_Glitch_C_PlayExplorerNoteOnHLNA_Params
	{
	public:
		class UPrimalItem*                                         Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ExplorerChest_Glitch.ExplorerChest_Glitch_C.UserConstructionScript
	 */
	struct AExplorerChest_Glitch_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ExplorerChest_Glitch.ExplorerChest_Glitch_C.BndEvt__TriggerVolume_K2Node_ComponentBoundEvent_12_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AExplorerChest_Glitch_C_BndEvt__TriggerVolume_K2Node_ComponentBoundEvent_12_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    OtherBodyIndex;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bFromSweep;                                              // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L60P[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0018(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ExplorerChest_Glitch.ExplorerChest_Glitch_C.BndEvt__TriggerVolume_K2Node_ComponentBoundEvent_15_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct AExplorerChest_Glitch_C_BndEvt__TriggerVolume_K2Node_ComponentBoundEvent_15_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    OtherBodyIndex;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ExplorerChest_Glitch.ExplorerChest_Glitch_C.BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_133_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AExplorerChest_Glitch_C_BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_133_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    OtherBodyIndex;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bFromSweep;                                              // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0QO4[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0018(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ExplorerChest_Glitch.ExplorerChest_Glitch_C.delay play reaction
	 */
	struct AExplorerChest_Glitch_C_delayplayreaction_Params
	{
	public:
		struct FCompanionReactionData                              reaction;                                                // 0x0000(0x00A0)  (Parm)
		class APrimalBuff_Companion*                               HLNA;                                                    // 0x00A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ExplorerChest_Glitch.ExplorerChest_Glitch_C.ExecuteUbergraph_ExplorerChest_Glitch
	 */
	struct AExplorerChest_Glitch_C_ExecuteUbergraph_ExplorerChest_Glitch_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
