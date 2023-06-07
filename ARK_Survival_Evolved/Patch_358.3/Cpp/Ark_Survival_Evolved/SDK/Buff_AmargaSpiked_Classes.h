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
	 * BlueprintGeneratedClass Buff_AmargaSpiked.Buff_AmargaSpiked_C
	 * Size -> 0x000B (FullSize[0x098B] - InheritedSize[0x0980])
	 */
	class ABuff_AmargaSpiked_C : public ABuff_Base_C
	{
	public:
		int32_t                                                    TemperatureCounter;                                      // 0x0980(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    MaxCounterForTempDamage;                                 // 0x0984(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bApplyArmorDebuff;                                       // 0x0988(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ENetworkModeResult                                         CallFunc_IsRunningOnServer_OutNetworkMode;               // 0x0989(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchEnum_CmpSuccess;                            // 0x098A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void ClearApplyArmorDebuff();
		void InitBuff();
		void ApplyArmorDebuff();
		void TempCheck();
		void UpdateTemperatureCounter(int32_t amount);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_Buff_AmargaSpiked(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
