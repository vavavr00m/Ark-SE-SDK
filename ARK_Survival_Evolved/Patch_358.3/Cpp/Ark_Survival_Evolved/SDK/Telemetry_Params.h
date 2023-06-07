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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Telemetry.TelemetryFunctionLibrary.ZoneColor
	 */
	struct UTelemetryFunctionLibrary_ZoneColor_Params
	{
	public:
		float                                                      red;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      green;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      blue;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Telemetry.TelemetryFunctionLibrary.Stop
	 */
	struct UTelemetryFunctionLibrary_Stop_Params
	{	};

	/**
	 * Function Telemetry.TelemetryFunctionLibrary.Start
	 */
	struct UTelemetryFunctionLibrary_Start_Params
	{
	public:
		class FString                                              server_ip;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function Telemetry.TelemetryFunctionLibrary.SetZoneFlag
	 */
	struct UTelemetryFunctionLibrary_SetZoneFlag_Params
	{
	public:
		ETmZoneFlags                                               Flags;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Telemetry.TelemetryFunctionLibrary.SetZoneFilterThreshold
	 */
	struct UTelemetryFunctionLibrary_SetZoneFilterThreshold_Params
	{
	public:
		int32_t                                                    filter_clocks;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Telemetry.TelemetryFunctionLibrary.SetSendBufferSize
	 */
	struct UTelemetryFunctionLibrary_SetSendBufferSize_Params
	{
	public:
		int32_t                                                    buffer_size;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Telemetry.TelemetryFunctionLibrary.SetSendBufferCount
	 */
	struct UTelemetryFunctionLibrary_SetSendBufferCount_Params
	{
	public:
		int32_t                                                    buffer_count;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Telemetry.TelemetryFunctionLibrary.SetMaxTimeSpanTrackCount
	 */
	struct UTelemetryFunctionLibrary_SetMaxTimeSpanTrackCount_Params
	{
	public:
		int32_t                                                    max_track_count;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Telemetry.TelemetryFunctionLibrary.SetCaptureMask
	 */
	struct UTelemetryFunctionLibrary_SetCaptureMask_Params
	{
	public:
		int32_t                                                    capture_mask;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Telemetry.TelemetryFunctionLibrary.Running
	 */
	struct UTelemetryFunctionLibrary_Running_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Telemetry.TelemetryFunctionLibrary.RenameZone
	 */
	struct UTelemetryFunctionLibrary_RenameZone_Params
	{
	public:
		int32_t                                                    capture_mask;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0M0L[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Name;                                                    // 0x0008(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function Telemetry.TelemetryFunctionLibrary.Ploti
	 */
	struct UTelemetryFunctionLibrary_Ploti_Params
	{
	public:
		int32_t                                                    capture_mask;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WPBX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Name;                                                    // 0x0008(0x0010)  (Parm, ZeroConstructor)
		int32_t                                                    Value;                                                   // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Telemetry.TelemetryFunctionLibrary.Plotf
	 */
	struct UTelemetryFunctionLibrary_Plotf_Params
	{
	public:
		int32_t                                                    capture_mask;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2TL1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Name;                                                    // 0x0008(0x0010)  (Parm, ZeroConstructor)
		float                                                      Value;                                                   // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Telemetry.TelemetryFunctionLibrary.Message
	 */
	struct UTelemetryFunctionLibrary_Message_Params
	{
	public:
		int32_t                                                    capture_mask;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ETmMessageFlags                                            Flags;                                                   // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LIV3[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Message;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function Telemetry.TelemetryFunctionLibrary.LeaveAccumulationZone
	 */
	struct UTelemetryFunctionLibrary_LeaveAccumulationZone_Params
	{
	public:
		int32_t                                                    capture_mask;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FTmAccumulator                                      accumulator;                                             // 0x0004(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FTmAccumulator                                      ReturnValue;                                             // 0x000C(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Telemetry.TelemetryFunctionLibrary.Leave
	 */
	struct UTelemetryFunctionLibrary_Leave_Params
	{
	public:
		int32_t                                                    capture_mask;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Telemetry.TelemetryFunctionLibrary.GetSendBufferSize
	 */
	struct UTelemetryFunctionLibrary_GetSendBufferSize_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Telemetry.TelemetryFunctionLibrary.GetSendBufferCount
	 */
	struct UTelemetryFunctionLibrary_GetSendBufferCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Telemetry.TelemetryFunctionLibrary.GetMaxTimeSpanTrackCount
	 */
	struct UTelemetryFunctionLibrary_GetMaxTimeSpanTrackCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Telemetry.TelemetryFunctionLibrary.GetCaptureMask
	 */
	struct UTelemetryFunctionLibrary_GetCaptureMask_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Telemetry.TelemetryFunctionLibrary.EnterAccumulationZone
	 */
	struct UTelemetryFunctionLibrary_EnterAccumulationZone_Params
	{
	public:
		int32_t                                                    capture_mask;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FTmAccumulator                                      accumulator;                                             // 0x0004(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FTmAccumulator                                      ReturnValue;                                             // 0x000C(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Telemetry.TelemetryFunctionLibrary.Enter
	 */
	struct UTelemetryFunctionLibrary_Enter_Params
	{
	public:
		int32_t                                                    capture_mask;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ETmZoneFlags                                               Flags;                                                   // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ISE6[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Name;                                                    // 0x0008(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function Telemetry.TelemetryFunctionLibrary.EndTimeSpan
	 */
	struct UTelemetryFunctionLibrary_EndTimeSpan_Params
	{
	public:
		int32_t                                                    capture_mask;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    time_span_id;                                            // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Telemetry.TelemetryFunctionLibrary.EmitAccumulationZone
	 */
	struct UTelemetryFunctionLibrary_EmitAccumulationZone_Params
	{
	public:
		int32_t                                                    capture_mask;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    Flags;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    Count;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FTmAccumulator                                      accumulated_clocks;                                      // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ARBC[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              zone_name;                                               // 0x0018(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function Telemetry.TelemetryFunctionLibrary.BeginTimeSpan
	 */
	struct UTelemetryFunctionLibrary_BeginTimeSpan_Params
	{
	public:
		int32_t                                                    capture_mask;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    time_span_id;                                            // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    Flags;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3UY7[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              time_span_name;                                          // 0x0010(0x0010)  (Parm, ZeroConstructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
