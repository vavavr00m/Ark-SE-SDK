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
	 * BlueprintGeneratedClass Buff_Client_GiantTurtleRaftState.Buff_Client_GiantTurtleRaftState_C
	 * Size -> 0x0001 (FullSize[0x0981] - InheritedSize[0x0980])
	 */
	class ABuff_Client_GiantTurtleRaftState_C : public ABuff_Base_C
	{
	public:
		bool                                                       IsInRaftMode;                                            // 0x0980(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BuffTickClient(float DeltaTime);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_Client_GiantTurtleRaftState(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
