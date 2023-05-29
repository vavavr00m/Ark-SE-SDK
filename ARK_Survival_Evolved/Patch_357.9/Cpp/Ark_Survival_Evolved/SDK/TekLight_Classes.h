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
	 * BlueprintGeneratedClass TekLight.TekLight_C
	 * Size -> 0x0044 (FullSize[0x0E54] - InheritedSize[0x0E10])
	 */
	class ATekLight_C : public ABaseFuelBurner_GasOnly_C
	{
	public:
		class UStaticMeshComponent*                                StaticMesh1;                                             // 0x0E10(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UPrimalInventoryBP_TekLight_C*                       PrimalInventoryBP_TekLight_C1;                           // 0x0E18(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UChildActorComponent*                                ActivatedEmitter;                                        // 0x0E20(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    LightIntensityLevel;                                     // 0x0E28(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    CycleLightIntensityLevel_MultiUseIndex;                  // 0x0E2C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      LightIntensity_Default;                                  // 0x0E30(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      LightIntensityMult_Medium;                               // 0x0E34(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      LightIntensityMult_Low;                                  // 0x0E38(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FE74[0x4];                                   // 0x0E3C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULightComponent*                                     CallFunc_GetLampLight_Light;                             // 0x0E40(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    K2Node_CustomEvent_newPowerLevel2;                       // 0x0E48(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue;                  // 0x0E4C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue2;                 // 0x0E4D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x0E4E(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue2;                       // 0x0E4F(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    K2Node_CustomEvent_newPowerLevel;                        // 0x0E50(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		bool BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams);
		void BPClientDoMultiUse(class APlayerController* ForPC, int32_t ClientUseIndex);
		void GetLampLight(class ULightComponent** Light);
		void GetNextCycledLightIntensityLevel(int32_t* nextLevel);
		void SetLampLightIntensity(int32_t intensityLevel);
		TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
		void BPRefreshedStructureColors();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void Multi_SetLampLightIntensity(int32_t newPowerLevel);
		void Client_SetLampLightIntensity(int32_t newPowerLevel);
		void ExecuteUbergraph_TekLight(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
