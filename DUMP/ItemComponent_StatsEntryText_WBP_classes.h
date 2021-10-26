// WidgetBlueprintGeneratedClass ItemComponent_StatsEntryText_WBP.ItemComponent_StatsEntryText_WBP_C
// Size: 0x498 (Inherited: 0x438)
struct UItemComponent_StatsEntryText_WBP_C : UYWidget_ItemComponentStatsEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x438(0x08)
	struct UYTextBlock* Difference; // 0x440(0x08)
	struct UCanvasPanel* DifferenceCanvas; // 0x448(0x08)
	struct UYTextBlock* Number; // 0x450(0x08)
	struct UYTextBlock* Title; // 0x458(0x08)
	struct UYTextBlock* YTextBlock_4; // 0x460(0x08)
	struct UYTextBlock* YTextBlock_5; // 0x468(0x08)
	struct FText TitleOverride; // 0x470(0x18)
	struct FMulticastInlineDelegate StatsNumberSet; // 0x488(0x10)

	void BP_OnStatsNumberSet(struct FYStatsTypeDataEntry statTypeDataEntry); // Function ItemComponent_StatsEntryText_WBP.ItemComponent_StatsEntryText_WBP_C.BP_OnStatsNumberSet // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BP_ShowStatPossibleRange(float minPossibleValue, float maxPossibleValue); // Function ItemComponent_StatsEntryText_WBP.ItemComponent_StatsEntryText_WBP_C.BP_ShowStatPossibleRange // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_ItemComponent_StatsEntryText_WBP(int32_t EntryPoint); // Function ItemComponent_StatsEntryText_WBP.ItemComponent_StatsEntryText_WBP_C.ExecuteUbergraph_ItemComponent_StatsEntryText_WBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
	void StatsNumberSet__DelegateSignature(struct FText Label, struct FText Value); // Function ItemComponent_StatsEntryText_WBP.ItemComponent_StatsEntryText_WBP_C.StatsNumberSet__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
};

