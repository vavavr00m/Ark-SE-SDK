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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass Buff_ExosuitRider_Offline.Buff_ExosuitRider_Offline_C
	 * Size -> 0x0023 (FullSize[0x09A3] - InheritedSize[0x0980])
	 */
	class ABuff_ExosuitRider_Offline_C : public APrimalBuff
	{
	public:
		class APrimalDinoCharacter*                                OwningSuit;                                              // 0x0980(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, SaveGame, IsPlainOldData, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic
		bool                                                       bWantsRider;                                             // 0x0988(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZTN1[0x7];                                   // 0x0989(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APlayerController*                                   CallFunc_GetOwnerController_ReturnValue;                 // 0x0990(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterPlayerController*                            K2Node_DynamicCast_AsShooterPlayerController;            // 0x0998(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x09A0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue;                            // 0x09A1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsPawnAcknowledged_ReturnValue;                 // 0x09A2(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void BuffTickServer(float DeltaTime);
		float BPAdjustStatusValueModification(class UPrimalCharacterStatusComponent* ForComponent, EPrimalCharacterStatusValue ValueType, float InAmount, class UClass* DamageTypeClass, bool bManualModification);
		void BPSetupForInstigator(class AActor* ForInstigator);
		bool PreventActorTargeting(class AActor* ByActor);
		float BuffAdjustDamage(float Damage, struct FHitResult* HitInfo, class AController* EventInstigator, class AActor* DamageCauser, class UClass* TheDamgeType);
		void InitBuff();
		void BPDeactivated(class AActor* ForInstigator);
		void OnOwningSuitDied(class APrimalCharacter* DiedChar);
		void BPInstigatorPossessed(class AController* ByController);
		void UserConstructionScript();
		void WaitForClient();
		void ExecuteUbergraph_Buff_ExosuitRider_Offline(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
