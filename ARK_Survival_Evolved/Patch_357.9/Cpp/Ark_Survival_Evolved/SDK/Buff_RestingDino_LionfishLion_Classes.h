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
	 * BlueprintGeneratedClass Buff_RestingDino_LionfishLion.Buff_RestingDino_LionfishLion_C
	 * Size -> 0x0014 (FullSize[0x09A0] - InheritedSize[0x098C])
	 */
	class ABuff_RestingDino_LionfishLion_C : public ABuff_RestingDino_C
	{
	public:
		unsigned char                                              UnknownData_89H5[0x4];                                   // 0x098C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             awokenbyotherbuff;                                       // 0x0990(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void BPNotifyOtherBuffActivated(class APrimalBuff* OtherBuff);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_RestingDino_LionfishLion(int32_t EntryPoint);
		void awokenbyotherbuff__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
