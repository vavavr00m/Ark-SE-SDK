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
	 * BlueprintGeneratedClass ProjCannonBall.ProjCannonBall_C
	 * Size -> 0x0000 (FullSize[0x0688] - InheritedSize[0x0688])
	 */
	class AProjCannonBall_C : public APrimalProjectileArrow
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_ProjCannonBall(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
