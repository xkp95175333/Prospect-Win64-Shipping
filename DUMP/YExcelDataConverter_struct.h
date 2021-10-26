// Enum YExcelDataConverter.EYMetaConverterTypes
enum class EYMetaConverterTypes : uint8 {
	None,
	ItemToGame,
	Items,
	Upgrading,
	Crafting,
	Contracts,
	PlayerQuarters,
	UpgradeNodes,
	KMarkGeneratorRate,
	AurumGeneratorRate,
	StashIncrease,
	SafetyPockedIncrease,
	WorkbenchTimeReduction,
	All,
	EYMetaConverterTypes_MAX,
};

// ScriptStruct YExcelDataConverter.YCSVFileData
// Size: 0xb0 (Inherited: 0x00)
struct FYCSVFileData {
	char pad_0[0xb0]; // 0x00(0xb0)
};

// ScriptStruct YExcelDataConverter.YCSVMetaDataEntry
// Size: 0x28 (Inherited: 0x00)
struct FYCSVMetaDataEntry {
	struct FString m_filePath; // 0x00(0x10)
	int32_t m_settingsRow; // 0x10(0x04)
	int32_t m_rowDataStart; // 0x14(0x04)
	int32_t m_rowDataEnd; // 0x18(0x04)
	int32_t m_widthDataStart; // 0x1c(0x04)
	int32_t m_widthDataEnd; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct YExcelDataConverter.YCSVRowEntryData
// Size: 0x60 (Inherited: 0x00)
struct FYCSVRowEntryData {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct YExcelDataConverter.YCSVTitleSettings
// Size: 0xa0 (Inherited: 0x00)
struct FYCSVTitleSettings {
	char pad_0[0xa0]; // 0x00(0xa0)
};

// ScriptStruct YExcelDataConverter.YConverterExcelToGameData
// Size: 0xa0 (Inherited: 0x00)
struct FYConverterExcelToGameData {
	char pad_0[0xa0]; // 0x00(0xa0)
};

// ScriptStruct YExcelDataConverter.YExcelReportResult
// Size: 0x28 (Inherited: 0x00)
struct FYExcelReportResult {
	struct TArray<struct UPackage*> m_packages; // 0x00(0x10)
	char pad_10[0x18]; // 0x10(0x18)
};

// ScriptStruct YExcelDataConverter.YExcelReportResultEntry
// Size: 0x18 (Inherited: 0x00)
struct FYExcelReportResultEntry {
	char pad_0[0x18]; // 0x00(0x18)
};

