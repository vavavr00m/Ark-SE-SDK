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
	 * BlueprintGeneratedClass PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C
	 * Size -> 0x0060 (FullSize[0x0B48] - InheritedSize[0x0AE8])
	 */
	class UPrimalItemSkin_MiniHLNA_C : public UPrimalItemSkinGeneric_C
	{
	public:
		class USoundAttenuation*                                   VoiceAttenuation;                                        // 0x0AE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class USoundBase*>                                  EquippedQuips;                                           // 0x0AF0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class USoundBase*>                                  UnequippedQuips;                                         // 0x0B00(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class USkeletalMeshComponent*                              HLNAComponent;                                           // 0x0B10(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AddedParticles;                                          // 0x0B18(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CLUA[0x7];                                   // 0x0B19(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            TrailFXComponent;                                        // 0x0B20(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UPrimalItem*                                         ShieldItem;                                              // 0x0B28(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UPointLightComponent*                                PointLightComponent;                                     // 0x0B30(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      PointLightZOffset;                                       // 0x0B38(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      InitialPointLightIntensity;                              // 0x0B3C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            ThrusterFXComponent;                                     // 0x0B40(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void IsPlayingExplorerNote(bool* ret);
		void hideskin();
		class FString BPGetItemDescription(const class FString& InDescription, bool bGetLongDescription, class AShooterPlayerController* ForPC);
		void SetVisibility(bool Visibility);
		void BPClientHandleItemNetExecCommand(const class FName& CommandName, struct FBPNetExecParams* ExecParams, class AShooterPlayerController* ForPC);
		void TryRemoveBuffOnUnequip();
		void RemovedSkinFromItem(class UPrimalItem* FromOwnerItem, bool bIsFirstTime);
		void OnEquipDelayedFn();
		void SpawnEmitter(class UParticleSystem* Emitter, const class FName& Socket, bool AutoDestroy, class UParticleSystemComponent** ParticleComponent);
		void PlayRandomSoundFromSounds(TArray<class USoundBase*>* Sounds);
		void BlueprintUnequipped();
		void BPAddedAttachments();
		void ExecuteUbergraph_PrimalItemSkin_MiniHLNA(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
