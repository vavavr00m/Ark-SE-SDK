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
	 * AnimBlueprintGeneratedClass Microraptor_AnimBP.Microraptor_AnimBP_C
	 * Size -> 0x0007 (FullSize[0x1CE8] - InheritedSize[0x1CE1])
	 */
	class UMicroraptor_AnimBP_C : public UDinoBlueprintBase_RootBoneName_GroundAndFlying_C
	{
	public:
		unsigned char                                              UnknownData_FR93[0x3];                                   // 0x1CE1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x1CE4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_Microraptor_AnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
