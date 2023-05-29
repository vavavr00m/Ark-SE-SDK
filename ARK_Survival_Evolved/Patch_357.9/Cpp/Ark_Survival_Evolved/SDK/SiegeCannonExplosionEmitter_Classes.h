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
	 * BlueprintGeneratedClass SiegeCannonExplosionEmitter.SiegeCannonExplosionEmitter_C
	 * Size -> 0x0041 (FullSize[0x0559] - InheritedSize[0x0518])
	 */
	class ASiegeCannonExplosionEmitter_C : public AExplosionEmitter_C
	{
	public:
		class USphereComponent*                                    DamageArea;                                              // 0x0518(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ExplosionDamage;                                         // 0x0520(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ExplosionImpulse;                                        // 0x0524(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UClass*                                              ExplosionDamageType;                                     // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CallFunc_GetScaledSphereRadius_ReturnValue;              // 0x0530(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_K2_GetComponentLocation_ReturnValue;            // 0x0534(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AController*                                         CallFunc_GetController_ReturnValue;                      // 0x0540(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		TArray<class AActor*>                                      CallFunc_ApplyRadialDamage_IgnoreActors_RefProperty;     // 0x0548(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm
		bool                                                       CallFunc_ApplyRadialDamage_ReturnValue;                  // 0x0558(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_SiegeCannonExplosionEmitter(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
