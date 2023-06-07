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
	 * BlueprintGeneratedClass Buff_DeinonychusPinned.Buff_DeinonychusPinned_C
	 * Size -> 0x000C (FullSize[0x0A50] - InheritedSize[0x0A44])
	 */
	class ABuff_DeinonychusPinned_C : public ABuff_Pinned_C
	{
	public:
		unsigned char                                              UnknownData_KBNG[0x4];                                   // 0x0A44(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DebuffClass_1;                                           // 0x0A48(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BPInstigatorSleeped(bool bIsSleeped);
		bool BPPreventFirstPerson();
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_DeinonychusPinned(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
