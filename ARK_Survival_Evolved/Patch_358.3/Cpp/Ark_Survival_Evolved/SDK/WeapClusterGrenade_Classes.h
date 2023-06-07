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
	 * BlueprintGeneratedClass WeapClusterGrenade.WeapClusterGrenade_C
	 * Size -> 0x0000 (FullSize[0x0EA0] - InheritedSize[0x0EA0])
	 */
	class AWeapClusterGrenade_C : public AWeapGrenade_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_WeapClusterGrenade(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
