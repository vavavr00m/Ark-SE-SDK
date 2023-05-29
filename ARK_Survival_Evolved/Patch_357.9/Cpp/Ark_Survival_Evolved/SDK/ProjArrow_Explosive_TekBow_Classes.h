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
	 * BlueprintGeneratedClass ProjArrow_Explosive_TekBow.ProjArrow_Explosive_TekBow_C
	 * Size -> 0x0017 (FullSize[0x0750] - InheritedSize[0x0739])
	 */
	class AProjArrow_Explosive_TekBow_C : public AProjArrow_Explosive_C
	{
	public:
		unsigned char                                              UnknownData_E4K3[0x7];                                   // 0x0739(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UChildActorComponent*                                ChildActor1_1;                                           // 0x0740(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UAudioComponent*                                     ProjectileSFX_1;                                         // 0x0748(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_ProjArrow_Explosive_TekBow(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
