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
	 * BlueprintGeneratedClass Zipline_ResetProcessMoveToOrder_TK.Zipline_ResetProcessMoveToOrder_TK_C
	 * Size -> 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
	 */
	class UZipline_ResetProcessMoveToOrder_TK_C : public UBTTask_BlueprintBase
	{
	public:
		void ReceiveExecute(class AActor* OwnerActor);
		void ExecuteUbergraph_Zipline_ResetProcessMoveToOrder_TK(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
