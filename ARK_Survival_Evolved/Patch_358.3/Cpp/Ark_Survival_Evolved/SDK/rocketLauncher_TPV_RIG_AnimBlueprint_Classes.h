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
	 * AnimBlueprintGeneratedClass rocketLauncher_TPV_RIG_AnimBlueprint.rocketLauncher_TPV_RIG_AnimBlueprint_C
	 * Size -> 0x0064 (FullSize[0x03A4] - InheritedSize[0x0340])
	 */
	class UrocketLauncher_TPV_RIG_AnimBlueprint_C : public UAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root_9CE6D1A943D7C5E16E6229ACB363DED7;     // 0x0340(0x0028)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_E0EBD46E4F5BE3F67DEDE688A871E770;     // 0x0368(0x0038)
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x03A0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_rocketLauncher_TPV_RIG_AnimBlueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
