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
	 * BlueprintGeneratedClass Buff_Drums_ReadyForWar.Buff_Drums_ReadyForWar_C
	 * Size -> 0x0008 (FullSize[0x0988] - InheritedSize[0x0980])
	 */
	class ABuff_Drums_ReadyForWar_C : public ABuff_ImmuneToFear_C
	{
	public:
		class UParticleSystemComponent*                            DeactiveParticleSystem;                                  // 0x0980(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		bool BPCanBeCarried(class APrimalCharacter* ByCarrier);
		bool BPInterceptUseAction();
		void BPDeactivated(class AActor* ForInstigator);
		void UserConstructionScript();
		void AllowDismount();
		void PreventDismount();
		void ExecuteUbergraph_Buff_Drums_ReadyForWar(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
