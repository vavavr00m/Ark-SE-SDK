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
	 * BlueprintGeneratedClass SM_AdobeCeiling_BP.SM_AdobeCeiling_BP_C
	 * Size -> 0x0008 (FullSize[0x0B00] - InheritedSize[0x0AF8])
	 */
	class ASM_AdobeCeiling_BP_C : public ACeiling_Metal_C
	{
	public:
		class UStaticMeshComponent*                                StaticMesh1;                                             // 0x0AF8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_SM_AdobeCeiling_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
