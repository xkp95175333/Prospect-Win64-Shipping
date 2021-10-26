// WidgetBlueprintGeneratedClass WBP_RetentionBonusItem.WBP_RetentionBonusItem_C
// Size: 0x2f8 (Inherited: 0x260)
struct UWBP_RetentionBonusItem_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Claimed_Anim; // 0x268(0x08)
	struct UNamedSlot* ContentSlot; // 0x270(0x08)
	struct UBorder* Day; // 0x278(0x08)
	struct UImage* Gfx_Bg_Gradient; // 0x280(0x08)
	struct UImage* Gfx_Bg_Gradient_Anim; // 0x288(0x08)
	struct UImage* Gfx_Preview; // 0x290(0x08)
	struct UImage* Gfx_Success; // 0x298(0x08)
	struct UImage* Gfx_Success_Bg; // 0x2a0(0x08)
	struct UImage* Gfx_Success_Stroke; // 0x2a8(0x08)
	struct UWBP_Item_Preview_Btn_C* ItemPreview; // 0x2b0(0x08)
	struct USizeBox* ItemSize; // 0x2b8(0x08)
	struct UTextBlock* Txt_Day; // 0x2c0(0x08)
	struct FText SetDay; // 0x2c8(0x18)
	float SetWidth; // 0x2e0(0x04)
	float SetHeight; // 0x2e4(0x04)
	struct FDataTableRowHandle ClaimedSoundFx; // 0x2e8(0x10)

	void SetRewardDay(int32_t Day, bool claimed); // Function WBP_RetentionBonusItem.WBP_RetentionBonusItem_C.SetRewardDay // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Set Reward Icon(bool isItem, struct FDataTableRowHandle rowHandle); // Function WBP_RetentionBonusItem.WBP_RetentionBonusItem_C.Set Reward Icon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function WBP_RetentionBonusItem.WBP_RetentionBonusItem_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_RetentionBonusItem(int32_t EntryPoint); // Function WBP_RetentionBonusItem.WBP_RetentionBonusItem_C.ExecuteUbergraph_WBP_RetentionBonusItem // (Final|UbergraphFunction) // @ game+0x1e02480
};

