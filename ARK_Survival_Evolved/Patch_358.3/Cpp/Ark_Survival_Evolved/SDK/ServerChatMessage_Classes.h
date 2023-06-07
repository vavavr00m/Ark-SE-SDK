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
	 * WidgetBlueprintGeneratedClass ServerChatMessage.ServerChatMessage_C
	 * Size -> 0x0000 (FullSize[0x0570] - InheritedSize[0x0570])
	 */
	class UServerChatMessage_C : public UUI_ServerBroadcastMessage
	{
	public:
		void ExecuteUbergraph_ServerChatMessage(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
