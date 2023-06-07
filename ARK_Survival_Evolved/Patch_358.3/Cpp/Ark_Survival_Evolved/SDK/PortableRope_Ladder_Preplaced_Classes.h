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
	 * BlueprintGeneratedClass PortableRope_Ladder_Preplaced.PortableRope_Ladder_Preplaced_C
	 * Size -> 0x0001 (FullSize[0x0C49] - InheritedSize[0x0C48])
	 */
	class APortableRope_Ladder_Preplaced_C : public APortableRope_Ladder_C
	{
	public:
		bool                                                       bDisableMultiUse;                                        // 0x0C48(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
		void BPPlacedStructure(class APlayerController* ForPC);
		void UserConstructionScript();
		void ExecuteUbergraph_PortableRope_Ladder_Preplaced(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
