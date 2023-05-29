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
	 * BlueprintGeneratedClass Buff_TekStrider_Radar.Buff_TekStrider_Radar_C
	 * Size -> 0x0CF9 (FullSize[0x16A8] - InheritedSize[0x09AF])
	 */
	class ABuff_TekStrider_Radar_C : public ABuff_TekStrider_Attachment_Base_C
	{
	public:
		unsigned char                                              UnknownData_3KEJ[0x1];                                   // 0x09AF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            coneparticleemitter;                                     // 0x09B0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USkeletalMeshComponent*                              SkeletalMesh1;                                           // 0x09B8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_0_NewTrack_0_72DD39264806088592FF3C88A1544262;  // 0x09C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         Timeline_0__Direction_72DD39264806088592FF3C88A1544262;  // 0x09C4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_P0SN[0x3];                                   // 0x09C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x09C8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bActivateOnEquip;                                        // 0x09D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsAttachmentActive;                                     // 0x09D1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HNW9[0x2];                                   // 0x09D2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ConeLength;                                              // 0x09D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ConeHalfAngle;                                           // 0x09D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bDebugCone;                                              // 0x09DC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0KYY[0x3];                                   // 0x09DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHUDElement                                         RadarHUDElemTemplate;                                    // 0x09E0(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class APrimalCharacter*>                            foundcharacters;                                         // 0x0B30(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		float                                                      AlertIntervalSeconds;                                    // 0x0B40(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ILZ6[0x4];                                   // 0x0B44(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AShooterCharacter*>                           NearbyPlayers;                                           // 0x0B48(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		double                                                     LastAlertPulseClientTime;                                // 0x0B58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              AlertPulseEmitterClass;                                  // 0x0B60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastAlertPulseServerTime;                                // 0x0B68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UPrimalCharacterStatusComponent*                     MyCharacterStatusComponent;                              // 0x0B70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        WarningTextColor;                                        // 0x0B78(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AlertPulseCooldownSeconds;                               // 0x0B88(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0UMA[0x4];                                   // 0x0B8C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class APrimalCharacter*>                            NearbyEnemies;                                           // 0x0B90(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		float                                                      EnemyScanRadius;                                         // 0x0BA0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RadiusMultiplierForPlayerAlerts;                         // 0x0BA4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FrightenMassThresholdHerbivore;                          // 0x0BA8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FrightenMassThresholdCarnivore;                          // 0x0BAC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UClass*>                                      FrightenExtraDinoTypes;                                  // 0x0BB0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		double                                                     LastWarningScanTickTime;                                 // 0x0BC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      WarningScanTickInterval;                                 // 0x0BC8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      WarningScanTickIntervalMin;                              // 0x0BCC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      WarningScanTickIntervalMax;                              // 0x0BD0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsInTurretMode;                                         // 0x0BD4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bHasRider;                                               // 0x0BD5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EPara_WarningMode                                          WarningMode;                                             // 0x0BD6(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsAlertActive;                                           // 0x0BD7(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		bool                                                       AutoFrightenInTurretMode;                                // 0x0BD8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       TurretModePaused;                                        // 0x0BD9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_35P8[0x6];                                   // 0x0BDA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHUDElement                                         DinoInfoHUDElementTemplate;                              // 0x0BE0(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      taminghudprogressbaroffset;                              // 0x0D30(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      hudalpha;                                                // 0x0D34(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      radarviewableduration;                                   // 0x0D38(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             savedconeforward;                                        // 0x0D3C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     lastfiretime;                                            // 0x0D48(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FireCooldown;                                            // 0x0D50(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_P6UW[0x4];                                   // 0x0D54(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHUDElement                                         FireCooldownHudElemTemplate;                             // 0x0D58(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       hasfoundcharacters;                                      // 0x0EA8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DYB5[0x7];                                   // 0x0EA9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<bool>                                               isonthesameteam;                                         // 0x0EB0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<bool>                                               isallied;                                                // 0x0EC0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<bool>                                               iswild;                                                  // 0x0ED0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FString>                                      dinonames;                                               // 0x0EE0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    currentlyhighlightedcharacterindex;                      // 0x0EF0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_K50F[0x4];                                   // 0x0EF4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FHUDElement>                                 savedradarhudelements;                                   // 0x0EF8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FVector>                                     currentsavedlocations;                                   // 0x0F08(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      RadarUpdateFrequency;                                    // 0x0F18(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_B2PD[0x4];                                   // 0x0F1C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FHUDElement>                                 HUDElementsToDisplay;                                    // 0x0F20(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FVector>                                     savedassociatedlocationsforradarhudelems;                // 0x0F30(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FVector2D>                                   convertedscreenspacelocs;                                // 0x0F40(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      updaterateofscreenspaceconversiononradarhudelems;        // 0x0F50(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PZAR[0x4];                                   // 0x0F54(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          FireCooldownHudTexture_Ready;                            // 0x0F58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UTexture2D*                                          FireCooldownHudTexture_Filling;                          // 0x0F60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<float>                                              HealthPercents;                                          // 0x0F68(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FVector2D                                           InitialProgressHUDLocation;                              // 0x0F78(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    MaxProgressBarsBeforeTruncating;                         // 0x0F80(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HFC4[0x4];                                   // 0x0F84(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterPlayerCameraManager*                         CameraManager;                                           // 0x0F88(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      HUDProgressBarListPadding;                               // 0x0F90(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_M1LY[0x4];                                   // 0x0F94(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHUDElement                                         ContainerHUDElementTemplate;                             // 0x0F98(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<EObjectTypeQuery>                                   XRayDetectObjectTypes;                                   // 0x10E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      XRayRange;                                               // 0x10F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RA12[0x4];                                   // 0x10FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      BoundsMultipliedCharacters;                              // 0x1100(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		float                                                      XRayBoundsMultiplier;                                    // 0x1110(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FFEM[0x4];                                   // 0x1114(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHUDElement                                         RadarCounterTextHUDElement;                              // 0x1118(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      HUDProgressBarContainerPadding;                          // 0x1268(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FDBH[0x4];                                   // 0x126C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHUDElement                                         RadarScanDurationHUDElement;                             // 0x1270(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      FoundCharacterHUDTextScaleMultiplier;                    // 0x13C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UseStencilOutlinePostProcess;                            // 0x13C4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UseFloatingHUDForScannedCharacters;                      // 0x13C5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OLSI[0x2];                                   // 0x13C6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    clientsidecurrentlyheldsharedtargetindex;                // 0x13C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      durationtokeepasharedtargetviewable;                     // 0x13CC(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class APrimalCharacter*                                    CurrentlySharedTarget;                                   // 0x13D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      radiusforallowedsharingradartargets;                     // 0x13D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      restrictedtimetoupdatenearbyteammates;                   // 0x13DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      intervaltoupdatesharedtarget;                            // 0x13E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0VDS[0x4];                                   // 0x13E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        RadarFiringAnim;                                         // 0x13E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      durationtohighlightsharedtarget;                         // 0x13F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        wilddinotextcolor;                                       // 0x13F4(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        allieddinotextcolor;                                     // 0x1404(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        enemydinotextcolor;                                      // 0x1414(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FlashTargetRate;                                         // 0x1424(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class APrimalCharacter*                                    PreviousSharedTarget;                                    // 0x1428(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    CurrentRadarFilter;                                      // 0x1430(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G171[0x4];                                   // 0x1434(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Filteralltext;                                           // 0x1438(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              filterhumanstext;                                        // 0x1448(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              filterdinostext;                                         // 0x1458(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              radarfiltermultiusetext;                                 // 0x1468(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       HasScannerListBeenSorted;                                // 0x1478(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       KeepScannerListOrderUpdatedByDistance;                   // 0x1479(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HGQO[0x6];                                   // 0x147A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      SortedFoundCharacters;                                   // 0x1480(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		struct FHUDElement                                         SharedTargetHUDElement;                                  // 0x1490(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		struct FVector2D                                           SharedTargetHUDElementLocationOffset;                    // 0x15E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      IntervalToKeepSharingTargetstorider;                     // 0x15E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CFHL[0x4];                                   // 0x15EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalCharacter*                                    NextSharedTarget;                                        // 0x15F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class APrimalCharacter*>                            LastValidListOfSharableTargets;                          // 0x15F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		class USoundCue*                                           activatesound;                                           // 0x1608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue;                            // 0x1610(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue;                  // 0x1611(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q6JT[0x2];                                   // 0x1612(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_Get_Cone_Forward_Forward;                       // 0x1614(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Get_Cone_Origin_ConeOrigin;                     // 0x1620(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ISBW[0x4];                                   // 0x162C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CallFunc_GetNetworkTimeInSeconds_ReturnValue;            // 0x1630(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Subtract_FloatFloat_ReturnValue;                // 0x1638(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue2;                 // 0x163C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UNRX[0x3];                                   // 0x163D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalCharacter*                                    K2Node_DynamicCast_AsPrimalCharacter;                    // 0x1640(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x1648(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KB98[0x3];                                   // 0x1649(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_PlayAnimEx_ReturnValue;                         // 0x164C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NotEqual_ObjectObject_ReturnValue;              // 0x1650(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OX79[0x7];                                   // 0x1651(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimInstance*                                       CallFunc_GetAnimInstance_ReturnValue;                    // 0x1658(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Montage_Play_ReturnValue;                       // 0x1660(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_NewValue;                             // 0x1664(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EPAH[0x3];                                   // 0x1665(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue;                // 0x1668(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_H18T[0x4];                                   // 0x1674(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      CallFunc_SortActorsByDistance_ReturnValue;               // 0x1678(0x0010) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       CallFunc_EqualEqual_BoolBool_ReturnValue;                // 0x1688(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue;                          // 0x1689(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AU0B[0x2];                                   // 0x168A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue2;               // 0x168C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		TArray<class AActor*>                                      CallFunc_SphereTraceMulti_NEW_ActorsToIgnore_RefProperty; // 0x1698(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm

	public:
		void ClearLocalSharedTarget();
		void addsharedtarget(class APrimalCharacter* NewTarget);
		void IntervalShareServerTargettoRider();
		void TriggerHeld();
		void TriggerReleased();
		void Quicktap();
		void RadarChangeFiltertoOnlyDinos();
		void RadarChangeFiltertoOnlyHumans();
		void RadarChangeFiltertoBothDinosAndHumans();
		void findtargets();
		void FlashTarget();
		bool BPClientHandleNetExecCommand(const class FName& CommandName, struct FBPNetExecParams* ExecParams, class APlayerController* ForPC);
		void clearrider(class AShooterCharacter* prevrider);
		void Highlightlatestsharedtarget();
		void setrider();
		void RestrictSharingTargetInfo();
		void UpdateSharedTargetLocation();
		void KeepSharedTargetVisible();
		void RestrictUpdatingNearbyTeammates();
		bool BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams);
		void GetDinoInfoHUDElementDesiredLocation(int32_t ListPositionIndex, struct FVector2D* Location);
		void SetContainerHUDElementSize(int32_t DinoInfoListItemQuantity);
		void SetActorStencilValue(class AActor* Actor, int32_t Value, bool Visible);
		void LoweredRateOfUpdatingScreenspaceLocOfRadarHudElems();
		void updateradar();
		void canfire(bool fromanimbp, bool* Result);
		void BuffTickClient(float DeltaTime);
		void ClearRadarCharacters();
		void DelayBeforeFadeout();
		void OnRep_IsAlertActive();
		void IsSmallCreature(class APrimalDinoCharacter* creature, bool* IsSmall);
		void IsDinoHostile(class APrimalDinoCharacter* Dino, bool FleeingCountsAsHostile, bool* IsHostile);
		void ClassifyScanningTarget(class AActor* ScanTarget, EPara_WarningMode WarningMode, bool FleeingCountsAsHostile, bool* IsEnemy, bool* IsSmallCreature);
		void GetNearbyEnemies(TArray<struct FVector>* Locations);
		void NotifyPlayerAboutAlert(class AShooterCharacter* Character);
		void BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements);
		void IsDinoinCone(class APrimalCharacter* Dino, TArray<struct FHitResult>* Hits, bool* IsInCone);
		void GetConeForward(struct FVector* Forward);
		void GetConeOrigin(struct FVector* ConeOrigin);
		void DeactivateAttachment();
		void Trigger();
		void BPSetupForInstigator(class AActor* ForInstigator);
		void UserConstructionScript();
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void Multicast_Activate();
		void Multicast_Deactivate();
		void StopAlertTick();
		void FadeoutHudElem();
		void multicasttogglesharedtarget();
		void MulticastSetHasScannerListSorted(bool NewValue);
		void MulticastSetSortedFoundCharacters();
		void ExecuteUbergraph_Buff_TekStrider_Radar(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
