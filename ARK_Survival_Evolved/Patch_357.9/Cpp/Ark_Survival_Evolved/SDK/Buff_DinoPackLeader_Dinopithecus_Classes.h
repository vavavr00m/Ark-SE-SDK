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
	 * BlueprintGeneratedClass Buff_DinoPackLeader_Dinopithecus.Buff_DinoPackLeader_Dinopithecus_C
	 * Size -> 0x0000 (FullSize[0x0A60] - InheritedSize[0x0A60])
	 */
	class ABuff_DinoPackLeader_Dinopithecus_C : public ABuff_DinoPackLeader_C
	{
	public:
		void ReceiveDestroyed();
		void BPSetupForInstigator(class AActor* ForInstigator);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_DinoPackLeader_Dinopithecus(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
