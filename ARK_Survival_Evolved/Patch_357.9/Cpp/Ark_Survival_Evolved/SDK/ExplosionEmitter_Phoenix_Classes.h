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
	 * BlueprintGeneratedClass ExplosionEmitter_Phoenix.ExplosionEmitter_Phoenix_C
	 * Size -> 0x0004 (FullSize[0x0984] - InheritedSize[0x0980])
	 */
	class AExplosionEmitter_Phoenix_C : public ABuff_Base_C
	{
	public:
		float                                                      DeactivateAfterTime_1;                                   // 0x0980(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void DeTime();
		void ExecuteUbergraph_ExplosionEmitter_Phoenix(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
