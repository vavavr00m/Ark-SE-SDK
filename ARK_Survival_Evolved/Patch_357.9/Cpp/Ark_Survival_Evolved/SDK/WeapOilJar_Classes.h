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
	 * BlueprintGeneratedClass WeapOilJar.WeapOilJar_C
	 * Size -> 0x0010 (FullSize[0x0EB0] - InheritedSize[0x0EA0])
	 */
	class AWeapOilJar_C : public APrimalWeaponGrenade
	{
	public:
		class UStaticMeshComponent*                                StaticMesh3P;                                            // 0x0EA0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                StaticMesh1P;                                            // 0x0EA8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_WeapOilJar(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
