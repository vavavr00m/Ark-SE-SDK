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
	 * BlueprintGeneratedClass Buff_Tent.Buff_Tent_C
	 * Size -> 0x0008 (FullSize[0x0988] - InheritedSize[0x0980])
	 */
	class ABuff_Tent_C : public APrimalBuff
	{
	public:
		class APrimalStructure*                                    Tent;                                                    // 0x0980(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetBuffCauser(class AActor* CausedBy);
		void BuffTickServer(float DeltaTime);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_Tent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
