// ScriptStruct YGSDK.SessionInfo
// Size: 0x50 (Inherited: 0x00)
struct FSessionInfo {
	struct FString BuildId; // 0x00(0x10)
	struct FString SessionId; // 0x10(0x10)
	struct FString ServerId; // 0x20(0x10)
	struct FString Region; // 0x30(0x10)
	struct TArray<struct FString> InitialPlayers; // 0x40(0x10)
};

