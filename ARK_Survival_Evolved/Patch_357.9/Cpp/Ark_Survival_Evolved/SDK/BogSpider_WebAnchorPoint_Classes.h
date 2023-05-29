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
	 * BlueprintGeneratedClass BogSpider_WebAnchorPoint.BogSpider_WebAnchorPoint_C
	 * Size -> 0x0030 (FullSize[0x0498] - InheritedSize[0x0468])
	 */
	class ABogSpider_WebAnchorPoint_C : public AActor
	{
	public:
		class UStaticMeshComponent*                                AnchorMesh_NoDepth;                                      // 0x0468(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                AnchorMesh;                                              // 0x0470(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            MID_AnchorMaterial;                                      // 0x0478(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      BaseAnchorRadius;                                        // 0x0480(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CurrentAnchorRadius;                                     // 0x0484(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      OuterSphereScaleMult;                                    // 0x0488(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GKXU[0x4];                                   // 0x048C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            MID_AnchorMaterial_NoDepth;                              // 0x0490(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void IsAnchorVisible(bool* bResult);
		void GetAnchorRadiusMult(float* Mult);
		void GetAnchorColor(struct FLinearColor* Color);
		void SetAnchorRadius(float NewRadius);
		void SetAnchorVisibility(bool bNewVisibility);
		void SetAnchorColor(const struct FLinearColor& WithColor);
		void UserConstructionScript();
		void ExecuteUbergraph_BogSpider_WebAnchorPoint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
