// WidgetBlueprintGeneratedClass ModalDialogExitGame_WBP.ModalDialogExitGame_WBP_C
// Size: 0x340 (Inherited: 0x318)
struct UModalDialogExitGame_WBP_C : UYWidget_ModalDialogExitGame {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* animateIn; // 0x320(0x08)
	struct UWidgetAnimation* AnimateOut; // 0x328(0x08)
	struct UBorder* Border_1; // 0x330(0x08)
	struct UImage* Image_66; // 0x338(0x08)

	struct UWidgetAnimation* BP_AnimateVisibility(enum class ESlateVisibility newVisibility); // Function ModalDialogExitGame_WBP.ModalDialogExitGame_WBP_C.BP_AnimateVisibility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function ModalDialogExitGame_WBP.ModalDialogExitGame_WBP_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function ModalDialogExitGame_WBP.ModalDialogExitGame_WBP_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_ModalDialogExitGame_WBP(int32_t EntryPoint); // Function ModalDialogExitGame_WBP.ModalDialogExitGame_WBP_C.ExecuteUbergraph_ModalDialogExitGame_WBP // (Final|UbergraphFunction) // @ game+0x1e02480
};

