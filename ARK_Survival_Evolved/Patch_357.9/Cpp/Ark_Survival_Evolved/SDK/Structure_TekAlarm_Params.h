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
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.InitSavedTribeLoggingSettings
	 */
	struct AStructure_TekAlarm_C_InitSavedTribeLoggingSettings_Params
	{	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.GetNextRotation
	 */
	struct AStructure_TekAlarm_C_GetNextRotation_Params
	{
	public:
		struct FRotator                                            currentRotation;                                         // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bDecrease;                                               // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Roll;                                                    // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Pitch;                                                   // 0x000E(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Yaw;                                                     // 0x000F(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            NextRotation;                                            // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.OnRep_CurrentStructureDetectBoxRotation
	 */
	struct AStructure_TekAlarm_C_OnRep_CurrentStructureDetectBoxRotation_Params
	{	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.OnRep_CurrentTargetDetectBoxRotation
	 */
	struct AStructure_TekAlarm_C_OnRep_CurrentTargetDetectBoxRotation_Params
	{	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.UpdateAutoDeactivation
	 */
	struct AStructure_TekAlarm_C_UpdateAutoDeactivation_Params
	{	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.GetTargetTypesToChange
	 */
	struct AStructure_TekAlarm_C_GetTargetTypesToChange_Params
	{
	public:
		TArray<ETekAlarmTargetTypes>                               ActiveTypes;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
		TArray<bool>                                               ShouldActivate;                                          // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.ToggleKeypadLink
	 */
	struct AStructure_TekAlarm_C_ToggleKeypadLink_Params
	{
	public:
		class AShooterPlayerController*                            OptionalShooterPC;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.AlignBoxedToWorldUp
	 */
	struct AStructure_TekAlarm_C_AlignBoxedToWorldUp_Params
	{	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.OnRep_CurrentStructureDetectBoxExtent
	 */
	struct AStructure_TekAlarm_C_OnRep_CurrentStructureDetectBoxExtent_Params
	{	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.OnRep_CurrentTargetDetectBoxExtent
	 */
	struct AStructure_TekAlarm_C_OnRep_CurrentTargetDetectBoxExtent_Params
	{	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.Is Target Detect Box
	 */
	struct AStructure_TekAlarm_C_IsTargetDetectBox_Params
	{
	public:
		bool                                                       bIsBox;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W5CH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.IsStructureDetectBox
	 */
	struct AStructure_TekAlarm_C_IsStructureDetectBox_Params
	{
	public:
		bool                                                       bIsBox;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YL7S[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.SetTargetDetectBoxExtent
	 */
	struct AStructure_TekAlarm_C_SetTargetDetectBoxExtent_Params
	{
	public:
		struct FVector                                             Extent;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.Set Target Detect Sphere Radius
	 */
	struct AStructure_TekAlarm_C_SetTargetDetectSphereRadius_Params
	{
	public:
		float                                                      Radius;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.SetStructureDetectBoxExtent
	 */
	struct AStructure_TekAlarm_C_SetStructureDetectBoxExtent_Params
	{
	public:
		struct FVector                                             Extent;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.SetStructureDetectSphereRadius
	 */
	struct AStructure_TekAlarm_C_SetStructureDetectSphereRadius_Params
	{
	public:
		float                                                      Radius;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.GetTribeLoggingSetting
	 */
	struct AStructure_TekAlarm_C_GetTribeLoggingSetting_Params
	{
	public:
		ETekAlarmTargetTypes                                       Type;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_77AQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Integer;                                                 // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.MakeReplicatedTribeLoggingSettings
	 */
	struct AStructure_TekAlarm_C_MakeReplicatedTribeLoggingSettings_Params
	{
	public:
		int32_t                                                    TribeLoggingSettings;                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FR0J[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.GetMappedTribeLoggingInteger
	 */
	struct AStructure_TekAlarm_C_GetMappedTribeLoggingInteger_Params
	{
	public:
		int32_t                                                    TribeLoggingState;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    TribeLoggingInteger;                                     // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.BPChangedActorTeam
	 */
	struct AStructure_TekAlarm_C_BPChangedActorTeam_Params
	{	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.ReceiveDestroyed
	 */
	struct AStructure_TekAlarm_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.Has Any PINsSet
	 */
	struct AStructure_TekAlarm_C_HasAnyPINsSet_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.OnRep_ShowAreaVisuals
	 */
	struct AStructure_TekAlarm_C_OnRep_ShowAreaVisuals_Params
	{	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.UpdateAreaVisualsVisibility
	 */
	struct AStructure_TekAlarm_C_UpdateAreaVisualsVisibility_Params
	{	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.BPContainerDeactivated
	 */
	struct AStructure_TekAlarm_C_BPContainerDeactivated_Params
	{	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.GetTribeLoggingSettingForTargetType
	 */
	struct AStructure_TekAlarm_C_GetTribeLoggingSettingForTargetType_Params
	{
	public:
		ETekAlarmTargetTypes                                       Type;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UVL6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Result;                                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.GetTribeLogNameForType
	 */
	struct AStructure_TekAlarm_C_GetTribeLogNameForType_Params
	{
	public:
		ETekAlarmTargetTypes                                       Type;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JSSV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Name;                                                    // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.TryTribeLogging
	 */
	struct AStructure_TekAlarm_C_TryTribeLogging_Params
	{
	public:
		ETekAlarmTargetTypes                                       Type;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8L4Q[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.GetNextTribeLoggingSetting
	 */
	struct AStructure_TekAlarm_C_GetNextTribeLoggingSetting_Params
	{
	public:
		int32_t                                                    CurrentSetting;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    NewSetting;                                              // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.GetTribe Logging String
	 */
	struct AStructure_TekAlarm_C_GetTribeLoggingString_Params
	{
	public:
		class FString                                              TypeName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor)
		int32_t                                                    CooldownInSeconds;                                       // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4HPF[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Output;                                                  // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.HasPendingPINActivation
	 */
	struct AStructure_TekAlarm_C_HasPendingPINActivation_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.GetPINDataByType
	 */
	struct AStructure_TekAlarm_C_GetPINDataByType_Params
	{
	public:
		ETekAlarmTargetTypes                                       Type;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7AFP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTekAlarmPINData                                    Ret;                                                     // 0x0008(0x0020)  (Parm, OutParm)
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.SetPINCodeInPINData
	 */
	struct AStructure_TekAlarm_C_SetPINCodeInPINData_Params
	{
	public:
		int32_t                                                    pinCode;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ETekAlarmTargetTypes                                       Type;                                                    // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1CYJ[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.GetMultiUseTitleWithDelay
	 */
	struct AStructure_TekAlarm_C_GetMultiUseTitleWithDelay_Params
	{
	public:
		float                                                      DelaySeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_55C8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Title;                                                   // 0x0008(0x0018)  (Parm)
		class FString                                              Output;                                                  // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.GetPINDataByPIN
	 */
	struct AStructure_TekAlarm_C_GetPINDataByPIN_Params
	{
	public:
		int32_t                                                    PIN;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UFF5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTekAlarmPINData                                    res;                                                     // 0x0008(0x0020)  (Parm, OutParm)
		int32_t                                                    RetIndex;                                                // 0x0028(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.CalcuateDelay
	 */
	struct AStructure_TekAlarm_C_CalcuateDelay_Params
	{
	public:
		float                                                      CurrentDelay;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      NewDelay;                                                // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.PinCodeFlagsToString
	 */
	struct AStructure_TekAlarm_C_PinCodeFlagsToString_Params
	{
	public:
		int32_t                                                    PinCodesFlag;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E0NF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Output;                                                  // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.Was Pin Code Bit Triggered
	 */
	struct AStructure_TekAlarm_C_WasPinCodeBitTriggered_Params
	{
	public:
		int32_t                                                    Bit;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Ret;                                                     // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Activated;                                               // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Deactivated;                                             // 0x0006(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2HMN[0x1];                                   // 0x0007(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.IsRelevantPinCode
	 */
	struct AStructure_TekAlarm_C_IsRelevantPinCode_Params
	{
	public:
		int32_t                                                    pinCode;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Ret;                                                     // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsDeactivation;                                          // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_83F0[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.IsAreaVisualsLocallyVisible
	 */
	struct AStructure_TekAlarm_C_IsAreaVisualsLocallyVisible_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.CalcuateMeshAlpha Fn
	 */
	struct AStructure_TekAlarm_C_CalcuateMeshAlphaFn_Params
	{
	public:
		class UStaticMeshComponent*                                Mesh1;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UStaticMeshComponent*                                Mesh2;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		double                                                     TimeSince;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Alpha;                                                   // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HALC[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.BPContainerActivated
	 */
	struct AStructure_TekAlarm_C_BPContainerActivated_Params
	{	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.SetActivateStateToStructure
	 */
	struct AStructure_TekAlarm_C_SetActivateStateToStructure_Params
	{
	public:
		class APrimalStructure*                                    PrimalStructure;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       toggle;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       NewActivateState;                                        // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Force;                                                   // 0x000A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.Get Octree Data For Structure Detect Area
	 */
	struct AStructure_TekAlarm_C_GetOctreeDataForStructureDetectArea_Params
	{
	public:
		float                                                      Radius;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Location;                                                // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.Update Structures in Area to Goal State
	 */
	struct AStructure_TekAlarm_C_UpdateStructuresinAreatoGoalState_Params
	{	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.Update Structure Detect Sphere
	 */
	struct AStructure_TekAlarm_C_UpdateStructureDetectSphere_Params
	{	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.UpdateStructureDetectBox
	 */
	struct AStructure_TekAlarm_C_UpdateStructureDetectBox_Params
	{	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.SwitchStructureDetectStyle
	 */
	struct AStructure_TekAlarm_C_SwitchStructureDetectStyle_Params
	{	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.IsActorInBoxArea
	 */
	struct AStructure_TekAlarm_C_IsActorInBoxArea_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UBoxComponent*                                       BoxComponent;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Value;                                                   // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.GetOctreeCheckType
	 */
	struct AStructure_TekAlarm_C_GetOctreeCheckType_Params
	{
	public:
		EServerOctreeGroup                                         Value;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.Get Octree Data ForTarget Detect Area
	 */
	struct AStructure_TekAlarm_C_GetOctreeDataForTargetDetectArea_Params
	{
	public:
		float                                                      Radius;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Location;                                                // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.HasFiltered Target in the Area
	 */
	struct AStructure_TekAlarm_C_HasFilteredTargetintheArea_Params
	{
	public:
		bool                                                       TargetLost;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S013[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.BPClientHandleNetExecCommand
	 */
	struct AStructure_TekAlarm_C_BPClientHandleNetExecCommand_Params
	{
	public:
		class FName                                                CommandName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0008(0x0040)  (Parm, OutParm, ReferenceParm)
		class APlayerController*                                   ForPC;                                                   // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UMKC[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.BPApplyPinCode
	 */
	struct AStructure_TekAlarm_C_BPApplyPinCode_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    appledPinCode;                                           // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsSetting;                                              // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8M0U[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    TheCustomIndex;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.Get Detect Area Adjust Speed
	 */
	struct AStructure_TekAlarm_C_GetDetectAreaAdjustSpeed_Params
	{
	public:
		float                                                      AdjustSpeed;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.ReceiveBeginPlay
	 */
	struct AStructure_TekAlarm_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.BPClientDoMultiUse
	 */
	struct AStructure_TekAlarm_C_BPClientDoMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ClientUseIndex;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.UpdateTargetDetectSphere
	 */
	struct AStructure_TekAlarm_C_UpdateTargetDetectSphere_Params
	{	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.UpdateTargetDetectBox
	 */
	struct AStructure_TekAlarm_C_UpdateTargetDetectBox_Params
	{	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.BPPlacedStructure
	 */
	struct AStructure_TekAlarm_C_BPPlacedStructure_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.Switch Target Detect Style
	 */
	struct AStructure_TekAlarm_C_SwitchTargetDetectStyle_Params
	{	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.BPTryMultiUse
	 */
	struct AStructure_TekAlarm_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4F7Z[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.BPGetMultiUseEntries
	 */
	struct AStructure_TekAlarm_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.UserConstructionScript
	 */
	struct AStructure_TekAlarm_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.MulticastTargetDetectStyleChange
	 */
	struct AStructure_TekAlarm_C_MulticastTargetDetectStyleChange_Params
	{	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.AdjustTargetDetectBoxDepthX
	 */
	struct AStructure_TekAlarm_C_AdjustTargetDetectBoxDepthX_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.AdjustTargetDetectBoxWidthY
	 */
	struct AStructure_TekAlarm_C_AdjustTargetDetectBoxWidthY_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.MulticastTargetDetectBoxExtent
	 */
	struct AStructure_TekAlarm_C_MulticastTargetDetectBoxExtent_Params
	{
	public:
		struct FVector                                             Extent;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.AdjustTargetDetectBoxHeightZ
	 */
	struct AStructure_TekAlarm_C_AdjustTargetDetectBoxHeightZ_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.SignalServerToggleActivateState
	 */
	struct AStructure_TekAlarm_C_SignalServerToggleActivateState_Params
	{	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.AdjustTargetDetectSphereRadius
	 */
	struct AStructure_TekAlarm_C_AdjustTargetDetectSphereRadius_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.MulticastTargetDetectSphereRadius
	 */
	struct AStructure_TekAlarm_C_MulticastTargetDetectSphereRadius_Params
	{
	public:
		float                                                      Radius;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.ScanTargetDetectArea
	 */
	struct AStructure_TekAlarm_C_ScanTargetDetectArea_Params
	{	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.DrawDebugSphere
	 */
	struct AStructure_TekAlarm_C_DrawDebugSphere_Params
	{
	public:
		struct FVector                                             NewParam;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      NewParam1;                                               // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.MulticastStructureDetectStyleChange
	 */
	struct AStructure_TekAlarm_C_MulticastStructureDetectStyleChange_Params
	{	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.MulticastStructureDetectBoxExtent
	 */
	struct AStructure_TekAlarm_C_MulticastStructureDetectBoxExtent_Params
	{
	public:
		struct FVector                                             Extent;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.MulticastStructureDetectSphereRadius
	 */
	struct AStructure_TekAlarm_C_MulticastStructureDetectSphereRadius_Params
	{
	public:
		float                                                      Radius;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.AdjustStructureDetectBoxDepthX
	 */
	struct AStructure_TekAlarm_C_AdjustStructureDetectBoxDepthX_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.AdjustStructureDetectBoxWidthY
	 */
	struct AStructure_TekAlarm_C_AdjustStructureDetectBoxWidthY_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.AdjustStructureDetectBoxHeightZ
	 */
	struct AStructure_TekAlarm_C_AdjustStructureDetectBoxHeightZ_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.AdjustStructureDetectSphereRadius
	 */
	struct AStructure_TekAlarm_C_AdjustStructureDetectSphereRadius_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.CalcuateTargetDetectAlpha
	 */
	struct AStructure_TekAlarm_C_CalcuateTargetDetectAlpha_Params
	{	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.CalcuateStructureDetectAlpha
	 */
	struct AStructure_TekAlarm_C_CalcuateStructureDetectAlpha_Params
	{	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.UpdateAreaVisualsVisibilityEvent
	 */
	struct AStructure_TekAlarm_C_UpdateAreaVisualsVisibilityEvent_Params
	{	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.MulticastShowPreview
	 */
	struct AStructure_TekAlarm_C_MulticastShowPreview_Params
	{	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.MulticastPlayActivationSound
	 */
	struct AStructure_TekAlarm_C_MulticastPlayActivationSound_Params
	{	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.MulticastPlayDeactivationSound
	 */
	struct AStructure_TekAlarm_C_MulticastPlayDeactivationSound_Params
	{	};

	/**
	 * Function Structure_TekAlarm.Structure_TekAlarm_C.ExecuteUbergraph_Structure_TekAlarm
	 */
	struct AStructure_TekAlarm_C_ExecuteUbergraph_Structure_TekAlarm_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
