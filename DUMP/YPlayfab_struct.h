// ScriptStruct YPlayfab.YPlayfabLoginData
// Size: 0x68 (Inherited: 0x00)
struct FYPlayfabLoginData {
	struct FString m_userId; // 0x00(0x10)
	struct FString m_titleId; // 0x10(0x10)
	struct FString m_secretKey; // 0x20(0x10)
	struct FString m_username; // 0x30(0x10)
	struct FString m_email; // 0x40(0x10)
	struct FString m_password; // 0x50(0x10)
	int32_t m_localUserNum; // 0x60(0x04)
	enum class EYPlayfabLoginType m_loginType; // 0x64(0x01)
	bool m_inEditorServer; // 0x65(0x01)
	char pad_66[0x2]; // 0x66(0x02)
};

