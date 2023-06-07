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
	 * BlueprintGeneratedClass BASE_ExtraResourcesContainer_4.BASE_ExtraResourcesContainer_3_C
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UBASE_ExtraResourcesContainer_3_C : public UObject
	{
	public:
		TArray<class UObject*>                                     ResourceReferences;                                      // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UObject*>                                     ExtraResourceReferences;                                 // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UObject*>                                     ExtraDinoClasses;                                        // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void ExecuteUbergraph_BASE_ExtraResourcesContainer_4(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
