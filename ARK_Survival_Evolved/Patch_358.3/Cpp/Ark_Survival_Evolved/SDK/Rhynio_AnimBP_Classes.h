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
	 * AnimBlueprintGeneratedClass Rhynio_AnimBP.Rhynio_AnimBP_C
	 * Size -> 0x0000 (FullSize[0x2870] - InheritedSize[0x2870])
	 */
	class URhynio_AnimBP_C : public UDinoBlueprintBase_RootTransform_FlySwimStrafing_C
	{
	public:
		void GetIsCarrying(class APrimalDinoCharacter* Dino, bool* IsCarrying);
		void ExecuteUbergraph_Rhynio_AnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
