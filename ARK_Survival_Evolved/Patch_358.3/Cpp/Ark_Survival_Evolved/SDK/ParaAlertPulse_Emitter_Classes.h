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
	 * BlueprintGeneratedClass ParaAlertPulse_Emitter.ParaAlertPulse_Emitter_C
	 * Size -> 0x0014 (FullSize[0x052C] - InheritedSize[0x0518])
	 */
	class AParaAlertPulse_Emitter_C : public APrimalEmitterSpawnable
	{
	public:
		float                                                      CallFunc_Get_Alert_Radius_Radius;                        // 0x0518(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue;                // 0x051C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Conv_FloatToVector_ReturnValue;                 // 0x0520(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void GetAlertRadius(float* Radius);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_ParaAlertPulse_Emitter(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
