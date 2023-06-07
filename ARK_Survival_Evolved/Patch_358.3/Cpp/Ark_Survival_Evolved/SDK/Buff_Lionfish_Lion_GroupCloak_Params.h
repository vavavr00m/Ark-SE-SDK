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
	 * Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.BPSetupForInstigator
	 */
	struct ABuff_Lionfish_Lion_GroupCloak_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.Has passed default weapon check
	 */
	struct ABuff_Lionfish_Lion_GroupCloak_C_Haspasseddefaultweaponcheck_Params
	{
	public:
		class AShooterCharacter*                                   Passenger;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       passedcheck;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TDNY[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.Set Cloak Transition Value
	 */
	struct ABuff_Lionfish_Lion_GroupCloak_C_SetCloakTransitionValue_Params
	{
	public:
		float                                                      DissolveMesh;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CloakTransition;                                         // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ETimelineDirection                                         Direction;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       SkipLFLTransition;                                       // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.update mate boost on timer
	 */
	struct ABuff_Lionfish_Lion_GroupCloak_C_updatemateboostontimer_Params
	{	};

	/**
	 * Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.Reset Base Targeting Desirability
	 */
	struct ABuff_Lionfish_Lion_GroupCloak_C_ResetBaseTargetingDesirability_Params
	{	};

	/**
	 * Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.Is Near Boss
	 */
	struct ABuff_Lionfish_Lion_GroupCloak_C_IsNearBoss_Params
	{	};

	/**
	 * Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.Deactivate Cloak Mat On passengers
	 */
	struct ABuff_Lionfish_Lion_GroupCloak_C_DeactivateCloakMatOnpassengers_Params
	{	};

	/**
	 * Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.deactivate cloak mat on rider
	 */
	struct ABuff_Lionfish_Lion_GroupCloak_C_deactivatecloakmatonrider_Params
	{	};

	/**
	 * Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.set up attached cloak meshes
	 */
	struct ABuff_Lionfish_Lion_GroupCloak_C_setupattachedcloakmeshes_Params
	{
	public:
		class UObject*                                             parentdinomesh;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              currentcloakingmeshcomp;                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Success;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M7C5[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USkeletalMeshComponent*                              newmesh;                                                 // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.force remove disolve
	 */
	struct ABuff_Lionfish_Lion_GroupCloak_C_forceremovedisolve_Params
	{
	public:
		class USkeletalMeshComponent*                              InputPin;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.post uncloak
	 */
	struct ABuff_Lionfish_Lion_GroupCloak_C_postuncloak_Params
	{	};

	/**
	 * Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.show floating hud
	 */
	struct ABuff_Lionfish_Lion_GroupCloak_C_showfloatinghud_Params
	{	};

	/**
	 * Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.ReceiveEndPlay
	 */
	struct ABuff_Lionfish_Lion_GroupCloak_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.get saddle
	 */
	struct ABuff_Lionfish_Lion_GroupCloak_C_getsaddle_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              NewParam;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.set fade on components
	 */
	struct ABuff_Lionfish_Lion_GroupCloak_C_setfadeoncomponents_Params
	{
	public:
		class AActor*                                              Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ETimelineDirection                                         Direction;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_746B[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CloakTransition;                                         // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      dissolveamount;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_D1NJ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USkeletalMeshComponent*                              Component;                                               // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ismainmesh;                                              // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       SkipLFLTransition;                                       // 0x0021(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.set component hidden
	 */
	struct ABuff_Lionfish_Lion_GroupCloak_C_setcomponenthidden_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InputPin;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P499[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.manual print string
	 */
	struct ABuff_Lionfish_Lion_GroupCloak_C_manualprintstring_Params
	{
	public:
		class FString                                              InString;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.HideBuffFromHUD
	 */
	struct ABuff_Lionfish_Lion_GroupCloak_C_HideBuffFromHUD_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.Lfl Is Valid And Cloaked solo
	 */
	struct ABuff_Lionfish_Lion_GroupCloak_C_LflIsValidAndCloakedsolo_Params
	{
	public:
		class APrimalDinoCharacter*                                InputPin;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CILF[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.lfl is valid and cloaked
	 */
	struct ABuff_Lionfish_Lion_GroupCloak_C_lflisvalidandcloaked_Params
	{
	public:
		class APrimalDinoCharacter*                                InputPin;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		bool                                                       deactivatedfrommateboost;                                // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8AFC[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.add buff to character
	 */
	struct ABuff_Lionfish_Lion_GroupCloak_C_addbufftocharacter_Params
	{
	public:
		class APrimalCharacter*                                    NewParam;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.Remove Cloak Origin Dino
	 */
	struct ABuff_Lionfish_Lion_GroupCloak_C_RemoveCloakOriginDino_Params
	{
	public:
		class APrimalDinoCharacter*                                NewParam;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.PreventActorTargeting
	 */
	struct ABuff_Lionfish_Lion_GroupCloak_C_PreventActorTargeting_Params
	{
	public:
		class AActor*                                              ByActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G40F[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.deactivate cloak mat
	 */
	struct ABuff_Lionfish_Lion_GroupCloak_C_deactivatecloakmat_Params
	{	};

	/**
	 * Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.activate cloak mat
	 */
	struct ABuff_Lionfish_Lion_GroupCloak_C_activatecloakmat_Params
	{	};

	/**
	 * Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.BuffTickClient
	 */
	struct ABuff_Lionfish_Lion_GroupCloak_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NMR2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.OnRep_is camo active
	 */
	struct ABuff_Lionfish_Lion_GroupCloak_C_OnRep_iscamoactive_Params
	{	};

	/**
	 * Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.add cloak origin dino
	 */
	struct ABuff_Lionfish_Lion_GroupCloak_C_addcloakorigindino_Params
	{
	public:
		class APrimalDinoCharacter*                                NewParam;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.BuffTickServer
	 */
	struct ABuff_Lionfish_Lion_GroupCloak_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.BPPreventInstigatorAttack
	 */
	struct ABuff_Lionfish_Lion_GroupCloak_C_BPPreventInstigatorAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J2EZ[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.NotifyDamage
	 */
	struct ABuff_Lionfish_Lion_GroupCloak_C_NotifyDamage_Params
	{
	public:
		float                                                      DamageAmount;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RYYF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              DamageClass;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         EventInstigator;                                         // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              TheDamageCauser;                                         // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.BPDeactivated
	 */
	struct ABuff_Lionfish_Lion_GroupCloak_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.Set All Riders Hidden
	 */
	struct ABuff_Lionfish_Lion_GroupCloak_C_SetAllRidersHidden_Params
	{
	public:
		bool                                                       Hidden;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z1EO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.Activate Rider Camo Particles
	 */
	struct ABuff_Lionfish_Lion_GroupCloak_C_ActivateRiderCamoParticles_Params
	{
	public:
		bool                                                       entercamo;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_INCK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterCharacter*                                   specificRider;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.UserConstructionScript
	 */
	struct ABuff_Lionfish_Lion_GroupCloak_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.fade camo__FinishedFunc
	 */
	struct ABuff_Lionfish_Lion_GroupCloak_C_fadecamo__FinishedFunc_Params
	{	};

	/**
	 * Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.fade camo__UpdateFunc
	 */
	struct ABuff_Lionfish_Lion_GroupCloak_C_fadecamo__UpdateFunc_Params
	{	};

	/**
	 * Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.FadeToInvisible_Rider__FinishedFunc
	 */
	struct ABuff_Lionfish_Lion_GroupCloak_C_FadeToInvisible_Rider__FinishedFunc_Params
	{	};

	/**
	 * Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.FadeToInvisible_Rider__UpdateFunc
	 */
	struct ABuff_Lionfish_Lion_GroupCloak_C_FadeToInvisible_Rider__UpdateFunc_Params
	{	};

	/**
	 * Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.Timeline_0__FinishedFunc
	 */
	struct ABuff_Lionfish_Lion_GroupCloak_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.Timeline_0__UpdateFunc
	 */
	struct ABuff_Lionfish_Lion_GroupCloak_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.Play_FadeCamo_LFL
	 */
	struct ABuff_Lionfish_Lion_GroupCloak_C_Play_FadeCamo_LFL_Params
	{	};

	/**
	 * Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.Reverse_FadeCamo_LFL
	 */
	struct ABuff_Lionfish_Lion_GroupCloak_C_Reverse_FadeCamo_LFL_Params
	{	};

	/**
	 * Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.SetNewTime_FadeCamo_LFL
	 */
	struct ABuff_Lionfish_Lion_GroupCloak_C_SetNewTime_FadeCamo_LFL_Params
	{
	public:
		float                                                      NewTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.Multi_SetNewTime_FadeCamo_LFL
	 */
	struct ABuff_Lionfish_Lion_GroupCloak_C_Multi_SetNewTime_FadeCamo_LFL_Params
	{
	public:
		float                                                      NewTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.SetNewTime_FadeCamo_Rider
	 */
	struct ABuff_Lionfish_Lion_GroupCloak_C_SetNewTime_FadeCamo_Rider_Params
	{
	public:
		float                                                      NewTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.ReverseFromEnd_FadeCamo_Rider
	 */
	struct ABuff_Lionfish_Lion_GroupCloak_C_ReverseFromEnd_FadeCamo_Rider_Params
	{	};

	/**
	 * Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.PlayFromStart_FadeCamo_Rider
	 */
	struct ABuff_Lionfish_Lion_GroupCloak_C_PlayFromStart_FadeCamo_Rider_Params
	{	};

	/**
	 * Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.Multi_PlayFade
	 */
	struct ABuff_Lionfish_Lion_GroupCloak_C_Multi_PlayFade_Params
	{	};

	/**
	 * Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.Multi_PlayFade_reverse
	 */
	struct ABuff_Lionfish_Lion_GroupCloak_C_Multi_PlayFade_reverse_Params
	{	};

	/**
	 * Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.on weapon fire
	 */
	struct ABuff_Lionfish_Lion_GroupCloak_C_onweaponfire_Params
	{
	public:
		class AShooterWeapon*                                      weapon;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.bind fire
	 */
	struct ABuff_Lionfish_Lion_GroupCloak_C_bindfire_Params
	{	};

	/**
	 * Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.Footstep Shimmer
	 */
	struct ABuff_Lionfish_Lion_GroupCloak_C_FootstepShimmer_Params
	{	};

	/**
	 * Function Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C.ExecuteUbergraph_Buff_Lionfish_Lion_GroupCloak
	 */
	struct ABuff_Lionfish_Lion_GroupCloak_C_ExecuteUbergraph_Buff_Lionfish_Lion_GroupCloak_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
