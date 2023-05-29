﻿#pragma once

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
	 * BlueprintGeneratedClass Zipline_Anchor.Zipline_Anchor_C
	 * Size -> 0x0090 (FullSize[0x0B70] - InheritedSize[0x0AE0])
	 */
	class AZipline_Anchor_C : public APrimalStructure
	{
	public:
		class USphereComponent*                                    UseCollision;                                            // 0x0AE0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USceneComponent*                                     CableAttachPoint;                                        // 0x0AE8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USphereComponent*                                    StasisComponent;                                         // 0x0AF0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class AZipline_Anchor_C*                                   LinkedAnchor;                                            // 0x0AF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsSecondaryAnchor;                                      // 0x0B00(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bDebugZipline;                                           // 0x0B01(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A7T8[0x6];                                   // 0x0B02(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimalCableComponent*                               CableComponent;                                          // 0x0B08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FindLocationDistance;                                    // 0x0B10(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    FindLocationNumberOfSteps;                               // 0x0B14(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UseFindLocation;                                         // 0x0B18(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UseLineOfSightCheck;                                     // 0x0B19(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_H6XZ[0x2];                                   // 0x0B1A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxActivationDistanceFromLine;                           // 0x0B1C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              AnchorBreakEmitter;                                      // 0x0B20(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    LinkedAnchorStructureID;                                 // 0x0B28(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PreventAddingCableComponent;                             // 0x0B2C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TI9T[0x3];                                   // 0x0B2D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ZiplineBlockedCapsuleTraceScale;                         // 0x0B30(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue;                  // 0x0B34(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue;                           // 0x0B35(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LWTD[0xA];                                   // 0x0B36(0x000A) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct UObject_FTransform                                  CallFunc_AddComponent_RelativeTransform_AddComponentDefaultTransform; // 0x0B40(0x0030) Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		float BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo);
		void GetClosestPointonLineNonPure(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FVector& Point, struct FVector* closestPoint);
		void GetZiplineInfoNonPure(struct FVector* DownDirection, class AZipline_Anchor_C** UpperAnchor, class AZipline_Anchor_C** LowerAnchor, struct FVector* UpperCableAttachLoc, struct FVector* LowerCableAttachLoc);
		void GetZiplineBuff(class AController* Controller, class UClass** Buff);
		void InitLinkedAnchorClient();
		void InitLinkedAnchor();
		void CreateCable();
		bool AllowManualMultiUseActivation(class APlayerController* ForPC);
		bool IsUpperAnchorPoint();
		void HasLineOfSight(class APrimalCharacter* PrimalCharacter, const struct FVector& StartPoint, bool* HasLineOfSight);
		void CheckForHarness(class APlayerController* Controller, bool* _return_);
		void SpawnBreakEmitter();
		void GetBuffInfo(class UClass* ZiplineBuff, float* AttachOffset, struct FWeaponAnim* AttachAnims, class USceneComponent** HandleMeshComp, bool* Motorized, float* StartEndOffset, bool* HideWeaponEnabled, float* MaxActivationDistance);
		void GetZiplineInfo(struct FVector* DownDirection, class AZipline_Anchor_C** UpperAnchor, class AZipline_Anchor_C** LowerAnchor, struct FVector* UpperCableAttachLoc, struct FVector* LowerCableAttachLoc);
		void IsZiplineBlocked(class APrimalCharacter* primalChar, float StartEndOffset, float AttachOffset, const struct FVector& overrideStartLocation, float OverrideFindLocationDistance, const struct FVector& OverrideFindLocationDirection, bool DontUseLineOfSightCheck, struct FHitResult* HitResult, bool* HitReturn, struct FVector* StartLocation);
		void ReceiveDestroyed();
		void GetClosestPointOnLine(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FVector& Point, struct FVector* closestPoint);
		void RideZipline(class APlayerController* PC, class UClass* ZiplineBuff);
		bool BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex);
		TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_Zipline_Anchor(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
