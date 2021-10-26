// Class YExcelDataConverter.YExcelConverterFunctions
// Size: 0x28 (Inherited: 0x28)
struct UYExcelConverterFunctions : UObject {
};

// Class YExcelDataConverter.YExcelConverterDataAsset
// Size: 0xa8 (Inherited: 0x30)
struct UYExcelConverterDataAsset : UDataAsset {
	struct TMap<enum class EYMetaConverterTypes, struct FYCSVMetaDataEntry> m_data; // 0x30(0x50)
	struct TSoftObjectPtr<struct UDataAsset> m_excelDataConverterPath; // 0x80(0x28)
};

