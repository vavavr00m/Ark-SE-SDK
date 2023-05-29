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
	 * BlueprintGeneratedClass BearTrap.BearTrap_C
	 * Size -> 0x0000 (FullSize[0x0B90] - InheritedSize[0x0B90])
	 */
	class ABearTrap_C : public ABaseBearTrap_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_BearTrap(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
