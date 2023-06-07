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
	 * BlueprintGeneratedClass Equus_Character_BP_Unicorn.Equus_Character_BP_Unicorn_C
	 * Size -> 0x000D (FullSize[0x2460] - InheritedSize[0x2453])
	 */
	class AEquus_Character_BP_Unicorn_C : public AEquus_Character_BP_C
	{
	public:
		unsigned char                                              UnknownData_LYMQ[0x5];                                   // 0x2453(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                StaticMesh1;                                             // 0x2458(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Equus_Character_BP_Unicorn(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
