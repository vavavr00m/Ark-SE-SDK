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
	 * Function WeapFishingNet.WeapFishingNet_C.destroy net item
	 */
	struct AWeapFishingNet_C_destroynetitem_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.BPServerHandleNetExecCommand
	 */
	struct AWeapFishingNet_C_BPServerHandleNetExecCommand_Params
	{
	public:
		class APlayerController*                                   FromPC;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                CommandName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0010(0x0040)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.Show Or Hide Net
	 */
	struct AWeapFishingNet_C_ShowOrHideNet_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       PostCatchCheck;                                          // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.Set All Components Render Custom Depth
	 */
	struct AWeapFishingNet_C_SetAllComponentsRenderCustomDepth_Params
	{
	public:
		class AActor*                                              actortoset;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bValue;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B8J7[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.Set All Components Custom Depth Stencil Value
	 */
	struct AWeapFishingNet_C_SetAllComponentsCustomDepthStencilValue_Params
	{
	public:
		class AActor*                                              actortoset;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    Value;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O1QV[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.Restrict Auto Reel
	 */
	struct AWeapFishingNet_C_RestrictAutoReel_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.Restrict Reel Anim And Sound
	 */
	struct AWeapFishingNet_C_RestrictReelAnimAndSound_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.Generate Fish Meat En Masse
	 */
	struct AWeapFishingNet_C_GenerateFishMeatEnMasse_Params
	{
	public:
		float                                                      totalwildscale;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_85X5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalDinoCharacter*                                usedfishforinventory;                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.Restrict Reel Server
	 */
	struct AWeapFishingNet_C_RestrictReelServer_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.Restrict Reel Client
	 */
	struct AWeapFishingNet_C_RestrictReelClient_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.Server Occasional Timer Events
	 */
	struct AWeapFishingNet_C_ServerOccasionalTimerEvents_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.set net rotation to face player
	 */
	struct AWeapFishingNet_C_setnetrotationtofaceplayer_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.FishStruggle
	 */
	struct AWeapFishingNet_C_FishStruggle_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.spawn vfx at location where cable intersects with water
	 */
	struct AWeapFishingNet_C_spawnvfxatlocationwherecableintersectswithwater_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.BPStartEquippedNotify
	 */
	struct AWeapFishingNet_C_BPStartEquippedNotify_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.Cancel Cast Hide Cable Components
	 */
	struct AWeapFishingNet_C_CancelCastHideCableComponents_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.play hooked fish HLNA reaction
	 */
	struct AWeapFishingNet_C_playhookedfishHLNAreaction_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.delay showing fpv mesh a bit longer
	 */
	struct AWeapFishingNet_C_delayshowingfpvmeshabitlonger_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.backup cancel timer
	 */
	struct AWeapFishingNet_C_backupcanceltimer_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.cancelling cast during reel casting or casted
	 */
	struct AWeapFishingNet_C_cancellingcastduringreelcastingorcasted_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.set enable throw anim when not jumping and has buff
	 */
	struct AWeapFishingNet_C_setenablethrowanimwhennotjumpingandhasbuff_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.restrict movement while cooking
	 */
	struct AWeapFishingNet_C_restrictmovementwhilecooking_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.force idle anim while moving
	 */
	struct AWeapFishingNet_C_forceidleanimwhilemoving_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.set state to casting if net exists during idle
	 */
	struct AWeapFishingNet_C_setstatetocastingifnetexistsduringidle_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.hide 1p mesh when appropriate
	 */
	struct AWeapFishingNet_C_hide1pmeshwhenappropriate_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.cancel cast if player is in water
	 */
	struct AWeapFishingNet_C_cancelcastifplayerisinwater_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.set fish location with net
	 */
	struct AWeapFishingNet_C_setfishlocationwithnet_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.finish reel if net is close enough to player
	 */
	struct AWeapFishingNet_C_finishreelifnetiscloseenoughtoplayer_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.set start position of fishing cable
	 */
	struct AWeapFishingNet_C_setstartpositionoffishingcable_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.update net location
	 */
	struct AWeapFishingNet_C_updatenetlocation_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.break if net is invalid during casted state
	 */
	struct AWeapFishingNet_C_breakifnetisinvalidduringcastedstate_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.break if net is too far
	 */
	struct AWeapFishingNet_C_breakifnetistoofar_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.Kill all fish in net
	 */
	struct AWeapFishingNet_C_Killallfishinnet_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.Send Caught Fish Message to Player
	 */
	struct AWeapFishingNet_C_SendCaughtFishMessagetoPlayer_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.Fully Catch Fish In Net
	 */
	struct AWeapFishingNet_C_FullyCatchFishInNet_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.Cancel Cast Remove Buff And Reset Anim
	 */
	struct AWeapFishingNet_C_CancelCastRemoveBuffAndResetAnim_Params
	{
	public:
		bool                                                       CaughtSuccess;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SNKM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.Cancel Cast Destroy Cable Components
	 */
	struct AWeapFishingNet_C_CancelCastDestroyCableComponents_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.cancel cast destroy net projectile
	 */
	struct AWeapFishingNet_C_cancelcastdestroynetprojectile_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.cancel cast release fish
	 */
	struct AWeapFishingNet_C_cancelcastreleasefish_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.reset variables on cancel reel
	 */
	struct AWeapFishingNet_C_resetvariablesoncancelreel_Params
	{
	public:
		bool                                                       successfulcatch;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.update cable component location
	 */
	struct AWeapFishingNet_C_updatecablecomponentlocation_Params
	{
	public:
		class UPrimalCableComponent*                               Cable;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USceneComponent*                                     _1PAttachSocketStart;                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USceneComponent*                                     _1PAttachSocketEnd;                                      // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USceneComponent*                                     _3PAttachSocketEnd;                                      // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       newcablecomponent;                                       // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LVOA[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             _1PEndpointOverride;                                     // 0x0024(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             _3PEndpointOverride;                                     // 0x0030(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LG5V[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USceneComponent*                                     SwappedHandComponent1P;                                  // 0x0040(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                _3PAttachSocketStartName;                                // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.Get Cable Attach Info
	 */
	struct AWeapFishingNet_C_GetCableAttachInfo_Params
	{
	public:
		bool                                                       isfirstperson;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_42JH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USceneComponent*                                     CableComp;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USceneComponent*                                     MeshComp;                                                // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.Attach Cable To Hand
	 */
	struct AWeapFishingNet_C_AttachCableToHand_Params
	{
	public:
		bool                                                       Left;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InterpCable;                                             // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QVGZ[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.CreateCable
	 */
	struct AWeapFishingNet_C_CreateCable_Params
	{
	public:
		class UPrimalCableComponent*                               ExistingCableComponentToCheck;                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                Name;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CableLength;                                             // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    CableSegments;                                           // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AdaptiveSegments;                                        // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OK8Q[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USceneComponent*                                     AttachedComponent1P;                                     // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                AttachSocketName1P;                                      // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                AttachSocketName3P;                                      // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimalCableComponent*                               cablecomponent;                                          // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       NewlyCreated;                                            // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.Give Fish Rewards
	 */
	struct AWeapFishingNet_C_GiveFishRewards_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.Set Fish Position To Normal Offset
	 */
	struct AWeapFishingNet_C_SetFishPositionToNormalOffset_Params
	{
	public:
		bool                                                       CaughtSuccess;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DUVG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.Get Initial Fish Location Offset
	 */
	struct AWeapFishingNet_C_GetInitialFishLocationOffset_Params
	{
	public:
		class AActor*                                              fish;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Offset;                                                  // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.BPRemainEquipped
	 */
	struct AWeapFishingNet_C_BPRemainEquipped_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J39W[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.BPCanEquip
	 */
	struct AWeapFishingNet_C_BPCanEquip_Params
	{
	public:
		class AShooterCharacter*                                   ByCharacter;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.Reel Velocity
	 */
	struct AWeapFishingNet_C_ReelVelocity_Params
	{
	public:
		struct FVector                                             WeaponLocation;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SIY1[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AProjFishingNet_C*                                   netprojectile;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P1L6[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.BPAnimNotifyCustomEvent
	 */
	struct AWeapFishingNet_C_BPAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.Give Fish Loot
	 */
	struct AWeapFishingNet_C_GiveFishLoot_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APrimalDinoCharacter*                                Outer;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      AmountMultiplier;                                        // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2PIJ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.Generate Fish Meat
	 */
	struct AWeapFishingNet_C_GenerateFishMeat_Params
	{
	public:
		class APrimalDinoCharacter*                                fish;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.Check For Fish Collision
	 */
	struct AWeapFishingNet_C_CheckForFishCollision_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.On Fish Released
	 */
	struct AWeapFishingNet_C_OnFishReleased_Params
	{
	public:
		class APrimalDinoCharacter*                                fish;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.release fish
	 */
	struct AWeapFishingNet_C_releasefish_Params
	{
	public:
		class UObject*                                             fish;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       pulledcompletelyup;                                      // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OX1T[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.PlayFishAttackAnimation
	 */
	struct AWeapFishingNet_C_PlayFishAttackAnimation_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.On Fish Snared
	 */
	struct AWeapFishingNet_C_OnFishSnared_Params
	{
	public:
		class APrimalDinoCharacter*                                localSnaredFish;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.snare fish
	 */
	struct AWeapFishingNet_C_snarefish_Params
	{
	public:
		class APrimalDinoCharacter*                                snaredfish;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.StartUnequipEvent
	 */
	struct AWeapFishingNet_C_StartUnequipEvent_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.Update Rope Length
	 */
	struct AWeapFishingNet_C_UpdateRopeLength_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.StartSecondaryActionEvent
	 */
	struct AWeapFishingNet_C_StartSecondaryActionEvent_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.BPFiredWeapon
	 */
	struct AWeapFishingNet_C_BPFiredWeapon_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.ReceiveTick
	 */
	struct AWeapFishingNet_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.ReceiveBeginPlay
	 */
	struct AWeapFishingNet_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.BPWeaponCanFire
	 */
	struct AWeapFishingNet_C_BPWeaponCanFire_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YOBM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.Update Cable Component
	 */
	struct AWeapFishingNet_C_UpdateCableComponent_Params
	{
	public:
		struct FVector                                             EndCableLocation;                                        // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       hasbuff;                                                 // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MY09[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.Net Collided with Water
	 */
	struct AWeapFishingNet_C_NetCollidedwithWater_Params
	{
	public:
		struct FVector                                             WaterLocation;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            ProjectileRotation;                                      // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.BPGetProjectileSpeed
	 */
	struct AWeapFishingNet_C_BPGetProjectileSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.UserConstructionScript
	 */
	struct AWeapFishingNet_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.move net to player timeline__FinishedFunc
	 */
	struct AWeapFishingNet_C_movenettoplayertimeline__FinishedFunc_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.move net to player timeline__UpdateFunc
	 */
	struct AWeapFishingNet_C_movenettoplayertimeline__UpdateFunc_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.Timeline_0__FinishedFunc
	 */
	struct AWeapFishingNet_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.Timeline_0__UpdateFunc
	 */
	struct AWeapFishingNet_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.Cancel Cast
	 */
	struct AWeapFishingNet_C_CancelCast_Params
	{
	public:
		bool                                                       CaughtSuccess;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ForceResetHasCaughtAnyFish;                              // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.Reel Net In
	 */
	struct AWeapFishingNet_C_ReelNetIn_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.server reel
	 */
	struct AWeapFishingNet_C_serverreel_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.OnFishSnaredEvent
	 */
	struct AWeapFishingNet_C_OnFishSnaredEvent_Params
	{
	public:
		class APrimalDinoCharacter*                                fish;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.Projectile net collided with fish
	 */
	struct AWeapFishingNet_C_Projectilenetcollidedwithfish_Params
	{
	public:
		class APrimalDinoCharacter*                                fish;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.Cancel Cast Events
	 */
	struct AWeapFishingNet_C_CancelCastEvents_Params
	{
	public:
		bool                                                       CaughtSuccess;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.fully catch fish
	 */
	struct AWeapFishingNet_C_fullycatchfish_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.client do death harvesting
	 */
	struct AWeapFishingNet_C_clientdodeathharvesting_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.play reel anim
	 */
	struct AWeapFishingNet_C_playreelanim_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.cancel fire anim if there's fish in net
	 */
	struct AWeapFishingNet_C_cancelfireanimiftheresfishinnet_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.Set Reeling On Projectile
	 */
	struct AWeapFishingNet_C_SetReelingOnProjectile_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.play fire anim for TPV
	 */
	struct AWeapFishingNet_C_playfireanimforTPV_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.play fire anim for FPV
	 */
	struct AWeapFishingNet_C_playfireanimforFPV_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.play blended idle anim - cancel cast
	 */
	struct AWeapFishingNet_C_playblendedidleanimcancelcast_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.cancel fire anim
	 */
	struct AWeapFishingNet_C_cancelfireanim_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.Play Fish Caught Animation and remove item after
	 */
	struct AWeapFishingNet_C_PlayFishCaughtAnimationandremoveitemafter_Params
	{
	public:
		bool                                                       HasCaughtFish;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.move net towards player
	 */
	struct AWeapFishingNet_C_movenettowardsplayer_Params
	{
	public:
		bool                                                       pullnetin;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.client fully catch fish
	 */
	struct AWeapFishingNet_C_clientfullycatchfish_Params
	{
	public:
		bool                                                       catchfishsuccess;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       pullnetin;                                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.delay and cancel cast
	 */
	struct AWeapFishingNet_C_delayandcancelcast_Params
	{
	public:
		bool                                                       successfullycaughtfish;                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.multicast collided with water
	 */
	struct AWeapFishingNet_C_multicastcollidedwithwater_Params
	{
	public:
		struct FVector                                             hitwaterlocation;                                        // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.multicast set variables on cast
	 */
	struct AWeapFishingNet_C_multicastsetvariablesoncast_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.multicast release fish
	 */
	struct AWeapFishingNet_C_multicastreleasefish_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.client request cancel cast
	 */
	struct AWeapFishingNet_C_clientrequestcancelcast_Params
	{
	public:
		bool                                                       CaughtSuccess;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ResetHasCaughtAnyFIsh;                                   // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.Rotate projectile away from player while reeling_Client
	 */
	struct AWeapFishingNet_C_Rotateprojectileawayfromplayerwhilereeling_Client_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.multicast fish struggle
	 */
	struct AWeapFishingNet_C_multicastfishstruggle_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.delay pass allowed fish classes to fish vision buff
	 */
	struct AWeapFishingNet_C_delaypassallowedfishclassestofishvisionbuff_Params
	{	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.ExecuteUbergraph_WeapFishingNet
	 */
	struct AWeapFishingNet_C_ExecuteUbergraph_WeapFishingNet_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.FishCaughtDispatcherSingle__DelegateSignature
	 */
	struct AWeapFishingNet_C_FishCaughtDispatcherSingle__DelegateSignature_Params
	{
	public:
		float                                                      caughtfishwildrandomscale;                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H1KQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              NetOwner;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              FishClass;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UObject*                                             fishref;                                                 // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFishingNet.WeapFishingNet_C.FishCaughtDispatcher__DelegateSignature
	 */
	struct AWeapFishingNet_C_FishCaughtDispatcher__DelegateSignature_Params
	{
	public:
		float                                                      caughtfishweight;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    caughtfishcount;                                         // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              NetOwner;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
