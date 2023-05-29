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
	 * BlueprintGeneratedClass MissionModule_zSubmodule_CompanionReaction_Base.MissionModule_zSubmodule_CompanionReaction_Base_C
	 * Size -> 0x00BC (FullSize[0x0164] - InheritedSize[0x00A8])
	 */
	class UMissionModule_zSubmodule_CompanionReaction_Base_C : public UMissionModule_Base_C
	{
	public:
		int32_t                                                    ValidCreatureKillCount;                                  // 0x00A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IJ71[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCompanionReactionData                              CompanionReaction;                                       // 0x00B0(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       ForcePlayNow;                                            // 0x0150(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LUOI[0x7];                                   // 0x0151(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  DialogIconOverride;                                      // 0x0158(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_HandleMissionModuleBegin_ReturnValue;           // 0x0160(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		int32_t HandleMissionModuleBegin();
		void TriggerMissionModuleBegin();
		void ExecuteUbergraph_MissionModule_zSubmodule_CompanionReaction_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
