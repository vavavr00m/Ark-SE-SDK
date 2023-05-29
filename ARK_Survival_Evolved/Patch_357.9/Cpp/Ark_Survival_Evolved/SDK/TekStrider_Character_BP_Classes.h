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
	 * BlueprintGeneratedClass TekStrider_Character_BP.TekStrider_Character_BP_C
	 * Size -> 0x1040 (FullSize[0x32C8] - InheritedSize[0x2288])
	 */
	class ATekStrider_Character_BP_C : public ADino_Character_BP_C
	{
	public:
		class UBoxComponent*                                       PlatformSaddleBuildArea;                                 // 0x2288(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            HackFailVFX;                                             // 0x2290(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USceneComponent*                                     Scene3;                                                  // 0x2298(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            HackSuccessVFX;                                          // 0x22A0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USceneComponent*                                     Scene2;                                                  // 0x22A8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            CompletedHackVFX;                                        // 0x22B0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USceneComponent*                                     Scene1;                                                  // 0x22B8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USceneComponent*                                     attachedtransmitterlocation;                             // 0x22C0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USceneComponent*                                     tekbedlocation;                                          // 0x22C8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USkeletalMeshComponent*                              InvisibleSaddle;                                         // 0x22D0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USkeletalMeshComponent*                              platformskeletalmesh;                                    // 0x22D8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            TransmitterIsActiveVFX;                                  // 0x22E0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            TransmitterActivateVFX;                                  // 0x22E8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            resourcesuckvfxtrees;                                    // 0x22F0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            resourcesuckvfxrocks;                                    // 0x22F8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            ParticleSystem11;                                        // 0x2300(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USphereComponent*                                    HackingSpot19;                                           // 0x2308(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            ParticleSystem10;                                        // 0x2310(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USphereComponent*                                    HackingSpot18;                                           // 0x2318(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            ParticleSystem12;                                        // 0x2320(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USphereComponent*                                    HackingSpot17;                                           // 0x2328(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            ParticleSystem8;                                         // 0x2330(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USphereComponent*                                    HackingSpot16;                                           // 0x2338(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            ParticleSystem7;                                         // 0x2340(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USphereComponent*                                    HackingSpot15;                                           // 0x2348(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            ParticleSystem9;                                         // 0x2350(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USphereComponent*                                    HackingSpot14;                                           // 0x2358(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            ParticleSystem6;                                         // 0x2360(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USphereComponent*                                    HackingSpot13;                                           // 0x2368(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            ParticleSystem5;                                         // 0x2370(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USphereComponent*                                    HackingSpot12;                                           // 0x2378(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            ParticleSystem4;                                         // 0x2380(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USphereComponent*                                    HackingSpot11;                                           // 0x2388(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            ParticleSystem3;                                         // 0x2390(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USphereComponent*                                    HackingSpot10;                                           // 0x2398(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            ParticleSystem2;                                         // 0x23A0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USphereComponent*                                    HackingSpot09;                                           // 0x23A8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            ParticleSystem1;                                         // 0x23B0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USphereComponent*                                    HackingSpot08;                                           // 0x23B8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            hackinteractlight7;                                      // 0x23C0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USphereComponent*                                    HackInteractSphere7;                                     // 0x23C8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            hackinteractlight6;                                      // 0x23D0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USphereComponent*                                    HackInteractSphere6;                                     // 0x23D8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            hackinteractlight5;                                      // 0x23E0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USphereComponent*                                    HackInteractSphere5;                                     // 0x23E8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            hackinteractlight4;                                      // 0x23F0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USphereComponent*                                    HackInteractSphere4;                                     // 0x23F8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            hackinteractlight3;                                      // 0x2400(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USphereComponent*                                    HackInteractSphere3;                                     // 0x2408(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            hackinteractlight2;                                      // 0x2410(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USphereComponent*                                    HackInteractSphere2;                                     // 0x2418(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            hackinteractlight1;                                      // 0x2420(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USphereComponent*                                    HackInteractSphere1;                                     // 0x2428(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            hackinteractlight0;                                      // 0x2430(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USphereComponent*                                    HackInteractSphere0;                                     // 0x2438(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USkeletalMeshComponent*                              BedSaddle;                                               // 0x2440(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UDinoCharacterStatusComponent_BP_TekStrider_C*       DinoCharacterStatus_BP_TekStrider_C1;                    // 0x2448(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_0_NewTrack_0_CDCDF48B4DA72C7C4AF2CB84FF8CED2D;  // 0x2450(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         Timeline_0__Direction_CDCDF48B4DA72C7C4AF2CB84FF8CED2D;  // 0x2454(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BLGL[0x3];                                   // 0x2455(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x2458(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       HasAttachmentThatRequiresAiming;                         // 0x2460(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EY0I[0x7];                                   // 0x2461(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnStructurePlacedOnSaddle;                               // 0x2468(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UClass*                                              chargeManagerBuffClass;                                  // 0x2478(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class APrimalBuff*                                         chargeManagerBuff;                                       // 0x2480(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isReceiver;                                              // 0x2488(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_234Q[0x3];                                   // 0x2489(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      currentChargeAmount;                                     // 0x248C(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      currentChargeLossPerSecond;                              // 0x2490(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bAutoChargeActive;                                       // 0x2494(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IFCV[0x3];                                   // 0x2495(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      currentMaxCharge;                                        // 0x2498(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_60HN[0x4];                                   // 0x249C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalCharacter*                                    MountedCharcterRef;                                      // 0x24A0(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     ClientLastTimeOfTimerTick;                               // 0x24A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastTimePlayedRecievedChargeAnim;                        // 0x24B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastTimePlayedRecievedMaxChargeAnim;                     // 0x24B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastTimeRecievedCharge;                                  // 0x24C0(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TamedEmitterChargeConsumed;                              // 0x24C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      PassiveChargeToGainPerSecond;                            // 0x24CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      UnTamedPassiveChargeToGainPerSecond;                     // 0x24D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ChargeRegenMultiplier;                                   // 0x24D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      BaseChargeRadius;                                        // 0x24D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ExpectedExtraMaxDamageAsPercent;                         // 0x24DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MaxPossibleRange;                                        // 0x24E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       emitterIsActive;                                         // 0x24E4(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor
		unsigned char                                              UnknownData_0QN7[0x3];                                   // 0x24E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      emitterChargeConsumedPerSecond;                          // 0x24E8(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      chargeEmittedPerSecond;                                  // 0x24EC(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UntamedEmitterChargeConsumed;                            // 0x24F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bCanPlayFullChargeAnim;                                  // 0x24F4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bForceActivateAtMaxCharge;                               // 0x24F5(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V5EJ[0x2];                                   // 0x24F6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeCanPlayRecieveChargeAnimSinceLastRecievingCharge;    // 0x24F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bCanPlayRecChargeAnim;                                   // 0x24FC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OLFI[0x3];                                   // 0x24FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     TimeOfLastTimerTick;                                     // 0x2500(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        ChargeColor;                                             // 0x2508(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bUseChargeColor;                                         // 0x2518(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bHideChargeFloatingHUD;                                  // 0x2519(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8DNC[0x6];                                   // 0x251A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              BedRef;                                                  // 0x2520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FHUDElement                                         ChargeAmountHUDElementTemplate;                          // 0x2528(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      OverwrittenMaxChargeAmount;                              // 0x2678(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ChargeAddedToBatteryPerSec;                              // 0x267C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ridermoverightval;                                       // 0x2680(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RiderMoveForwardVal;                                     // 0x2684(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<float>                                              NumberofAttachmentschancearray;                          // 0x2688(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UClass*>                                      HeadAttachmentClasses;                                   // 0x2698(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              HeadAttachmentWeights;                                   // 0x26A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UClass*>                                      ChestAttachmentClasses;                                  // 0x26B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              ChestAttachmentWeights;                                  // 0x26C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       setheadattachment;                                       // 0x26D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       setchestattachment;                                      // 0x26D9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZJRB[0x6];                                   // 0x26DA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              PlatformSaddle;                                          // 0x26E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       hasspawnedplatformsaddle;                                // 0x26E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DebugCheatUnlimitedCharge;                               // 0x26E9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isholdingcrouch;                                         // 0x26EA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ShouldChargeBatteriesInInventory;                        // 0x26EB(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UBGX[0x4];                                   // 0x26EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              transmitterref;                                          // 0x26F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              attachedbedclass;                                        // 0x26F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              attachedtransmitterclass;                                // 0x2700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsSetToDrainBatteries;                                   // 0x2708(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       ShouldDrainBatteriesInInventory;                         // 0x2709(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y035[0x2];                                   // 0x270A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ChargeDrainedFromBetteryPerSec;                          // 0x270C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ChargeBatteriesPassivelyatFullCharge;                    // 0x2710(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WDV4[0x7];                                   // 0x2711(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MultiuseCopyBatteryChargeText;                           // 0x2718(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              multiusedisablepassivechargingtext;                      // 0x2728(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              multiuseenablepassivechargingtext;                       // 0x2738(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              multiusechangetobatterychargingmodetext;                 // 0x2748(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              multiusedrainfrombatterieschargingmodetext;              // 0x2758(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              multiusedisablebatterydraintext;                         // 0x2768(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              multiuseenablebatterydraintext;                          // 0x2778(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              multiusedisablebatterychargingtext;                      // 0x2788(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              multiuseenablebatterychargingtext;                       // 0x2798(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              multiusenobatterychargetext;                             // 0x27A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              multiusenobatteriestext;                                 // 0x27B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       ShouldTameRegrowFoliage;                                 // 0x27C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5KVG[0x7];                                   // 0x27C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              multiuseenableregrowfoliagetext;                         // 0x27D0(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance
		class FString                                              multiusedisableregrowfoliagetext;                        // 0x27E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       hassetupinv;                                             // 0x27F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J22E[0x3];                                   // 0x27F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    chestattachmentindex;                                    // 0x27F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    headattachmentindex;                                     // 0x27F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T41Q[0x4];                                   // 0x27FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              nofalldamagewhenwalkingoff;                              // 0x2800(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     lastTimeInitiatedTaming;                                 // 0x2808(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              DrumWeapon;                                              // 0x2810(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DebugBypassMissionCountHackingRestriction;               // 0x2818(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XLX8[0x3];                                   // 0x2819(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CurrentCompletedMissions;                                // 0x281C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    totalnumberofmissions;                                   // 0x2820(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QHW3[0x4];                                   // 0x2824(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Missionsstring;                                          // 0x2828(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              beginhackingstring;                                      // 0x2838(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              WanderDistancestring;                                    // 0x2848(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FVector                                             lasttamelocation;                                        // 0x2858(0x000C) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      neededdistancefromlasttamelocation;                      // 0x2864(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AController*                                         tamercontrollerref;                                      // 0x2868(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      affinityPerHackFixedAmount;                              // 0x2870(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FMYC[0x4];                                   // 0x2874(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     nonattachedparticleonhackinghitsuccess;                  // 0x2878(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UParticleSystem*                                     nonattachedparticleonhackinghitfail;                     // 0x2880(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                particleonhackinghitfailsocket;                          // 0x2888(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                particleonhackinghitsuccesssocket;                       // 0x2890(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FallbackTamingTimeRestriction;                           // 0x2898(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CODR[0x4];                                   // 0x289C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              hackingbuff;                                             // 0x28A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UParticleSystem*                                     nonattachedparticleoncompletingahackingattempt;          // 0x28A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FString                                              Tooltipmissionstring;                                    // 0x28B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    leftclickattackindex;                                    // 0x28C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      failedhackDamageRadius;                                  // 0x28C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      failhackbasedamage;                                      // 0x28C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      failedhackimpulse;                                       // 0x28CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              failedhackdamagetype;                                    // 0x28D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    CurrentHackSpotIndex;                                    // 0x28D8(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_N3R1[0x4];                                   // 0x28DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class USceneComponent*>                             HackingInteractionComponents;                            // 0x28E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UParticleSystemComponent*>                    HackingInteractionComponentsLights;                      // 0x28F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      HackingInteractionSpotViewDot;                           // 0x2900(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      viewdistancerequirementtobeconsideredlookingat;          // 0x2904(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             hackinginteractionspotlocationfloatinghudoffset;         // 0x2908(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             lastfloatinghudloc;                                      // 0x2914(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<int32_t>                                            Hackinginteractioncomponentspresetorder;                 // 0x2920(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<bool>                                               hackinginteractioncomponenthaslight;                     // 0x2930(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      distancetoshowhackspots;                                 // 0x2940(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6RWJ[0x4];                                   // 0x2944(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SavedHackingPattern;                                     // 0x2948(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, NativeAccessSpecifierPublic
		struct FLinearColor                                        CanHackParticleColor;                                    // 0x2958(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        CannotHackColor;                                         // 0x2968(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UsesRandomizedHackingPattern;                            // 0x2978(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KM0M[0x7];                                   // 0x2979(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              findflashinglightsstring;                                // 0x2980(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UParticleSystem*                                     hackingparticletemplate;                                 // 0x2990(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      cachedoutupdatedlasthackattemptdistance;                 // 0x2998(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      checkedcurrenttametraveldistance;                        // 0x299C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class FString>                                      TamingLocationsStrings;                                  // 0x29A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       IndicateonMultiusethephysicalLocationofthehackspot;      // 0x29B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       mustbeclosetohackpointstoinitiatehack;                   // 0x29B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_P4YM[0x6];                                   // 0x29B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              mutagelstring;                                           // 0x29B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              initiatehackingstring;                                   // 0x29C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              hackingprogressbarstring;                                // 0x29D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    amountofmutagelininventory;                              // 0x29E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    requiredmutagelcounttotame;                              // 0x29EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UCurveFloat*                                         RequiredMutagelPerLevelCurve;                            // 0x29F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       usecurveforfindingmutagelamountiffalseusemultiplierandpower; // 0x29F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IPZ5[0x3];                                   // 0x29F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      requiredmutagelmultiplier;                               // 0x29FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      requiredmutagelpower;                                    // 0x2A00(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PNDB[0x4];                                   // 0x2A04(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimalItem*                                         lastsavedfinalslotitem;                                  // 0x2A08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ismidattackanim;                                         // 0x2A10(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EW33[0x3];                                   // 0x2A11(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    invaliduseinttostopmultiuse;                             // 0x2A14(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ismoving;                                                // 0x2A18(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_K2WP[0x3];                                   // 0x2A19(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      regularblendouttime;                                     // 0x2A1C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              StriderDestructionEmitter;                               // 0x2A20(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bSkipDestructionEmitter;                                 // 0x2A28(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UseUnboardEjectMode;                                     // 0x2A29(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_K3UJ[0x6];                                   // 0x2A2A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              BuffToGiveRiderOnStriderDeath;                           // 0x2A30(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsDying;                                                 // 0x2A38(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsDoneDying;                                             // 0x2A39(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z2IB[0x6];                                   // 0x2A3A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Murderer;                                                // 0x2A40(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MinPercentOfMaxHealthToPlayHurtAnim;                     // 0x2A48(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    CurrentHarvestCount;                                     // 0x2A4C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    MinHarvestCountbeforepoop;                               // 0x2A50(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    MaxHarvestCountbeforepoop;                               // 0x2A54(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MinPossibleDroppedElementCount;                          // 0x2A58(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      Level88DroppedElementCount;                              // 0x2A5C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             lastresourcesuckinglocation;                             // 0x2A60(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ADCO[0x4];                                   // 0x2A6C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        DeathFallingAnimMontage;                                 // 0x2A70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              fullbodyvfxforhackingsuccess;                            // 0x2A78(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              HackingProgressVFXbuff;                                  // 0x2A80(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                ProgressVFXParamName;                                    // 0x2A88(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UMaterialInstanceDynamic*>                    dynamicmats;                                             // 0x2A90(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		double                                                     LastTimeHackPointSpawnedToHack;                          // 0x2AA0(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      HackStartDelayTamingEffectivenessMult_min;               // 0x2AA8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AffinityPercentLostOnHackFailofcurrentaffinity;          // 0x2AAC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AffinityPercentLostOnHackFailoftotalrequiredaffinity;    // 0x2AB0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       EnableHarvestStone;                                      // 0x2AB4(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       EnableHarvestThatch;                                     // 0x2AB5(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       EnableHarvestWood;                                       // 0x2AB6(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       EnableHarvestMetal;                                      // 0x2AB7(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EPrimalCharacterStatusValue                                ChargeCapacitystat;                                      // 0x2AB8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CEU4[0x3];                                   // 0x2AB9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ChargeEmissionRange;                                     // 0x2ABC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MinPossibleChargeRegenRate;                              // 0x2AC0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ChargeRegenRateatlevel88;                                // 0x2AC4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ChargeRegenMaxClamp;                                     // 0x2AC8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       debugoutputstuff;                                        // 0x2ACC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0NQJ[0x3];                                   // 0x2ACD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    wildtryshootlazersattackindex;                           // 0x2AD0(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    airequeststompattackindex;                               // 0x2AD4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              WildInventoryClass;                                      // 0x2AD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    wildtryshootcannonattackindex;                           // 0x2AE0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    wildtryshootsilencerattackindex;                         // 0x2AE4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    wildtrytoggledirectionalshieldattackindex;               // 0x2AE8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    wildtrytoggleomnishieldattackindex;                      // 0x2AEC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    wildtryshootradarattackindex;                            // 0x2AF0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    wildtryshootharvesterattackindex;                        // 0x2AF4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    savedradarfilter;                                        // 0x2AF8(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      affinityPerHackPercent;                                  // 0x2AFC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bDebug_DediStorageItemTransfer;                          // 0x2B00(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bDebug_LinkedDediStorageReplication;                     // 0x2B01(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q9Q7[0x6];                                   // 0x2B02(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DediStorageBoxClass;                                     // 0x2B08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class ABP_DedicatedStorage_C*                              CurrentLinkedDediStorage;                                // 0x2B10(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      HackStartDelayTamingEffectivenessMult_lvl88;             // 0x2B18(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      graceperiodbeforetimepenaltykicksinfortamingincludesapprox12shacktime; // 0x2B1C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class FName>                                        ColorNames;                                              // 0x2B20(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FName>                                        UsingColorNames;                                         // 0x2B30(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FName>                                        UsingColorizedColor;                                     // 0x2B40(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    MultiUseCategory_DebugAttachments;                       // 0x2B50(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VWAV[0x4];                                   // 0x2B54(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ABP_DedicatedStorage_C*>                      CurrentNearbyUsableDediStorages;                         // 0x2B58(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class ABP_DedicatedStorage_C*>                      CurrentNearbyUsableDediStorages_Cleaned;                 // 0x2B68(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		bool                                                       bAutoTransferToLinkedDediStorageActive;                  // 0x2B78(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AOCD[0x7];                                   // 0x2B79(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        DediStorageTransferItemTagBlacklist;                     // 0x2B80(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    MultiUseCategory_DediStorageDeposit;                     // 0x2B90(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        MultiUseCategory_Color_DediStorageItemTransfer;          // 0x2B94(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    MultiUseIndex_SendResourcesToNearbyDediStorage;          // 0x2BA4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        MultiUseCategory_Color_SelectLinkedDediStorage;          // 0x2BA8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        MultiUseIndex_Color_CurrentLinkedDediStorage_Enabled;    // 0x2BB8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        MultiUseIndex_Color_CurrentLinkedDediStorage_Disabled;   // 0x2BC8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    MultiUseCategory_SelectLinkedDediStorage;                // 0x2BD8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    MultiUseIndex_ToggleDediStorageAutoItemTransfer;         // 0x2BDC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    MultiUseIndex_UnlinkFromDediStorage;                     // 0x2BE0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                RequestLinkToDediStorageCommandName;                     // 0x2BE4(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SearchForDediStorageRadius;                              // 0x2BEC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              DediStorageInventoryClass;                               // 0x2BF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       hassetinitialattachments;                                // 0x2BF8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q47Z[0x3];                                   // 0x2BF9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      percentofcurrentaffinitytoconsiderwhendecreasinghackamount; // 0x2BFC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FString                                              graceperiodstring;                                       // 0x2C00(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              timeremainingstring;                                     // 0x2C10(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              affinitytogainstring;                                    // 0x2C20(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      clientcopyoftamingspeedmodifier;                         // 0x2C30(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ShouldRefreshColorization;                               // 0x2C34(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QE6X[0x3];                                   // 0x2C35(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastTimeSetIsdying;                                      // 0x2C38(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      StriderDeathDropInventoryLifetime;                       // 0x2C40(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    tamingfeedmultiuseindex;                                 // 0x2C44(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AController*                                         MurdererInstigator;                                      // 0x2C48(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bHasValidLinkedDediStorage;                              // 0x2C50(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EIFQ[0x3];                                   // 0x2C51(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LinkedDediStorageLocation;                               // 0x2C54(0x000C) Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FString                                              LinkedDediStorageTitle;                                  // 0x2C60(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance
		int32_t                                                    LinkedDediStorageItemCount;                              // 0x2C70(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BP6W[0x4];                                   // 0x2C74(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              LinkedDediStorageItemClass;                              // 0x2C78(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsLinkedDediStorageStasised;                            // 0x2C80(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EM9P[0x7];                                   // 0x2C81(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastRequestFixLinkedDediStorageRefTime;                  // 0x2C88(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RequestFixLinkedDediStorageRefInterval;                  // 0x2C90(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       istransmitteractive;                                     // 0x2C94(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9RMD[0x3];                                   // 0x2C95(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastTimeContainerActivated;                              // 0x2C98(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      deactivatetransmittertogglevfxafterthisduration;         // 0x2CA0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       hastriedspaningbedinitially;                             // 0x2CA4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UIG5[0x3];                                   // 0x2CA5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OnesidedShieldDurabilityAtLvl0;                          // 0x2CA8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      OnesidedShieldDurabilityAtLvl88;                         // 0x2CAC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      OmniShieldDurabilityAtLvl0;                              // 0x2CB0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      OmniShieldDurabilityAtLvl88;                             // 0x2CB4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      basehealthvalueforshieldcalc;                            // 0x2CB8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      approx88statvalueforhealthshieldcalc;                    // 0x2CBC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      OnesidedShieldDurabilityMAX;                             // 0x2CC0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      OmniShieldDurabilityMAX;                                 // 0x2CC4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      timeoutcheckratefordetectingifrightclickisstillheld;     // 0x2CC8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    missioncountrequiredfortaminglvl0;                       // 0x2CCC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    missioncountrequiredfortaminglvl150;                     // 0x2CD0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       usefallbacktamingtimer;                                  // 0x2CD4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Usetotaldistancetraveledcalculationfordeterminingtamingavailability; // 0x2CD5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CV9N[0x2];                                   // 0x2CD6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              unclaimstring;                                           // 0x2CD8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       HasSaddleStructures;                                     // 0x2CE8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EELF[0x3];                                   // 0x2CE9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SavedCompletedMissionsRequired;                          // 0x2CEC(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       Aicanuseattachments;                                     // 0x2CF0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_97UD[0x3];                                   // 0x2CF1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      howmuchcloserdoyouneedtobetostomp;                       // 0x2CF4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          ResourceSuckSound;                                       // 0x2CF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CheatsEnabled;                                           // 0x2D00(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_R30M[0x3];                                   // 0x2D01(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    DediStorageMultiUseMaxNumEntriesPerFolder;               // 0x2D04(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    MultiUse_DediStorageListBase;                            // 0x2D08(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        MultiUseIndex_Color_ShowMoreDediStorages;                // 0x2D0C(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      maxtamingineffectivenessdropammount;                     // 0x2D1C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FString                                              Missionsstringsingular;                                  // 0x2D20(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    MultiUseCategory_MaxNumNearbyDediStorageFolders;         // 0x2D30(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5ME8[0x4];                                   // 0x2D34(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              nonconsolemssionsmultiusestring;                         // 0x2D38(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              FirePressedString;                                       // 0x2D48(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              CrouchPressedString;                                     // 0x2D58(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              CrouchTogglePressedString;                               // 0x2D68(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              CrouchReleasedString;                                    // 0x2D78(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              CrouchToggleReleasedString;                              // 0x2D88(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              TargetingPressedString;                                  // 0x2D98(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              TargetingPressed_Controller_GamepadString;               // 0x2DA8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              TargetingReleasedString;                                 // 0x2DB8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              TargetingReleased_Controller_GamepadString;              // 0x2DC8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       hasdeletedextrabedsonce;                                 // 0x2DD8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       hasdeletedextrabedstwice;                                // 0x2DD9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue;                            // 0x2DDA(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_FloatFloat_ReturnValue;              // 0x2DDB(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_BoolBool_ReturnValue;                // 0x2DDC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		E_ChargeVariableNames                                      K2Node_Event_variableType7;                              // 0x2DDD(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_O5AC[0x2];                                   // 0x2DDE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Event_fValue4;                                    // 0x2DE0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		E_ChargeVariableNames                                      K2Node_Event_variableType6;                              // 0x2DE4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_L3ZB[0x3];                                   // 0x2DE5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     K2Node_Event_dValue4;                                    // 0x2DE8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		E_ChargeVariableNames                                      K2Node_Event_variableType5;                              // 0x2DF0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VU8C[0x3];                                   // 0x2DF1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    K2Node_Event_iValue4;                                    // 0x2DF4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		E_ChargeVariableNames                                      K2Node_Event_variableType4;                              // 0x2DF8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AXV8[0x3];                                   // 0x2DF9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    K2Node_Event_iValue3;                                    // 0x2DFC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class ABuff_TekStrider_Attachment_Base_C*                  K2Node_CustomEvent_Buff2;                                // 0x2E00(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class ABuff_TekStrider_Attachment_Base_C*                  K2Node_CustomEvent_Buff;                                 // 0x2E08(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		TArray<class ABuff_TekStrider_Attachment_Base_C*>          CallFunc_GetAttachmentBuffs_Buffs;                       // 0x2E10(0x0010) ZeroConstructor, Transient, DuplicateTransient
		int32_t                                                    CallFunc_Array_Length_ReturnValue;                       // 0x2E20(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		E_ChargeVariableNames                                      K2Node_Event_variableType8;                              // 0x2E24(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_Event_bBValue4;                                   // 0x2E25(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		E_ChargeVariableNames                                      K2Node_Event_variableType9;                              // 0x2E26(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JSLP[0x1];                                   // 0x2E27(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     K2Node_Event_dValue5;                                    // 0x2E28(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		E_ChargeVariableNames                                      K2Node_Event_variableType10;                             // 0x2E30(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2Y32[0x3];                                   // 0x2E31(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Event_fValue5;                                    // 0x2E34(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		E_ChargeVariableNames                                      K2Node_Event_variableType11;                             // 0x2E38(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_Event_bBValue5;                                   // 0x2E39(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_R29O[0x6];                                   // 0x2E3A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABuff_TekStrider_Attachment_Base_C*                  CallFunc_GetAttachmentBuff_Buff;                         // 0x2E40(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    Temp_int_Loop_Counter_Variable;                          // 0x2E48(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue;                         // 0x2E4C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue2;                           // 0x2E50(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_IsTribute_;                           // 0x2E51(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       Temp_bool_True_if_break_was_hit_Variable;                // 0x2E52(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x2E53(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue3;                           // 0x2E54(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		E_ChargeVariableNames                                      K2Node_CustomEvent_variableType2;                        // 0x2E55(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_bBValue2;                             // 0x2E56(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MFT1[0x1];                                   // 0x2E57(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_CustomEvent_fValue2;                              // 0x2E58(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IL50[0x4];                                   // 0x2E5C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     K2Node_CustomEvent_dValue2;                              // 0x2E60(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		E_ChargeVariableNames                                      K2Node_CustomEvent_variableType;                         // 0x2E68(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_bBValue;                              // 0x2E69(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7TNA[0x2];                                   // 0x2E6A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_CustomEvent_fValue;                               // 0x2E6C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		double                                                     K2Node_CustomEvent_dValue;                               // 0x2E70(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class ABuff_ChargeEmitter_C*                               K2Node_DynamicCast_AsBuff_ChargeEmitter_C;               // 0x2E78(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x2E80(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4K94[0x7];                                   // 0x2E81(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABuff_ChargeManager_C*                               K2Node_DynamicCast_AsBuff_ChargeManager_C;               // 0x2E88(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast2_CastSuccess;                         // 0x2E90(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KXHZ[0x7];                                   // 0x2E91(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalCharacter*                                    K2Node_CustomEvent_DiedCharacter;                        // 0x2E98(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue;                           // 0x2EA0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		E_ChargeVariableNames                                      K2Node_Event_variableType3;                              // 0x2EA1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_Event_bBValue3;                                   // 0x2EA2(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DF61[0x1];                                   // 0x2EA3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Event_fValue3;                                    // 0x2EA4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		double                                                     K2Node_Event_dValue3;                                    // 0x2EA8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    K2Node_Event_iValue2;                                    // 0x2EB0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		E_ChargeVariableNames                                      K2Node_Event_variableType2;                              // 0x2EB4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_Event_bBValue2;                                   // 0x2EB5(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TL6D[0x2];                                   // 0x2EB6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Event_fValue2;                                    // 0x2EB8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6805[0x4];                                   // 0x2EBC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     K2Node_Event_dValue2;                                    // 0x2EC0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    K2Node_Event_iVariable;                                  // 0x2EC8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		E_ChargeVariableNames                                      K2Node_Event_variableType;                               // 0x2ECC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_Event_multicast;                                  // 0x2ECD(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HG3E[0x2];                                   // 0x2ECE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Event_fValue;                                     // 0x2ED0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AG5D[0x4];                                   // 0x2ED4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     K2Node_Event_dValue;                                     // 0x2ED8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_Event_bBValue;                                    // 0x2EE0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_Event_triggerEvent;                               // 0x2EE1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_Event_multicastEvent;                             // 0x2EE2(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3WUL[0x1];                                   // 0x2EE3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    K2Node_Event_iValue;                                     // 0x2EE4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_BoolBool_ReturnValue2;               // 0x2EE8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_BoolBool_ReturnValue3;               // 0x2EE9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_FloatFloat_ReturnValue2;             // 0x2EEA(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_FloatFloat_ReturnValue3;             // 0x2EEB(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_FloatFloat_ReturnValue4;             // 0x2EEC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_FloatFloat_ReturnValue5;             // 0x2EED(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchEnum_CmpSuccess;                            // 0x2EEE(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_X868[0x1];                                   // 0x2EEF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             CallFunc_GetClassDefaultObject_ReturnValue;              // 0x2EF0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue2;                          // 0x2EF8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WTJF[0x7];                                   // 0x2EF9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UChargeFunctions_FakeLibrary_C*                      K2Node_DynamicCast_AsChargeFunctions_FakeLibrary_C;      // 0x2F00(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast3_CastSuccess;                         // 0x2F08(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue;                         // 0x2F09(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BPIsTamed_ReturnValue;                          // 0x2F0A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue;                          // 0x2F0B(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NSWU[0x4];                                   // 0x2F0C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalBuff*                                         CallFunc_GetBuff_ReturnValue;                            // 0x2F10(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue3;                          // 0x2F18(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SAFO[0x7];                                   // 0x2F19(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABuff_ChargeEmitter_C*                               K2Node_DynamicCast_AsBuff_ChargeEmitter_C2;              // 0x2F20(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast4_CastSuccess;                         // 0x2F28(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_98XO[0x3];                                   // 0x2F29(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Temp_int_Loop_Counter_Variable2;                         // 0x2F2C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue2;                        // 0x2F30(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Array_Length_ReturnValue2;                      // 0x2F34(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		ENetworkModeResult                                         CallFunc_IsRunningOnServer_OutNetworkMode;               // 0x2F38(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchEnum2_CmpSuccess;                           // 0x2F39(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HR18[0x2];                                   // 0x2F3A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Array_Length_ReturnValue3;                      // 0x2F3C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FPrimalSaddleStructure                              CallFunc_Array_Get_Item;                                 // 0x2F40(0x0028) Transient, DuplicateTransient
		bool                                                       CallFunc_Less_IntInt_ReturnValue;                        // 0x2F68(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue2;                        // 0x2F69(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NA0A[0x6];                                   // 0x2F6A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ATekTransmitter_Strider_C*                           K2Node_DynamicCast_AsTekTransmitter_Strider_C;           // 0x2F70(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast5_CastSuccess;                         // 0x2F78(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue4;                           // 0x2F79(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       Temp_bool_True_if_break_was_hit_Variable2;               // 0x2F7A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue2;                       // 0x2F7B(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    Temp_int_Loop_Counter_Variable3;                         // 0x2F7C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BPIsTamed_ReturnValue2;                         // 0x2F80(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_286Y[0x3];                                   // 0x2F81(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue3;                        // 0x2F84(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             K2Node_CustomEvent_last_tame_location;                   // 0x2F88(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             K2Node_CustomEvent_last_hack_spot;                       // 0x2F94(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            CallFunc_SpawnEmitterAtLocation_ReturnValue;             // 0x2FA0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue;                  // 0x2FA8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3277[0x7];                                   // 0x2FA9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            CallFunc_SpawnEmitterAttached_ReturnValue;               // 0x2FB0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    Temp_int_Loop_Counter_Variable4;                         // 0x2FB8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue2;                 // 0x2FBC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_IntInt_ReturnValue2;                       // 0x2FBD(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue3;                        // 0x2FBE(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C63Z[0x1];                                   // 0x2FBF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPrimalSaddleStructure                              CallFunc_Array_Get_Item2;                                // 0x2FC0(0x0028) Transient, DuplicateTransient
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue4;                        // 0x2FE8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T6N7[0x4];                                   // 0x2FEC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ATekBed_Strider_C*                                   K2Node_DynamicCast_AsTekBed_Strider_C;                   // 0x2FF0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast6_CastSuccess;                         // 0x2FF8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue3;                 // 0x2FF9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MGA6[0x6];                                   // 0x2FFA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            CallFunc_SpawnEmitterAtLocation_ReturnValue2;            // 0x3000(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Array_Length_ReturnValue4;                      // 0x3008(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue4;                 // 0x300C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue5;                           // 0x300D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G42X[0x2];                                   // 0x300E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APawn*                                               CallFunc_K2_GetPawn_ReturnValue;                         // 0x3010(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_Visible;                              // 0x3018(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue3;                       // 0x3019(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8SSM[0x2];                                   // 0x301A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_SelectFloat_ReturnValue;                        // 0x301C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_HasAuthority_ReturnValue;                       // 0x3020(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		ENetworkModeResult                                         CallFunc_CanRunCosmeticEvents_OutNetworkMode;            // 0x3021(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchEnum3_CmpSuccess;                           // 0x3022(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_NewParam;                             // 0x3023(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8PT1[0x4];                                   // 0x3024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APlayerController*                                   CallFunc_GetOwnerController_ReturnValue;                 // 0x3028(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APlayerController*                                   CallFunc_GetOwnerController_ReturnValue2;                // 0x3030(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BPPreventFirstPerson_ReturnValue;               // 0x3038(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue5;                 // 0x3039(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NotEqual_ObjectObject_ReturnValue;              // 0x303A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HBTZ[0x1];                                   // 0x303B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_PlayAnimEx_ReturnValue;                         // 0x303C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue;                 // 0x3040(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_14YN[0x7];                                   // 0x3041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CallFunc_GetGameTimeInSeconds_ReturnValue;               // 0x3048(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_SelectFloat_ReturnValue2;                       // 0x3050(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KA6S[0x4];                                   // 0x3054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CallFunc_Add_DoubleFloat_ReturnValue;                    // 0x3058(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             K2Node_CustomEvent_Loc2;                                 // 0x3060(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             K2Node_CustomEvent_Loc;                                  // 0x306C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       Temp_bool_True_if_break_was_hit_Variable3;               // 0x3078(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue4;                       // 0x3079(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QLXC[0x2];                                   // 0x307A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_CustomEvent_Percent;                              // 0x307C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		double                                                     K2Node_CustomEvent_time_activated;                       // 0x3080(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Get_Charge_Capacity_ReturnValue;                // 0x3088(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue;                // 0x308C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Get_Charge_Capacity_ReturnValue2;               // 0x3090(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FMax_ReturnValue;                               // 0x3094(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsWildSlow_ReturnValue;                         // 0x3098(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AKRV[0x7];                                   // 0x3099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_DedicatedStorage_C*                              K2Node_CustomEvent_ForStorage;                           // 0x30A0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_bBind;                                // 0x30A8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue6;                           // 0x30A9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DC44[0x2];                                   // 0x30AA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Array_Length_ReturnValue5;                      // 0x30AC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            CallFunc_Array_Get_Item3;                                // 0x30B0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_IntInt_ReturnValue3;                       // 0x30B8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KALX[0x3];                                   // 0x30B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Array_Length_ReturnValue6;                      // 0x30BC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Array_Length_ReturnValue7;                      // 0x30C0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FYYG[0x4];                                   // 0x30C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            CallFunc_Array_Get_Item4;                                // 0x30C8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_IntInt_ReturnValue4;                       // 0x30D0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JES6[0x3];                                   // 0x30D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Temp_int_Loop_Counter_Variable5;                         // 0x30D4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue6;                 // 0x30D8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_IntInt_ReturnValue5;                       // 0x30D9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue4;                        // 0x30DA(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0A0E[0x5];                                   // 0x30DB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABuff_TekStrider_Attachment_Base_C*                  CallFunc_Array_Get_Item5;                                // 0x30E0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue5;                        // 0x30E8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue7;                 // 0x30EC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue8;                 // 0x30ED(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue9;                 // 0x30EE(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		ENetworkModeResult                                         CallFunc_IsRunningOnServer_OutNetworkMode2;              // 0x30EF(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchEnum4_CmpSuccess;                           // 0x30F0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IJF9[0x7];                                   // 0x30F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CallFunc_GetNetworkTimeInSeconds_ReturnValue;            // 0x30F8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		ENetworkModeResult                                         CallFunc_IsRunningOnServer_OutNetworkMode3;              // 0x3100(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0SRZ[0x3];                                   // 0x3101(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Temp_int_Loop_Counter_Variable6;                         // 0x3104(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchEnum5_CmpSuccess;                           // 0x3108(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_IntInt_ReturnValue6;                       // 0x3109(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QBM2[0x6];                                   // 0x310A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            CallFunc_Array_Get_Item6;                                // 0x3110(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue6;                        // 0x3118(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue10;                // 0x311C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8J3F[0x3];                                   // 0x311D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            CallFunc_K2_GetComponentRotation_ReturnValue;            // 0x3120(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_K2_GetComponentRotation_ReturnValue2;           // 0x312C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetWorldLocation_ReturnValue;                   // 0x3138(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetWorldLocation_ReturnValue2;                  // 0x3144(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    Temp_int_Loop_Counter_Variable7;                         // 0x3150(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_IntInt_ReturnValue7;                       // 0x3154(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_R3SA[0x3];                                   // 0x3155(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            CallFunc_Array_Get_Item7;                                // 0x3158(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue7;                        // 0x3160(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VCD5[0x4];                                   // 0x3164(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_DedicatedStorage_C*                              K2Node_CustomEvent_LinkedStorage;                        // 0x3168(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		ENetworkModeResult                                         CallFunc_IsRunningOnServer_OutNetworkMode4;              // 0x3170(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NotEqual_ObjectObject_ReturnValue2;             // 0x3171(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchEnum6_CmpSuccess;                           // 0x3172(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		ENetworkModeResult                                         CallFunc_IsRunningOnServer_OutNetworkMode5;              // 0x3173(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchEnum7_CmpSuccess;                           // 0x3174(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NotEqual_ObjectObject_ReturnValue3;             // 0x3175(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_29AI[0x2];                                   // 0x3176(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_GetSocketLocation_ReturnValue;                  // 0x3178(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FXVJ[0xC];                                   // 0x3184(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct UObject_FTransform                                  CallFunc_K2_GetComponentToWorld_ReturnValue;             // 0x3190(0x0030) Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_BreakTransform_Location;                        // 0x31C0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_BreakTransform_Rotation;                        // 0x31CC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_BreakTransform_Scale;                           // 0x31D8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_29W0[0xC];                                   // 0x31E4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct UObject_FTransform                                  CallFunc_MakeTransform_ReturnValue;                      // 0x31F0(0x0030) Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AActor*                                              CallFunc_BeginSpawningActorFromClass_ReturnValue;        // 0x3220(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AActor*                                              CallFunc_FinishSpawningActor_ReturnValue;                // 0x3228(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_K2_IsTimerActive_ReturnValue;                   // 0x3230(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_K2_IsTimerActive_ReturnValue2;                  // 0x3231(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IAYR[0x6];                                   // 0x3232(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     CallFunc_K2_GetRootComponent_ReturnValue;                // 0x3238(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UAudioComponent*                                     CallFunc_PlaySoundAttached_ReturnValue;                  // 0x3240(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate;                    // 0x3248(0x0010) ZeroConstructor, Transient, DuplicateTransient, NoDestructor
		class FName                                                K2Node_CustomEvent_EventCustomName;                      // 0x3258(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class FString                                              K2Node_CustomEvent_EventCustomString;                    // 0x3260(0x0010) ZeroConstructor, Transient, DuplicateTransient
		class AActor*                                              K2Node_CustomEvent_InstigatorActor;                      // 0x3270(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class FString                                              CallFunc_Split_LeftS;                                    // 0x3278(0x0010) ZeroConstructor, Transient, DuplicateTransient
		class FString                                              CallFunc_Split_RightS;                                   // 0x3288(0x0010) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       CallFunc_Split_ReturnValue;                              // 0x3298(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_NameName_ReturnValue;                // 0x3299(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_StrStr_ReturnValue;                  // 0x329A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_StrStr_ReturnValue2;                 // 0x329B(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate2;                   // 0x329C(0x0010) ZeroConstructor, Transient, DuplicateTransient, NoDestructor
		int32_t                                                    CallFunc_Array_Add_NewItem_RefProperty;                  // 0x32AC(0x0004) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Array_Add_NewItem2_RefProperty;                 // 0x32B0(0x0004) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Array_Add_NewItem3_RefProperty;                 // 0x32B4(0x0001) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Array_Add_NewItem4_RefProperty;                 // 0x32B5(0x0001) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MJ2Z[0x2];                                   // 0x32B6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      CallFunc_SphereOverlapActors_NEW_ActorsToIgnore_RefProperty; // 0x32B8(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm

	public:
		void GetChargeVariableInterface(E_ChargeVariableNames variableType, float* fValue, double* dValue, bool* bBValue, int32_t* ivalue);
		void GetNumBatteries(int32_t* numBatteries);
		void BPOnDinoCheat(const class FName& CheatName, bool bSetValue, float Value);
		void RestrictTransmitterVFX();
		void BP_OnStartCarried(class APrimalDinoCharacter* aDino);
		bool BPCanCryo(class AShooterPlayerController* ForPC);
		void GetNumberOfMissionsRequiredToTameThisStriderScaledByLevel(int32_t* OutputPin);
		void releaserightclick();
		void TimeoutCheckforStillHoldingRightClick();
		void updateshielditemdurabilitybasedonhealth();
		void DeactivateTransmitterVfxonTimer();
		void TriggeredLethalDmg();
		void ResetLinkedDediStorageRepVars();
		class FString MakeDediStorageTitleString(const class FString& BoxName, class UClass* ItemType, class AShooterPlayerController* ForShooterPC, int32_t ItemCount, float DistanceToBox);
		void UpdateLinkedDediStorageRepVars();
		void ConstructLinkedDediStorageTitle(class AShooterPlayerController* ForShooterPC, class FString* Title);
		void HasMutagelinLastSlot(class APlayerController* PC, bool* HasMutagelInLastSlot);
		void ForceDestroyStrider();
		float affinityperhackcalculation(float Tamingspeedmultiplier, bool fordetectingaffinity, bool* ingraceperiod, float* timeuntilgraceperiodends, float* timeuntilnomoreaffinity, float* affinitygainedbeforetamingmult);
		float amountofaffinitygainedasappropriatetothedinolevel();
		void RefreshNearbyDediStorageArrays();
		void CanTransferAnyItemsToNearbyDediStorages(bool* bResult);
		void CanTransferItemToDediStorage(class UPrimalItem* CheckItem, class ABP_DedicatedStorage_C* CheckStorage, bool bCheckForBlacklist, bool* bResult);
		void CanUseLinkedDediStorageLogic(bool* bResult);
		void GetLinkedDediStorageFloatingHudTitle(class AShooterPlayerController* ForShooterPC, class FString* TitleString, struct FLinearColor* TitleColor);
		void GetNameStringForDediStorage(class ABP_DedicatedStorage_C* ForStorage, class AShooterPlayerController* ForShooterPC, bool bAppendDistance, class FString* NameString);
		void ValidateLinkedDediStorage(bool* bIsValid);
		void TryTransferItemsToLinkedDediStorage(bool* bSuccess);
		void RemoveIncompatibleDediStoragesFromArray(TArray<class ABP_DedicatedStorage_C*>* FromArray);
		void TryTransferItemsToNearbyDediStorages(class AShooterPlayerController* ForShooterPC, bool* bSuccess);
		void IsBlacklistedItemClass(class UClass* CheckItemClass, bool* bResult);
		void IsDediStorageUsable(class ABP_DedicatedStorage_C* CheckStorage, bool* bResult);
		void FindNearbyUsableDediStorageBoxes(bool bSortByDistance, bool bRemoveIncompatibleStorages, bool bRemoveLinkedStorage, bool* bFoundAny, TArray<class ABP_DedicatedStorage_C*>* FoundBoxes);
		void TryDoDediStorageHarvestTransferMultiUse(class APlayerController* ForPC, int32_t UseIndex, bool* bSuccess);
		void ClientDoDediStorageHarvestTransferMultiUse(class APlayerController* ForPC, int32_t ClientUseIndex, bool* bSuccess);
		void GetDediStorageHarvestTransferMultiUseEntries(TArray<struct FMultiUseEntry>* AppendToEntries, class AShooterPlayerController* ForShooterPC);
		bool BPClientHandleNetExecCommand(const class FName& CommandName, struct FBPNetExecParams* ExecParams, class APlayerController* ForPC);
		void BPOnRefreshColorization(TArray<struct FLinearColor>* Colors);
		void ClearLinkedDediStorage();
		void BP_OnUncryo(class AShooterPlayerController* ForPC);
		void BP_OnCryo(class AShooterPlayerController* ForPC);
		void SetLinkedDediStorage(class ABP_DedicatedStorage_C* NewLinkedStorage);
		void ChangeFiltertoOnlyDinos();
		void ChangeFiltertoOnlyHumans();
		void ChangeFiltertoBothDinosAndHumans();
		void DetectQuicktapRightClick();
		void Spawntamedinventory();
		void spawnwildInventory();
		void determineandrequestappropriatemeleeattack();
		float BlueprintGetAttackWeight(int32_t AttackIndex, float inputWeight, float Distance, float attackRangeOffset, class AActor* OtherTarget);
		void combinedcanattack(int32_t Attackindex, float DIst, float attackrangeoffset, bool* canattack);
		bool BlueprintCanRiderAttack(int32_t AttackIndex);
		bool BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget);
		void PrintStringManual(const class FString& String);
		void BPNotifyClearRider(class AShooterCharacter* RiderClearing);
		void BPNotifySetRider(class AShooterCharacter* RiderSetting);
		float GetChargeCapacity();
		void toggletransmittervfx(bool Activate, double timeactivated);
		void updatetamepercentonmaterial(float Percent);
		void setupdynamicmats();
		void FocusSuckLocationatTarget();
		bool BPHandlePoop();
		bool BPPreventFirstPerson();
		bool BPPreventInputType(EPrimalCharacterInputType inputType);
		class UAnimMontage* BPOverrideHurtAnim(float DamageTaken, struct FDamageEvent* DamageEvent, class APawn* PawnInstigator, class AActor* DamageCauser, bool bIsLocalPath, bool bIsPointDamage, const struct FVector& PointDamageLocation, const struct FVector& PointDamageHitNormal);
		float BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo);
		void BPOnLethalDamage(float KillingDamage, struct FDamageEvent* DamageEvent, class AController* Killer, class AActor* DamageCauser, bool* bPreventDeath);
		void ResetBlendTimeAfterTimer();
		void setblendtime(float InputPin);
		void BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject);
		void tickevents();
		float BP_GetCustomModifier_MaxSpeed();
		void DetectDoubleTapRightClick();
		void DetectDoubleTapCrouch();
		void GetCurrentInventoryMutagelCount(class UObject* PC, int32_t* currentamount);
		void GetRequiredMutagelCount(int32_t* neededamount);
		void UseMutagelAndBeginHacking(class APlayerController* PC);
		bool completedenoughmissions();
		bool backuptimerhasexpiredtobypassthewanderdistanceifneeded();
		bool haswanderedfarenoughtobeabletohackagain(float* remainingdistance);
		bool IsAbleToInitiateAHackAttempt(class APlayerController* PC);
		void HasMutagelReady();
		bool HasRequiredMutagel(class UObject* PlayerController, int32_t* MutagelPlayerHas, int32_t* MutagelRequired);
		void spawntargetedhackingparticle(const struct FVector& hackingloc, class UObject* Player);
		void DetectIfAbleToBeHackedForblinkinglightsonly(bool* canhack, bool* shouldbevisible);
		void advancehackingpoint();
		void setuphackinginteractionpoints();
		float BP_GetCustomModifier_RotationRate();
		void IsLookingAtSpecificHackInteractionPoint(class AShooterCharacter* Player, bool* IsLookingat, struct FVector* HackInteractionSpotWorldLoc);
		void activatecurrentHackInteractionSpot();
		void ReceiveTick(float DeltaSeconds);
		struct FVector BPOverrideFloatingHUDLocation();
		void ThrottledRequestMissionCount(class AShooterCharacter* Player);
		bool BPDinoTooltipCustomTamingProgressBar(bool* overrideTamingProgressBarIfActive, float* progressPercent, class FString* Label);
		void onhackinghitsuccess();
		void onhackinghitfail();
		void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
		void hackingsuccess();
		void syncmissioncompletestatus(class AShooterCharacter* Player);
		void RestrictSyncMissionCompleteStatus();
		void BPNotifyToggleHUD(bool bHudHidden);
		void OnPassengerWeaponChanged(class AShooterWeapon* newWeapon);
		void BPNotifyAddPassenger(class APrimalCharacter* PassengerChar, int32_t SeatIndex);
		void BPNotifyClearPassenger(class APrimalCharacter* PassengerChar, int32_t SeatIndex);
		void BP_OnBasedPawnRemovedNotify(class AActor* RemovedActor);
		int32_t BPOverrideGetAttackAnimationIndex(int32_t AttackIndex, TArray<class UAnimMontage*>* AnimationArray);
		void SpawnTekTransmitter(const struct FVector& NewParam, const struct FRotator& NewParam1);
		void BPClientDoMultiUse(class APlayerController* ForPC, int32_t ClientUseIndex);
		bool BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex);
		TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
		void SpawnBed(const struct FVector& NewParam, const struct FRotator& NewParam1);
		bool BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams);
		void InterceptInputEvent(const class FString& InputName);
		void spawnplatformsaddle();
		void SpawnAttachments(int32_t ManuallySetHead, int32_t ManuallySetChest);
		void ResetMoveright();
		void ResetMoveforward();
		bool BP_InterceptMoveForward(float AxisValue);
		bool BP_InterceptMoveRight(float AxisValue);
		void BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements);
		void BPChangedActorTeam();
		void BPTimerNonDedicated();
		void BlueprintDrawFloatingHUD(class AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale);
		void BPTimerServer();
		void UpdateMaxCharge();
		void BPNotifyLevelUp(int32_t ExtraCharacterLevel);
		void UnstasisLogic();
		void BPSetupTamed(bool bWasJustTamed);
		void OnRep_bAutoChargeActive();
		void GetActualRadius(float* Radius);
		void GetPassiveChargeGain(float* ChargeGain);
		void UpdateChargeRadius();
		void AutoChargeNotify();
		void Init();
		void InitializeChargeBuff();
		void CreateChargeBuff();
		void DestroyChargeBuff();
		void OnChargeEvent();
		void CreateChargeManager();
		void GetAttachmentBuffs(TArray<class ABuff_TekStrider_Attachment_Base_C*>* Buffs);
		float BPGetCrosshairAlpha();
		void BPDoAttack(int32_t AttackIndex);
		void GetAttachmentBuff(EPrimalEquipmentType AttachmentType, class ABuff_TekStrider_Attachment_Base_C** Buff);
		void BPNotifyInventoryItemChange(bool bIsItemAdd, class UPrimalItem* theItem, bool bEquipItem);
		void BPNotifyStructurePlacedNearby(class APrimalStructure* NewStructure);
		void UserConstructionScript();
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void ChargeVariableEventBooleanMulticastInterface(E_ChargeVariableNames variableType, bool bBValue);
		void ChargeVariableEventFloatMulticastInterface(E_ChargeVariableNames variableType, float fValue);
		void ChargeVariableEventDoubleMulticastInterface(E_ChargeVariableNames variableType, double dValue);
		void ChargeVariableEventBooleanInterface(E_ChargeVariableNames variableType, bool bBValue);
		void ChargeVariableEventFloatInterface(E_ChargeVariableNames variableType, float fValue);
		void ChargeVariableEventDoubleInterface(E_ChargeVariableNames variableType, double dValue);
		void ChargeVariableEventIntInterface(E_ChargeVariableNames variableType, int32_t ivalue);
		void ChargeVariableEventIntMulticastInterface(E_ChargeVariableNames variableType, int32_t ivalue);
		void OnAttachmentBuffAdded(class ABuff_TekStrider_Attachment_Base_C* Buff);
		void OnAttachmentBuffRemoved(class ABuff_TekStrider_Attachment_Base_C* Buff);
		void BP_OnJumpPressed();
		void SetInventoryTributeStatus(bool IsTribute);
		void BPUnstasis();
		void ReceiveBeginPlay();
		void ChargeVariableEvent(E_ChargeVariableNames variableType, bool bBValue, float fValue, double dValue);
		void ChargeVariableEvent_Multicast(E_ChargeVariableNames variableType, bool bBValue, float fValue, double dValue);
		void CheckForBatteriesAndUpdate_Multicast();
		void OnDied_Event(class APrimalCharacter* DiedCharacter);
		void CreateChargeBuff_Multicast();
		void DestroyChargeBuff_Multicast();
		void ChargeVariableEventInterface(E_ChargeVariableNames variableType, bool bBValue, float fValue, double dValue, int32_t ivalue);
		void ChargeVariableEventTriggerMulticastInterface(E_ChargeVariableNames variableType, bool bBValue, float fValue, double dValue, int32_t iVariable);
		void InterfaceCheckforBatteriesandUpdateMulticast();
		void SetChargeVariableInterface(E_ChargeVariableNames variableType, bool multicast, float fValue, double dValue, bool bBValue, bool triggerEvent, bool multicastEvent, int32_t ivalue);
		void RandomizeUntamedStart();
		void NetUpdateCharge();
		void BPDinoPostBeginPlay();
		void fadeinplatform();
		void MulticastStartTaming();
		void multicastonhackhitsuccess(const struct FVector& lasttamelocation);
		void multicastonhackhitfail();
		void multicastonhackcomplete(const struct FVector& lasthackspot);
		void multicastoncompletetame();
		void setstriderrefforhackingvfx();
		void immediatelysetplatformvisible(bool Visible);
		void MultiOnStriderDestroyed();
		void EnableInputMulti(bool NewParam);
		void GetReadyToDieMulti();
		void GetReadyToDieSkip();
		void multicastplayresourcesuckvfxonrocks(const struct FVector& Loc);
		void multicastplayresourcesuckvfxontrees(const struct FVector& Loc);
		void multicastupdatetamepercentonbody(float Percent);
		void multicastactivatetransmittervfx(double timeactivated);
		void multicastdeactivatetransmittervfx();
		void SetupEventBindingsForDediStorage(class ABP_DedicatedStorage_C* ForStorage, bool bBind);
		void OnLinkedDediStorageDestroyed();
		void Multi_RefreshLinkedDediStorageRef(class ABP_DedicatedStorage_C* LinkedStorage);
		void Server_RequestFixLinkedDediStorageRef();
		void OnActorCustomEvent_Event(const class FName& EventCustomName, const class FString& EventCustomString, class AActor* InstigatorActor);
		void ExecuteUbergraph_TekStrider_Character_BP(int32_t EntryPoint);
		void OnStructurePlacedOnSaddle__DelegateSignature(class APrimalStructure* Structure);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
