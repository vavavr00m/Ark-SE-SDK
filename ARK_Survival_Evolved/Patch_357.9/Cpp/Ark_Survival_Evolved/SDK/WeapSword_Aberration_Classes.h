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
	 * BlueprintGeneratedClass WeapSword_Aberration.WeapSword_Aberration_C
	 * Size -> 0x0010 (FullSize[0x0D98] - InheritedSize[0x0D88])
	 */
	class AWeapSword_Aberration_C : public AWeapSword_C
	{
	public:
		class UStaticMeshComponent*                                SM1P;                                                    // 0x0D88(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                SM3P;                                                    // 0x0D90(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_WeapSword_Aberration(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
