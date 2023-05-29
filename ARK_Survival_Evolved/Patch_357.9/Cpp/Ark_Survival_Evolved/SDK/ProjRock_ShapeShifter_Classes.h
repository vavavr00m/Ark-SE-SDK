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
	 * BlueprintGeneratedClass ProjRock_ShapeShifter.ProjRock_ShapeShifter_C
	 * Size -> 0x000C (FullSize[0x0694] - InheritedSize[0x0688])
	 */
	class AProjRock_ShapeShifter_C : public APrimalProjectileArrow
	{
	public:
		struct FVector                                             ExtraVelocity;                                           // 0x0688(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BPInitializedVelocity(struct FVector* InVelocity, float CustomSpeed);
		void ReceiveBeginPlay();
		void UserConstructionScript();
		void ExecuteUbergraph_ProjRock_ShapeShifter(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
