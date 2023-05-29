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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass WeapAdminBlinkRifle.WeapAdminBlinkRifle_C
	 * Size -> 0x0230 (FullSize[0x0FF0] - InheritedSize[0x0DC0])
	 */
	class AWeapAdminBlinkRifle_C : public AWeapGun_C
	{
	public:
		class UParticleSystemComponent*                            TargetIndicator;                                         // 0x0DC0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UClass*                                              CreativeModeBuffClass;                                   // 0x0DC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<class FString>                                      ModeMap_Names;                                           // 0x0DD0(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FLinearColor>                                ModeMap_Colors;                                          // 0x0DE0(0x0010) Edit, BlueprintVisible, ZeroConstructor
		int32_t                                                    CurrentMode;                                             // 0x0DF0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       BlinkTarget_HasValidLocation;                            // 0x0DF4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       BlinkTarget_IsAirLocation;                               // 0x0DF5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UB31[0x2];                                   // 0x0DF6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             BlinkTarget_Location;                                    // 0x0DF8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AJ32[0x4];                                   // 0x0E04(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            WeaponDynamicMat;                                        // 0x0E08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastModeSwitchTime;                                      // 0x0E10(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastPermissionCheckTime;                                 // 0x0E18(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Client_CanCheat;                                         // 0x0E20(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5IVK[0x7];                                   // 0x0E21(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              CurrentInspectedActor;                                   // 0x0E28(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UObject*                                             CurrentInspectedComponent;                               // 0x0E30(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AActor*                                              CurrentDestroyTarget;                                    // 0x0E38(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastDestroyFoundValidTarget;                             // 0x0E40(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AActor*                                              ServerCurrentInspectActor;                               // 0x0E48(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class FString>                                      ServerCurrentInspectActorInfo;                           // 0x0E50(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FString>                                      ServerCurrentInspectActorBuffs;                          // 0x0E60(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		double                                                     Server_LastInspectRequest;                               // 0x0E70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     Client_LastInspectRequest;                               // 0x0E78(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CurrentInspectedActorIsLocked;                           // 0x0E80(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q2YC[0x7];                                   // 0x0E81(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AController*                                         CallFunc_GetController_ReturnValue;                      // 0x0E88(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    K2Node_CustomEvent_Mode2;                                // 0x0E90(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T787[0x4];                                   // 0x0E94(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APlayerController*                                   K2Node_DynamicCast_AsPlayerController;                   // 0x0E98(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x0EA0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XUIC[0x3];                                   // 0x0EA1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    K2Node_CustomEvent_Mode;                                 // 0x0EA4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    K2Node_CustomEvent_NewMode;                              // 0x0EA8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    K2Node_CustomEvent_OldMode;                              // 0x0EAC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NotEqual_IntInt_ReturnValue;                    // 0x0EB0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NotEqual_IntInt_ReturnValue2;                   // 0x0EB1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6YSA[0x2];                                   // 0x0EB2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        CallFunc_Array_Get_Item;                                 // 0x0EB4(0x0010) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_HasAdminPermission_IsAdmin;                     // 0x0EC4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue;                            // 0x0EC5(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3JTS[0x2];                                   // 0x0EC6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue;                // 0x0EC8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_CanOwnerCheat;                        // 0x0ED4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CP6Y[0x3];                                   // 0x0ED5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              K2Node_CustomEvent_InspectTarget;                        // 0x0ED8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UObject*                                             K2Node_CustomEvent_InspectComponent;                     // 0x0EE0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue2;                           // 0x0EE8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JLO4[0x7];                                   // 0x0EE9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              K2Node_CustomEvent_DestroyTarget;                        // 0x0EF0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_HasAdminPermission_IsAdmin2;                    // 0x0EF8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_KillTargetCharacterOrStructure_ReturnValue;     // 0x0EF9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_HasAdminPermission_IsAdmin3;                    // 0x0EFA(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_E367[0x1];                                   // 0x0EFB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             K2Node_CustomEvent_Location;                             // 0x0EFC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_IsAirTarget;                          // 0x0F08(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J5E8[0x3];                                   // 0x0F09(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_Subtract_VectorVector_ReturnValue;              // 0x0F0C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Multiply_VectorVector_ReturnValue;              // 0x0F18(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RM24[0x4];                                   // 0x0F24(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              K2Node_CustomEvent_Actor2;                               // 0x0F28(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UObject*                                             K2Node_CustomEvent_Component;                            // 0x0F30(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Normal_ReturnValue;                             // 0x0F38(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T58V[0x4];                                   // 0x0F44(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      CallFunc_GetInspectText_Desc;                            // 0x0F48(0x0010) ZeroConstructor, Transient, DuplicateTransient
		struct FRotator                                            CallFunc_MakeRotFromX_ReturnValue;                       // 0x0F58(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_W9SI[0x4];                                   // 0x0F64(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalCharacter*                                    K2Node_DynamicCast_AsPrimalCharacter;                    // 0x0F68(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast2_CastSuccess;                         // 0x0F70(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_K2_TeleportTo_ReturnValue;                      // 0x0F71(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1SQG[0x6];                                   // 0x0F72(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      CallFunc_GetBuffDetails_BuffInfo;                        // 0x0F78(0x0010) ZeroConstructor, Transient, DuplicateTransient
		TArray<class FString>                                      CallFunc_GetDetailedDescription_ReturnValue;             // 0x0F88(0x0010) ZeroConstructor, Transient, DuplicateTransient
		class AActor*                                              K2Node_CustomEvent_Actor;                                // 0x0F98(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		TArray<class FString>                                      K2Node_CustomEvent_Desc;                                 // 0x0FA0(0x0010) ZeroConstructor, Transient, DuplicateTransient
		TArray<class FString>                                      K2Node_CustomEvent_Buffs;                                // 0x0FB0(0x0010) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       CallFunc_HasAdminPermission_IsAdmin4;                    // 0x0FC0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsCooldownComplete_ReturnValue;                 // 0x0FC1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IV67[0x6];                                   // 0x0FC2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      K2Node_MakeArray_Array;                                  // 0x0FC8(0x0010) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       CallFunc_EqualEqual_ByteByte_ReturnValue;                // 0x0FD8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x0FD9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue;                         // 0x0FDA(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Y592[0x5];                                   // 0x0FDB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      CallFunc_TraceProjectileArc_ActorsToIgnore_RefProperty;  // 0x0FE0(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm

	public:
		void GetBuffDetails(class APrimalCharacter* Character, TArray<class FString>* BuffInfo);
		void GetInspectText(class AActor* Actor, class UObject* Component, TArray<class FString>* Desc);
		void GetActorDescriptiveName(class AActor* Actor, class FString* Desc);
		void GetActorScreenLocation(class AActor* TargetActor, struct FVector2D* ScreenLoc);
		bool InspectTrace(const struct FVector2D& Start, float End, struct FHitResult* OutHit);
		void HasAdminPermission(bool* IsAdmin);
		void Tick_Destroy(float DeltaTime);
		void Tick_Inspect(float DeltaTime);
		void Tick_Blink(float DeltaTime);
		void ReceiveBeginPlay();
		void BPOnStartTargeting(bool bFromGamepadLeft);
		void ReceiveTick(float DeltaSeconds);
		void BPFiredWeapon();
		bool BPAllowNativeFireWeapon();
		void BPDrawHud(class AShooterHUD* HUD);
		void UserConstructionScript();
		void ServerRequestBlinkToTarget(const struct FVector& Location, bool IsAirTarget);
		void ServerRequestSetMode(int32_t Mode);
		void MultiUpdateCurrentMode(int32_t Mode);
		void OnModeEntered(int32_t NewMode);
		void OnModeExited(int32_t OldMode);
		void ClientUpdatePermissionCheck(bool CanOwnerCheat);
		void ServerRequestSetInspectTarget(class AActor* InspectTarget, class UObject* InspectComponent);
		void ServerRequestDestroyTarget(class AActor* DestroyTarget);
		void ServerRequestActorDescription(class AActor* Actor, class UObject* Component);
		void ClientReceiveActorDescription(class AActor* Actor, TArray<class FString>* Desc, TArray<class FString>* Buffs);
		void ExecuteUbergraph_WeapAdminBlinkRifle(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
