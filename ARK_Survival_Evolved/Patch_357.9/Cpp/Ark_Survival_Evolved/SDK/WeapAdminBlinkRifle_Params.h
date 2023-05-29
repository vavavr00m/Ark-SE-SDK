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
	 * Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.GetBuffDetails
	 */
	struct AWeapAdminBlinkRifle_C_GetBuffDetails_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<class FString>                                      BuffInfo;                                                // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.GetInspectText
	 */
	struct AWeapAdminBlinkRifle_C_GetInspectText_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UObject*                                             Component;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<class FString>                                      Desc;                                                    // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.GetActorDescriptiveName
	 */
	struct AWeapAdminBlinkRifle_C_GetActorDescriptiveName_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              Desc;                                                    // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.GetActorScreenLocation
	 */
	struct AWeapAdminBlinkRifle_C_GetActorScreenLocation_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector2D                                           ScreenLoc;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.InspectTrace
	 */
	struct AWeapAdminBlinkRifle_C_InspectTrace_Params
	{
	public:
		struct FVector2D                                           Start;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      End;                                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C1EG[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          OutHit;                                                  // 0x0010(0x0088)  (Parm, OutParm)
		bool                                                       ReturnValue;                                             // 0x0098(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XA9V[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.HasAdminPermission
	 */
	struct AWeapAdminBlinkRifle_C_HasAdminPermission_Params
	{
	public:
		bool                                                       IsAdmin;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.Tick_Destroy
	 */
	struct AWeapAdminBlinkRifle_C_Tick_Destroy_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.Tick_Inspect
	 */
	struct AWeapAdminBlinkRifle_C_Tick_Inspect_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.Tick_Blink
	 */
	struct AWeapAdminBlinkRifle_C_Tick_Blink_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ReceiveBeginPlay
	 */
	struct AWeapAdminBlinkRifle_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.BPOnStartTargeting
	 */
	struct AWeapAdminBlinkRifle_C_BPOnStartTargeting_Params
	{
	public:
		bool                                                       bFromGamepadLeft;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JVWF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ReceiveTick
	 */
	struct AWeapAdminBlinkRifle_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.BPFiredWeapon
	 */
	struct AWeapAdminBlinkRifle_C_BPFiredWeapon_Params
	{	};

	/**
	 * Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.BPAllowNativeFireWeapon
	 */
	struct AWeapAdminBlinkRifle_C_BPAllowNativeFireWeapon_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.BPDrawHud
	 */
	struct AWeapAdminBlinkRifle_C_BPDrawHud_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.UserConstructionScript
	 */
	struct AWeapAdminBlinkRifle_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ServerRequestBlinkToTarget
	 */
	struct AWeapAdminBlinkRifle_C_ServerRequestBlinkToTarget_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsAirTarget;                                             // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ServerRequestSetMode
	 */
	struct AWeapAdminBlinkRifle_C_ServerRequestSetMode_Params
	{
	public:
		int32_t                                                    Mode;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.MultiUpdateCurrentMode
	 */
	struct AWeapAdminBlinkRifle_C_MultiUpdateCurrentMode_Params
	{
	public:
		int32_t                                                    Mode;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.OnModeEntered
	 */
	struct AWeapAdminBlinkRifle_C_OnModeEntered_Params
	{
	public:
		int32_t                                                    NewMode;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.OnModeExited
	 */
	struct AWeapAdminBlinkRifle_C_OnModeExited_Params
	{
	public:
		int32_t                                                    OldMode;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ClientUpdatePermissionCheck
	 */
	struct AWeapAdminBlinkRifle_C_ClientUpdatePermissionCheck_Params
	{
	public:
		bool                                                       CanOwnerCheat;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ServerRequestSetInspectTarget
	 */
	struct AWeapAdminBlinkRifle_C_ServerRequestSetInspectTarget_Params
	{
	public:
		class AActor*                                              InspectTarget;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UObject*                                             InspectComponent;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ServerRequestDestroyTarget
	 */
	struct AWeapAdminBlinkRifle_C_ServerRequestDestroyTarget_Params
	{
	public:
		class AActor*                                              DestroyTarget;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ServerRequestActorDescription
	 */
	struct AWeapAdminBlinkRifle_C_ServerRequestActorDescription_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UObject*                                             Component;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ClientReceiveActorDescription
	 */
	struct AWeapAdminBlinkRifle_C_ClientReceiveActorDescription_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<class FString>                                      Desc;                                                    // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class FString>                                      Buffs;                                                   // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ExecuteUbergraph_WeapAdminBlinkRifle
	 */
	struct AWeapAdminBlinkRifle_C_ExecuteUbergraph_WeapAdminBlinkRifle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
