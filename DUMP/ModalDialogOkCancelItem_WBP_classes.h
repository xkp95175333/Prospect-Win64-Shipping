// WidgetBlueprintGeneratedClass ModalDialogOkCancelItem_WBP.ModalDialogOkCancelItem_WBP_C
// Size: 0x380 (Inherited: 0x340)
struct UModalDialogOkCancelItem_WBP_C : UYWidget_ModalDialogOKCancelItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x340(0x08)
	struct UWidgetAnimation* animateIn; // 0x348(0x08)
	struct UWidgetAnimation* AnimateOut; // 0x350(0x08)
	struct UBorder* Border_1; // 0x358(0x08)
	struct UCommonBackground_WBP_C* CommonBackround_WBP; // 0x360(0x08)
	struct UImage* Image_12; // 0x368(0x08)
	struct USpacer* Spacer_1; // 0x370(0x08)
	struct USpacer* Spacer_2; // 0x378(0x08)

	struct UWidgetAnimation* BP_AnimateVisibility(enum class ESlateVisibility newVisibility); // Function ModalDialogOkCancelItem_WBP.ModalDialogOkCancelItem_WBP_C.BP_AnimateVisibility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function ModalDialogOkCancelItem_WBP.ModalDialogOkCancelItem_WBP_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function ModalDialogOkCancelItem_WBP.ModalDialogOkCancelItem_WBP_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BP_SetButtonsLayout(enum class EYButtonsLayout layout); // Function ModalDialogOkCancelItem_WBP.ModalDialogOkCancelItem_WBP_C.BP_SetButtonsLayout // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_ModalDialogOkCancelItem_WBP(int32_t EntryPoint); // Function ModalDialogOkCancelItem_WBP.ModalDialogOkCancelItem_WBP_C.ExecuteUbergraph_ModalDialogOkCancelItem_WBP // (Final|UbergraphFunction) // @ game+0x1e02480
};

