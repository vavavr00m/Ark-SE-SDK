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
	 * BlueprintGeneratedClass WeapSpear.WeapSpear_C
	 * Size -> 0x0000 (FullSize[0x0EB0] - InheritedSize[0x0EB0])
	 */
	class AWeapSpear_C : public APrimalWeaponBow
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_WeapSpear(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
