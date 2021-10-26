// ScriptStruct OnlineSubsystemPlayfab.YPlayfabAuthenticationContext
// Size: 0x68 (Inherited: 0x00)
struct FYPlayfabAuthenticationContext {
	struct FString m_entityId; // 0x00(0x10)
	struct FString m_entityType; // 0x10(0x10)
	struct FString m_entityToken; // 0x20(0x10)
	struct FString m_playfabId; // 0x30(0x10)
	struct FString m_platform; // 0x40(0x10)
	char pad_50[0x10]; // 0x50(0x10)
	bool m_isConnected; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// ScriptStruct OnlineSubsystemPlayfab.YPlayfabCommonSettings
// Size: 0x08 (Inherited: 0x00)
struct FYPlayfabCommonSettings {
	int32_t m_localApiServerTimeout; // 0x00(0x04)
	int32_t m_normalAzureFunctionTimeout; // 0x04(0x04)
};

// ScriptStruct OnlineSubsystemPlayfab.YPlayfabEnviromentData
// Size: 0x20 (Inherited: 0x00)
struct FYPlayfabEnviromentData {
	struct FString m_titleId; // 0x00(0x10)
	struct FString m_developmentSecret; // 0x10(0x10)
};

