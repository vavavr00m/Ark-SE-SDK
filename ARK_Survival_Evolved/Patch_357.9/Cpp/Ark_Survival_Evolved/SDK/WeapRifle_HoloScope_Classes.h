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
	 * BlueprintGeneratedClass WeapRifle_HoloScope.WeapRifle_HoloScope_C
	 * Size -> 0x0010 (FullSize[0x0DD0] - InheritedSize[0x0DC0])
	 */
	class AWeapRifle_HoloScope_C : public AWeapRifle_C
	{
	public:
		class UStaticMeshComponent*                                StaticMesh2;                                             // 0x0DC0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                StaticMesh1;                                             // 0x0DC8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_WeapRifle_HoloScope(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
