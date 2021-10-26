// WidgetBlueprintGeneratedClass WBP_Pickups_HUD_Item.WBP_Pickups_HUD_Item_C
// Size: 0x630 (Inherited: 0x580)
struct UWBP_Pickups_HUD_Item_C : UYWidget_ItemContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x580(0x08)
	struct UWidgetAnimation* WidgetOut_Anim; // 0x588(0x08)
	struct UWidgetAnimation* WidgetIn_Anim; // 0x590(0x08)
	struct UImage* Gfx_Chevrons; // 0x598(0x08)
	struct UImage* Gfx_RarityMain; // 0x5a0(0x08)
	struct UImage* Gfx_RarityOver; // 0x5a8(0x08)
	struct UImage* Icn_WeaponImage_2; // 0x5b0(0x08)
	struct UScaleBox* Image_Centered; // 0x5b8(0x08)
	struct UScaleBox* ImageWeapon; // 0x5c0(0x08)
	struct UItemComponent_Image_WBP_C* ItemComponent_Image_WBP; // 0x5c8(0x08)
	struct UItemComponent_RarityColor_C* ItemComponent_RarityColor; // 0x5d0(0x08)
	struct UItemComponent_StackAmountText_WBP_C* ItemComponent_StackAmountText_WBP; // 0x5d8(0x08)
	struct UItemComponent_TextName_WBP_C* ItemComponent_TextName_WBP; // 0x5e0(0x08)
	struct UImage* m_Image_ItemCenter; // 0x5e8(0x08)
	struct UBorder* RarityColorBorder; // 0x5f0(0x08)
	struct UTextBlock* Txt_Amount; // 0x5f8(0x08)
	struct UTextBlock* Txt_ItemName; // 0x600(0x08)
	struct FLinearColor rarityColor; // 0x608(0x10)
	bool isWeapon; // 0x618(0x01)
	char pad_619[0x3]; // 0x619(0x03)
	float OnScreenDuration; // 0x61c(0x04)
	struct FMulticastInlineDelegate OnFadedOut; // 0x620(0x10)

	void OnFadeOutFinished(); // Function WBP_Pickups_HUD_Item.WBP_Pickups_HUD_Item_C.OnFadeOutFinished // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void StartRemoving(); // Function WBP_Pickups_HUD_Item.WBP_Pickups_HUD_Item_C.StartRemoving // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void InitFromItem(struct FYInventoryItem Item); // Function WBP_Pickups_HUD_Item.WBP_Pickups_HUD_Item_C.InitFromItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function WBP_Pickups_HUD_Item.WBP_Pickups_HUD_Item_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__ItemComponent_Image_WBP_K2Node_ComponentBoundEvent_0_OnItemComponentImageLoaded__DelegateSignature(struct UTexture2D* Texture); // Function WBP_Pickups_HUD_Item.WBP_Pickups_HUD_Item_C.BndEvt__ItemComponent_Image_WBP_K2Node_ComponentBoundEvent_0_OnItemComponentImageLoaded__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__ItemComponent_TextName_WBP_K2Node_ComponentBoundEvent_1_OnItemComponentTextSet__DelegateSignature(struct FText ItemName, enum class EYItemRarityType itemRarity); // Function WBP_Pickups_HUD_Item.WBP_Pickups_HUD_Item_C.BndEvt__ItemComponent_TextName_WBP_K2Node_ComponentBoundEvent_1_OnItemComponentTextSet__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__ItemComponent_StackAmountText_WBP_K2Node_ComponentBoundEvent_3_OnItemComponentTextAmountUpdated__DelegateSignature(struct FText amountText); // Function WBP_Pickups_HUD_Item.WBP_Pickups_HUD_Item_C.BndEvt__ItemComponent_StackAmountText_WBP_K2Node_ComponentBoundEvent_3_OnItemComponentTextAmountUpdated__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__ItemComponent_RarityColor_K2Node_ComponentBoundEvent_4_OnItemRarityColorSet__DelegateSignature(struct FSlateColor rarityColor); // Function WBP_Pickups_HUD_Item.WBP_Pickups_HUD_Item_C.BndEvt__ItemComponent_RarityColor_K2Node_ComponentBoundEvent_4_OnItemRarityColorSet__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_Pickups_HUD_Item(int32_t EntryPoint); // Function WBP_Pickups_HUD_Item.WBP_Pickups_HUD_Item_C.ExecuteUbergraph_WBP_Pickups_HUD_Item // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
	void OnFadedOut__DelegateSignature(); // Function WBP_Pickups_HUD_Item.WBP_Pickups_HUD_Item_C.OnFadedOut__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
};

