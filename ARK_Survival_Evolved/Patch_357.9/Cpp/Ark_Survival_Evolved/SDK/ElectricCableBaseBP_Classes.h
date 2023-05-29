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
	 * BlueprintGeneratedClass ElectricCableBaseBP.ElectricCableBaseBP_C
	 * Size -> 0x0000 (FullSize[0x0B08] - InheritedSize[0x0B08])
	 */
	class AElectricCableBaseBP_C : public ACableBaseBP_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_ElectricCableBaseBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
