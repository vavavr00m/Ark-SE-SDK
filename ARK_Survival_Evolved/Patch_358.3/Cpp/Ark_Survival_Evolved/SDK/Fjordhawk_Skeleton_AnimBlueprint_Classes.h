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
	 * AnimBlueprintGeneratedClass Fjordhawk_Skeleton_AnimBlueprint.Fjordhawk_Skeleton_AnimBlueprint_C
	 * Size -> 0x0004 (FullSize[0x130C] - InheritedSize[0x1308])
	 */
	class UFjordhawk_Skeleton_AnimBlueprint_C : public UDinoBlueprintBase_RootTransform_FlySwimming_C
	{
	public:
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x1308(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_Fjordhawk_Skeleton_AnimBlueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
