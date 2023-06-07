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
	 * BlueprintGeneratedClass Buff_Stunned_RaceWait.Buff_Stunned_RaceWait_C
	 * Size -> 0x0000 (FullSize[0x0998] - InheritedSize[0x0998])
	 */
	class ABuff_Stunned_RaceWait_C : public ABuff_Stunned_C
	{
	public:
		void BuffTickServer(float DeltaTime);
		void BPSetupForInstigator(class AActor* ForInstigator);
		void BPDeactivated(class AActor* ForInstigator);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_Stunned_RaceWait(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
