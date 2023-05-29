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
	 * Function WeapFists_Oar.WeapFists_Oar_C.SendOarInputsToServer
	 */
	struct AWeapFists_Oar_C_SendOarInputsToServer_Params
	{	};

	/**
	 * Function WeapFists_Oar.WeapFists_Oar_C.HandleViewModeChange
	 */
	struct AWeapFists_Oar_C_HandleViewModeChange_Params
	{	};

	/**
	 * Function WeapFists_Oar.WeapFists_Oar_C.InterpToSocket
	 */
	struct AWeapFists_Oar_C_InterpToSocket_Params
	{	};

	/**
	 * Function WeapFists_Oar.WeapFists_Oar_C.OnChangedViewMode
	 */
	struct AWeapFists_Oar_C_OnChangedViewMode_Params
	{
	public:
		bool                                                       bIsFirstPerson;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XGCA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapFists_Oar.WeapFists_Oar_C.PlayPaddleAnim
	 */
	struct AWeapFists_Oar_C_PlayPaddleAnim_Params
	{
	public:
		struct FWeaponAnim                                         AnimToPlay;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFists_Oar.WeapFists_Oar_C.BPOverrideFPVMasterPoseComponent
	 */
	struct AWeapFists_Oar_C_BPOverrideFPVMasterPoseComponent_Params
	{
	public:
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFists_Oar.WeapFists_Oar_C.ReceiveDestroyed
	 */
	struct AWeapFists_Oar_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function WeapFists_Oar.WeapFists_Oar_C.HandlePaddleAnimation
	 */
	struct AWeapFists_Oar_C_HandlePaddleAnimation_Params
	{	};

	/**
	 * Function WeapFists_Oar.WeapFists_Oar_C.GetCurrentPaddleAnimation
	 */
	struct AWeapFists_Oar_C_GetCurrentPaddleAnimation_Params
	{
	public:
		struct FWeaponAnim                                         AnimToPlay;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bFoundAnim;                                              // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ECardinal_Directions_Enum                                  Direction;                                               // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFists_Oar.WeapFists_Oar_C.GetStandingAnimation
	 */
	struct AWeapFists_Oar_C_GetStandingAnimation_Params
	{
	public:
		float                                                      OutBlendInTime;                                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      OutBlendOutTime;                                         // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequence*                                       ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFists_Oar.WeapFists_Oar_C.BPAnimNotifyCustomEvent
	 */
	struct AWeapFists_Oar_C_BPAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFists_Oar.WeapFists_Oar_C.BPOverrideRootRotationOffset
	 */
	struct AWeapFists_Oar_C_BPOverrideRootRotationOffset_Params
	{
	public:
		struct FRotator                                            InRootRotation;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFists_Oar.WeapFists_Oar_C.BPHandleMeleeAttack
	 */
	struct AWeapFists_Oar_C_BPHandleMeleeAttack_Params
	{	};

	/**
	 * Function WeapFists_Oar.WeapFists_Oar_C.UserConstructionScript
	 */
	struct AWeapFists_Oar_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WeapFists_Oar.WeapFists_Oar_C.InpActEvt_AltFire_K2Node_InputActionEvent_245
	 */
	struct AWeapFists_Oar_C_InpActEvt_AltFire_K2Node_InputActionEvent_245_Params
	{	};

	/**
	 * Function WeapFists_Oar.WeapFists_Oar_C.InpActEvt_AltFire_K2Node_InputActionEvent_244
	 */
	struct AWeapFists_Oar_C_InpActEvt_AltFire_K2Node_InputActionEvent_244_Params
	{	};

	/**
	 * Function WeapFists_Oar.WeapFists_Oar_C.ReceiveBeginPlay
	 */
	struct AWeapFists_Oar_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function WeapFists_Oar.WeapFists_Oar_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_272
	 */
	struct AWeapFists_Oar_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_272_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFists_Oar.WeapFists_Oar_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_153
	 */
	struct AWeapFists_Oar_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_153_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFists_Oar.WeapFists_Oar_C.ReceiveTick
	 */
	struct AWeapFists_Oar_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFists_Oar.WeapFists_Oar_C.Server_ReceiveOarInputs
	 */
	struct AWeapFists_Oar_C_Server_ReceiveOarInputs_Params
	{
	public:
		struct FCanoePassengerClientInputAxes                      SavedInputs;                                             // 0x0000(0x0010)  (Parm)
	};

	/**
	 * Function WeapFists_Oar.WeapFists_Oar_C.Server_SetCanoeWantsToBeach
	 */
	struct AWeapFists_Oar_C_Server_SetCanoeWantsToBeach_Params
	{
	public:
		bool                                                       bNewVal;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFists_Oar.WeapFists_Oar_C.ReceiveOarInputAxes
	 */
	struct AWeapFists_Oar_C_ReceiveOarInputAxes_Params
	{
	public:
		float                                                      Forward;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Right;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFists_Oar.WeapFists_Oar_C.ExecuteUbergraph_WeapFists_Oar
	 */
	struct AWeapFists_Oar_C_ExecuteUbergraph_WeapFists_Oar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
