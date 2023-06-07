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
	 * BlueprintGeneratedClass SetShouldGlide.SetShouldGlide_C
	 * Size -> 0x0050 (FullSize[0x00C8] - InheritedSize[0x0078])
	 */
	class USetShouldGlide_C : public UBTTask_BlueprintBase
	{
	public:
		struct FBlackboardKeySelector                              GlideTargetKey;                                          // 0x0078(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              ShouldGlideKey;                                          // 0x00A0(0x0028) Edit, BlueprintVisible

	public:
		void ReceiveExecute(class AActor* OwnerActor);
		void ExecuteUbergraph_SetShouldGlide(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
