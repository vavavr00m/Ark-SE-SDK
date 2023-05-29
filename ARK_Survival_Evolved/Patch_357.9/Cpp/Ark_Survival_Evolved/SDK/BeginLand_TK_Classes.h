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
	 * BlueprintGeneratedClass BeginLand_TK.BeginLand_TK_C
	 * Size -> 0x0075 (FullSize[0x00ED] - InheritedSize[0x0078])
	 */
	class UBeginLand_TK_C : public UBTTask_BlueprintBase
	{
	public:
		struct FBlackboardKeySelector                              OnLandKey;                                               // 0x0078(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              NavigationPointKey;                                      // 0x00A0(0x0028) Edit, BlueprintVisible
		class AActor*                                              K2Node_Event_OwnerActor;                                 // 0x00C8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class ADino_AIController_BP_C*                             K2Node_DynamicCast_AsDino_AIController_BP_C;             // 0x00D0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x00D8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8PWX[0x3];                                   // 0x00D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_GetLandingLocation_ReturnValue;                 // 0x00DC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_VSize_ReturnValue;                              // 0x00E8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue;                 // 0x00EC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void ReceiveExecute(class AActor* OwnerActor);
		void ExecuteUbergraph_BeginLand_TK(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
