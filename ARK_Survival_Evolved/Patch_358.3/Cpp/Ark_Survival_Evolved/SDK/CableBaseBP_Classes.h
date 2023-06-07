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
	 * BlueprintGeneratedClass CableBaseBP.CableBaseBP_C
	 * Size -> 0x0008 (FullSize[0x0B08] - InheritedSize[0x0B00])
	 */
	class ACableBaseBP_C : public APrimalStructureWaterPipe
	{
	public:
		class USphereComponent*                                    StasisComponent;                                         // 0x0B00(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_CableBaseBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
