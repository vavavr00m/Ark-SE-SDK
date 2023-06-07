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
	 * BlueprintGeneratedClass DroppedItemGeneric.DroppedItemGeneric_C
	 * Size -> 0x0008 (FullSize[0x0708] - InheritedSize[0x0700])
	 */
	class ADroppedItemGeneric_C : public ADroppedItem
	{
	public:
		class UStaticMeshComponent*                                StaticMesh1;                                             // 0x0700(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_DroppedItemGeneric(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
