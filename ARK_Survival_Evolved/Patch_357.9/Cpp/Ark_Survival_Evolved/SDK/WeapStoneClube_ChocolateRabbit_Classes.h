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
	 * BlueprintGeneratedClass WeapStoneClube_ChocolateRabbit.WeapStoneClube_ChocolateRabbit_C
	 * Size -> 0x0008 (FullSize[0x0D90] - InheritedSize[0x0D88])
	 */
	class AWeapStoneClube_ChocolateRabbit_C : public AWeapStoneClub_C
	{
	public:
		class USkeletalMeshComponent*                              MeshFPVAdditional;                                       // 0x0D88(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_WeapStoneClube_ChocolateRabbit(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
