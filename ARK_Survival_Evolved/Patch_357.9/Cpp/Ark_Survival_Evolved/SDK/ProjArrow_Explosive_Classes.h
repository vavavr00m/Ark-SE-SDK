﻿#pragma once

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
	 * BlueprintGeneratedClass ProjArrow_Explosive.ProjArrow_Explosive_C
	 * Size -> 0x00B1 (FullSize[0x0739] - InheritedSize[0x0688])
	 */
	class AProjArrow_Explosive_C : public APrimalProjectileArrow
	{
	public:
		class UChildActorComponent*                                ChildActor1;                                             // 0x0688(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UAudioComponent*                                     ProjectileSFX;                                           // 0x0690(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      DestroyOtherProjectilesOnDamageRadius;                   // 0x0698(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ReplicatedSpeed;                                         // 0x069C(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             StartLocation;                                           // 0x06A0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxStructureImpactDistance;                              // 0x06AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    Temp_int_Loop_Counter_Variable;                          // 0x06B0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue;                         // 0x06B4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_HasAuthority_ReturnValue;                       // 0x06B8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DCFX[0x3];                                   // 0x06B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Event_Damage;                                     // 0x06BC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UDamageType*                                         K2Node_Event_DamageType;                                 // 0x06C0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AController*                                         K2Node_Event_InstigatedBy;                               // 0x06C8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AActor*                                              K2Node_Event_DamageCauser;                               // 0x06D0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue;                // 0x06D8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2HDS[0x4];                                   // 0x06E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalStructureTurret*                              K2Node_DynamicCast_AsPrimalStructureTurret;              // 0x06E8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x06F0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BE5L[0x7];                                   // 0x06F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue;                        // 0x06F8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		TArray<class AActor*>                                      CallFunc_ServerOctreeOverlapActors_ReturnValue;          // 0x0700(0x0010) ZeroConstructor, Transient, DuplicateTransient
		class AActor*                                              CallFunc_Array_Get_Item;                                 // 0x0710(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_Array_Length_ReturnValue;                       // 0x0718(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NotEqual_ObjectObject_ReturnValue;              // 0x071C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_IntInt_ReturnValue;                        // 0x071D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UR9S[0x2];                                   // 0x071E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AProjArrow_Explosive_C*                              K2Node_DynamicCast_AsProjArrow_Explosive_C;              // 0x0720(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast2_CastSuccess;                         // 0x0728(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2POF[0x3];                                   // 0x0729(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue2;               // 0x072C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x0738(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		bool BPIgnoreRadialDamageVictim(class AActor* Victim);
		void ReceiveBeginPlay();
		void OnExplode(struct FHitResult* Result);
		void UserConstructionScript();
		void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
		void ExecuteUbergraph_ProjArrow_Explosive(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
