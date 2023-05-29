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
	 * BlueprintGeneratedClass MissionSpline_Base.MissionSpline_Base_C
	 * Size -> 0x00A8 (FullSize[0x0570] - InheritedSize[0x04C8])
	 */
	class AMissionSpline_Base_C : public AMissionSpline
	{
	public:
		class UStaticMesh*                                         MeshToUse;                                               // 0x04C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UMaterialInterface*                                  SplineMaterialOverride;                                  // 0x04D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MultiStrength;                                           // 0x04D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       MeshSpline;                                              // 0x04DC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       BeamSpline;                                              // 0x04DD(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_242R[0x2];                                   // 0x04DE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     BeamToUse;                                               // 0x04E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    Count;                                                   // 0x04E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    Check;                                                   // 0x04EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AActor*                                              TestActor;                                               // 0x04F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		TArray<class UParticleSystemComponent*>                    Beams;                                                   // 0x04F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      K2Node_Event_DeltaSeconds;                               // 0x0508(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z4JH[0x4];                                   // 0x050C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct UObject_FTransform                                  CallFunc_AddComponent_RelativeTransform_AddComponentDefaultTransform; // 0x0510(0x0030) Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct UObject_FTransform                                  CallFunc_AddComponent_RelativeTransform2_AddComponentDefaultTransform; // 0x0540(0x0030) Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void ActivateParticlesBetweenLocations(const struct FVector& Start, const struct FVector& Finish);
		void ClearParticles();
		void UpdateSpline();
		void MakeSpline();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_MissionSpline_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
