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
	 * BlueprintGeneratedClass Thylacoleo_AIController_BP.Thylacoleo_AIController_BP_C
	 * Size -> 0x0000 (FullSize[0x0919] - InheritedSize[0x0919])
	 */
	class AThylacoleo_AIController_BP_C : public ADino_AIController_BP_C
	{
	public:
		bool BPForceTargetDinoRider(class AShooterCharacter* playerTarget);
		void UserConstructionScript();
		void ExecuteUbergraph_Thylacoleo_AIController_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
