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
	 * Function ExplorerChest_Base.ExplorerChest_Base_C.BPGetExtraSpecialBlueprintInt
	 */
	struct AExplorerChest_Base_C_BPGetExtraSpecialBlueprintInt_Params
	{
	public:
		int32_t                                                    toCheck;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ExplorerChest_Base.ExplorerChest_Base_C.DrawBasicFloatingHUD
	 */
	struct AExplorerChest_Base_C_DrawBasicFloatingHUD_Params
	{
	public:
		class AHUD*                                                ForHUD;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ExplorerChest_Base.ExplorerChest_Base_C.ReceiveEndPlay
	 */
	struct AExplorerChest_Base_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7VYZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ExplorerChest_Base.ExplorerChest_Base_C.ReceiveBeginPlay
	 */
	struct AExplorerChest_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ExplorerChest_Base.ExplorerChest_Base_C.PlayUnlock
	 */
	struct AExplorerChest_Base_C_PlayUnlock_Params
	{	};

	/**
	 * Function ExplorerChest_Base.ExplorerChest_Base_C.UserConstructionScript
	 */
	struct AExplorerChest_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ExplorerChest_Base.ExplorerChest_Base_C.BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_133_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AExplorerChest_Base_C_BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_133_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    OtherBodyIndex;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bFromSweep;                                              // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MHUR[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0018(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ExplorerChest_Base.ExplorerChest_Base_C.CheckForPlayerState
	 */
	struct AExplorerChest_Base_C_CheckForPlayerState_Params
	{	};

	/**
	 * Function ExplorerChest_Base.ExplorerChest_Base_C.DoUnlock
	 */
	struct AExplorerChest_Base_C_DoUnlock_Params
	{	};

	/**
	 * Function ExplorerChest_Base.ExplorerChest_Base_C.ShortRefresh
	 */
	struct AExplorerChest_Base_C_ShortRefresh_Params
	{	};

	/**
	 * Function ExplorerChest_Base.ExplorerChest_Base_C.LongRefresh
	 */
	struct AExplorerChest_Base_C_LongRefresh_Params
	{	};

	/**
	 * Function ExplorerChest_Base.ExplorerChest_Base_C.ExecuteUbergraph_ExplorerChest_Base
	 */
	struct AExplorerChest_Base_C_ExecuteUbergraph_ExplorerChest_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
