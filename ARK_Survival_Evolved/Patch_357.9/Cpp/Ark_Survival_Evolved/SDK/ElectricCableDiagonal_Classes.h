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
	 * BlueprintGeneratedClass ElectricCableDiagonal.ElectricCableDiagonal_C
	 * Size -> 0x0000 (FullSize[0x0B08] - InheritedSize[0x0B08])
	 */
	class AElectricCableDiagonal_C : public AElectricCableBaseBP_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_ElectricCableDiagonal(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
