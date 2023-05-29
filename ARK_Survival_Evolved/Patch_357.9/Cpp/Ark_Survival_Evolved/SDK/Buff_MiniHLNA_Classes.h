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
	 * BlueprintGeneratedClass Buff_MiniHLNA.Buff_MiniHLNA_C
	 * Size -> 0x0130 (FullSize[0x0AB0] - InheritedSize[0x0980])
	 */
	class ABuff_MiniHLNA_C : public APrimalBuff
	{
	public:
		double                                                     LastTimePlayedDamagedSound;                              // 0x0980(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DamagedSoundCooldownMin;                                 // 0x0988(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DamagedSoundCooldownMax;                                 // 0x098C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    LastDamagedSoundIndex;                                   // 0x0990(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HasSeasonPass;                                           // 0x0994(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ARRF[0x3];                                   // 0x0995(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLocalizedSoundCueEntry>                     LocalizedDamagedSounds;                                  // 0x0998(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              SimpleSoundCueLoading;                                   // 0x09A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class USoundCue*                                           SimpleLoadedSoundCue;                                    // 0x09B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USceneComponent*                                     CallFunc_K2_GetRootComponent_ReturnValue;                // 0x09C0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       Temp_bool_Variable;                                      // 0x09C8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KZAA[0x3];                                   // 0x09C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Temp_int_Variable;                                       // 0x09CC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue;                         // 0x09D0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x09D4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue;                  // 0x09D5(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue;                            // 0x09D6(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsLocallyControlledByPlayer_ReturnValue;        // 0x09D7(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class USoundBase*                                          K2Node_CustomEvent_sound;                                // 0x09D8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterCharacter*                                   K2Node_DynamicCast_AsShooterCharacter;                   // 0x09E0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x09E8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KAHG[0x3];                                   // 0x09E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate;                    // 0x09EC(0x0010) ZeroConstructor, Transient, DuplicateTransient, NoDestructor
		unsigned char                                              UnknownData_C4XJ[0x4];                                   // 0x09FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimalItem*                                         CallFunc_GetEquippedItemOfType_ReturnValue;              // 0x0A00(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_GetAttachedComponentsNum_ReturnValue;           // 0x0A08(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1G1P[0x4];                                   // 0x0A0C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UActorComponent*                                     CallFunc_GetAttachedComponent_ReturnValue;               // 0x0A10(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Subtract_IntInt_ReturnValue;                    // 0x0A18(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HLTT[0x4];                                   // 0x0A1C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USKComponent_SkinAttachment_Interp_C*                K2Node_DynamicCast_AsSKComponent_SkinAttachment_Interp_C; // 0x0A20(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast2_CastSuccess;                         // 0x0A28(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_LessEqual_IntInt_ReturnValue;                   // 0x0A29(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Is_Talking_Public_Result;                       // 0x0A2A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue;                         // 0x0A2B(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C6PV[0x4];                                   // 0x0A2C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGameInstance*                                       CallFunc_GetGameInstance_ReturnValue;                    // 0x0A30(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		TArray<struct FLocalizedSoundCueEntry>                     K2Node_CustomEvent_Localized;                            // 0x0A38(0x0010) ZeroConstructor, Transient, DuplicateTransient
		class UShooterGameInstance*                                K2Node_DynamicCast_AsShooterGameInstance;                // 0x0A48(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast3_CastSuccess;                         // 0x0A50(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BK3O[0x7];                                   // 0x0A51(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLocalizedSoundCueEntry                             CallFunc_GetLocaleSpecificAudio_OutLocalizedAudio;       // 0x0A58(0x0020) Transient, DuplicateTransient
		bool                                                       CallFunc_GetLocaleSpecificAudio_ReturnValue;             // 0x0A78(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_L1P8[0x7];                                   // 0x0A79(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              K2Node_CustomEvent_AssetPath;                            // 0x0A80(0x0010) ZeroConstructor, Transient, DuplicateTransient
		class UObject*                                             K2Node_CustomEvent_LoadedAsset;                          // 0x0A90(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class USoundCue*                                           K2Node_DynamicCast_AsSoundCue;                           // 0x0A98(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast4_CastSuccess;                         // 0x0AA0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_StrStr_ReturnValue;                  // 0x0AA1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue;                 // 0x0AA2(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PFEU[0x5];                                   // 0x0AA3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAudioComponent*                                     CallFunc_PlaySoundAttached_ReturnValue;                  // 0x0AA8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void ClearAsyncLoadedAudio();
		void VerifySeasonPassFn();
		void RemoveSkin();
		bool BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams);
		bool BPClientHandleNetExecCommand(const class FName& CommandName, struct FBPNetExecParams* ExecParams, class APlayerController* ForPC);
		void PlayRandomUniqueSound(TArray<class USoundBase*>* Sounds, int32_t PrevSoundIndex, int32_t* PlayedIndex);
		void OnUnequip();
		void GetRandomUniqueInt(int32_t Max, int32_t exclude, int32_t* Result);
		void ReceiveBeginPlay();
		void BuffPostAdjustDamage(float Damage, struct FHitResult* HitInfo, class AController* EventInstigator, class AActor* DamageCauser, class UClass* TheDamgeType);
		void UserConstructionScript();
		void MultiPlaySound(class USoundBase* Sound);
		void VerifySeasonPass();
		void SimpleLoadAsyncSoundCue(TArray<struct FLocalizedSoundCueEntry>* Localized);
		void AsyncAssetLoadedDelegate__ExplorerNoteAudio(const class FString& AssetPath, class UObject* LoadedAsset);
		void playhurtsfx();
		void ExecuteUbergraph_Buff_MiniHLNA(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
