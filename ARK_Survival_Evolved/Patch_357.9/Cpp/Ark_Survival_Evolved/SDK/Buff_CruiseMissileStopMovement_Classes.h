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
	 * BlueprintGeneratedClass Buff_CruiseMissileStopMovement.Buff_CruiseMissileStopMovement_C
	 * Size -> 0x0000 (FullSize[0x0980] - InheritedSize[0x0980])
	 */
	class ABuff_CruiseMissileStopMovement_C : public APrimalBuff
	{
	public:
		void ReceiveBeginPlay();
		bool BPPreventInstigatorMovementMode(EMovementMode NewMovementMode, unsigned char NewCustomMode);
		void BuffTickServer(float DeltaTime);
		void BPHandleOnStartFire(bool bFromGamepad);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_CruiseMissileStopMovement(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
