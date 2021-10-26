// WidgetBlueprintGeneratedClass ItemComponent_TextOfferPrice_WBP.ItemComponent_TextOfferPrice_WBP_C
// Size: 0x33c (Inherited: 0x308)
struct UItemComponent_TextOfferPrice_WBP_C : UYWidget_ItemComponentTextOfferPrice {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct UYTextBlock* associatedOffersYTextBlock; // 0x310(0x08)
	struct UHorizontalBox* purchasedHorizontalBox; // 0x318(0x08)
	struct UYTextBlock* unavailableReasonYTextBlock; // 0x320(0x08)
	struct UYTextBlock* unavailableSeparatorYTextBlock; // 0x328(0x08)
	struct UYTextBlock* unavailableYTextBlock; // 0x330(0x08)
	bool displayPurchasedText; // 0x338(0x01)
	bool displayUnavailableText; // 0x339(0x01)
	bool displayUnavailableReasonText; // 0x33a(0x01)
	bool displayAssociatedOffers; // 0x33b(0x01)

	void BP_AssociatedOffers(struct TArray<struct FString> offerIds); // Function ItemComponent_TextOfferPrice_WBP.ItemComponent_TextOfferPrice_WBP_C.BP_AssociatedOffers // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void UpdateUnavailableText(enum class EYOfferUnavailableReason unavailableReason, struct FText unavailableReasonText); // Function ItemComponent_TextOfferPrice_WBP.ItemComponent_TextOfferPrice_WBP_C.UpdateUnavailableText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_Update(bool canPurchaseOffer, enum class EYOfferUnavailableReason unavailableReason, struct FText unavailableReasonText); // Function ItemComponent_TextOfferPrice_WBP.ItemComponent_TextOfferPrice_WBP_C.BP_Update // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_ItemComponent_TextOfferPrice_WBP(int32_t EntryPoint); // Function ItemComponent_TextOfferPrice_WBP.ItemComponent_TextOfferPrice_WBP_C.ExecuteUbergraph_ItemComponent_TextOfferPrice_WBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

