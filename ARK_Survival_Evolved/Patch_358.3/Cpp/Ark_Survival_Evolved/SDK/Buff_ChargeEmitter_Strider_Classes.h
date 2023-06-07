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
	 * BlueprintGeneratedClass Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C
	 * Size -> 0x0018 (FullSize[0x0BB0] - InheritedSize[0x0B98])
	 */
	class ABuff_ChargeEmitter_Strider_C : public ABuff_ChargeEmitter_C
	{
	public:
		float                                                      chargeLossCooldownAfterHarvesting;                       // 0x0B98(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_H3NG[0x4];                                   // 0x0B9C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UTexture2D*>                                  batteryIcons;                                            // 0x0BA0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements);
		TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
		void GetCurrentCharge(float* CurrentCharge);
		void ChargeVariableEvent(E_ChargeVariableNames variableType, bool bBValue, float fValue, double dValue, int32_t ivalue);
		void ModifyCharge(bool SetValue, float amount, bool multicast, bool triggerEvent, bool multicastEvent, float* chargeAdded);
		void PreTimerModifyChargeActions(bool* shouldSkipModify);
		void IsHarvestCooldownOver(bool* isOver);
		void CanPlayerHarvest(class APlayerController* Controller, bool toBattery, bool* canHarvest);
		void CanEmitCharge(bool* canEmit);
		void TakeHarvestingChargeFromCharacter(float chargeHarvested, float* chargeTaken);
		void ShouldEnableTimers(bool* tickServer, bool* TickClient);
		void OnChargeHarvested(float amountHarvested);
		void IsEmitterAvailableForHarvesting(bool* available);
		void ShouldUpdateChargeOnTimer(bool* shouldUpdateWithTimer);
		void CanReceiveCharge(bool* canReceive);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_ChargeEmitter_Strider(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
