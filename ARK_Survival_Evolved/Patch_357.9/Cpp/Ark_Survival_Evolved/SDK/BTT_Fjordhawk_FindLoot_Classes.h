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
	 * BlueprintGeneratedClass BTT_Fjordhawk_FindLoot.BTT_Fjordhawk_FindLoot_C
	 * Size -> 0x0050 (FullSize[0x00C8] - InheritedSize[0x0078])
	 */
	class UBTT_Fjordhawk_FindLoot_C : public UBTTask_BlueprintBase
	{
	public:
		struct FBlackboardKeySelector                              ActorKey;                                                // 0x0078(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              PointKey;                                                // 0x00A0(0x0028) Edit, BlueprintVisible

	public:
		void ReceiveExecute(class AActor* OwnerActor);
		void ExecuteUbergraph_BTT_Fjordhawk_FindLoot(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
