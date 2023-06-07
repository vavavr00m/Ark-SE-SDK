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
	 * BlueprintGeneratedClass DinoAttackStateMelee_Exosuit.DinoAttackStateMelee_Exosuit_C
	 * Size -> 0x000C (FullSize[0x009C] - InheritedSize[0x0090])
	 */
	class UDinoAttackStateMelee_Exosuit_C : public UDinoAttackStateMelee_C
	{
	public:
		struct FVector                                             SwingSocketOffset;                                       // 0x0090(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BPGetSocketLocation(class FName* SocketName, struct FVector* SocketLocation);
		void ExecuteUbergraph_DinoAttackStateMelee_Exosuit(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
