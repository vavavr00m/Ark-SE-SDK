﻿#pragma once

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
	 * BlueprintGeneratedClass DroppedItemGeneric_FertilizedEggUnderwater.DroppedItemGeneric_FertilizedEggUnderwater_C
	 * Size -> 0x0010 (FullSize[0x0740] - InheritedSize[0x0730])
	 */
	class ADroppedItemGeneric_FertilizedEggUnderwater_C : public ADroppedItemEgg
	{
	public:
		class UParticleSystemComponent*                            ParticleSystem1;                                         // 0x0730(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                StaticMesh1;                                             // 0x0738(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_DroppedItemGeneric_FertilizedEggUnderwater(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
