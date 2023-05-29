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
	 * AnimBlueprintGeneratedClass CarchaAnimBP.CarchaAnimBP_C
	 * Size -> 0x0004 (FullSize[0x1634] - InheritedSize[0x1630])
	 */
	class UCarchaAnimBP_C : public UDinoBlueprintBase_RootBoneName_C
	{
	public:
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x1630(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_CarchaAnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
