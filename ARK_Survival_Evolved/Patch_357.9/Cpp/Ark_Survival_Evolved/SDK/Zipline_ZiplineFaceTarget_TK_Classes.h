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
	 * BlueprintGeneratedClass Zipline_ZiplineFaceTarget_TK.Zipline_ZiplineFaceTarget_TK_C
	 * Size -> 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
	 */
	class UZipline_ZiplineFaceTarget_TK_C : public UBTTask_BlueprintBase
	{
	public:
		class UActorComponent*                                     ZiplineComponent;                                        // 0x0078(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
		void ReceiveExecute(class AActor* OwnerActor);
		void ExecuteUbergraph_Zipline_ZiplineFaceTarget_TK(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
