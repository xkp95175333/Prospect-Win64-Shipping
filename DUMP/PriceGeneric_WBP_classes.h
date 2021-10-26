// WidgetBlueprintGeneratedClass PriceGeneric_WBP.PriceGeneric_WBP_C
// Size: 0x2e9 (Inherited: 0x2c0)
struct UPriceGeneric_WBP_C : UYWidget_PriceGeneric {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct UUI_ImageBase_WBP_C* CurrencyImage; // 0x2c8(0x08)
	struct UYTextBlock* priceValueYTextBlock; // 0x2d0(0x08)
	struct UTexture2D* softCurrencyTexture; // 0x2d8(0x08)
	struct UTexture2D* hardCurrencyTexture; // 0x2e0(0x08)
	enum class EYCurrencyType debugCurrencyType; // 0x2e8(0x01)

	void BP_SetCurrencyType(enum class EYCurrencyType currencyType); // Function PriceGeneric_WBP.PriceGeneric_WBP_C.BP_SetCurrencyType // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_SetPriceText(struct FText PriceText); // Function PriceGeneric_WBP.PriceGeneric_WBP_C.BP_SetPriceText // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function PriceGeneric_WBP.PriceGeneric_WBP_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_PriceGeneric_WBP(int32_t EntryPoint); // Function PriceGeneric_WBP.PriceGeneric_WBP_C.ExecuteUbergraph_PriceGeneric_WBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

