﻿#pragma once

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
	 * AnimBlueprintGeneratedClass GradStudent_RIG_AnimBP.GradStudent_RIG_AnimBP_C
	 * Size -> 0x0004 (FullSize[0x0560] - InheritedSize[0x055C])
	 */
	class UGradStudent_RIG_AnimBP_C : public UBaseNoteMeshAnimBP_C
	{
	public:
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x055C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_GradStudent_RIG_AnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
