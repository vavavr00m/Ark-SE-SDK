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
	 * BlueprintGeneratedClass SM_AdobeStairs_BP.SM_AdobeStairs_BP_C
	 * Size -> 0x0008 (FullSize[0x0B50] - InheritedSize[0x0B48])
	 */
	class ASM_AdobeStairs_BP_C : public ALadder_Metal_C
	{
	public:
		class UStaticMeshComponent*                                StaticMesh1;                                             // 0x0B48(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_SM_AdobeStairs_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
