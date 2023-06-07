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
	 * BlueprintGeneratedClass Buff_Frozen_Amarga.Buff_Frozen_Amarga_C
	 * Size -> 0x0000 (FullSize[0x0B3B] - InheritedSize[0x0B3B])
	 */
	class ABuff_Frozen_Amarga_C : public ABuff_Frozen_IceKaiju_C
	{
	public:
		bool BPPreventAddingOtherBuff(class UClass* anotherBuffClass);
		void BPDeactivated(class AActor* ForInstigator);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_Frozen_Amarga(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
