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
	 * BlueprintGeneratedClass Buff_ImmuneToStealing.Buff_ImmuneToStealing_C
	 * Size -> 0x0012 (FullSize[0x0992] - InheritedSize[0x0980])
	 */
	class ABuff_ImmuneToStealing_C : public ABuff_Base_C
	{
	public:
		class APawn*                                               replicatedDamageCauser;                                  // 0x0980(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class APawn*                                               K2Node_DynamicCast_AsPawn;                               // 0x0988(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x0990(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue;                           // 0x0991(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void BPPreSetupForInstigator(class AActor* ForInstigator);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_Buff_ImmuneToStealing(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
