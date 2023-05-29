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
	 * BlueprintGeneratedClass Emitter_RacePowerUp.Emitter_RacePowerUp_C
	 * Size -> 0x0008 (FullSize[0x0520] - InheritedSize[0x0518])
	 */
	class AEmitter_RacePowerUp_C : public APrimalEmitterSpawnable
	{
	public:
		int32_t                                                    TriggerOrder;                                            // 0x0518(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    CustomDataInt;                                           // 0x051C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Emitter_RacePowerUp(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
