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
	 * BlueprintGeneratedClass Buff_PurloviaBury.Buff_PurloviaBury_C
	 * Size -> 0x0018 (FullSize[0x0998] - InheritedSize[0x0980])
	 */
	class ABuff_PurloviaBury_C : public ABuff_Base_Stew_C
	{
	public:
		float                                                      FoodConsumptionMultiplier;                               // 0x0980(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_W43R[0x4];                                   // 0x0984(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      allowedBuffClasses;                                      // 0x0988(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		bool BPPreventAddingOtherBuff(class UClass* anotherBuffClass);
		bool PreventActorTargeting(class AActor* ByActor);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_PurloviaBury(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
