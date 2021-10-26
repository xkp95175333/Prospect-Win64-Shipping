// WidgetBlueprintGeneratedClass ModalDialogScrapItem_WBP.ModalDialogScrapItem_WBP_C
// Size: 0x378 (Inherited: 0x340)
struct UModalDialogScrapItem_WBP_C : UYWidget_ModalDialogScrapItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x340(0x08)
	struct UWidgetAnimation* AnimateOut; // 0x348(0x08)
	struct UWidgetAnimation* animateIn; // 0x350(0x08)
	struct UCanvasPanel* CanvasPanel_3; // 0x358(0x08)
	struct UCommonBackground_WBP_C* CommonBackround_WBP; // 0x360(0x08)
	struct USpacer* Spacer_1; // 0x368(0x08)
	struct USpacer* Spacer_2; // 0x370(0x08)

	struct UWidgetAnimation* BP_AnimateVisibility(enum class ESlateVisibility newVisibility); // Function ModalDialogScrapItem_WBP.ModalDialogScrapItem_WBP_C.BP_AnimateVisibility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function ModalDialogScrapItem_WBP.ModalDialogScrapItem_WBP_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_ModalDialogScrapItem_WBP(int32_t EntryPoint); // Function ModalDialogScrapItem_WBP.ModalDialogScrapItem_WBP_C.ExecuteUbergraph_ModalDialogScrapItem_WBP // (Final|UbergraphFunction) // @ game+0x1e02480
};

