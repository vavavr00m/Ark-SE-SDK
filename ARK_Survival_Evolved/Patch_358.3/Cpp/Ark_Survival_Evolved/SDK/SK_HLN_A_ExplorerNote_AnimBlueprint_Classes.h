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
	 * AnimBlueprintGeneratedClass SK_HLN_A_ExplorerNote_AnimBlueprint.SK_HLN-A_ExplorerNote_AnimBlueprint_C
	 * Size -> 0x0004 (FullSize[0x0560] - InheritedSize[0x055C])
	 */
	class USK_HLNA_ExplorerNote_AnimBlueprint_C : public UBaseNoteMeshAnimBP_C
	{
	public:
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x055C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_SK_HLNA_ExplorerNote_AnimBlueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
