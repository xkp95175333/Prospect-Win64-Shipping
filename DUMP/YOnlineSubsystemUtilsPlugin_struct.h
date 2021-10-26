// Enum YOnlineSubsystemUtilsPlugin.EYPlayfabLoginType
enum class EYPlayfabLoginType : uint8 {
	Invalid,
	Custom,
	PlayfabAccount,
	AlreadyLoggedIn,
	EpicLogin,
	EosToken,
	EosDevTool,
	Steam,
	EYPlayfabLoginType_MAX,
};

// Enum YOnlineSubsystemUtilsPlugin.EYAuthorizationUsageType
enum class EYAuthorizationUsageType : uint8 {
	Internal,
	Steam,
	EGS,
	Playfab,
	Custom,
	EYAuthorizationUsageType_MAX,
};

// ScriptStruct YOnlineSubsystemUtilsPlugin.YLoginEntry
// Size: 0x30 (Inherited: 0x00)
struct FYLoginEntry {
	struct FString m_id; // 0x00(0x10)
	struct FString m_login; // 0x10(0x10)
	struct FString m_password; // 0x20(0x10)
};

