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
	 * BlueprintGeneratedClass Dodo_Character_BP_Birthday.Dodo_Character_BP_Birthday_C
	 * Size -> 0x0008 (FullSize[0x2298] - InheritedSize[0x2290])
	 */
	class ADodo_Character_BP_Birthday_C : public ADodo_Character_BP_C
	{
	public:
		class UStaticMeshComponent*                                StaticMesh1;                                             // 0x2290(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Dodo_Character_BP_Birthday(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
