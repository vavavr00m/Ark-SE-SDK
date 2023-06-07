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
	 * BlueprintGeneratedClass SimpleBed.SimpleBed_C
	 * Size -> 0x0000 (FullSize[0x0F50] - InheritedSize[0x0F50])
	 */
	class ASimpleBed_C : public ABedBaseBP_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_SimpleBed(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
