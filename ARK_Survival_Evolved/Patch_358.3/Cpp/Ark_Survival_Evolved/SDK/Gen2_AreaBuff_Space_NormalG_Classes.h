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
	 * BlueprintGeneratedClass Gen2_AreaBuff_Space_NormalG.Gen2_AreaBuff_Space_NormalG_C
	 * Size -> 0x0000 (FullSize[0x0D7E] - InheritedSize[0x0D7E])
	 */
	class AGen2_AreaBuff_Space_NormalG_C : public AGen2_AreaBuff_Base_C
	{
	public:
		void UpdateDayCycleManager();
		void BPDeactivated(class AActor* ForInstigator);
		void BPSetupForInstigator(class AActor* ForInstigator);
		void UserConstructionScript();
		void ExecuteUbergraph_Gen2_AreaBuff_Space_NormalG(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
