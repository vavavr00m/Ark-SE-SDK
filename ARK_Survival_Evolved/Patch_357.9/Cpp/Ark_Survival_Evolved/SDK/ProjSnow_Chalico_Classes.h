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
	 * BlueprintGeneratedClass ProjSnow_Chalico.ProjSnow_Chalico_C
	 * Size -> 0x000C (FullSize[0x0670] - InheritedSize[0x0664])
	 */
	class AProjSnow_Chalico_C : public AChalicoProj_Base_C
	{
	public:
		unsigned char                                              UnknownData_4GLN[0x4];                                   // 0x0664(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UChildActorComponent*                                trail;                                                   // 0x0668(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_ProjSnow_Chalico(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
