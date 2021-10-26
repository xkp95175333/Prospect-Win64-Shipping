// Class YOnlineSubsystemUtilsPlugin.YBackendAuthorizationSettings
// Size: 0x90 (Inherited: 0x38)
struct UYBackendAuthorizationSettings : UDeveloperSettings {
	bool m_bUseAuth; // 0x38(0x01)
	enum class EYAuthorizationUsageType m_authType; // 0x39(0x01)
	bool m_bBypassLoginScreen; // 0x3a(0x01)
	bool m_autoLogin; // 0x3b(0x01)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FYLoginEntry m_loginUser; // 0x40(0x30)
	bool m_useDevAuthTool; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct TArray<struct FString> m_DevAuthToolCredentials; // 0x78(0x10)
	bool m_enableBackendServer; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class YOnlineSubsystemUtilsPlugin.YPlayfabSettings
// Size: 0x98 (Inherited: 0x38)
struct UYPlayfabSettings : UDeveloperSettings {
	bool m_enabled; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FString m_titleId; // 0x40(0x10)
	struct FString DeveloperSecretKey; // 0x50(0x10)
	enum class EYPlayfabLoginType m_playfabLoginType; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct FString m_username; // 0x68(0x10)
	struct FString m_password; // 0x78(0x10)
	struct FString m_email; // 0x88(0x10)
};

// Class YOnlineSubsystemUtilsPlugin.YOnlineSubsystemExternalFunctions
// Size: 0x28 (Inherited: 0x28)
struct UYOnlineSubsystemExternalFunctions : UObject {
};

