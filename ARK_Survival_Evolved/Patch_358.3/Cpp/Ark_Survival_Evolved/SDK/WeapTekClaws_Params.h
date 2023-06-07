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
	 * Function WeapTekClaws.WeapTekClaws_C.ReceiveDestroyed
	 */
	struct AWeapTekClaws_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function WeapTekClaws.WeapTekClaws_C.ActivateMaxPowerEffects
	 */
	struct AWeapTekClaws_C_ActivateMaxPowerEffects_Params
	{
	public:
		bool                                                       AtMaxPower;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y2CD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapTekClaws.WeapTekClaws_C.BPMeleeAttackStarted
	 */
	struct AWeapTekClaws_C_BPMeleeAttackStarted_Params
	{	};

	/**
	 * Function WeapTekClaws.WeapTekClaws_C.ClientStartBlocking
	 */
	struct AWeapTekClaws_C_ClientStartBlocking_Params
	{	};

	/**
	 * Function WeapTekClaws.WeapTekClaws_C.ClientStopBlocking
	 */
	struct AWeapTekClaws_C_ClientStopBlocking_Params
	{	};

	/**
	 * Function WeapTekClaws.WeapTekClaws_C.StartSecondaryActionEvent
	 */
	struct AWeapTekClaws_C_StartSecondaryActionEvent_Params
	{	};

	/**
	 * Function WeapTekClaws.WeapTekClaws_C.StopSecondaryActionEvent
	 */
	struct AWeapTekClaws_C_StopSecondaryActionEvent_Params
	{	};

	/**
	 * Function WeapTekClaws.WeapTekClaws_C.OnAttachmentsAdded
	 */
	struct AWeapTekClaws_C_OnAttachmentsAdded_Params
	{	};

	/**
	 * Function WeapTekClaws.WeapTekClaws_C.ChooseParticleColor
	 */
	struct AWeapTekClaws_C_ChooseParticleColor_Params
	{
	public:
		int32_t                                                    ColorID;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FLinearColor                                        ParticleColor;                                           // 0x0004(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekClaws.WeapTekClaws_C.GetItemColors
	 */
	struct AWeapTekClaws_C_GetItemColors_Params
	{
	public:
		TArray<struct FLinearColor>                                ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function WeapTekClaws.WeapTekClaws_C.ApplyParticleColors
	 */
	struct AWeapTekClaws_C_ApplyParticleColors_Params
	{
	public:
		TArray<struct FLinearColor>                                InputPin;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		class UParticleSystemComponent*                            InputPin2;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekClaws.WeapTekClaws_C.BPSpawnMeleeEffects
	 */
	struct AWeapTekClaws_C_BPSpawnMeleeEffects_Params
	{
	public:
		struct FVector                                             Impact;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ShootDir;                                                // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekClaws.WeapTekClaws_C.ReceiveTick
	 */
	struct AWeapTekClaws_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekClaws.WeapTekClaws_C.BPAnimNotifyCustomEvent
	 */
	struct AWeapTekClaws_C_BPAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekClaws.WeapTekClaws_C.ShowBladeFX
	 */
	struct AWeapTekClaws_C_ShowBladeFX_Params
	{
	public:
		bool                                                       bNewVisibility;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T7LS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapTekClaws.WeapTekClaws_C.OnPrimalItemEquipped
	 */
	struct AWeapTekClaws_C_OnPrimalItemEquipped_Params
	{	};

	/**
	 * Function WeapTekClaws.WeapTekClaws_C.BPGetSelectedMeleeAttackAnim
	 */
	struct AWeapTekClaws_C_BPGetSelectedMeleeAttackAnim_Params
	{
	public:
		struct FWeaponAnim                                         ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekClaws.WeapTekClaws_C.BPWeaponDealDamage
	 */
	struct AWeapTekClaws_C_BPWeaponDealDamage_Params
	{
	public:
		struct FHitResult                                          Impact;                                                  // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
		struct FVector                                             ShootDir;                                                // 0x0088(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		int32_t                                                    DamageAmount;                                            // 0x0094(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              DamageType;                                              // 0x0098(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Impulse;                                                 // 0x00A0(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ReturnValue;                                             // 0x00A4(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekClaws.WeapTekClaws_C.StartUnequipEvent
	 */
	struct AWeapTekClaws_C_StartUnequipEvent_Params
	{	};

	/**
	 * Function WeapTekClaws.WeapTekClaws_C.BPStartEquippedNotify
	 */
	struct AWeapTekClaws_C_BPStartEquippedNotify_Params
	{	};

	/**
	 * Function WeapTekClaws.WeapTekClaws_C.BPShouldDealDamage
	 */
	struct AWeapTekClaws_C_BPShouldDealDamage_Params
	{
	public:
		class AActor*                                              TestActor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekClaws.WeapTekClaws_C.UserConstructionScript
	 */
	struct AWeapTekClaws_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WeapTekClaws.WeapTekClaws_C.ServerSetBlocking
	 */
	struct AWeapTekClaws_C_ServerSetBlocking_Params
	{
	public:
		bool                                                       StartBlocking;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekClaws.WeapTekClaws_C.ExecuteUbergraph_WeapTekClaws
	 */
	struct AWeapTekClaws_C_ExecuteUbergraph_WeapTekClaws_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
