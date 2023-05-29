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
	 * BlueprintGeneratedClass ProjPoop_Dinopithecus.ProjPoop_Dinopithecus_C
	 * Size -> 0x0014 (FullSize[0x0674] - InheritedSize[0x0660])
	 */
	class AProjPoop_Dinopithecus_C : public AShooterProjectile
	{
	public:
		class UAudioComponent*                                     Audio1;                                                  // 0x0660(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UChildActorComponent*                                ChildProjectile;                                         // 0x0668(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      explosionScale;                                          // 0x0670(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ReceiveTick(float DeltaSeconds);
		bool PreventExplosionEmitter(struct FHitResult* Impact);
		void UserConstructionScript();
		void ExecuteUbergraph_ProjPoop_Dinopithecus(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
