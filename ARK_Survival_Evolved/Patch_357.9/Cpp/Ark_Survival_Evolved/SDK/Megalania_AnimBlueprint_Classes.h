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
	 * AnimBlueprintGeneratedClass Megalania_AnimBlueprint.Megalania_AnimBlueprint_C
	 * Size -> 0x0004 (FullSize[0x2C24] - InheritedSize[0x2C20])
	 */
	class UMegalania_AnimBlueprint_C : public UDinoBlueprintBase_Climber_C
	{
	public:
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x2C20(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void BlueprintInitializeAnimation();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_Megalania_AnimBlueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
