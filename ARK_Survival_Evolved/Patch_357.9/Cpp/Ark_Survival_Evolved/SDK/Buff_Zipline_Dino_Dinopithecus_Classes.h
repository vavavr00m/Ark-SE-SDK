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
	 * BlueprintGeneratedClass Buff_Zipline_Dino_Dinopithecus.Buff_Zipline_Dino_Dinopithecus_C
	 * Size -> 0x0000 (FullSize[0x0F70] - InheritedSize[0x0F70])
	 */
	class ABuff_Zipline_Dino_Dinopithecus_C : public ABuff_Zipline_DinoBase_C
	{
	public:
		void BuffTickServer(float DeltaTime);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_Zipline_Dino_Dinopithecus(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
