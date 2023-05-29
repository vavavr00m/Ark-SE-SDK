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
	 * AnimBlueprintGeneratedClass SpaceWhale_Skeleton_AnimBlueprint.SpaceWhale_Skeleton_AnimBlueprint_C
	 * Size -> 0x0038 (FullSize[0x1C00] - InheritedSize[0x1BC8])
	 */
	class USpaceWhale_Skeleton_AnimBlueprint_C : public UDinoBlueprintBase_RootTransform_FlyStrafing_C
	{
	public:
		struct FRotator                                            DesiredRot;                                              // 0x1BC8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FFMY[0x4];                                   // 0x1BD4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APawn*                                               CallFunc_TryGetPawnOwner_ReturnValue;                    // 0x1BD8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x1BE0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PDAY[0x4];                                   // 0x1BE4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASpaceWhale_Character_BP_C*                          K2Node_DynamicCast_AsSpaceWhale_Character_BP_C;          // 0x1BE8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x1BF0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DJF8[0x3];                                   // 0x1BF1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            CallFunc_RInterpTo_ReturnValue;                          // 0x1BF4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void GetFlyingBlendspaceCoords(class APrimalDinoCharacter* ForDino, struct FVector2D* BlendspaceCoords);
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_SpaceWhale_Skeleton_AnimBlueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
