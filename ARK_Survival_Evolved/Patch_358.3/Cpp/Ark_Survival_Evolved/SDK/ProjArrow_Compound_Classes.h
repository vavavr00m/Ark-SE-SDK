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
	 * BlueprintGeneratedClass ProjArrow_Compound.ProjArrow_Compound_C
	 * Size -> 0x0008 (FullSize[0x0690] - InheritedSize[0x0688])
	 */
	class AProjArrow_Compound_C : public APrimalProjectileArrow
	{
	public:
		class UAudioComponent*                                     ProjectileSFX;                                           // 0x0688(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_ProjArrow_Compound(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
