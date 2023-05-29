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
	 * BlueprintGeneratedClass SetTarget_TK.SetTarget_TK_C
	 * Size -> 0x0028 (FullSize[0x00A0] - InheritedSize[0x0078])
	 */
	class USetTarget_TK_C : public UBTTask_BlueprintBase
	{
	public:
		struct FBlackboardKeySelector                              Target;                                                  // 0x0078(0x0028) Edit, BlueprintVisible

	public:
		void ReceiveExecute(class AActor* OwnerActor);
		void ExecuteUbergraph_SetTarget_TK(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
