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
	 * BlueprintGeneratedClass Base_Foundation_Tri.Base_Foundation_Tri_C
	 * Size -> 0x0002 (FullSize[0x0AFA] - InheritedSize[0x0AF8])
	 */
	class ABase_Foundation_Tri_C : public AFloor_Base_SM_C
	{
	public:
		bool                                                       IsGlass;                                                 // 0x0AF8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DisableFoundationStacking;                               // 0x0AF9(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool IsValidSnapPointTo(class APrimalStructure* childStructure, int32_t MySnapPointToIndex);
		void UserConstructionScript();
		void ExecuteUbergraph_Base_Foundation_Tri(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
