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
	 * BlueprintGeneratedClass Buff_Freeze_Amarga.Buff_Freeze_Amarga_C
	 * Size -> 0x0009 (FullSize[0x0ADC] - InheritedSize[0x0AD3])
	 */
	class ABuff_Freeze_Amarga_C : public ABuff_Freeze_C
	{
	public:
		unsigned char                                              UnknownData_SNV1[0x1];                                   // 0x0AD3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MeleeIncToAmount;                                        // 0x0AD4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DOTDamage;                                               // 0x0AD8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BPDeactivated(class AActor* ForInstigator);
		bool BPPreventAddingOtherBuff(class UClass* anotherBuffClass);
		void MeleeIncFreeze();
		void BuffTickServer(float DeltaTime);
		void UpdateBuffDescription();
		void BuffTickClient(float DeltaTime);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_Freeze_Amarga(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
