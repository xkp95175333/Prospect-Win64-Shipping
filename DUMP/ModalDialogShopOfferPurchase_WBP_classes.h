// WidgetBlueprintGeneratedClass ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C
// Size: 0x4a8 (Inherited: 0x3c8)
struct UModalDialogShopOfferPurchase_WBP_C : UYWidget_ModalDialogShopOfferPurchase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UWidgetAnimation* AnimateOut; // 0x3d0(0x08)
	struct UWidgetAnimation* animateIn; // 0x3d8(0x08)
	struct UWidgetAnimation* Purchase_Successfull_anim; // 0x3e0(0x08)
	struct UWidgetAnimation* Purchase_Pending_anim; // 0x3e8(0x08)
	struct UCanvasPanel* CanvasPanel_3; // 0x3f0(0x08)
	struct UCommonBackground_WBP_C* CommonBackround_WBP; // 0x3f8(0x08)
	struct UWidgetSwitcher* CurrencySwitcher; // 0x400(0x08)
	struct UImage* glow; // 0x408(0x08)
	struct UImage* glow2; // 0x410(0x08)
	struct UImage* gradient; // 0x418(0x08)
	struct UHardCurrencyDisplay_WBP_C* HardCurrencyDisplay_WBP; // 0x420(0x08)
	struct UImage* Image_2; // 0x428(0x08)
	struct UImage* Image_12; // 0x430(0x08)
	struct UImage* Image_79; // 0x438(0x08)
	struct UImage* Image_81; // 0x440(0x08)
	struct UYTextBlock* quantityLimitTextBlock; // 0x448(0x08)
	struct UHorizontalBox* quantitySelectionHorizontalBox; // 0x450(0x08)
	struct USoftCurrencyDisplay_WBP_C* SoftCurrencyDisplay_WBP; // 0x458(0x08)
	struct USpacer* Spacer_1; // 0x460(0x08)
	struct USpacer* Spacer_2; // 0x468(0x08)
	struct UImage* whiteflash; // 0x470(0x08)
	struct FDataTableRowHandle purchaseSuccessfulSound; // 0x478(0x10)
	struct FDataTableRowHandle purchaseFailedSound; // 0x488(0x10)
	struct FDataTableRowHandle popupOpenedSound; // 0x498(0x10)

	struct UWidgetAnimation* BP_AnimateVisibility(enum class ESlateVisibility newVisibility); // Function ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C.BP_AnimateVisibility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PlaySuccessfulAnimation(); // Function ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C.PlaySuccessfulAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PlayLoopingPendingAnimation(); // Function ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C.PlayLoopingPendingAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UWidgetAnimation* BP_SetCurrentOfferPurchaseDialogState(enum class EYShopOfferPurchaseDialogState shopOfferPurchaseDialogState); // Function ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C.BP_SetCurrentOfferPurchaseDialogState // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_SetForSinglePurchase(); // Function ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C.BP_SetForSinglePurchase // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BP_SetForMultiPurchase(); // Function ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C.BP_SetForMultiPurchase // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BP_PurchaseUnavailableUpdated(enum class EYOfferUnavailableReason unavailableReason); // Function ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C.BP_PurchaseUnavailableUpdated // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BP_SetCurrencyType(int32_t buttonCurrencyType); // Function ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C.BP_SetCurrencyType // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_ModalDialogShopOfferPurchase_WBP(int32_t EntryPoint); // Function ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C.ExecuteUbergraph_ModalDialogShopOfferPurchase_WBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

