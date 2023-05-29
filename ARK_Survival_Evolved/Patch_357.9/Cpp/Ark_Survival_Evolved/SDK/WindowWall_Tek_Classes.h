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
	 * BlueprintGeneratedClass WindowWall_Tek.WindowWall_Tek_C
	 * Size -> 0x0008 (FullSize[0x0AF0] - InheritedSize[0x0AE8])
	 */
	class AWindowWall_Tek_C : public AWindowWall_Base_SM_C
	{
	public:
		class UStaticMeshComponent*                                StaticMesh1;                                             // 0x0AE8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		bool BPAllowSnappingWith(class APrimalStructure* OtherStructure, class APlayerController* ForPC);
		void UserConstructionScript();
		void ExecuteUbergraph_WindowWall_Tek(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
