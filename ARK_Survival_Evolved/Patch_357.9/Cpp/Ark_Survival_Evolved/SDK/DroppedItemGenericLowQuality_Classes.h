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
	 * BlueprintGeneratedClass DroppedItemGenericLowQuality.DroppedItemGenericLowQuality_C
	 * Size -> 0x0008 (FullSize[0x0708] - InheritedSize[0x0700])
	 */
	class ADroppedItemGenericLowQuality_C : public ADroppedItemLowQuality
	{
	public:
		class UStaticMeshComponent*                                StaticMesh1;                                             // 0x0700(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_DroppedItemGenericLowQuality(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
