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
	 * BlueprintGeneratedClass DroppedItemGeneric_Gem.DroppedItemGeneric_Gem_C
	 * Size -> 0x0020 (FullSize[0x0728] - InheritedSize[0x0708])
	 */
	class ADroppedItemGeneric_Gem_C : public ADroppedItemGeneric_C
	{
	public:
		class UStaticMesh*                                         NewMesh;                                                 // 0x0708(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             NewMeshScale;                                            // 0x0710(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             initialImpulse;                                          // 0x071C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BPPostInitializeComponents();
		void UserConstructionScript();
		void ExecuteUbergraph_DroppedItemGeneric_Gem(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
