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
	 * BlueprintGeneratedClass ShouldFlee.ShouldFlee_C
	 * Size -> 0x002C (FullSize[0x00A4] - InheritedSize[0x0078])
	 */
	class UShouldFlee_C : public UBTTask_BlueprintBase
	{
	public:
		struct FBlackboardKeySelector                              LastTreeAttachTime;                                      // 0x0078(0x0028) Edit, BlueprintVisible
		float                                                      FleeInterval;                                            // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ReceiveExecute(class AActor* OwnerActor);
		void ExecuteUbergraph_ShouldFlee(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
