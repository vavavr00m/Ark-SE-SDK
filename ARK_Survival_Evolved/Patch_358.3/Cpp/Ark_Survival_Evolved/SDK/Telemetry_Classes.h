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
	 * Class Telemetry.TelemetryFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTelemetryFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_ZoneColor(float red, float green, float blue);
		void STATIC_Stop();
		void STATIC_Start(const class FString& server_ip);
		void STATIC_SetZoneFlag(ETmZoneFlags Flags);
		void STATIC_SetZoneFilterThreshold(int32_t filter_clocks);
		void STATIC_SetSendBufferSize(int32_t buffer_size);
		void STATIC_SetSendBufferCount(int32_t buffer_count);
		void STATIC_SetMaxTimeSpanTrackCount(int32_t max_track_count);
		void STATIC_SetCaptureMask(int32_t capture_mask);
		int32_t STATIC_Running();
		void STATIC_RenameZone(int32_t capture_mask, const class FString& Name);
		void STATIC_Ploti(int32_t capture_mask, const class FString& Name, int32_t Value);
		void STATIC_Plotf(int32_t capture_mask, const class FString& Name, float Value);
		void STATIC_Message(int32_t capture_mask, ETmMessageFlags Flags, const class FString& Message);
		struct FTmAccumulator STATIC_LeaveAccumulationZone(int32_t capture_mask, const struct FTmAccumulator& accumulator);
		void STATIC_Leave(int32_t capture_mask);
		int32_t STATIC_GetSendBufferSize();
		int32_t STATIC_GetSendBufferCount();
		int32_t STATIC_GetMaxTimeSpanTrackCount();
		int32_t STATIC_GetCaptureMask();
		struct FTmAccumulator STATIC_EnterAccumulationZone(int32_t capture_mask, const struct FTmAccumulator& accumulator);
		void STATIC_Enter(int32_t capture_mask, ETmZoneFlags Flags, const class FString& Name);
		void STATIC_EndTimeSpan(int32_t capture_mask, int32_t time_span_id);
		void STATIC_EmitAccumulationZone(int32_t capture_mask, int32_t Flags, int32_t Count, const struct FTmAccumulator& accumulated_clocks, const class FString& zone_name);
		void STATIC_BeginTimeSpan(int32_t capture_mask, int32_t time_span_id, int32_t Flags, const class FString& time_span_name);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
