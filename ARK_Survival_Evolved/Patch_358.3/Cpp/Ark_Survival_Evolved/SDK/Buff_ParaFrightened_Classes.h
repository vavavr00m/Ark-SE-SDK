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
	 * BlueprintGeneratedClass Buff_ParaFrightened.Buff_ParaFrightened_C
	 * Size -> 0x0008 (FullSize[0x09B0] - InheritedSize[0x09A8])
	 */
	class ABuff_ParaFrightened_C : public ABuff_ForceFlee_Base_C
	{
	public:
		class AActor*                                              RunAwayFrom_1;                                           // 0x09A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_ParaFrightened(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
