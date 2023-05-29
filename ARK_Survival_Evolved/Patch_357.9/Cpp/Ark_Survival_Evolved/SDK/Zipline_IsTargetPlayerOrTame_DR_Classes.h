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
	 * BlueprintGeneratedClass Zipline_IsTargetPlayerOrTame_DR.Zipline_IsTargetPlayerOrTame_DR_C
	 * Size -> 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
	 */
	class UZipline_IsTargetPlayerOrTame_DR_C : public UBTDecorator_BlueprintBase
	{
	public:
		void ReceiveConditionCheck(class AActor* OwnerActor);
		void ExecuteUbergraph_Zipline_IsTargetPlayerOrTame_DR(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
