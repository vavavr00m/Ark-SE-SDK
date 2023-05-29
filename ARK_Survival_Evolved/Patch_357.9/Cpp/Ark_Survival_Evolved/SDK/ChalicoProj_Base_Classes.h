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
	 * BlueprintGeneratedClass ChalicoProj_Base.ChalicoProj_Base_C
	 * Size -> 0x0004 (FullSize[0x0664] - InheritedSize[0x0660])
	 */
	class AChalicoProj_Base_C : public AShooterProjectile
	{
	public:
		float                                                      notAChalicoDamage;                                       // 0x0660(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ReceiveBeginPlay();
		void OnExplode(struct FHitResult* Result);
		void UserConstructionScript();
		void ExecuteUbergraph_ChalicoProj_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
