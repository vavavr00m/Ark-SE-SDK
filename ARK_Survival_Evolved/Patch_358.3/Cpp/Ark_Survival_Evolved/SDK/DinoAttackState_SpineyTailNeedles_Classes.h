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
	 * BlueprintGeneratedClass DinoAttackState_SpineyTailNeedles.DinoAttackState_SpineyTailNeedles_C
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UDinoAttackState_SpineyTailNeedles_C : public UPrimalAIStateDinoSpineyLizardTailRangeState
	{
	public:
		void GetGravityBias(const struct FVector& Velocity, const struct FVector& StartLocation, const struct FVector& TargetLocation, float* ZBias);
		void GetSocketLocation(const class FName& SocketName, float Offset, struct FVector* Location);
		void OffsetVectorRandomly(const struct FVector& VectorIn, struct FVector* newVector);
		void ExecuteUbergraph_DinoAttackState_SpineyTailNeedles(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
