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
	 * BlueprintGeneratedClass OceanPlatfom_Metal_BP.OceanPlatfom_Metal_BP_C
	 * Size -> 0x0049 (FullSize[0x0B69] - InheritedSize[0x0B20])
	 */
	class AOceanPlatfom_Metal_BP_C : public AOceanPlatform_Base_BP_C
	{
	public:
		class UBoxComponent*                                       StructureBuildArea;                                      // 0x0B20(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            Foam_Outer_2;                                            // 0x0B28(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            Foam_Outer_3;                                            // 0x0B30(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            Foam_Outer_4;                                            // 0x0B38(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            Foam_Outer_5;                                            // 0x0B40(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            FoamInner_5;                                             // 0x0B48(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            FoamInner_4;                                             // 0x0B50(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            FoamInner_3;                                             // 0x0B58(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            FoamInne_2;                                              // 0x0B60(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x0B68(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void BPOnLinkedStructureDestroyed(class APrimalStructure* DestroyedStructure);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_OceanPlatfom_Metal_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
