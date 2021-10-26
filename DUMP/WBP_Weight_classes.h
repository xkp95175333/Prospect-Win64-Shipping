// WidgetBlueprintGeneratedClass WBP_Weight.WBP_Weight_C
// Size: 0x328 (Inherited: 0x2c0)
struct UWBP_Weight_C : UYWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct UImage* Icn_Weight_Lg; // 0x2c8(0x08)
	struct UImage* Icn_Weight_Sm; // 0x2d0(0x08)
	struct USizeBox* IconWeightSizeLg; // 0x2d8(0x08)
	struct USizeBox* IconWeightSizeSm; // 0x2e0(0x08)
	struct UTextBlock* Txt_WeightLg; // 0x2e8(0x08)
	struct UTextBlock* Txt_WeightLoca; // 0x2f0(0x08)
	struct UTextBlock* Txt_WeightSm; // 0x2f8(0x08)
	struct UHorizontalBox* WeightLayout; // 0x300(0x08)
	float IconOpacity; // 0x308(0x04)
	bool UseLargeVariant; // 0x30c(0x01)
	char pad_30D[0x3]; // 0x30d(0x03)
	struct FText WeightVariantText; // 0x310(0x18)

	void SetRelativeWeightText(struct FText Current, struct FText Max); // Function WBP_Weight.WBP_Weight_C.SetRelativeWeightText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetWeightText(struct FText weight); // Function WBP_Weight.WBP_Weight_C.SetWeightText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function WBP_Weight.WBP_Weight_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_Weight(int32_t EntryPoint); // Function WBP_Weight.WBP_Weight_C.ExecuteUbergraph_WBP_Weight // (Final|UbergraphFunction) // @ game+0x1e02480
};

