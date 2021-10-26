// WidgetBlueprintGeneratedClass WBP_Credits_Entry.WBP_Credits_Entry_C
// Size: 0x328 (Inherited: 0x2c0)
struct UWBP_Credits_Entry_C : UYWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct USpacer* Spacer_Center; // 0x2c8(0x08)
	struct UYTextBlock* Txt_Name; // 0x2d0(0x08)
	struct UYTextBlock* Txt_Role; // 0x2d8(0x08)
	struct FStructure_DeveloperCredits CreditItemSetup; // 0x2e0(0x48)

	void SetValues(struct FText Title, struct FText Name); // Function WBP_Credits_Entry.WBP_Credits_Entry_C.SetValues // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function WBP_Credits_Entry.WBP_Credits_Entry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function WBP_Credits_Entry.WBP_Credits_Entry_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_Credits_Entry(int32_t EntryPoint); // Function WBP_Credits_Entry.WBP_Credits_Entry_C.ExecuteUbergraph_WBP_Credits_Entry // (Final|UbergraphFunction) // @ game+0x1e02480
};

