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
	 * BlueprintGeneratedClass BTT_Summoner_SetIsDodging.BTT_Summoner_SetIsDodging_C
	 * Size -> 0x0001 (FullSize[0x0079] - InheritedSize[0x0078])
	 */
	class UBTT_Summoner_SetIsDodging_C : public UBTTask_BlueprintBase
	{
	public:
		bool                                                       bIsDodging;                                              // 0x0078(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ReceiveExecute(class AActor* OwnerActor);
		void ExecuteUbergraph_BTT_Summoner_SetIsDodging(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
