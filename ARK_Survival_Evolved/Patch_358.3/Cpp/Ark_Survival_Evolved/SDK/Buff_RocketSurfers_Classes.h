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
	 * BlueprintGeneratedClass Buff_RocketSurfers.Buff_RocketSurfers_C
	 * Size -> 0x000C (FullSize[0x098C] - InheritedSize[0x0980])
	 */
	class ABuff_RocketSurfers_C : public ABuff_Base_C
	{
	public:
		double                                                     TimeUponUnbasing;                                        // 0x0980(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TimeBeforeImmuneToRiddenMissileDamage;                   // 0x0988(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool BPCheckPreventInput(EPrimalCharacterInputType inputType);
		void BuffTickClient(float DeltaTime);
		void BuffTickServer(float DeltaTime);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_RocketSurfers(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
