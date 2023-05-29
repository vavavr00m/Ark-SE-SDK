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
	 * BlueprintGeneratedClass EasterBasket_ExplosionEmitter.EasterBasket_ExplosionEmitter_C
	 * Size -> 0x0000 (FullSize[0x0518] - InheritedSize[0x0518])
	 */
	class AEasterBasket_ExplosionEmitter_C : public APrimalEmitterSpawnable
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_EasterBasket_ExplosionEmitter(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
