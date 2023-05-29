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
	 * BlueprintGeneratedClass Task_SwarmTargetSpotted.Task_SwarmTargetSpotted_C
	 * Size -> 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
	 */
	class UTask_SwarmTargetSpotted_C : public UBTTask_BlueprintBase
	{
	public:
		void ReceiveExecute(class AActor* OwnerActor);
		void ExecuteUbergraph_Task_SwarmTargetSpotted(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
