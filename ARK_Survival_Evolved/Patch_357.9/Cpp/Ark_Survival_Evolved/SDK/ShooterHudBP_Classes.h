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
	 * BlueprintGeneratedClass ShooterHudBP.ShooterHudBP_C
	 * Size -> 0x0008 (FullSize[0x0B50] - InheritedSize[0x0B48])
	 */
	class AShooterHudBP_C : public AShooterHUD
	{
	public:
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0B48(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void GetAdditionalExplorerNoteDynamicMaterialParams(struct FExplorerNoteEntry* ExplorerNote, TArray<struct FNameScalarPair>* ScalarMaterialParams, TArray<struct FNameColorPair>* ColorMaterialParams);
		void UserConstructionScript();
		void ExecuteUbergraph_ShooterHudBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
