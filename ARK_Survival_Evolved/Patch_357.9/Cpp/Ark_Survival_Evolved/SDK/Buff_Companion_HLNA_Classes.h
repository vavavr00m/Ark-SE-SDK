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
	 * BlueprintGeneratedClass Buff_Companion_HLNA.Buff_Companion_HLNA_C
	 * Size -> 0x5CE0 (FullSize[0x6E10] - InheritedSize[0x1130])
	 */
	class ABuff_Companion_HLNA_C : public ABuff_Companion_BaseBP_C
	{
	public:
		class UParticleSystemComponent*                            ParticleSystemThrustersLeftRight;                        // 0x1130(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            ParticleSystemThrustersIdle;                             // 0x1138(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            ParticleSystemThrustersFwd;                              // 0x1140(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            ParticleSystemBubbles;                                   // 0x1148(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            ScanningParticleSystemComponent;                         // 0x1150(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USceneComponent*                                     MeshBodyLocation;                                        // 0x1158(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UAudioComponent*                                     ScanAudioComponent;                                      // 0x1160(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         fixed_orientation_timeline__Direction_1331766D43686C4FC74B1F9D034C7ED3; // 0x1168(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_B3R1[0x7];                                   // 0x1169(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  fixedorientationtimeline;                                // 0x1170(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         delay_before_intro_shatter__Direction_E2C184154AA60B3BAA9DAA849D72EE0D; // 0x1178(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HKT8[0x7];                                   // 0x1179(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  delaybeforeintroshatter;                                 // 0x1180(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         Timeline_7__Direction_7E09B6D84A707742267EED9CB48F51B6;  // 0x1188(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_U693[0x7];                                   // 0x1189(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_8;                                              // 0x1190(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_6_NewTrack_0_66D724D5415E024F5AE7A1A7BA932F52;  // 0x1198(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         Timeline_6__Direction_66D724D5415E024F5AE7A1A7BA932F52;  // 0x119C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_H9XT[0x3];                                   // 0x119D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_7;                                              // 0x11A0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_5_NewTrack_0_6B52F643432B23481CC770B9B5C2A90D;  // 0x11A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         Timeline_5__Direction_6B52F643432B23481CC770B9B5C2A90D;  // 0x11AC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AJBJ[0x3];                                   // 0x11AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_6;                                              // 0x11B0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         Timeline_3__Direction_F5DEB8A64FF6E9F1FAFF80A6D2E2EACA;  // 0x11B8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G0VQ[0x7];                                   // 0x11B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_4;                                              // 0x11C0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_1_NewTrack_1_FE1D884C42EF8A6DE37907BD43FB246E;  // 0x11C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         Timeline_1__Direction_FE1D884C42EF8A6DE37907BD43FB246E;  // 0x11CC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_X5I2[0x3];                                   // 0x11CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_2;                                              // 0x11D0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_0_alpha_71C86B7A4C8EAD62EBB76CA47B61F709;       // 0x11D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         Timeline_0__Direction_71C86B7A4C8EAD62EBB76CA47B61F709;  // 0x11DC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HTER[0x3];                                   // 0x11DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x11E0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           ProjectFromScreenPercents_Focused;                       // 0x11E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ProjectFromScreenDist_Focused;                           // 0x11F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      BobDist_Idle;                                            // 0x11F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      BobDist_Focused;                                         // 0x11F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CurrTargetZOffset;                                       // 0x11FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      OffsetZ_Idle;                                            // 0x1200(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      OffsetZ_Focused;                                         // 0x1204(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             LastOrbitNormal;                                         // 0x1208(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector2D                                           AcceptableOrbitAngleRange_Current;                       // 0x1214(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector2D                                           AcceptableOrbitAngleRange;                               // 0x121C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      PlayerOrbitRadius;                                       // 0x1224(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      EdgeOfScreenAngle;                                       // 0x1228(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            TestMeshRotOffset;                                       // 0x122C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      OrbitOffsetFromPlayerZ;                                  // 0x1238(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             LastPlayerLocation;                                      // 0x123C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             PretendCompanionWorldLoc;                                // 0x1248(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            LastPlayerRotation;                                      // 0x1254(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FakeVelocityLagDistance;                                 // 0x1260(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FakeVelocityLagDistance_AttachedToCamera;                // 0x1264(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      PlayerVelocityLag_BaseSpeed;                             // 0x1268(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CurrentCompanionRootWorldZ;                              // 0x126C(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DefaultEventLocationInterpSpeed;                         // 0x1270(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             LastFakeVelocityOffset;                                  // 0x1274(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FakeVelocityLagInterpSpeed;                              // 0x1280(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector2D                                           ProjectFromScreenPercents_Monologue;                     // 0x1284(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ProjectFromScreenDist_Monologue;                         // 0x128C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      PlayerOrbitRadius_MonologueTPV;                          // 0x1290(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             LastProjectedRelativeLoc;                                // 0x1294(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      HoverProjectionInterpSpeed;                              // 0x12A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             LastMeshLocation;                                        // 0x12A4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             MeshVelocity;                                            // 0x12B0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_H3ET[0x4];                                   // 0x12BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        EquipMontage;                                            // 0x12C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bEarsDown;                                               // 0x12C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_42UA[0x7];                                   // 0x12C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UAnimMontage*>                                CompanionEmoteAnims_Salute;                              // 0x12D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UAnimMontage*>                                CompanionEmoteAnims_Sorry;                               // 0x12E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UAnimMontage*>                                CompanionEmoteAnims_Thank;                               // 0x12F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UAnimMontage*>                                CompanionEmoteAnims_Wave;                                // 0x1300(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UAnimMontage*>                                CompanionEmoteAnims_Laugh;                               // 0x1310(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UAnimMontage*>                                CompanionEmoteAnims_Yes;                                 // 0x1320(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UAnimMontage*>                                CompanionEmoteAnims_No;                                  // 0x1330(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UAnimMontage*>                                CompanionEmoteAnims_Taunt;                               // 0x1340(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UAnimMontage*>                                CompanionEmoteAnims_Cheer;                               // 0x1350(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UAnimMontage*>                                CompanionEmoteAnims_Friendly;                            // 0x1360(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class USoundCue*>                                   EmoteSounds_Unlockable;                                  // 0x1370(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UAnimMontage*>                                CompanionEmoteAnims_Turkey;                              // 0x1380(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UAnimMontage*>                                CompanionEmoteAnims_Snowball;                            // 0x1390(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UAnimMontage*>                                CompanionEmoteAnims_Heart;                               // 0x13A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UAnimMontage*>                                CompanionEmoteAnims_Evil;                                // 0x13B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UAnimMontage*>                                CompanionEmoteAnims_LightenUp;                           // 0x13C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UAnimMontage*>                                CompanionEmoteAnims_Flex_2;                              // 0x13D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UAnimMontage*>                                CompanionEmoteAnims_Flex_3;                              // 0x13E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UAnimMontage*                                        PlayerDiedMontage;                                       // 0x13F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      OrbitDirInterpSpeed;                                     // 0x13F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             TargetRelativeOffset;                                    // 0x13FC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TargetRelLocFPV_InterpSpeed;                             // 0x1408(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      BobDist_Monologue;                                       // 0x140C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      PretendCompanionWorldLocInterpSpeed;                     // 0x1410(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      BobSpeed_Idle;                                           // 0x1414(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      BobSpeed_Focused;                                        // 0x1418(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      BobSpeed_Monologue;                                      // 0x141C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      BobSpeed_Focused_FPV;                                    // 0x1420(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      BobDist_Focused_FPV;                                     // 0x1424(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      BlockHLNaSphereRadius_FPV;                               // 0x1428(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bHLNA_CompactMode;                                       // 0x142C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D0BW[0x3];                                   // 0x142D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastWantsToCompactTime;                                  // 0x1430(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bWantsToCompact;                                         // 0x1438(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VF9T[0x3];                                   // 0x1439(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeAfterReactionEndsToCompact;                          // 0x143C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UParticleSystem*                                     CompactVFX_In;                                           // 0x1440(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          CompactSFX_In;                                           // 0x1448(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          CompactSFX_Out;                                          // 0x1450(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UParticleSystem*                                     CompactVFX_Out;                                          // 0x1458(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsCompact;                                              // 0x1460(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PHK7[0x7];                                   // 0x1461(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCompanionReactionData                              Reaction_SayHello;                                       // 0x1468(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bIsPreparingMassTeleport;                                // 0x1508(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_M4UO[0x7];                                   // 0x1509(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastMassTeleportStartTime;                               // 0x1510(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MassTeleportTriggersAfterTime;                           // 0x1518(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MassTeleportChargeDuration;                              // 0x151C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class APrimalCharacter*>                            CurrentMassTeleportChars;                                // 0x1520(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		float                                                      MassTeleportGroundTraceHalfHeight;                       // 0x1530(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MassTeleportAreaRadius;                                  // 0x1534(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    MassTeleport_MaxCharCount;                               // 0x1538(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    MassTeleport_MaxPlayerCount;                             // 0x153C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTeleportDestination                                CurrentTeleportDestination;                              // 0x1540(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FVector                                             MassTeleportStartLocation;                               // 0x1568(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxAllowedTeleportWaitTime;                              // 0x1574(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MassTeleport_TargetLocOffsetZ;                           // 0x1578(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CanMonologueWithinOrbitRadiusMult;                       // 0x157C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    lastselecteddesiredteleportationdirectionindex;          // 0x1580(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    lastselecteddesiredteleportationregion;                  // 0x1584(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       debugteleport;                                           // 0x1588(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3QA8[0x7];                                   // 0x1589(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     VFX_BeamToChars;                                         // 0x1590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UParticleSystemComponent*>                    TeleportingCharsVFX;                                     // 0x1598(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UParticleSystem*                                     VFX_TeleportFailed;                                      // 0x15A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          Sound_TeleportFailed;                                    // 0x15B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UParticleSystem*                                     VFX_TeleportTriggered;                                   // 0x15B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CleanUpVfxDuration;                                      // 0x15C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_25OX[0x4];                                   // 0x15C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            TeleportSphereEmitterReference;                          // 0x15C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      InterpToTargetSpeed_Idle_MIN;                            // 0x15D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      InterpToTargetSpeed_Idle_MAX;                            // 0x15D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      InterpToTargetSpeed_FlyingToPoint;                       // 0x15D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      InterpToTargetSpeed_Focused;                             // 0x15DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      InterpRotSpeed;                                          // 0x15E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      InterpToTargetSpeed_Monologue;                           // 0x15E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      InterpToTargetSpeed_OrbitingPoint;                       // 0x15E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      InterpToTargetSpeed_ADS;                                 // 0x15EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      InterpToTargetSpeed_Focused_FPV;                         // 0x15F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      OrbitDirInterpSpeed_ADS;                                 // 0x15F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      InterpRotSpeed_Focused;                                  // 0x15F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      InterpRotSpeed_Monologue;                                // 0x15FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MassTeleport_TeleportDuration;                           // 0x1600(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      InterpToTargetSpeed_Custom;                              // 0x1604(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      InterpRotSpeed_Custom;                                   // 0x1608(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      InterpToTeleportLocationInterpSpeed;                     // 0x160C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FCompanionReactionData                              CompanionReaction_StartScan;                             // 0x1610(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             fsFinishedScanDispatcher;                                  // 0x16B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UClass*                                              HexagonTradeTemplate;                                    // 0x16C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UPrimalUI*                                           CurrentTradeUI;                                          // 0x16C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsShopOpen;                                              // 0x16D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JOEL[0x7];                                   // 0x16D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMaterialInstanceDynamic*>                    HLNAMaterialsforFresnelorOtherPurpose;                   // 0x16D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<bool>                                               AbleToBePurchased;                                       // 0x16E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FCompanionReactionData                              ReactionTeleportBegin;                                   // 0x16F8(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              CompanionReaction_JustAboutToTeleport;                   // 0x1798(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      SecondsBeforeTeleportWhenReactionPlays;                  // 0x1838(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_358R[0x4];                                   // 0x183C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCompanionReactionData                              CompanionReaction_CancelledTeleport;                     // 0x1840(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              CompanionReaction_PostTeleport;                          // 0x18E0(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		class UAnimMontage*                                        HexagonAbsorbAnim;                                       // 0x1980(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     lasttimeplayedabsorbanim;                                // 0x1988(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              MassTeleportVfxActorClass;                               // 0x1990(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              PostMassTeleportVfxActorClass;                           // 0x1998(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DetatchedRidingDinoInterpSpeed;                          // 0x19A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EH9S[0x4];                                   // 0x19A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          ScanOnSFX;                                               // 0x19A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DefaultScanLoopDuration;                                 // 0x19B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZRPQ[0x4];                                   // 0x19B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          ScanLoopSFX;                                             // 0x19B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          ScanOffSFX;                                              // 0x19C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DefaultScanLoopVFXDuration;                              // 0x19C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_98S7[0x4];                                   // 0x19CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCompanionReactionData                              DefaultScanFinishReaction;                               // 0x19D0(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              PlayerDiedReaction;                                      // 0x1A70(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              BeginPlayReaction;                                       // 0x1B10(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_Buff_Leech;                                     // 0x1BB0(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_Buff_Psychadelic;                               // 0x1C50(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_Buff_Grappled_By_Spider;                        // 0x1CF0(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_Buff_Bolad;                                     // 0x1D90(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_Buff_Frozen;                                    // 0x1E30(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_Buff_On_Fire;                                   // 0x1ED0(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_PlayerStatus_Handcuffed;                        // 0x1F70(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_PlayerStatus_Starving;                          // 0x2010(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_PlayerStatus_Thirsty;                           // 0x20B0(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_PlayerStatus_No_Air;                            // 0x2150(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_PlayerStatus_Low_Stamina;                       // 0x21F0(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_PlayerStatus_Almost_Unconscious;                // 0x2290(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_PlayerStatus_Low_Health;                        // 0x2330(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_PlayerStatus_Asleep;                            // 0x23D0(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_PlayerStatus_IndoorsAfterHavingBeenGone;        // 0x2470(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_RidingDinoStatus_Starving;                      // 0x2510(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_RidingDinoStatus_Thirsty;                       // 0x25B0(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_RidingDinoStatus_No_Air;                        // 0x2650(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_RidingDinoStatus_LowStamina;                    // 0x26F0(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_RidingDinoStatus_Almost_Unconscious;            // 0x2790(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_RidingDinoStatus_Low_Health;                    // 0x2830(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      Intervaltocheckforvariouspossibleworldreactions;         // 0x28D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HasBeenOutsideRecentlyReactionCheck;                     // 0x28D4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HasBeenInsideRecentlyReactionCheck;                      // 0x28D5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QOD3[0x2];                                   // 0x28D6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             RecentInsideLocationforTravelReaction;                   // 0x28D8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_30GP[0x4];                                   // 0x28E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCompanionReactionData                              Reaction_PlayerStatus_Traveling;                         // 0x28E8(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      distancetocheckwhethertheplayeristravelingfromthelastindoorslocation; // 0x2988(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      Velocityatwhichtheboostreactionplays;                    // 0x298C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FCompanionReactionData                              Reaction_PlayerStatus_BoostLaunch;                       // 0x2990(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      PoisonBuffClassNames;                                    // 0x2A30(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_PlayerStatus_BonusXP;                           // 0x2A40(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       HasCheckedBuffsOnceDuringThisReactionPeriod;             // 0x2AE0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FYCN[0x7];                                   // 0x2AE1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastTimeTryCheckFIreReaction;                            // 0x2AE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FCompanionReactionData                              Reaction_Combat_FriendlyFire;                            // 0x2AF0(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_Combat_DamagedEnemy;                            // 0x2B90(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_Combat_KilledEnemy;                             // 0x2C30(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       debugenableimmediatereactions;                           // 0x2CD0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CLT3[0x3];                                   // 0x2CD1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RecentDamageTaken;                                       // 0x2CD4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DamageThresholdBeforeReactingToHeavyDamageTaken;         // 0x2CD8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A6F7[0x4];                                   // 0x2CDC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCompanionReactionData                              Reaction_Combat_TookHeavyDamage;                         // 0x2CE0(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      LastCheckedHealth;                                       // 0x2D80(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EZGF[0x4];                                   // 0x2D84(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCompanionReactionData                              Reaction_Combat_DamagedCreatureAlmostDead;               // 0x2D88(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      targethealthreactionwillplayiftargethasmaxhealthabovethisvalue; // 0x2E28(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      targethealthreactionwillplayiftargetgetscurrenthealthunderthisvalue; // 0x2E2C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastTimePlayedMonologue;                                 // 0x2E30(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CurrentlyInFaceSpeedMonologue;                           // 0x2E38(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      reactiontimersettingsincrementthresholdlowest;           // 0x2E3C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      reactiontimersettingsincrementthresholdlow;              // 0x2E40(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      reactiontimersettingslowestincrement;                    // 0x2E44(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      reactiontimersettingslowincrement;                       // 0x2E48(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      reactiontimersettingsmedincrement;                       // 0x2E4C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    reactiontimersettingsminseconds;                         // 0x2E50(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    reactiontimersettingsmaxseconds;                         // 0x2E54(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      globalreactionchancesettingsminvalue;                    // 0x2E58(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      globalreactionchancesettingsmaxvalue;                    // 0x2E5C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      globalreactionchancesettingsincrement;                   // 0x2E60(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      EmoteParticleScale;                                      // 0x2E64(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            EmoteRotationOffset;                                     // 0x2E68(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_E5B3[0x4];                                   // 0x2E74(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UParticleSystem*>                             Emote_HLNAParticles;                                     // 0x2E78(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UParticleSystemComponent*                            EmoteComponent;                                          // 0x2E88(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CurrentEyeMouthOpacity;                                  // 0x2E90(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      EyeMouthOpacityInterpSpeed;                              // 0x2E94(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TimeToHideEyeDuringEmote;                                // 0x2E98(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isflashingfromhexagons;                                  // 0x2E9C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CXLB[0x3];                                   // 0x2E9D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FHLNALocalizedAudioEntry>                    HLNAlocalizedemoteaudio;                                 // 0x2EA0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_Poop;                                           // 0x2EB0(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_Gear_EquippedLowDurabilityWeapon;               // 0x2F50(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		double                                                     Lasttimetriedtoreacttoequippingalowdurabilityweapon;     // 0x2FF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FCompanionReactionData                              Reaction_Gear_CraftedFirstThatchStructure;               // 0x2FF8(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_Gear_CraftedFirstJumpPad;                       // 0x3098(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_Gear_CraftedFirstOceanPlatform;                 // 0x3138(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_Gear_CraftedFirstPressurePlate;                 // 0x31D8(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_Gear_CraftedFirstFishingNet;                    // 0x3278(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_Gear_CraftedFirstMiningDrill;                   // 0x3318(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_Gear_CraftedFirstShoulderCannon;                // 0x33B8(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_Gear_CraftedFirstTekGrenadeLauncher;            // 0x3458(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_Gear_CraftedFirstTekCruiseMissile;              // 0x34F8(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_Gear_CraftedFirstTekAlarm;                      // 0x3598(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_Gear_CraftedFirstTekClaws;                      // 0x3638(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_Gear_CraftedFirstHoverSkiff;                    // 0x36D8(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_Dino_TamedFirstBigTurtle;                       // 0x3778(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_Dino_TamedFirstBogSpider;                       // 0x3818(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_Dino_TamedFirstSpaceWhale;                      // 0x38B8(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_Dino_TamedFirstLavaLizard;                      // 0x3958(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_Dino_TamedFirstShapeShifter;                    // 0x39F8(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_Dino_TamedFirstRex;                             // 0x3A98(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_Dino_TamedFirstRaptor;                          // 0x3B38(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_Dino_TamedFirstDodo;                            // 0x3BD8(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_Dino_TamedCarnivore;                            // 0x3C78(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_Dino_TamedHerbivore;                            // 0x3D18(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsPlayingInitialSpawnIntroAnim;                          // 0x3DB8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_720Q[0x3];                                   // 0x3DB9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             InitialSpawnIntroAnimLocOffset;                          // 0x3DBC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              IntroWorldRigClass;                                      // 0x3DC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              IntroVRWorldActorClass;                                  // 0x3DD0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EWKM[0x8];                                   // 0x3DD8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct UObject_FTransform                                  IntroWorldRigTransformOffset;                            // 0x3DE0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      IntroAnimTimeout;                                        // 0x3E10(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HIVK[0x4];                                   // 0x3E14(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              IntroWorldRigRef;                                        // 0x3E18(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AActor*                                              IntroVRWorldActorRef;                                    // 0x3E20(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        IntroHLNAAnim;                                           // 0x3E28(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HasBeenOffMountRecentlyReactionCheck;                    // 0x3E30(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CN72[0x7];                                   // 0x3E31(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCompanionReactionData                              Reaction_Dino_RecentlyRodeOn;                            // 0x3E38(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_Dino_LeveledUp;                                 // 0x3ED8(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_Dino_Died;                                      // 0x3F78(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    RecentMountLeveltoCheckForLevelUp;                       // 0x4018(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TIIA[0x4];                                   // 0x401C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCompanionReactionData                              PreviousHLNAEnvironmentalReaction;                       // 0x4020(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       HasPlayedInitialSpawnAnim;                               // 0x40C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SC4O[0x3];                                   // 0x40C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             lastcheckedplayerlocationforidlereaction;                // 0x40C4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FCompanionReactionData                              Reaction_Swamp_Idle;                                     // 0x40D0(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_Lunar_Idle;                                     // 0x4170(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_Ocean_Idle;                                     // 0x4210(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_Arctic_Idle;                                    // 0x42B0(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_Volcanic_Idle;                                  // 0x4350(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_Generic_Idle;                                   // 0x43F0(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_Gear_CraftedTurret;                             // 0x4490(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_Gear_CraftedTeleporter;                         // 0x4530(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_Gear_CraftedReplicator;                         // 0x45D0(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_Gear_CraftedSmithy;                             // 0x4670(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_Gear_CraftedCampfire;                           // 0x4710(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_Gear_CraftedGrill;                              // 0x47B0(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       HasPlayedPostInitialSpawnHLNAReaction;                   // 0x4850(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JXKK[0x7];                                   // 0x4851(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              HLNATeleportPostProcessBuff;                             // 0x4858(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FCompanionReactionData                              Reaction_Dino_EnterSpaceWhaleBallTurret;                 // 0x4860(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              SpaceWhaleTurretPassengerBuff;                           // 0x4900(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      AllowedTimeIntervalToRefreshIfItemsCanBePurchased;       // 0x4910(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XHY7[0x4];                                   // 0x4914(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCompanionReactionData                              Reaction_Dino_GiantTurtleSubmerged;                      // 0x4918(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              GiantTurtleSubmergedBuff;                                // 0x49B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UMaterialInstanceDynamic*>                    IntroTeleportSphereDynamicMatierials;                    // 0x49C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance
		float                                                      IntroTeleportSpherevfxradius;                            // 0x49D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      IntroVFXFinishEnvelopDuration;                           // 0x49DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      IntroDelayBeforeSphereUnmask;                            // 0x49E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_O4P5[0x4];                                   // 0x49E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            IntroTeleportSphereDynamicMatierial;                     // 0x49E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isforceset;                                              // 0x49F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4WYB[0x3];                                   // 0x49F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            postintrorotationoffset;                                 // 0x49F4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       hasstartedintroshattervfx;                               // 0x4A00(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TYEC[0x7];                                   // 0x4A01(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              punchdamagetype;                                         // 0x4A08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FCompanionReactionData                              Reaction_PlayerStatus_LevelUp;                           // 0x4A10(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FRotator                                            IntroWorldRigSocketRotationOffset;                       // 0x4AB0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KC6F[0x4];                                   // 0x4ABC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        RespawnHLNAAnim;                                         // 0x4AC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              RespawnWorldRigClass;                                    // 0x4AC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       spawnanimisrespawn;                                      // 0x4AD0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       biomebuffs;                                              // 0x4AD1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J5UK[0x6];                                   // 0x4AD2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CannotTeleportString;                                    // 0x4AD8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              CannotTeleportReasonRaft;                                // 0x4AE8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              CannotTeleportReasonFish;                                // 0x4AF8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              HowToUnhideHLNAString;                                   // 0x4B08(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FString>                                      BiomeBuffTags;                                           // 0x4B18(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      randomfocusverticaloffset;                               // 0x4B28(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      randomfocusrotationangle;                                // 0x4B2C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      randomfocusheightoffsetrange;                            // 0x4B30(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      scanorbitrandomizeinterval;                              // 0x4B34(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      delaybeforeplayingscanvfx;                               // 0x4B38(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_N6VH[0x4];                                   // 0x4B3C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCompanionReactionData                              Reaction_Emote;                                          // 0x4B40(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UAnimMontage*>                                Emote_PlayerMontages;                                    // 0x4BE0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UAnimMontage*>                                Emote_PlayerMontages_Female;                             // 0x4BF0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UAnimMontage*>                                CompanionEmoteAnims_Poop;                                // 0x4C00(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       shouldbeidle;                                            // 0x4C10(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_I70J[0x7];                                   // 0x4C11(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     ScanningVFXparticleemitter;                              // 0x4C18(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UParticleSystem*>                             vfxtodisableduringreactions;                             // 0x4C20(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       abletoplayinitialmovementsfx;                            // 0x4C30(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G45L[0x3];                                   // 0x4C31(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      distancethresholdforfastmovementspeed;                   // 0x4C34(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      distancethresholdformediummovementspeed;                 // 0x4C38(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      distancethresholdforslowmovementspeed;                   // 0x4C3C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      distancethresholdforresettingabilitytoplaymovementspeed; // 0x4C40(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IVP0[0x4];                                   // 0x4C44(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          beginfastmovementsfx;                                    // 0x4C48(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          beginmediummovementsfx;                                  // 0x4C50(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          beginslowmovementsfx;                                    // 0x4C58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isfirstrespawn;                                          // 0x4C60(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T5RD[0x3];                                   // 0x4C61(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MultiuseHexagonGatherRefreshInterval;                    // 0x4C64(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       disableabilitytogethexagonsfromrefreshpooluntiltimerstarts; // 0x4C68(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6QYS[0x3];                                   // 0x4C69(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MultiuseHexagonGatherPoolGainAmount;                     // 0x4C6C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FCompanionReactionData                              Reaction_CollectHexagonsFromMultiusePool;                // 0x4C70(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              Reaction_CollectHexagonsFromMultiusePool_ManyHexagons;   // 0x4D10(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    amountofhexagonsatwhichHLNAcommentsthatyouhaveabunch;    // 0x4DB0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CJ2G[0x4];                                   // 0x4DB4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CollectHexagonsString;                                   // 0x4DB8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    CurrentCompletedMissions;                                // 0x4DC8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    NumberofMissionsNeededForEasyFinalBoss;                  // 0x4DCC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, CPF_SkipSerialization
		int32_t                                                    NumberofMissionsNeededForMedFinalBoss;                   // 0x4DD0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, CPF_SkipSerialization
		int32_t                                                    NumberofMissionsNeededForHardFinalBoss_MP;               // 0x4DD4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, CPF_SkipSerialization
		class FString                                              Missionsstring;                                          // 0x4DD8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    totalnumberofmissions;                                   // 0x4DE8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             VRmissionteleportlocation;                               // 0x4DEC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<struct FTeleportedCharacter>                        SavedTeleportReturnLocations;                            // 0x4DF8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FVector                                             NewVar;                                                  // 0x4E08(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      currentdesiredvolume;                                    // 0x4E14(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FCompanionReactionData                              Reaction_Respawn_A;                                      // 0x4E18(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		class UAudioComponent*                                     currentaudiocompreference;                               // 0x4EB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FHLNALocalizedAudioEntry                            LocalizedIntroDialog;                                    // 0x4EC0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<int32_t>                                            StoredColors;                                            // 0x4ED0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FName>                                        ColorNames;                                              // 0x4EE0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FName>                                        UsingColorNames;                                         // 0x4EF0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FName>                                        UsingColorizedColor;                                     // 0x4F00(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class AMissionType*                                        CurrentIntermediateFinalBossFightMissionRef;             // 0x4F10(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AMissionDispatcher*                                  finalbossfightmissiondispatcher;                         // 0x4F18(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       iscurrentlytryingtoTPtofinalboss;                        // 0x4F20(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_81FC[0x7];                                   // 0x4F21(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalCharacter*                                    recentlyselectedremotecharactertodrawtooltipfor;         // 0x4F28(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          OnHexagonPurchaseSfx;                                    // 0x4F30(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          hexagoncollectsfx;                                       // 0x4F38(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FocusedSelectedRemoteTargetTimeoutTime;                  // 0x4F40(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      hlnafocusselectedremotetargetrange;                      // 0x4F44(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ismovingtowardstargettoforremotetooltip;                 // 0x4F48(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       iscurrentlyscanlooping;                                  // 0x4F49(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ETraceTypeQuery                                            hlnameshchannel;                                         // 0x4F4A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       lasttimecheckifplayerwasADS;                             // 0x4F4B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      timebetweenenvironmentalreactions;                       // 0x4F4C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    respawnreactionfrequency;                                // 0x4F50(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    deathreactionfrequency;                                  // 0x4F54(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      helloreactionchance;                                     // 0x4F58(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      volumefademultiplier;                                    // 0x4F5C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      maxmovementaudiovolume;                                  // 0x4F60(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VOGV[0x4];                                   // 0x4F64(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      teleportedplayernames;                                   // 0x4F68(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       IsVRMissionAvailable;                                    // 0x4F78(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OUU9[0x7];                                   // 0x4F79(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CannotTeleportSeatedCharactersString;                    // 0x4F80(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      MaxFinalBossTeleportDragWeight;                          // 0x4F90(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_K9CE[0x4];                                   // 0x4F94(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CannotTeleportLargeDinosToFinalBoss;                     // 0x4F98(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              StoryGlitches;                                           // 0x4FA8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       awaitingsetofinitialspawnintroanim;                      // 0x4FB8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       iscollidingwithsomething;                                // 0x4FB9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UVXT[0x2];                                   // 0x4FBA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      distancefromtargetwherehlnashouldmoveto;                 // 0x4FBC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FString                                              CannotTeleportPlayersOnMission;                          // 0x4FC0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FVector                                             Amounttolaunchplayerinspacewhentheypoop;                 // 0x4FD0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UZ5R[0x4];                                   // 0x4FDC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SimpleSoundLoading;                                      // 0x4FE0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class USoundBase*                                          SimpleLoadedSound;                                       // 0x4FF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       lastspawnwasfasttravel;                                  // 0x4FF8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_P4F5[0x7];                                   // 0x4FF9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCompanionReactionData>                      Reactions_PostIntro_FirstSpawnLines;                     // 0x5000(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    NumberofMissionsNeededForHardFinalBoss_SP;               // 0x5010(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       onlyfinishintroonce;                                     // 0x5014(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HNQA[0x3];                                   // 0x5015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              postintromissionalerttext;                               // 0x5018(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              PostIntroMissionAlertTitle;                              // 0x5028(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       nextasyncloadedaudioshouldplayanimtexture;               // 0x5038(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_B6PW[0x7];                                   // 0x5039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     RegionTPVFXColorsByIndex;                                // 0x5040(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FLocalizedSoundWaveAnimTexturePairArrays>    LocalizedDeathAudioSoundWaves;                           // 0x5050(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    randomsoundwaveindex;                                    // 0x5060(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsAwaitingDisplayingPostIntroMissionAlert;               // 0x5064(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsAwaitingDisplayingPostIntroRemoteTargetingAlert;       // 0x5065(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G4CD[0x2];                                   // 0x5066(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCompanionReactionData                              lastplayedreaction;                                      // 0x5068(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              testPOIglitchfixingreactionusedtocheckifhlnaiscurrentlyfixingaPOI; // 0x5108(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              postintrohlnaremotetargetalerttitle;                     // 0x51A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FText                                                postintrohlnaremotetargetalerttextbeforekey;             // 0x51B8(0x0018) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, DisableEditOnInstance
		unsigned char                                              UnknownData_O2OF[0x10];                                  // 0x51D0(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                postintrohlnaremotetargetalerttextafterkey;              // 0x51E0(0x0018) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, DisableEditOnInstance
		unsigned char                                              UnknownData_3T02[0x10];                                  // 0x51F8(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		float                                                      durationtodisplaypostintromissionalert;                  // 0x5208(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      durationtodisplaypostintroremotetargetalert;             // 0x520C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FCompanionReactionData                              currentplayingreaction;                                  // 0x5210(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              blankreaction;                                           // 0x52B0(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       wasfixingglitch;                                         // 0x5350(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       lastcheckwasADS;                                         // 0x5351(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RJSN[0x2];                                   // 0x5352(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             savedinitialADSorbitdir;                                 // 0x5354(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UTexture2D*                                          currentsimpleasyncloadedanimtexture;                     // 0x5360(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    maxdinocountallowedforvrteleport;                        // 0x5368(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LNQ2[0x4];                                   // 0x536C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              exceedingmaxtamecountstring;                             // 0x5370(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    maxplayercountallowedforvrteleport;                      // 0x5380(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ODR4[0x4];                                   // 0x5384(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              exceedingmaxplayercountstring;                           // 0x5388(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              cantteleportdeadtamesstring;                             // 0x5398(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              cantteleportdeadplayersstring;                           // 0x53A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FVector                                             Gen2IntroPreTeleportPosition;                            // 0x53B8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Gen2IntroTeleportPosition;                               // 0x53C4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsPlayingGen2Intro;                                      // 0x53D0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       LocalGateHasCheckGen2Intro;                              // 0x53D1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FMY2[0x6];                                   // 0x53D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            SpawnedBeamParticleRef;                                  // 0x53D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AActor*                                              SpawnedBeamEndPointActor;                                // 0x53E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             SpawnedBeamEndPointOffset;                               // 0x53E8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KZPV[0x4];                                   // 0x53F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        Gen2IntroDisableActionMappings;                          // 0x53F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UClass*                                              deathvfx;                                                // 0x5408(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AActor*                                              deathvfxmanager;                                         // 0x5410(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FCompanionReactionData                              ReactionGearCraftedFirstExoSuit;                         // 0x5418(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              ReactionGearCraftedFirstTekBow;                          // 0x54B8(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              ReactionGearCraftedFirstTekPistol;                       // 0x5558(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              ReactionGearCraftedFirstTekCropPlot;                     // 0x55F8(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              ReactionGearCraftedFirstHoversail;                       // 0x5698(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              ReactionDinoTamedFirstTekStrider;                        // 0x5738(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              ReactionDinoTamedFirstTekWyvern;                         // 0x57D8(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              ReactionDinoTamedFirstMaewing;                           // 0x5878(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              ReactionDinoTamedFirstSpaceDolphin;                      // 0x5918(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              ReactionDinoTamedFirstLionfishlion;                      // 0x59B8(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCompanionReactionData                              ReactionDinoTamedFirstBrainSlug;                         // 0x5A58(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        Gen2IntroPreTeleportLevels;                              // 0x5AF8(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance
		TArray<class FName>                                        Gen2IntroSafeZoneLevels;                                 // 0x5B08(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FCompanionReactionData>                      Gen2CompanionReactions_FirstSpawn;                       // 0x5B18(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      Gen2CompanionReactionDelay_FirstSpawn;                   // 0x5B28(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CosmeticHlnaIsPlayingExplorerNote;                       // 0x5B2C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7NM4[0x3];                                   // 0x5B2D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      delaybeforedeathsfxplay;                                 // 0x5B30(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      HLNaBlockerRadius;                                       // 0x5B34(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      HLNaRepulseOutOfBlockerRadiusSpeed;                      // 0x5B38(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UnlockIntroExplorerNoteOnDeath;                          // 0x5B3C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_46VW[0x3];                                   // 0x5B3D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCompanionReactionData                              gen2postspawnreactioncopy;                               // 0x5B40(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       forceplaygen2postspawnreactions;                         // 0x5BE0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8MDB[0x7];                                   // 0x5BE1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Retrieve_WaitEventString;                                // 0x5BE8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              WeapHandcuffs_CString;                                   // 0x5BF8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              enLanguageString;                                        // 0x5C08(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       AllowedToMassTeleport;                                   // 0x5C18(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_64KC[0x7];                                   // 0x5C19(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Buff_Leech_CName;                                        // 0x5C20(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              Buff_PoisonousMushroom_CName;                            // 0x5C30(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              grappledstring1;                                         // 0x5C40(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              grappledstring2;                                         // 0x5C50(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              bolabuffstring;                                          // 0x5C60(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              frozenbuffstring;                                        // 0x5C70(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              enflamedbuff1;                                           // 0x5C80(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              enflamedbuff2;                                           // 0x5C90(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              enflamedbuff3;                                           // 0x5CA0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              xpgainbuff1;                                             // 0x5CB0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              xpgainbuff2;                                             // 0x5CC0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              xpgainbuff3;                                             // 0x5CD0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FPointOfInterestData_ForCompanion                   previouslyfocusedPoint;                                  // 0x5CE0(0x03F0) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              BogGlitchCounterClass;                                   // 0x60D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              ArcticGlitchCounterClass;                                // 0x60E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              VolcGlitchCounterClass;                                  // 0x60F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              OceanGlitchCounterClass;                                 // 0x6100(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              LunarGlitchCounterClass;                                 // 0x6110(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<int32_t>                                            potentialunlockableexplorernotes;                        // 0x6120(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       CallFunc_EqualEqual_BoolBool_ReturnValue;                // 0x6130(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_BoolBool_ReturnValue2;               // 0x6131(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZBWZ[0x2];                                   // 0x6132(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Temp_int_Loop_Counter_Variable;                          // 0x6134(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue;                         // 0x6138(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue;                            // 0x613C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsLocallyControlledByPlayer_ReturnValue;        // 0x613D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WS5V[0x2];                                   // 0x613E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Temp_int_Loop_Counter_Variable2;                         // 0x6140(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    Temp_int_Loop_Counter_Variable3;                         // 0x6144(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue2;                        // 0x6148(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue3;                        // 0x614C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue;                  // 0x6150(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable; // 0x6151(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue2;                           // 0x6152(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsLocallyControlledByPlayer_ReturnValue2;       // 0x6153(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    Temp_int_Loop_Counter_Variable4;                         // 0x6154(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue4;                        // 0x6158(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    Temp_int_Loop_Counter_Variable5;                         // 0x615C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue5;                        // 0x6160(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    Temp_int_Loop_Counter_Variable6;                         // 0x6164(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue6;                        // 0x6168(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       Temp_bool_True_if_break_was_hit_Variable;                // 0x616C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x616D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_F0N5[0x2];                                   // 0x616E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Temp_int_Loop_Counter_Variable7;                         // 0x6170(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    Temp_int_Loop_Counter_Variable8;                         // 0x6174(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue7;                        // 0x6178(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue8;                        // 0x617C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       Temp_bool_True_if_break_was_hit_Variable2;               // 0x6180(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ANF2[0x3];                                   // 0x6181(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Temp_int_Variable;                                       // 0x6184(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_LessEqual_IntInt_ReturnValue;                   // 0x6188(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0L0J[0x3];                                   // 0x6189(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue9;                        // 0x618C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue2;                       // 0x6190(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3T8N[0x3];                                   // 0x6191(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             K2Node_CustomEvent_WithPlayerLocation;                   // 0x6194(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		EMassTeleportState                                         K2Node_CustomEvent_EventState2;                          // 0x61A0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GG63[0x7];                                   // 0x61A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class APrimalCharacter*>                            K2Node_CustomEvent_NewTeleportCharsList;                 // 0x61A8(0x0010) ZeroConstructor, Transient, DuplicateTransient
		int32_t                                                    CallFunc_Array_LastIndex_ReturnValue;                    // 0x61B8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Array_Length_ReturnValue;                       // 0x61BC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Array_Length_ReturnValue2;                      // 0x61C0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WFRA[0x4];                                   // 0x61C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            CallFunc_SpawnEmitterAttached_ReturnValue;               // 0x61C8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Subtract_IntInt_ReturnValue;                    // 0x61D0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue3;                           // 0x61D4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Array_IsValidIndex_ReturnValue;                 // 0x61D5(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V25Z[0x2];                                   // 0x61D6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Abs_Int_ReturnValue;                            // 0x61D8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_IntInt_ReturnValue;                     // 0x61DC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A7CO[0x3];                                   // 0x61DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Array_Add_ReturnValue;                          // 0x61E0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NotEqual_IntInt_ReturnValue;                    // 0x61E4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5U3A[0x3];                                   // 0x61E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Array_Length_ReturnValue3;                      // 0x61E8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		EMassTeleportState                                         K2Node_CustomEvent_EventState;                           // 0x61EC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue;                           // 0x61ED(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue3;                       // 0x61EE(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OUIA[0x1];                                   // 0x61EF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        K2Node_CustomEvent_color;                                // 0x61F0(0x0010) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    Temp_int_Loop_Counter_Variable9;                         // 0x6200(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue10;                       // 0x6204(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Array_Length_ReturnValue4;                      // 0x6208(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_IntInt_ReturnValue;                        // 0x620C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0CT2[0x3];                                   // 0x620D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            CallFunc_Array_Get_Item;                                 // 0x6210(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue4;                           // 0x6218(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue5;                           // 0x6219(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SKN8[0x6];                                   // 0x621A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AController*                                         CallFunc_GetController_ReturnValue;                      // 0x6220(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterPlayerController*                            K2Node_DynamicCast_AsShooterPlayerController;            // 0x6228(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x6230(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IY7Z[0x7];                                   // 0x6231(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AHUD*                                                CallFunc_GetHUD_ReturnValue;                             // 0x6238(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterHUD*                                         K2Node_DynamicCast_AsShooterHUD;                         // 0x6240(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast2_CastSuccess;                         // 0x6248(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UG8O[0x7];                                   // 0x6249(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimalUI*                                           CallFunc_BPShowUIScene_ReturnValue;                      // 0x6250(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UHexagon_Trade_UI_C*                                 K2Node_DynamicCast_AsHexagon_Trade_UI_C;                 // 0x6258(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast3_CastSuccess;                         // 0x6260(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3QO3[0x3];                                   // 0x6261(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_PlayCompanionMontage_ReturnValue;               // 0x6264(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		double                                                     CallFunc_GetNetworkTimeInSeconds_ReturnValue;            // 0x6268(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue;                        // 0x6270(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsTimeSince_Network_ReturnValue;                // 0x6278(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1DRE[0x3];                                   // 0x6279(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Array_Length_ReturnValue5;                      // 0x627C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsPlayingCompanionReaction_ReturnValue;         // 0x6280(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_IntInt_ReturnValue2;                    // 0x6281(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3B04[0x2];                                   // 0x6282(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Array_Length_ReturnValue6;                      // 0x6284(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            CallFunc_Array_Get_Item2;                                // 0x6288(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_IntInt_ReturnValue2;                       // 0x6290(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue6;                           // 0x6291(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3YP4[0x2];                                   // 0x6292(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Array_Length_ReturnValue7;                      // 0x6294(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_IntInt_ReturnValue3;                    // 0x6298(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue;                 // 0x6299(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V5VZ[0x2];                                   // 0x629A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_SelectFloat_ReturnValue;                        // 0x629C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_CustomEvent_Scan_Duration;                        // 0x62A0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2IDW[0x4];                                   // 0x62A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCompanionReactionData                              K2Node_CustomEvent_Post_Scan_Reaction;                   // 0x62A8(0x00A0) Transient, DuplicateTransient
		class AShooterCharacter*                                   K2Node_DynamicCast_AsShooterCharacter;                   // 0x6348(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast4_CastSuccess;                         // 0x6350(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A6RZ[0x7];                                   // 0x6351(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterCharacter*                                   K2Node_DynamicCast_AsShooterCharacter2;                  // 0x6358(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast5_CastSuccess;                         // 0x6360(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue7;                           // 0x6361(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_K2_IsTimerActive_ReturnValue;                   // 0x6362(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OUPY[0x5];                                   // 0x6363(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CallFunc_Conv_FloatToDouble_ReturnValue;                 // 0x6368(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue8;                           // 0x6370(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_K2_IsTimerActive_ReturnValue2;                  // 0x6371(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QQ8U[0x6];                                   // 0x6372(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APlayerController*                                   CallFunc_GetOwnerController_ReturnValue;                 // 0x6378(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FBPNetExecParams                                    K2Node_MakeStruct_BPNetExecParams;                       // 0x6380(0x0040) Transient, DuplicateTransient
		class AShooterCharacter*                                   K2Node_DynamicCast_AsShooterCharacter3;                  // 0x63C0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast6_CastSuccess;                         // 0x63C8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_is_dead2;                             // 0x63C9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue9;                           // 0x63CA(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5UPH[0x5];                                   // 0x63CB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue2;                       // 0x63D0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		double                                                     CallFunc_GetNetworkTimeInSeconds_ReturnValue2;           // 0x63D8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsTimeSince_Network_ReturnValue2;               // 0x63E0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_is_dead;                              // 0x63E1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YR3Y[0x6];                                   // 0x63E2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue3;                       // 0x63E8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsTimeSince_Network_ReturnValue3;               // 0x63F0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0L2M[0x3];                                   // 0x63F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Temp_int_Loop_Counter_Variable10;                        // 0x63F4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue11;                       // 0x63F8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue2;                // 0x63FC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_FloatFloat_ReturnValue;                    // 0x63FD(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SY9W[0x2];                                   // 0x63FE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UShooterGameUserSettings*                            CallFunc_GetShooterGameUserSettings_ReturnValue;         // 0x6400(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue10;                          // 0x6408(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UVL3[0x7];                                   // 0x6409(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UShooterGameUserSettings*                            CallFunc_GetShooterGameUserSettings_ReturnValue2;        // 0x6410(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue11;                          // 0x6418(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GD1X[0x7];                                   // 0x6419(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              K2Node_CustomEvent_ItemName;                             // 0x6420(0x0010) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       K2Node_SwitchString_CmpSuccess;                          // 0x6430(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JG8B[0x3];                                   // 0x6431(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Temp_int_Loop_Counter_Variable11;                        // 0x6434(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Array_IsValidIndex_ReturnValue2;                // 0x6438(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VMZ6[0x7];                                   // 0x6439(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            CallFunc_Array_Get_Item3;                                // 0x6440(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue12;                          // 0x6448(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_IntInt_ReturnValue3;                       // 0x6449(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YF4W[0x6];                                   // 0x644A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalCharacter*                                    CallFunc_Array_Get_Item4;                                // 0x6450(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue12;                       // 0x6458(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue13;                          // 0x645C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QTR9[0x3];                                   // 0x645D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue;                // 0x6460(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IFAN[0x4];                                   // 0x646C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterCharacter*                                   K2Node_DynamicCast_AsShooterCharacter4;                  // 0x6470(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast7_CastSuccess;                         // 0x6478(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XFOI[0x7];                                   // 0x6479(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APlayerController*                                   CallFunc_GetOwnerController_ReturnValue2;                // 0x6480(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterPlayerController*                            K2Node_DynamicCast_AsShooterPlayerController2;           // 0x6488(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast8_CastSuccess;                         // 0x6490(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue14;                          // 0x6491(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsLocallyControlledByPlayer_ReturnValue3;       // 0x6492(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_40IB[0x5];                                   // 0x6493(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalDinoCharacter*                                K2Node_CustomEvent_ridden_dino;                          // 0x6498(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FCompanionReactionData                              K2Node_CustomEvent_reaction;                             // 0x64A0(0x00A0) Transient, DuplicateTransient
		bool                                                       CallFunc_IsValid_ReturnValue15;                          // 0x6540(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_CanPlayEnvironmentalCompanionReaction_ReturnValue; // 0x6541(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WVBQ[0x6];                                   // 0x6542(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalCharacter*                                    K2Node_CustomEvent_DiedCharacter;                        // 0x6548(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Array_Length_ReturnValue8;                      // 0x6550(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Array_Get_Item5;                                // 0x6554(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_IntInt_ReturnValue4;                       // 0x6555(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OJE5[0x2];                                   // 0x6556(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Array_Length_ReturnValue9;                      // 0x6558(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_IntInt_ReturnValue4;                    // 0x655C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue16;                          // 0x655D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsLocallyControlledByPlayer_ReturnValue4;       // 0x655E(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Array_IsValidIndex_ReturnValue3;                // 0x655F(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    K2Node_CustomEvent_Store_Item_Index;                     // 0x6560(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_New_Index_Value;                      // 0x6564(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue17;                          // 0x6565(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A8J3[0x2];                                   // 0x6566(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UHexagon_Trade_UI_C*                                 K2Node_DynamicCast_AsHexagon_Trade_UI_C2;                // 0x6568(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast9_CastSuccess;                         // 0x6570(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Array_IsValidIndex_ReturnValue4;                // 0x6571(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue3;                // 0x6572(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BM49[0x1];                                   // 0x6573(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_SelectFloat_ReturnValue2;                       // 0x6574(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Divide_FloatFloat_ReturnValue;                  // 0x6578(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             K2Node_CustomEvent_Location;                             // 0x657C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            K2Node_CustomEvent_rotation;                             // 0x6588(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    Temp_int_Variable2;                                      // 0x6594(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NotEqual_ObjectObject_ReturnValue;              // 0x6598(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_LessEqual_IntInt_ReturnValue2;                  // 0x6599(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7Y48[0x2];                                   // 0x659A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue13;                       // 0x659C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class USceneComponent*                                     CallFunc_K2_GetRootComponent_ReturnValue;                // 0x65A0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		TArray<class USceneComponent*>                             CallFunc_GetChildrenComponents_Children;                 // 0x65A8(0x0010) ZeroConstructor, Transient, DuplicateTransient
		int32_t                                                    CallFunc_Array_Length_ReturnValue10;                     // 0x65B8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_S70V[0x4];                                   // 0x65BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     CallFunc_Array_Get_Item6;                                // 0x65C0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_IntInt_ReturnValue5;                       // 0x65C8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_O4BF[0x7];                                   // 0x65C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimitiveComponent*                                 K2Node_DynamicCast_AsPrimitiveComponent;                 // 0x65D0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast10_CastSuccess;                        // 0x65D8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DHFZ[0x3];                                   // 0x65D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Temp_int_Variable3;                                      // 0x65DC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            CallFunc_Array_Get_Item7;                                // 0x65E0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue18;                          // 0x65E8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_LessEqual_IntInt_ReturnValue3;                  // 0x65E9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8GKR[0x2];                                   // 0x65EA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue14;                       // 0x65EC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue2;                 // 0x65F0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SPBL[0x3];                                   // 0x65F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    K2Node_CustomEvent_ExtraCharacterLevel;                  // 0x65F4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            CallFunc_SpawnEmitterAttached_ReturnValue2;              // 0x65F8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		ENetworkModeResult                                         CallFunc_IsRunningOnServer_OutNetworkMode;               // 0x6600(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchEnum_CmpSuccess;                            // 0x6601(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue3;                 // 0x6602(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue19;                          // 0x6603(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsLocallyControlledByPlayer_ReturnValue5;       // 0x6604(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RABF[0x3];                                   // 0x6605(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Subtract_FloatFloat_ReturnValue;                // 0x6608(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NotEqual_ClassClass_ReturnValue;                // 0x660C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NotEqual_ClassClass_ReturnValue2;               // 0x660D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NotEqual_ClassClass_ReturnValue3;               // 0x660E(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue4;                 // 0x660F(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NotEqual_ClassClass_ReturnValue4;               // 0x6610(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SI5L[0x3];                                   // 0x6611(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue2;               // 0x6614(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue20;                          // 0x6620(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsLocallyControlledByPlayer_ReturnValue6;       // 0x6621(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XU92[0x2];                                   // 0x6622(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Subtract_FloatFloat_ReturnValue2;               // 0x6624(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Subtract_FloatFloat_ReturnValue3;               // 0x6628(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_K2_GetComponentLocation_ReturnValue;            // 0x662C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Subtract_VectorVector_ReturnValue;              // 0x6638(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Normal_ReturnValue;                             // 0x6644(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue3;               // 0x6650(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_Conv_VectorToRotator_ReturnValue;               // 0x665C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Subtract_VectorVector_ReturnValue2;             // 0x6668(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Normal_ReturnValue2;                            // 0x6674(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue5;                 // 0x6680(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue21;                          // 0x6681(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue4;                // 0x6682(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ILCF[0x1];                                   // 0x6683(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_SelectFloat_ReturnValue3;                       // 0x6684(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsLocallyControlledByPlayer_ReturnValue7;       // 0x6688(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9CQX[0x3];                                   // 0x6689(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Add_FloatFloat_ReturnValue;                     // 0x668C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Add_FloatFloat_ReturnValue2;                    // 0x6690(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_K2_IsTimerActive_ReturnValue3;                  // 0x6694(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue6;                 // 0x6695(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue7;                 // 0x6696(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue8;                 // 0x6697(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsPlayingCompanionReaction_ReturnValue2;        // 0x6698(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsPlayingCompanionReaction_ReturnValue3;        // 0x6699(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchEnum2_CmpSuccess;                           // 0x669A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchEnum3_CmpSuccess;                           // 0x669B(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Multiply_VectorFloat_ReturnValue;               // 0x669C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UGameInstance*                                       CallFunc_GetGameInstance_ReturnValue;                    // 0x66A8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Add_VectorVector_ReturnValue;                   // 0x66B0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FZ3F[0x4];                                   // 0x66BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UShooterGameInstance*                                K2Node_DynamicCast_AsShooterGameInstance;                // 0x66C0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast11_CastSuccess;                        // 0x66C8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_58CL[0x7];                                   // 0x66C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLocalizedSoundCueEntry>                     K2Node_CustomEvent_Localized2;                           // 0x66D0(0x0010) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       K2Node_CustomEvent_play_anim_textures2;                  // 0x66E0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VTJ8[0x7];                                   // 0x66E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              K2Node_CustomEvent_AssetPath2;                           // 0x66E8(0x0010) ZeroConstructor, Transient, DuplicateTransient
		class UObject*                                             K2Node_CustomEvent_LoadedAsset2;                         // 0x66F8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class USoundWave*                                          K2Node_DynamicCast_AsSoundWave;                          // 0x6700(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast12_CastSuccess;                        // 0x6708(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_78KW[0x7];                                   // 0x6709(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundCue*                                           K2Node_DynamicCast_AsSoundCue;                           // 0x6710(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast13_CastSuccess;                        // 0x6718(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0KKK[0x7];                                   // 0x6719(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLocalizedSoundCueEntry                             CallFunc_GetLocaleSpecificAudio_OutLocalizedAudio;       // 0x6720(0x0020) Transient, DuplicateTransient
		bool                                                       CallFunc_GetLocaleSpecificAudio_ReturnValue;             // 0x6740(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_StrStr_ReturnValue;                  // 0x6741(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1D0L[0x6];                                   // 0x6742(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CallFunc_FindLocalizedVersionOfFilename_ReturnValue;     // 0x6748(0x0010) ZeroConstructor, Transient, DuplicateTransient
		class FString                                              CallFunc_Concat_StrStr_ReturnValue;                      // 0x6758(0x0010) ZeroConstructor, Transient, DuplicateTransient
		class AShooterHUD*                                         CallFunc_GetMyPlayerHUD_ReturnValue;                     // 0x6768(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetWorldLocation_ReturnValue;                   // 0x6770(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue22;                          // 0x677C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue23;                          // 0x677D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue9;                 // 0x677E(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_U5HF[0x1];                                   // 0x677F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UShooterGameUserSettings*                            CallFunc_GetShooterGameUserSettings_ReturnValue3;        // 0x6780(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Array_Length_ReturnValue11;                     // 0x6788(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              CallFunc_Conv_IntToByte_ReturnValue;                     // 0x678C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_IntInt_ReturnValue6;                       // 0x678D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_GreaterEqual_ByteByte_ReturnValue;              // 0x678E(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_U3T5[0x1];                                   // 0x678F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            CallFunc_Array_Get_Item8;                                // 0x6790(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue24;                          // 0x6798(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GC5T[0x3];                                   // 0x6799(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Array_Length_ReturnValue12;                     // 0x679C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_IntInt_ReturnValue5;                    // 0x67A0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue10;                // 0x67A1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A0Q6[0x2];                                   // 0x67A2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Array_Length_ReturnValue13;                     // 0x67A4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_IntInt_ReturnValue7;                       // 0x67A8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9C0S[0x7];                                   // 0x67A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            CallFunc_Array_Get_Item9;                                // 0x67B0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue25;                          // 0x67B8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J8T1[0x3];                                   // 0x67B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Array_Length_ReturnValue14;                     // 0x67BC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_IntInt_ReturnValue6;                    // 0x67C0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3G6H[0x3];                                   // 0x67C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Array_Length_ReturnValue15;                     // 0x67C4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_IntInt_ReturnValue7;                    // 0x67C8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MYQR[0x7];                                   // 0x67C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue4;                       // 0x67D0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class ADayCycleManager*                                    CallFunc_GetDayCycleManager_ReturnValue;                 // 0x67D8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue26;                          // 0x67E0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LEYY[0x3];                                   // 0x67E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Array_Length_ReturnValue16;                     // 0x67E4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue11;                // 0x67E8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YEHV[0x3];                                   // 0x67E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Array_Length_ReturnValue17;                     // 0x67EC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_IntInt_ReturnValue8;                       // 0x67F0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SKHT[0x7];                                   // 0x67F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCompanionReactionData                              CallFunc_Array_Get_Item10;                               // 0x67F8(0x00A0) Transient, DuplicateTransient
		bool                                                       CallFunc_IsValid_ReturnValue27;                          // 0x6898(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue28;                          // 0x6899(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsLocallyControlledByPlayer_ReturnValue8;       // 0x689A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7JCX[0x1];                                   // 0x689B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Array_Length_ReturnValue18;                     // 0x689C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_IntInt_ReturnValue8;                    // 0x68A0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue29;                          // 0x68A1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue30;                          // 0x68A2(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue31;                          // 0x68A3(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_K2_GetComponentRotation_ReturnValue;            // 0x68A4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Pitch;                                 // 0x68B0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Yaw;                                   // 0x68B4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Roll;                                  // 0x68B8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_MakeRot_ReturnValue;                            // 0x68BC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue32;                          // 0x68C8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_SetActorRotation_ReturnValue;                   // 0x68C9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue12;                // 0x68CA(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NotEqual_ClassClass_ReturnValue5;               // 0x68CB(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue33;                          // 0x68CC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_65BY[0x3];                                   // 0x68CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalBuff*                                         CallFunc_GetBuff_ReturnValue;                            // 0x68D0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalBuff*                                         CallFunc_StaticAddBuff_ReturnValue;                      // 0x68D8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue34;                          // 0x68E0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue35;                          // 0x68E1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_P5T6[0x6];                                   // 0x68E2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            CallFunc_GetBuffPostprocessMaterial_ReturnValue;         // 0x68E8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            CallFunc_GetBuffPostprocessMaterial_ReturnValue2;        // 0x68F0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue36;                          // 0x68F8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue37;                          // 0x68F9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue13;                // 0x68FA(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue14;                // 0x68FB(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Array_AddUnique_ReturnValue;                    // 0x68FC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Array_AddUnique_ReturnValue2;                   // 0x6900(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue38;                          // 0x6904(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsLocallyControlledByPlayer_ReturnValue9;       // 0x6905(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue39;                          // 0x6906(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsLocallyControlledByPlayer_ReturnValue10;      // 0x6907(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UGameInstance*                                       CallFunc_GetGameInstance_ReturnValue2;                   // 0x6908(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UShooterGameInstance*                                K2Node_DynamicCast_AsShooterGameInstance2;               // 0x6910(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast14_CastSuccess;                        // 0x6918(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZYUF[0x7];                                   // 0x6919(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              K2Node_CustomEvent_AssetPath;                            // 0x6920(0x0010) ZeroConstructor, Transient, DuplicateTransient
		class UObject*                                             K2Node_CustomEvent_LoadedAsset;                          // 0x6930(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class FString                                              CallFunc_GetTwoLetterISOLanguageName_ReturnValue;        // 0x6938(0x0010) ZeroConstructor, Transient, DuplicateTransient
		class FString                                              CallFunc_GetTwoLetterISOLanguageName_ReturnValue2;       // 0x6948(0x0010) ZeroConstructor, Transient, DuplicateTransient
		TArray<struct FLocalizedSoundWaveAnimTexturePairArrays>    K2Node_CustomEvent_Localized;                            // 0x6958(0x0010) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       K2Node_CustomEvent_Play_Anim_Textures;                   // 0x6968(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FFMH[0x7];                                   // 0x6969(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGameInstance*                                       CallFunc_GetGameInstance_ReturnValue3;                   // 0x6970(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UShooterGameInstance*                                K2Node_DynamicCast_AsShooterGameInstance3;               // 0x6978(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast15_CastSuccess;                        // 0x6980(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_M4W6[0x7];                                   // 0x6981(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLocalizedSoundWaveAnimTexturePairArrays            CallFunc_GetLocaleSpecificSoundWaveAnimTexturePairArrays_OutLocalizedAudio; // 0x6988(0x0020) Transient, DuplicateTransient
		bool                                                       CallFunc_GetLocaleSpecificSoundWaveAnimTexturePairArrays_FoundLocalizedSoundWavesForThisLanguage; // 0x69A8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_GetLocaleSpecificSoundWaveAnimTexturePairArrays_ReturnValue; // 0x69A9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       Temp_bool_Has_Been_Initd_Variable;                       // 0x69AA(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0T59[0x1];                                   // 0x69AB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Array_Length_ReturnValue19;                     // 0x69AC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Subtract_IntInt_ReturnValue2;                   // 0x69B0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_IntInt_ReturnValue9;                    // 0x69B4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XJUZ[0x3];                                   // 0x69B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_RandomIntegerInRange_ReturnValue;               // 0x69B8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FNO8[0x4];                                   // 0x69BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAudioComponent*                                     CallFunc_PlaySoundAttached_ReturnValue;                  // 0x69C0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class USoundWave*                                          K2Node_DynamicCast_AsSoundWave2;                         // 0x69C8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast16_CastSuccess;                        // 0x69D0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UFES[0x7];                                   // 0x69D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundCue*                                           K2Node_DynamicCast_AsSoundCue2;                          // 0x69D8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast17_CastSuccess;                        // 0x69E0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BG6O[0x7];                                   // 0x69E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundCue*                                           K2Node_DynamicCast_AsSoundCue3;                          // 0x69E8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast18_CastSuccess;                        // 0x69F0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue5;                // 0x69F1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NotEqual_StrStr_ReturnValue;                    // 0x69F2(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       Temp_bool_IsClosed_Variable;                             // 0x69F3(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_W0TU[0x4];                                   // 0x69F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoundWaveAnimTexturePairs                          CallFunc_Array_Get_Item11;                               // 0x69F8(0x0020) Transient, DuplicateTransient
		class FString                                              CallFunc_FindLocalizedVersionOfFilename_ReturnValue2;    // 0x6A18(0x0010) ZeroConstructor, Transient, DuplicateTransient
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate;                    // 0x6A28(0x0010) ZeroConstructor, Transient, DuplicateTransient, NoDestructor
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate2;                   // 0x6A38(0x0010) ZeroConstructor, Transient, DuplicateTransient, NoDestructor
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate3;                   // 0x6A48(0x0010) ZeroConstructor, Transient, DuplicateTransient, NoDestructor
		float                                                      CallFunc_Subtract_FloatFloat_ReturnValue4;               // 0x6A58(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_R1EQ[0x4];                                   // 0x6A5C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CallFunc_find_associated_anim_texture_from_localized_sound_wave_pairs_anim_texture_path; // 0x6A60(0x0010) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue6;                // 0x6A70(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NotEqual_StrStr_ReturnValue2;                   // 0x6A71(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KA82[0x6];                                   // 0x6A72(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGameInstance*                                       CallFunc_GetGameInstance_ReturnValue4;                   // 0x6A78(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UShooterGameInstance*                                K2Node_DynamicCast_AsShooterGameInstance4;               // 0x6A80(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast19_CastSuccess;                        // 0x6A88(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6BWZ[0x7];                                   // 0x6A89(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     K2Node_CustomEvent_particleTemplate;                     // 0x6A90(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AActor*                                              K2Node_CustomEvent_EndPointActor;                        // 0x6A98(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             K2Node_CustomEvent_Offset;                               // 0x6AA0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Subtract_FloatFloat_ReturnValue5;               // 0x6AAC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue40;                          // 0x6AB0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsLocallyControlledByPlayer_ReturnValue11;      // 0x6AB1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EL4J[0x2];                                   // 0x6AB2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Ease_ReturnValue;                               // 0x6AB4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Ease_ReturnValue2;                              // 0x6AB8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate4;                   // 0x6ABC(0x0010) ZeroConstructor, Transient, DuplicateTransient, NoDestructor
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate5;                   // 0x6ACC(0x0010) ZeroConstructor, Transient, DuplicateTransient, NoDestructor
		bool                                                       CallFunc_Greater_IntInt_ReturnValue10;                   // 0x6ADC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_IntInt_ReturnValue11;                   // 0x6ADD(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_IntInt_ReturnValue12;                   // 0x6ADE(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2IGQ[0x1];                                   // 0x6ADF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              CallFunc_GetOwner_ReturnValue;                           // 0x6AE0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterCharacter*                                   K2Node_DynamicCast_AsShooterCharacter5;                  // 0x6AE8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast20_CastSuccess;                        // 0x6AF0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_E0EN[0x3];                                   // 0x6AF1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue4;               // 0x6AF4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_K2_SetActorLocation_ReturnValue;                // 0x6B00(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XVW9[0x7];                                   // 0x6B01(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              CallFunc_GetOwner_ReturnValue2;                          // 0x6B08(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterCharacter*                                   K2Node_DynamicCast_AsShooterCharacter6;                  // 0x6B10(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast21_CastSuccess;                        // 0x6B18(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TZMZ[0x7];                                   // 0x6B19(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              CallFunc_GetOwner_ReturnValue3;                          // 0x6B20(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_K2_SetActorLocation_ReturnValue2;               // 0x6B28(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C2EV[0x7];                                   // 0x6B29(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterCharacter*                                   K2Node_DynamicCast_AsShooterCharacter7;                  // 0x6B30(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast22_CastSuccess;                        // 0x6B38(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KM1H[0x7];                                   // 0x6B39(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APlayerController*                                   CallFunc_GetOwnerController_ReturnValue3;                // 0x6B40(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterPlayerController*                            K2Node_DynamicCast_AsShooterPlayerController3;           // 0x6B48(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast23_CastSuccess;                        // 0x6B50(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_NewValue2;                            // 0x6B51(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_NewValue;                             // 0x6B52(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4S98[0x5];                                   // 0x6B53(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AGameState*                                          CallFunc_GetGameState_ReturnValue;                       // 0x6B58(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterGameState*                                   K2Node_DynamicCast_AsShooterGameState;                   // 0x6B60(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast24_CastSuccess;                        // 0x6B68(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_BoolBool_ReturnValue3;               // 0x6B69(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JPPH[0x6];                                   // 0x6B6A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue5;                       // 0x6B70(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		TArray<class FName>                                        K2Node_MakeArray_Array;                                  // 0x6B78(0x0010) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       CallFunc_IsValid_ReturnValue41;                          // 0x6B88(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue42;                          // 0x6B89(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsLocallyControlledByPlayer_ReturnValue12;      // 0x6B8A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JNY3[0x1];                                   // 0x6B8B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_RandomFloatInRange_ReturnValue;                 // 0x6B8C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_PlayCompanionMontage_ReturnValue2;              // 0x6B90(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CB7V[0x4];                                   // 0x6B94(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UShooterGameUserSettings*                            CallFunc_GetShooterGameUserSettings_ReturnValue4;        // 0x6B98(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_FloatFloat_ReturnValue;              // 0x6BA0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue43;                          // 0x6BA1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_FloatFloat_ReturnValue2;                   // 0x6BA2(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue;                          // 0x6BA3(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J9FI[0x4];                                   // 0x6BA4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UShooterGameUserSettings*                            CallFunc_GetShooterGameUserSettings_ReturnValue5;        // 0x6BA8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsPlayingCompanionReaction_ReturnValue4;        // 0x6BB0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              CallFunc_Conv_IntToByte_ReturnValue2;                    // 0x6BB1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		ENetworkModeResult                                         CallFunc_CanRunCosmeticEvents_OutNetworkMode;            // 0x6BB2(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ByteByte_ReturnValue;                // 0x6BB3(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchEnum4_CmpSuccess;                           // 0x6BB4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue44;                          // 0x6BB5(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsLocallyControlledByPlayer_ReturnValue13;      // 0x6BB6(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_O49A[0x1];                                   // 0x6BB7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              CallFunc_GetOwner_ReturnValue4;                          // 0x6BB8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalCharacter*                                    K2Node_DynamicCast_AsPrimalCharacter;                    // 0x6BC0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast25_CastSuccess;                        // 0x6BC8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_063G[0x3];                                   // 0x6BC9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Array_Length_ReturnValue20;                     // 0x6BCC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FCompanionReactionData                              CallFunc_Array_Get_Item12;                               // 0x6BD0(0x00A0) Transient, DuplicateTransient
		bool                                                       CallFunc_Less_IntInt_ReturnValue9;                       // 0x6C70(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QMBE[0x3];                                   // 0x6C71(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Array_Length_ReturnValue21;                     // 0x6C74(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FLocalizedSoundWaveAnimTexturePairArrays            CallFunc_Array_Get_Item13;                               // 0x6C78(0x0020) Transient, DuplicateTransient
		bool                                                       CallFunc_Less_IntInt_ReturnValue10;                      // 0x6C98(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue;                         // 0x6C99(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4406[0x2];                                   // 0x6C9A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Array_Length_ReturnValue22;                     // 0x6C9C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_IntInt_ReturnValue11;                      // 0x6CA0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4TGW[0x7];                                   // 0x6CA1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoundWaveAnimTexturePairs                          CallFunc_Array_Get_Item14;                               // 0x6CA8(0x0020) Transient, DuplicateTransient
		bool                                                       CallFunc_BooleanAND_ReturnValue2;                        // 0x6CC8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SNGN[0x7];                                   // 0x6CC9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CallFunc_FindLocalizedVersionOfFilename_ReturnValue3;    // 0x6CD0(0x0010) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       CallFunc_NotEqual_StriStri_ReturnValue;                  // 0x6CE0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FHB2[0x7];                                   // 0x6CE1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        K2Node_MakeArray_Array2;                                 // 0x6CE8(0x0010) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       CallFunc_Should_Force_Play_Post_Intro_Reactions_ReturnValue; // 0x6CF8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8LBM[0x7];                                   // 0x6CF9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CallFunc_GetTwoLetterISOLanguageName_ReturnValue3;       // 0x6D00(0x0010) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       CallFunc_NotEqual_StriStri_ReturnValue2;                 // 0x6D10(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NotEqual_StriStri_ReturnValue3;                 // 0x6D11(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NotEqual_StriStri_ReturnValue4;                 // 0x6D12(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KPAP[0x1];                                   // 0x6D13(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                CallFunc_Conv_StringToName_ReturnValue;                  // 0x6D14(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_U1SG[0x4];                                   // 0x6D1C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      CallFunc_FindMissionsMatchingTag_Missions;               // 0x6D20(0x0010) ZeroConstructor, Transient, DuplicateTransient
		class APrimalBuff_MissionData*                             CallFunc_GetMissionDataForCharacter_ReturnValue;         // 0x6D30(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Array_Length_ReturnValue23;                     // 0x6D38(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue45;                          // 0x6D3C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_IntInt_ReturnValue13;                   // 0x6D3D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HYCU[0x2];                                   // 0x6D3E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              CallFunc_Array_Get_Item15;                               // 0x6D40(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue5;               // 0x6D48(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_85XF[0x4];                                   // 0x6D54(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             CallFunc_GetClassDefaultObject_ReturnValue;              // 0x6D58(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class FName                                                CallFunc_GetBiomeMissionTag_ReturnValue;                 // 0x6D60(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AMissionType_GlitchCounter_Base_C*                   K2Node_DynamicCast_AsMissionType_GlitchCounter_Base_C;   // 0x6D68(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast26_CastSuccess;                        // 0x6D70(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_64Q8[0x3];                                   // 0x6D71(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                CallFunc_Array_Get_Item16;                               // 0x6D74(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue46;                          // 0x6D7C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Array_IsValidIndex_ReturnValue5;                // 0x6D7D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NOHH[0x2];                                   // 0x6D7E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AGameMode*                                           CallFunc_GetGameMode_ReturnValue;                        // 0x6D80(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsMissionComplete_ReturnValue;                  // 0x6D88(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6N87[0x7];                                   // 0x6D89(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterGameMode*                                    K2Node_DynamicCast_AsShooterGameMode;                    // 0x6D90(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast27_CastSuccess;                        // 0x6D98(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XCU5[0x3];                                   // 0x6D99(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                K2Node_CustomEvent_EventCustomName;                      // 0x6D9C(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_75I9[0x4];                                   // 0x6DA4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              K2Node_CustomEvent_EventCustomString;                    // 0x6DA8(0x0010) ZeroConstructor, Transient, DuplicateTransient
		class AActor*                                              K2Node_CustomEvent_InstigatorActor;                      // 0x6DB8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class FString                                              CallFunc_Split_LeftS;                                    // 0x6DC0(0x0010) ZeroConstructor, Transient, DuplicateTransient
		class FString                                              CallFunc_Split_RightS;                                   // 0x6DD0(0x0010) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       CallFunc_Split_ReturnValue;                              // 0x6DE0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_NameName_ReturnValue;                // 0x6DE1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GRP7[0x6];                                   // 0x6DE2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AGameMode*                                           CallFunc_GetGameMode_ReturnValue2;                       // 0x6DE8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterGameMode*                                    K2Node_DynamicCast_AsShooterGameMode2;                   // 0x6DF0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast28_CastSuccess;                        // 0x6DF8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsEditor_ReturnValue;                           // 0x6DF9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ROZA[0x6];                                   // 0x6DFA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterPlayerController*                            K2Node_DynamicCast_AsShooterPlayerController4;           // 0x6E00(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast29_CastSuccess;                        // 0x6E08(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NotEqual_ObjectObject_ReturnValue2;             // 0x6E09(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsPlayerAllowedToCheat_ReturnValue;             // 0x6E0A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4WXE[0x1];                                   // 0x6E0B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Array_Add_NewItem_RefProperty;                  // 0x6E0C(0x0004) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData, NoDestructor

	public:
		void hardfixmissinggen1explorernotes();
		void GettotalGlitchMissionCompleteCount(class AShooterCharacter* Player, int32_t* Count);
		void GetGlitchMissionCompleteCount(const class FName& MissionTag, class AShooterCharacter* Player, int32_t* Count);
		void RandomlyPickOrbitLocationTimer();
		bool ShouldForcePlayPostIntroReactions();
		void IsPlayerControllingValidPrimalChar(bool* bResult);
		void callfinishonvrworld();
		void setplayercameramanagerondeathvfxmanager();
		void setupintroanimmasking();
		void destroyintroteleportsphere();
		void spawnpostmassteleportvfx(const struct FVector& Location);
		void spawnmassteleportvfx();
		void PassMassTeleportEventtoVfxAndDestroyref(EMassTeleportState State);
		void cancelmassteleportvfx();
		void passplayerstoteleportvfx(TArray<class FString>* teleportingplayernames);
		void UpdateSpawnedBeamParticle(class UParticleSystem* ParticleTemplate, class AActor* EndPointActor, const struct FVector& Offset);
		void PreTeleportDismount();
		void unmountteleportingplayers(TArray<class APrimalCharacter*>* teleportingplayers);
		void NotifyPlayersThatTheyCantTeleportUnconsiousorDeadDinos();
		void NotifyPlayersThatTheyCantTeleportUnconsiousOrDeadPlayers();
		void PreventGlitchUseSphereCollision();
		void NotifyPlayersThatTheyExceedFinalBossplayerCount();
		void notifyplayersthattheyexceedfinalbosstamecount();
		void findassociatedanimtexturefromlocalizedsoundwavepairs(TArray<struct FLocalizedSoundWaveAnimTexturePairArrays>* Array, const class FString& soundwavepath, class FString* animtexturepath);
		void RecentlyReleasedADS();
		void beginscanrandomlocationorbit();
		void isfixingglitch(bool* isfixing);
		void CheckifYouCanPlayPostIntroHLNATargetAlertMessage();
		void ShowPostIntroMissionAlertMessage();
		void ShowPostIntroHLNATargetAlertMessage();
		void ReactionEqualsReaction(const struct FCompanionReactionData& reaction1, const struct FCompanionReactionData& reaction2, bool* isequal);
		void setupaysncloadedanimtexture(class UObject* InputPin, bool EyeOnly);
		void isplayertpvandhlnaisintheway(const struct FVector& locoverride, bool* isintheway);
		void forceplaymissionalert(const class FString& Title, const class FString& Label, EMissionAlertType alerttype, float displaytime, class UTexture2D* Icon);
		void DelaytoPlayHlnaSubtitlesMoveOutAnim();
		void createdynamicmaterials();
		void ClearAsyncLoadedAudio();
		void IsPlayerOnMission(class AShooterCharacter* Player, bool* RetVal, class AMissionType** activemission);
		void isplayeronmissionandcantteleport(class AShooterCharacter* InputPin, bool* RetVal);
		void NotifyPlayerThatTheyCannotTeleportPlayersOnMission();
		void CollidingwithSomething();
		void BPNotifyOtherBuffDeactivated(class APrimalBuff* OtherBuff);
		bool IsCompanionAbleToMonologue();
		void AwaitingSetOfInitialSpawnIntroAnimTimer();
		void NotifyPlayerThatTheyCannotTeleportLargeDinosToFinalBoss();
		void NotifyPlayerThatTheyCannotTeleportPlayersOnSeatedStructures();
		void TempKeepMovementVolumeUp();
		void SetIntrosphereMaskAmount(float InputPin);
		void MoveCuzInTheWay();
		void shouldhlnamoveawayfromthecamera(bool* _return_);
		void IsProbablyFiring();
		void BPHandleOnStopFire(bool bFromGamepad);
		void RestrictGettingInFrontOfCameraDuringFiringOrAds();
		void StopCompanionEvent();
		void FocusOnRemoteTarget();
		void playfocusedscansfxandvfx();
		void FocusedSelectedRemoteTargetTimeout();
		void playhexagonsfx();
		void OnSpawnHexagons(float OverrideCollectSFXVolume, bool VFXImmediatelyAttracts);
		void OnMadeHexagonPurchase();
		void HLNaMassTeleportTriggertoVRBossBattleFlowTest();
		void findorgetmissiondispatcher(class AMissionDispatcher** AsMissionDispatcher);
		void RemoveCosmeticHLNA();
		void RefreshCompanionColorization();
		void startbossbattle(class UClass* InputPin);
		void startmissionandsetreverseteleports();
		void SetReturnTeleportLocations();
		TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
		void HLNaMassTeleportTriggerToVRBossBattleHard();
		void HLNaMassTeleportTriggerToVRBossBattleMed();
		void HLNaMassTeleportTriggerToVRBossBattleEasy();
		void syncmissioncompletestatus();
		void RestrictSyncMissionCompleteStatus();
		void formatVRbossbattleteleportmultiuseoptions(int32_t RequiredMissions, const class FString& MissionTitle, bool RequiresAllStoryGlitches, class FString* AppendedString, bool* Disabled);
		void Restricted_Timed_Hexagon_Collection();
		void restrictedtimesincelastplayedmovementsounds();
		void Playmovementsound(float Distance);
		void Randomlypickorbitlocation();
		void NotifyPlayerThatTheyCannotTeleportFish();
		void notifyplayerthattheycannotteleportrafts();
		void PlayHLNARespawnAnim();
		void playspawnanim(class UClass* anActorClass, class UAnimMontage* AnimToPlay);
		void SimplePlayLocalizedAudiocue(struct FHLNALocalizedAudioEntry* HLNALocalizedAudioEntry, bool playanimtextures);
		void BPAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject);
		void setallcomponentscustomdepthstencilvalue(int32_t StencilValue, class AActor* Actor);
		bool CanPlayEnvironmentalCompanionReaction(struct FCompanionReactionData* CanPlayReactionData);
		void ServerUpdatePurchasableItems();
		void RestrictedIntervalForCheckingUpdatedHexStorePurchasableItems();
		void PlayHLNAInitialSpawnAnim();
		void Companionisinfirstpersoninaseat(bool* Result);
		void FinishIntroAnim();
		void NotifyHasTamedDino(class UClass* DinoClass);
		void NotifyItemCrafted(class UPrimalItem* anItem);
		void KeepEyeHiddenForEmotes();
		void BuffTickClient(float DeltaTime);
		void ResetDelayBetweenEnvironmentalReactions();
		void CheckRecieveDamageForReactions();
		void ResetRecentDamageRecieved();
		bool BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams);
		void PlayWorldReaction(struct FCompanionReactionData* WithReactionData);
		void IntervaltocheckforHLNAworldreactions();
		void RestrictRandomWorldReactions();
		void CheckCurrentStatusofvariousthingstoreactto();
		void BPInventoryItemUsed(class UObject* InventoryItemObject);
		void BPDeactivated(class AActor* ForInstigator);
		void BPNotifyOtherBuffActivated(class APrimalBuff* OtherBuff);
		void BPNotifyExperienceGained(float ActualExpGained, float ExpectedExpGain, EXPType ExpTypeGained);
		void BPInstigatorDied();
		void BPHandleOnStartFire(bool bFromGamepad);
		void PlayJustAboutToTeleportReaction();
		void FinishedScanDispatcher(class AShooterCharacter* ShooterChar);
		void FinishedScan();
		void PlayScanReactions(const struct FCompanionReactionData& PostScanReaction, float OverrideScanDuration, float* TotalReactionsDuration);
		void CleanUpTeleportVFX();
		void OnMassTeleportEventVFX(EMassTeleportState Event);
		void FindBestTeleportLocation(int32_t selectedcoordinatedirectionindex, int32_t regionindex, class APlayerController* PlayerController, bool onlytestiftheresanyavailable, bool* HasFoundSpot);
		void NotifyDamage(float DamageAmount, class UClass* DamageClass, class AController* EventInstigator, class AActor* TheDamageCauser);
		void SetBestTeleportSpotFromSortedStartPoints(TArray<class AActor*>* Array, bool* abletosetspot);
		void GetBiomeNames(TArray<class FString>* OverridePlayerSpawnRegions);
		struct FVector GetCompanionWorldLocation();
		void GetCurrentOrbitRadius(float* Radius);
		void BPOnOwnerMassTeleportEvent(EMassTeleportState EventState, class APrimalCharacter* TeleportInitiatedByChar);
		void OnMassTeleportEventReceived(EMassTeleportState EventState);
		void HLNaMassTeleport_Cancel();
		void CleanUpMassTeleport();
		void Tick_UpdateCompanionState(float DeltaTime);
		bool BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex);
		void Tick_SearchForMassTeleportChars(bool bIsFinalCheck);
		void BuffTickServer(float DeltaTime);
		void HLNaMassTeleport_Trigger();
		void HLNaMassTeleport_Start(int32_t regionindex, bool TeleportToVRBossBattleeasy, bool TeleportToVRBossBattlemed, bool TeleportToVRBossBattlehard, bool TeleportToVRBossBattleFLOWTEST);
		void GetTeleportationDestinations(TArray<struct FTeleportDestination>* Destinations);
		void GetLookAtPlayerRotation(struct FRotator* Rotation);
		void GetAnimMoveVelocityAxes(struct FVector* VelocityAxes);
		void ShouldBeCompact(bool* Result);
		void DetermineBestTeleportSpot();
		void OnCompanionEventStarted(struct FCompanionEventData* StartingEventData);
		bool CanStartCompanionEvent(class AActor* EventActor, struct FCompanionEventData* WithEventData);
		void OnCompanionReactionPlayed(struct FCompanionReactionData* PlayedReactionData, int32_t UniqueID);
		void SetCompactState(bool bNewCompactState);
		void OnCompanionReactionStopped(struct FCompanionReactionData* StoppedReactionData, int32_t UniqueID);
		bool CanPlayCompanionReaction(struct FCompanionReactionData* CanPlayReactionData);
		void Tick_UpdateHLNaSounds(float DeltaTime);
		void Tick_CompactMode();
		void IsCurrentEventMonalogue(bool* Result);
		void CalculateFakeVelocityLagOffset(float DeltaTime, struct FVector* VelocityLag);
		void CalculateHLNaHeightOffset(float DeltaTime, struct FVector* HeightOffset_Base, struct FVector* HeightOffset_WithBob, struct FVector* BobOffset);
		void IsAttachedToCamera(bool* bResult);
		void IsAttachedToPlayer(bool* bResult);
		void Tick_CompanionEvents(float DeltaTime);
		bool IsCompanionReadyToMonologue();
		void ConvertTargetRelOffsetToWorld(struct FVector* WorldLocation);
		void IsAttachedToCamera_Pure(bool* bResult);
		void UpdateHLNaTargetRelLocFPV(const struct FVector& WithWorldLocation, float DeltaTime);
		void CalculateHLNaOrbitDir(float DeltaTime, struct FVector* OrbitDir);
		void GetScreenPercentageWorldLocation(const struct FVector2D& Percentage, float ProjectionDist, struct FVector* WorldLocation);
		void TickUpdateHLNaEventMovement(float DeltaTime);
		void CalculateHLNaTargetWorldRotation(struct FRotator* TargetWorldRotation);
		void CalculateHLNaTargetWorldLocation(float DeltaTime, struct FVector* TargetWorldLocation);
		void OnPlayerDeath(class APrimalCharacter* DiedCharacter);
		void Tick_UpdateCompanionTransform(float DeltaTime);
		void PlayParallelEmoteMontage(class UAnimMontage** PlayerEmote, bool* bSuccess);
		void OnPlayerPlayAnimation(class UAnimMontage* PlayedAnim, float AnimDuration, const class FName& StartSectionName);
		void OnCompanionStateChanged();
		void SoftSetHLNaLocationRelative(const struct FVector& NewLocation);
		void GetMeshRotationInterpSpeed(float* Speed);
		void SoftSetHLNaRotation(const struct FRotator& NewRotation);
		void GetPlayerVelocity(struct FVector* Velocity);
		void IsAttachedToPlayer_Pure(bool* bResult);
		void PretendWeAreInWorldSpace();
		void OnFoundPoI(struct FPointOfInterestData_ForCompanion* FoundPointData, class AActor* FoundPointActor);
		bool IsPlayerADS();
		void GetMeshLocationInterpSpeed(float* Speed);
		void GetPlayerOrbitOrigin(struct FVector* Origin);
		void InterpHLNaRootToOrigin(float DeltaTime);
		void SoftSetHLNaLocation(const struct FVector& NewLocation);
		void UpdateHLNaAttachment();
		bool IsPlayerLookingAtCompanion();
		void OnSpawnedForPlayer();
		void BPClientDoMultiUse(class APlayerController* ForPC, int32_t ClientUseIndex);
		void UserConstructionScript();
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void Timeline_1__FinishedFunc();
		void Timeline_1__UpdateFunc();
		void Timeline_3__FinishedFunc();
		void Timeline_3__UpdateFunc();
		void Timeline_5__FinishedFunc();
		void Timeline_5__UpdateFunc();
		void Timeline_6__FinishedFunc();
		void Timeline_6__UpdateFunc();
		void Timeline_7__FinishedFunc();
		void Timeline_7__UpdateFunc();
		void delaybeforeintroshatter__FinishedFunc();
		void delaybeforeintroshatter__UpdateFunc();
		void fixedorientationtimeline__FinishedFunc();
		void fixedorientationtimeline__UpdateFunc();
		void ReceiveBeginPlay();
		void Client_OnMassTeleportStarted(const struct FVector& WithPlayerLocation);
		void Client_OnMassTeleportEnded();
		void Client_OnMassTeleportEventReceived(EMassTeleportState EventState);
		void Multi_UpdateTeleportingChars(TArray<class APrimalCharacter*>* NewTeleportCharsList);
		void updateteleportingcharactersvfx();
		void Multi_OnMassTeleportEvent(EMassTeleportState EventState);
		void FresnelFlash(const struct FLinearColor& Color);
		void ShowHexagonConversionShoponClient();
		void postteleportreaction();
		void playhexagonabsorbanim();
		void PlayScanningSFXandVFX();
		void PlayPostScanReaction(float ScanDuration, const struct FCompanionReactionData& PostScanReaction);
		void DelayandReacttoShotEvent();
		void ServerReactToShotEvent();
		void tryplayfriendlyfirereaction(bool isdead);
		void tryplayattackedopponentreaction(bool isdead);
		void tryplaycreaturealmostdead();
		void ReactToEquippingLowDurabilityWeapon();
		void Client_ReactToCraftedItem(const class FString& ItemName);
		void BindDinoDeathReaction(class APrimalDinoCharacter* riddendino);
		void TryHLNAEnvironmentalReaction(const struct FCompanionReactionData& reaction);
		void RiddenDinoDiedReaction(class APrimalCharacter* DiedCharacter);
		void UpdatePurchasableItemStateandupdatestoreonclient(int32_t StoreItemIndex, bool NewIndexValue);
		void DelayandDisableItemVisibilityInStore();
		void introteleportmaterials();
		void forcesethlnalocationandrotation(const struct FVector& Location, const struct FRotator& Rotation);
		void fadeawayintroPPmask();
		void PrimalCharacterNotifyLevelUp(int32_t ExtraCharacterLevel);
		void ReactToPlayerLevelUp();
		void delayandscan();
		void TellClientToReactWithHlnaAfterRespawn();
		void delaystartVRmissioneasy();
		void delaystartVRmissionmed();
		void delaystartVRmissionhard();
		void fadeinaudiocomp();
		void fadeoutaudiocomp();
		void delaystartvrmissionflowtest();
		void movehlnatofocusedtargetfortooltip();
		void startloopingscans();
		void stoploopingscans();
		void keeploopingscans();
		void SimpleLoadAsyncSoundCue(TArray<struct FLocalizedSoundCueEntry>* Localized, bool playanimtextures);
		void AsyncAssetLoadedDelegate__ExplorerNoteAudio(const class FString& AssetPath, class UObject* LoadedAsset);
		void playintroreaction();
		void ignorerespawnreaction();
		void prematurelycancelintrostuff();
		void finishedloadingasyncloadedanimtexture(const class FString& AssetPath, class UObject* LoadedAsset);
		void SimpleLoadAsyncSoundWave(TArray<struct FLocalizedSoundWaveAnimTexturePairArrays>* Localized, bool playanimtextures);
		void ResetHexTimer();
		void Multi_UpdateSpawnedBeamParticle(class UParticleSystem* ParticleTemplate, class AActor* EndPointActor, const struct FVector& Offset);
		void Server_HasStartedGen2Intro();
		void ClientGen2IntroFinished();
		void ClientGen2IntroStart();
		void LevelNotifyGen2IntroFinished();
		void NotifyServerIntroFinished();
		void LevelCheatSetGen2IntroPlaying(bool NewValue);
		void NotifyServerCheatSetGen2IntroPlaying(bool NewValue);
		void delayplaydeathline();
		void OnActorCustomEvent_Event(const class FName& EventCustomName, const class FString& EventCustomString, class AActor* InstigatorActor);
		void ExecuteUbergraph_Buff_Companion_HLNA(int32_t EntryPoint);
		void FinishedScanDispatcher__DelegateSignature(class AShooterCharacter* ShooterChar);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
