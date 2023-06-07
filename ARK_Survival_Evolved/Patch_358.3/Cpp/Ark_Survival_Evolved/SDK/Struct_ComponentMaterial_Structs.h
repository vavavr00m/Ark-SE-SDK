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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct Struct_ComponentMaterial.Struct_ComponentMaterial
	 * Size -> 0x0020
	 */
	struct FStruct_ComponentMaterial
	{
	public:
		class AActor*                                              Actor_9_A498AECD48E7018FC4108E8897C8A25D;                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USceneComponent*                                     Component_2_C4AAE72C49B9190BF215C691BD2398FC;            // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<class UMaterialInterface*>                          Materials_6_B89DBF944E441AC9E7C60296C629E404;            // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
