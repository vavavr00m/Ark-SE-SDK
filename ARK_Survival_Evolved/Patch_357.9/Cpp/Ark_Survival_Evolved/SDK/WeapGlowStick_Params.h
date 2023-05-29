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
	 * Function WeapGlowStick.WeapGlowStick_C.BPHandleMeleeAttack
	 */
	struct AWeapGlowStick_C_BPHandleMeleeAttack_Params
	{	};

	/**
	 * Function WeapGlowStick.WeapGlowStick_C.BPAnimNotifyCustomEvent
	 */
	struct AWeapGlowStick_C_BPAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapGlowStick.WeapGlowStick_C.BPLostController
	 */
	struct AWeapGlowStick_C_BPLostController_Params
	{	};

	/**
	 * Function WeapGlowStick.WeapGlowStick_C.ReceiveTick
	 */
	struct AWeapGlowStick_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapGlowStick.WeapGlowStick_C.IsColorized
	 */
	struct AWeapGlowStick_C_IsColorized_Params
	{
	public:
		struct FLinearColor                                        currColor;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapGlowStick.WeapGlowStick_C.ClampMinColorVals
	 */
	struct AWeapGlowStick_C_ClampMinColorVals_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      MinVal;                                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FLinearColor                                        clampedColor;                                            // 0x0014(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapGlowStick.WeapGlowStick_C.BPAppliedPrimalItemToWeapon
	 */
	struct AWeapGlowStick_C_BPAppliedPrimalItemToWeapon_Params
	{	};

	/**
	 * Function WeapGlowStick.WeapGlowStick_C.PullOutNewGlowStick
	 */
	struct AWeapGlowStick_C_PullOutNewGlowStick_Params
	{	};

	/**
	 * Function WeapGlowStick.WeapGlowStick_C.BPWeaponCanFire
	 */
	struct AWeapGlowStick_C_BPWeaponCanFire_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapGlowStick.WeapGlowStick_C.InitGlowStick
	 */
	struct AWeapGlowStick_C_InitGlowStick_Params
	{	};

	/**
	 * Function WeapGlowStick.WeapGlowStick_C.NetSetIsBroken
	 */
	struct AWeapGlowStick_C_NetSetIsBroken_Params
	{
	public:
		bool                                                       newIsBroken;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapGlowStick.WeapGlowStick_C.TurnOnGlowStick
	 */
	struct AWeapGlowStick_C_TurnOnGlowStick_Params
	{	};

	/**
	 * Function WeapGlowStick.WeapGlowStick_C.BPStartEquippedNotify
	 */
	struct AWeapGlowStick_C_BPStartEquippedNotify_Params
	{	};

	/**
	 * Function WeapGlowStick.WeapGlowStick_C.BP_OnReloadNotify
	 */
	struct AWeapGlowStick_C_BP_OnReloadNotify_Params
	{	};

	/**
	 * Function WeapGlowStick.WeapGlowStick_C.PlayCameraShake
	 */
	struct AWeapGlowStick_C_PlayCameraShake_Params
	{
	public:
		float                                                      Intensity;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9CSY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapGlowStick.WeapGlowStick_C.OnRep_IsBroken
	 */
	struct AWeapGlowStick_C_OnRep_IsBroken_Params
	{	};

	/**
	 * Function WeapGlowStick.WeapGlowStick_C.Create Dynamic Material
	 */
	struct AWeapGlowStick_C_CreateDynamicMaterial_Params
	{	};

	/**
	 * Function WeapGlowStick.WeapGlowStick_C.TurnOffGlowStick
	 */
	struct AWeapGlowStick_C_TurnOffGlowStick_Params
	{	};

	/**
	 * Function WeapGlowStick.WeapGlowStick_C.SetMaterialEmissiveness
	 */
	struct AWeapGlowStick_C_SetMaterialEmissiveness_Params
	{
	public:
		class UMaterialInstanceDynamic*                            Material;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Value;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapGlowStick.WeapGlowStick_C.SetLightIntensityAndAttenuationRadius
	 */
	struct AWeapGlowStick_C_SetLightIntensityAndAttenuationRadius_Params
	{
	public:
		class UPointLightComponent*                                Light;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Intensity;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Radius;                                                  // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapGlowStick.WeapGlowStick_C.UserConstructionScript
	 */
	struct AWeapGlowStick_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WeapGlowStick.WeapGlowStick_C.ProjectileFired
	 */
	struct AWeapGlowStick_C_ProjectileFired_Params
	{	};

	/**
	 * Function WeapGlowStick.WeapGlowStick_C.ReceiveBeginPlay
	 */
	struct AWeapGlowStick_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function WeapGlowStick.WeapGlowStick_C.StartUnequipEvent
	 */
	struct AWeapGlowStick_C_StartUnequipEvent_Params
	{	};

	/**
	 * Function WeapGlowStick.WeapGlowStick_C.Multi_FakeReload
	 */
	struct AWeapGlowStick_C_Multi_FakeReload_Params
	{	};

	/**
	 * Function WeapGlowStick.WeapGlowStick_C.BPFireWeapon
	 */
	struct AWeapGlowStick_C_BPFireWeapon_Params
	{	};

	/**
	 * Function WeapGlowStick.WeapGlowStick_C.AfterProjectileFired_ROS
	 */
	struct AWeapGlowStick_C_AfterProjectileFired_ROS_Params
	{	};

	/**
	 * Function WeapGlowStick.WeapGlowStick_C.CrackGlowStickAfterDelay
	 */
	struct AWeapGlowStick_C_CrackGlowStickAfterDelay_Params
	{	};

	/**
	 * Function WeapGlowStick.WeapGlowStick_C.Multi_UnequipGlowStick
	 */
	struct AWeapGlowStick_C_Multi_UnequipGlowStick_Params
	{	};

	/**
	 * Function WeapGlowStick.WeapGlowStick_C.PlayTPVShakeAnimAfterDelay
	 */
	struct AWeapGlowStick_C_PlayTPVShakeAnimAfterDelay_Params
	{	};

	/**
	 * Function WeapGlowStick.WeapGlowStick_C.CrackGlowStick
	 */
	struct AWeapGlowStick_C_CrackGlowStick_Params
	{	};

	/**
	 * Function WeapGlowStick.WeapGlowStick_C.OnMeleeAttack_Multicast
	 */
	struct AWeapGlowStick_C_OnMeleeAttack_Multicast_Params
	{	};

	/**
	 * Function WeapGlowStick.WeapGlowStick_C.MultiFakeReloadAfterDelay
	 */
	struct AWeapGlowStick_C_MultiFakeReloadAfterDelay_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapGlowStick.WeapGlowStick_C.PreventUsingGlowstickForDuration
	 */
	struct AWeapGlowStick_C_PreventUsingGlowstickForDuration_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapGlowStick.WeapGlowStick_C.Multi_BeginCrackingGlowstick
	 */
	struct AWeapGlowStick_C_Multi_BeginCrackingGlowstick_Params
	{	};

	/**
	 * Function WeapGlowStick.WeapGlowStick_C.ExecuteUbergraph_WeapGlowStick
	 */
	struct AWeapGlowStick_C_ExecuteUbergraph_WeapGlowStick_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
