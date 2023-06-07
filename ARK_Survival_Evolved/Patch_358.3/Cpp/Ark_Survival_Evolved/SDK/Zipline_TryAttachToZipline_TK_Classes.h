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
	 * BlueprintGeneratedClass Zipline_TryAttachToZipline_TK.Zipline_TryAttachToZipline_TK_C
	 * Size -> 0x0058 (FullSize[0x00D0] - InheritedSize[0x0078])
	 */
	class UZipline_TryAttachToZipline_TK_C : public UBTTask_BlueprintBase
	{
	public:
		struct FBlackboardKeySelector                              TargetAnchor;                                            // 0x0078(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              TargetKey;                                               // 0x00A0(0x0028) Edit, BlueprintVisible
		class UActorComponent*                                     ZiplineComponent;                                        // 0x00C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ReceiveExecute(class AActor* OwnerActor);
		void ExecuteUbergraph_Zipline_TryAttachToZipline_TK(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
