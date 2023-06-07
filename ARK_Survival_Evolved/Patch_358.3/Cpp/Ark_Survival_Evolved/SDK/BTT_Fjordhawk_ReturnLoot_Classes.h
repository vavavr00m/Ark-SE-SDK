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
	 * BlueprintGeneratedClass BTT_Fjordhawk_ReturnLoot.BTT_Fjordhawk_ReturnLoot_C
	 * Size -> 0x0080 (FullSize[0x00F8] - InheritedSize[0x0078])
	 */
	class UBTT_Fjordhawk_ReturnLoot_C : public UBTTask_BlueprintBase
	{
	public:
		struct FBlackboardKeySelector                              ActorKey;                                                // 0x0078(0x0028) Edit, BlueprintVisible
		float                                                      DropLootDistance;                                        // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2E84[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              OnLandKey;                                               // 0x00A8(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              NavPointKey;                                             // 0x00D0(0x0028) Edit, BlueprintVisible

	public:
		void GetHorizontalDistance(class AActor* Actor1, class AActor* Actor2, float* Distance);
		void ReceiveExecute(class AActor* OwnerActor);
		void ExecuteUbergraph_BTT_Fjordhawk_ReturnLoot(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
