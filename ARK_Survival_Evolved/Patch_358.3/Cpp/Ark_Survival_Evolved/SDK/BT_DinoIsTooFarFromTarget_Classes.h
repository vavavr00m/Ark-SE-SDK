﻿#pragma once

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
	 * BlueprintGeneratedClass BT_DinoIsTooFarFromTarget.BT_DinoIsTooFarFromTarget_C
	 * Size -> 0x0005 (FullSize[0x0095] - InheritedSize[0x0090])
	 */
	class UBT_DinoIsTooFarFromTarget_C : public UBTDecorator_BlueprintBase
	{
	public:
		float                                                      Distance;                                                // 0x0090(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       UseFollowTarget;                                         // 0x0094(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ReceiveConditionCheck(class AActor* OwnerActor);
		void ExecuteUbergraph_BT_DinoIsTooFarFromTarget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
