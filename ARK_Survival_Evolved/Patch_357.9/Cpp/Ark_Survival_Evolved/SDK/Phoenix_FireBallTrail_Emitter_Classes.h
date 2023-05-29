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
	 * BlueprintGeneratedClass Phoenix_FireBallTrail_Emitter.Phoenix_FireBallTrail_Emitter_C
	 * Size -> 0x0000 (FullSize[0x0518] - InheritedSize[0x0518])
	 */
	class APhoenix_FireBallTrail_Emitter_C : public APrimalEmitterSpawnable
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Phoenix_FireBallTrail_Emitter(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
