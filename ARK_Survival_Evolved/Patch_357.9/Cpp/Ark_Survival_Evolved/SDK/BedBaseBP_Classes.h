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
	 * BlueprintGeneratedClass BedBaseBP.BedBaseBP_C
	 * Size -> 0x0010 (FullSize[0x0F50] - InheritedSize[0x0F40])
	 */
	class ABedBaseBP_C : public APrimalStructureBed
	{
	public:
		class USphereComponent*                                    SpecialOverlapComponent;                                 // 0x0F40(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USphereComponent*                                    StasisComponent;                                         // 0x0F48(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_BedBaseBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
