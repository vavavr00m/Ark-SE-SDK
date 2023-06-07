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
	 * BlueprintGeneratedClass Buff_ChargeEmitter_LanternPet.Buff_ChargeEmitter_LanternPet_C
	 * Size -> 0x0011 (FullSize[0x0BA9] - InheritedSize[0x0B98])
	 */
	class ABuff_ChargeEmitter_LanternPet_C : public ABuff_ChargeEmitter_C
	{
	public:
		class UAudioComponent*                                     ChargeOffSound;                                          // 0x0B98(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UAudioComponent*                                     ChargeOnSound;                                           // 0x0BA0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       WasMaxChargeLastTick;                                    // 0x0BA8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ShouldEnableTimers(bool* tickServer, bool* TickClient);
		void ChargeVariableEvent(E_ChargeVariableNames variableType, bool bBValue, float fValue, double dValue, int32_t ivalue);
		void ReceiveDestroyed();
		void BuffTickServer(float DeltaTime);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_ChargeEmitter_LanternPet(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
