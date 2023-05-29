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
	 * BlueprintGeneratedClass ProjTekStriderCannon.ProjTekStriderCannon_C
	 * Size -> 0x0000 (FullSize[0x06F0] - InheritedSize[0x06F0])
	 */
	class AProjTekStriderCannon_C : public AProjMekSiegeCannon_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_ProjTekStriderCannon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
