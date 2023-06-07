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
	 * BlueprintGeneratedClass Buff_TekArmor_Helmet_Gen2.Buff_TekArmor_Helmet_Gen2_C
	 * Size -> 0x0000 (FullSize[0x0D49] - InheritedSize[0x0D49])
	 */
	class ABuff_TekArmor_Helmet_Gen2_C : public ABuff_TekArmor_Helmet_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_TekArmor_Helmet_Gen2(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
