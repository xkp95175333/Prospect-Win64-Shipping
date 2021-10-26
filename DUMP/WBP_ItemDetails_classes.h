// WidgetBlueprintGeneratedClass WBP_ItemDetails.WBP_ItemDetails_C
// Size: 0x7ea (Inherited: 0x580)
struct UWBP_ItemDetails_C : UYWidget_ItemContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x580(0x08)
	struct UWidgetAnimation* ScreenIn_Anim; // 0x588(0x08)
	struct USizeBox* AmmoIconSizeBox; // 0x590(0x08)
	struct UHorizontalBox* Amount; // 0x598(0x08)
	struct UOverlay* CollapsedComponents; // 0x5a0(0x08)
	struct UVerticalBox* CompatibleWeapons; // 0x5a8(0x08)
	struct UUniformGridPanel* CompatibleWeaponsUniformGrid; // 0x5b0(0x08)
	struct UOverlay* ComponentsContainer; // 0x5b8(0x08)
	struct USizeBox* CurrencyHolder; // 0x5c0(0x08)
	struct USizeBox* FactionPoints; // 0x5c8(0x08)
	struct UImage* Gfx_ArrowNegative; // 0x5d0(0x08)
	struct UImage* Gfx_ArrowPositive; // 0x5d8(0x08)
	struct UImage* Gfx_DurabilityIcon; // 0x5e0(0x08)
	struct UImage* Icn_Faction; // 0x5e8(0x08)
	struct USizeBox* IconDurabilitySizeBox; // 0x5f0(0x08)
	struct UNamedSlot* ImageHolder_Slot; // 0x5f8(0x08)
	struct UItemComponent_Image_WBP_C* ItemComponent_Image_WBP; // 0x600(0x08)
	struct UItemComponent_ImageAmmoType_WBP_C* ItemComponent_ImageAmmoType_WBP; // 0x608(0x08)
	struct UItemComponent_Mods_WBP_C* ItemComponent_Mods_WBP; // 0x610(0x08)
	struct UItemComponent_RarityColor_C* ItemComponent_RarityColor; // 0x618(0x08)
	struct UItemComponent_StackAmountText_WBP_C* ItemComponent_StackAmountText_WBP; // 0x620(0x08)
	struct UItemComponent_StatsEntryText_WBP_C* ItemComponent_StatsEntryText_WBP_C_Ammo; // 0x628(0x08)
	struct UItemComponent_StatsEntryText_WBP_C* ItemComponent_StatsEntryText_WBP_C_Armor; // 0x630(0x08)
	struct UItemComponent_StatsEntryText_WBP_C* ItemComponent_StatsEntryText_WBP_C_Bag; // 0x638(0x08)
	struct UItemComponent_StatsEntryText_WBP_C* ItemComponent_StatsEntryText_WBP_C_DPS; // 0x640(0x08)
	struct UItemComponent_StatsEntryText_WBP_C* ItemComponent_StatsEntryText_WBP_C_Durability; // 0x648(0x08)
	struct UItemComponent_StatsEntryText_WBP_C* ItemComponent_StatsEntryText_WBP_C_Penetration; // 0x650(0x08)
	struct UItemComponent_StatsEntryText_WBP_C* ItemComponent_StatsEntryText_WBP_C_RateOfFire; // 0x658(0x08)
	struct UItemComponent_TextDescription_WBP_C* ItemComponent_TextDescription_WBP; // 0x660(0x08)
	struct UItemComponent_TextName_WBP_C* ItemComponent_TextName_WBP; // 0x668(0x08)
	struct UItemComponent_Weight_C* ItemComponent_Weight; // 0x670(0x08)
	struct USizeBox* ItemImage; // 0x678(0x08)
	struct UImage* m_Gfx_AmmoIcon; // 0x680(0x08)
	struct UImage* m_Gfx_Item_Dynamic; // 0x688(0x08)
	struct UHorizontalBox* Price; // 0x690(0x08)
	struct UVerticalBox* StatAttachments; // 0x698(0x08)
	struct UVerticalBox* StatPerks; // 0x6a0(0x08)
	struct USizeBox* StatsDescription; // 0x6a8(0x08)
	struct USizeBox* StatsPrimary; // 0x6b0(0x08)
	struct UVerticalBox* StatsSecondary; // 0x6b8(0x08)
	struct UYTextBlock* Txt_Attachments; // 0x6c0(0x08)
	struct UTextBlock* Txt_Description; // 0x6c8(0x08)
	struct UTextBlock* Txt_Durability; // 0x6d0(0x08)
	struct UTextBlock* Txt_DurabilityAmount; // 0x6d8(0x08)
	struct UTextBlock* Txt_Label; // 0x6e0(0x08)
	struct UTextBlock* Txt_Label_2; // 0x6e8(0x08)
	struct UTextBlock* Txt_Rarity; // 0x6f0(0x08)
	struct UTextBlock* Txt_StackAmount; // 0x6f8(0x08)
	struct UWBP_Attachments_List_C* WBP_Attachments_List; // 0x700(0x08)
	struct UWBP_CompatibleWeapon_Entry_C* WBP_CompatibleWeapon_Entry; // 0x708(0x08)
	struct UWBP_CompatibleWeapon_Entry_C* WBP_CompatibleWeapon_Entry_2; // 0x710(0x08)
	struct UWBP_CompatibleWeapon_Entry_C* WBP_CompatibleWeapon_Entry_3; // 0x718(0x08)
	struct UWBP_CompatibleWeapon_Entry_C* WBP_CompatibleWeapon_Entry_4; // 0x720(0x08)
	struct UWBP_DividerHorizontal_Panel_C* WBP_Deco_Divider_A; // 0x728(0x08)
	struct UWBP_DividerHorizontal_Panel_C* WBP_Deco_Divider_B; // 0x730(0x08)
	struct UWBP_DividerHorizontal_Panel_C* WBP_Deco_Divider_C; // 0x738(0x08)
	struct UWBP_DividerHorizontal_VarA_Panel_C* WBP_DividerHorizontal_Var_A; // 0x740(0x08)
	struct UWBP_DividerHorizontal_VarA_Panel_C* WBP_DividerHorizontal_Var_B; // 0x748(0x08)
	struct UWBP_ItemStatBonus_Entry_C* WBP_ItemStatBonus; // 0x750(0x08)
	struct UWBP_ItemStatBonus_Entry_C* WBP_ItemStatBonus_2; // 0x758(0x08)
	struct UWBP_ItemStatPrimary_Entry_C* WBP_ItemStatPrimary; // 0x760(0x08)
	struct UWBP_ItemStatPrimary_Entry_C* WBP_ItemStatPrimary_2; // 0x768(0x08)
	struct UWBP_ItemStatPrimary_Entry_C* WBP_ItemStatPrimary_3; // 0x770(0x08)
	struct UWBP_ItemStatPrimary_Entry_C* WBP_ItemStatPrimary_4; // 0x778(0x08)
	struct UWBP_ProgressBarNameValue_C* WBP_ProgressBarNameValue; // 0x780(0x08)
	struct UWBP_ProgressBarNameValue_C* WBP_ProgressBarNameValue_2; // 0x788(0x08)
	struct UWBP_ProgressBarNameValue_C* WBP_ProgressBarNameValue_3; // 0x790(0x08)
	struct UWBP_ProgressBarNameValue_C* WBP_ProgressBarNameValue_4; // 0x798(0x08)
	struct UWBP_Common_Btn_C* WBP_UnequipAllMods_Btn; // 0x7a0(0x08)
	struct UWBP_Weight_C* WBP_Weight; // 0x7a8(0x08)
	struct UYTextBlock* YTxt_ItemName; // 0x7b0(0x08)
	bool UseStatDescription; // 0x7b8(0x01)
	bool UseStatPrimary; // 0x7b9(0x01)
	bool UseStatSecondary; // 0x7ba(0x01)
	bool UseStatPerks; // 0x7bb(0x01)
	bool UseStatAttachments; // 0x7bc(0x01)
	bool UseItemImage; // 0x7bd(0x01)
	bool UseAmount; // 0x7be(0x01)
	bool UseCompatibleWeapons; // 0x7bf(0x01)
	bool UsePrice; // 0x7c0(0x01)
	char pad_7C1[0x7]; // 0x7c1(0x07)
	struct TArray<enum class EYItemType> ItemTypesToShowStatsFor; // 0x7c8(0x10)
	struct TArray<enum class EYDeviceClass> DeviceClassesToHideStatsFor; // 0x7d8(0x10)
	bool UseAttachemntsUnequipButton; // 0x7e8(0x01)
	bool IsToolTipVariant; // 0x7e9(0x01)

	void SequenceEvent__ENTRYPOINTWBP_ItemDetails_1(); // Function WBP_ItemDetails.WBP_ItemDetails_C.SequenceEvent__ENTRYPOINTWBP_ItemDetails_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetDurabilityVisibility(bool Visible); // Function WBP_ItemDetails.WBP_ItemDetails_C.SetDurabilityVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void UpdateDurabilityIcon(); // Function WBP_ItemDetails.WBP_ItemDetails_C.UpdateDurabilityIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	struct UWidgetAnimation* BP_AnimateVisibility(enum class ESlateVisibility newVisibility); // Function WBP_ItemDetails.WBP_ItemDetails_C.BP_AnimateVisibility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Update Primary Stats(); // Function WBP_ItemDetails.WBP_ItemDetails_C.Update Primary Stats // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetFactionProgressionGain(struct FText InText); // Function WBP_ItemDetails.WBP_ItemDetails_C.SetFactionProgressionGain // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetPriceText(struct FText Price); // Function WBP_ItemDetails.WBP_ItemDetails_C.SetPriceText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetImage(struct UTexture2D* Texture); // Function WBP_ItemDetails.WBP_ItemDetails_C.SetImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ShowItemImage(bool UseItemImage); // Function WBP_ItemDetails.WBP_ItemDetails_C.ShowItemImage // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ShowStatPrimary(bool StatPrimary); // Function WBP_ItemDetails.WBP_ItemDetails_C.ShowStatPrimary // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ShowStatDesc(bool StatDesc); // Function WBP_ItemDetails.WBP_ItemDetails_C.ShowStatDesc // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ShowStatAttachments(bool StatAttachments); // Function WBP_ItemDetails.WBP_ItemDetails_C.ShowStatAttachments // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ShowStatPerks(bool StatPerk); // Function WBP_ItemDetails.WBP_ItemDetails_C.ShowStatPerks // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ShowStatSecondary(bool StatSecondary); // Function WBP_ItemDetails.WBP_ItemDetails_C.ShowStatSecondary // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__ItemComponent_Image_WBP_K2Node_ComponentBoundEvent_6_OnItemComponentImageLoaded__DelegateSignature(struct UTexture2D* Texture); // Function WBP_ItemDetails.WBP_ItemDetails_C.BndEvt__ItemComponent_Image_WBP_K2Node_ComponentBoundEvent_6_OnItemComponentImageLoaded__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__ItemComponent_TextName_WBP_K2Node_ComponentBoundEvent_7_OnItemComponentTextSet__DelegateSignature(struct FText ItemName, enum class EYItemRarityType itemRarity); // Function WBP_ItemDetails.WBP_ItemDetails_C.BndEvt__ItemComponent_TextName_WBP_K2Node_ComponentBoundEvent_7_OnItemComponentTextSet__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__ItemComponent_Weight_K2Node_ComponentBoundEvent_15_OnWeightTextSet__DelegateSignature(struct FText WeightText); // Function WBP_ItemDetails.WBP_ItemDetails_C.BndEvt__ItemComponent_Weight_K2Node_ComponentBoundEvent_15_OnWeightTextSet__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__ItemComponent_ImageAmmoType_WBP_K2Node_ComponentBoundEvent_13_OnItemComponentImageLoaded__DelegateSignature(struct UTexture2D* Texture); // Function WBP_ItemDetails.WBP_ItemDetails_C.BndEvt__ItemComponent_ImageAmmoType_WBP_K2Node_ComponentBoundEvent_13_OnItemComponentImageLoaded__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function WBP_ItemDetails.WBP_ItemDetails_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__ItemComponent_TextDescription_WBP_K2Node_ComponentBoundEvent_3_OnItemComponentTextDescription__DelegateSignature(struct FText Description); // Function WBP_ItemDetails.WBP_ItemDetails_C.BndEvt__ItemComponent_TextDescription_WBP_K2Node_ComponentBoundEvent_3_OnItemComponentTextDescription__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function WBP_ItemDetails.WBP_ItemDetails_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ShowAmount(bool UseAmount); // Function WBP_ItemDetails.WBP_ItemDetails_C.ShowAmount // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__ItemComponent_StatsEntryText_WBP_C_Ammo_K2Node_ComponentBoundEvent_4_StatsNumberSet__DelegateSignature(struct FText Label, struct FText Value); // Function WBP_ItemDetails.WBP_ItemDetails_C.BndEvt__ItemComponent_StatsEntryText_WBP_C_Ammo_K2Node_ComponentBoundEvent_4_StatsNumberSet__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__ItemComponent_StatsEntryText_WBP_C_DPS_K2Node_ComponentBoundEvent_5_StatsNumberSet__DelegateSignature(struct FText Label, struct FText Value); // Function WBP_ItemDetails.WBP_ItemDetails_C.BndEvt__ItemComponent_StatsEntryText_WBP_C_DPS_K2Node_ComponentBoundEvent_5_StatsNumberSet__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__ItemComponent_StatsEntryText_WBP_C_RateOfFire_K2Node_ComponentBoundEvent_8_StatsNumberSet__DelegateSignature(struct FText Label, struct FText Value); // Function WBP_ItemDetails.WBP_ItemDetails_C.BndEvt__ItemComponent_StatsEntryText_WBP_C_RateOfFire_K2Node_ComponentBoundEvent_8_StatsNumberSet__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void ShowCompatibleWeapons(bool UseCompatibleWeapons); // Function WBP_ItemDetails.WBP_ItemDetails_C.ShowCompatibleWeapons // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ShowPrice(bool UsePrice); // Function WBP_ItemDetails.WBP_ItemDetails_C.ShowPrice // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__ItemComponent_StatsEntryText_WBP_C_Shield_K2Node_ComponentBoundEvent_9_StatsNumberSet__DelegateSignature(struct FText Label, struct FText Value); // Function WBP_ItemDetails.WBP_ItemDetails_C.BndEvt__ItemComponent_StatsEntryText_WBP_C_Shield_K2Node_ComponentBoundEvent_9_StatsNumberSet__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void HideSeparateStats(); // Function WBP_ItemDetails.WBP_ItemDetails_C.HideSeparateStats // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SequenceEvent_1(); // Function WBP_ItemDetails.WBP_ItemDetails_C.SequenceEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__ItemComponent_StatsEntryText_WBP_C_Bag_K2Node_ComponentBoundEvent_9_StatsNumberSet__DelegateSignature(struct FText Label, struct FText Value); // Function WBP_ItemDetails.WBP_ItemDetails_C.BndEvt__ItemComponent_StatsEntryText_WBP_C_Bag_K2Node_ComponentBoundEvent_9_StatsNumberSet__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__ItemComponent_StatsEntryText_WBP_C_Durability_K2Node_ComponentBoundEvent_10_StatsNumberSet__DelegateSignature(struct FText Label, struct FText Value); // Function WBP_ItemDetails.WBP_ItemDetails_C.BndEvt__ItemComponent_StatsEntryText_WBP_C_Durability_K2Node_ComponentBoundEvent_10_StatsNumberSet__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__ItemComponent_StackAmountText_WBP_K2Node_ComponentBoundEvent_16_OnItemComponentTextAmountUpdated__DelegateSignature(struct FText amountText); // Function WBP_ItemDetails.WBP_ItemDetails_C.BndEvt__ItemComponent_StackAmountText_WBP_K2Node_ComponentBoundEvent_16_OnItemComponentTextAmountUpdated__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__ItemComponent_StackAmountText_WBP_K2Node_ComponentBoundEvent_17_OnVisibilityChangedEvent__DelegateSignature(enum class ESlateVisibility InVisibility); // Function WBP_ItemDetails.WBP_ItemDetails_C.BndEvt__ItemComponent_StackAmountText_WBP_K2Node_ComponentBoundEvent_17_OnVisibilityChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void BndEvt__ItemComponent_ImageAmmoType_WBP_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature(enum class ESlateVisibility InVisibility); // Function WBP_ItemDetails.WBP_ItemDetails_C.BndEvt__ItemComponent_ImageAmmoType_WBP_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void OnInitialized(); // Function WBP_ItemDetails.WBP_ItemDetails_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void OnItemSetCallback(); // Function WBP_ItemDetails.WBP_ItemDetails_C.OnItemSetCallback // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_AddItemComponent(struct UYWidget_ItemComponentBase* itemComponentClass, bool Visible); // Function WBP_ItemDetails.WBP_ItemDetails_C.BP_AddItemComponent // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__ItemComponent_RarityColor_K2Node_ComponentBoundEvent_5_OnItemRarityColorSet__DelegateSignature(struct FSlateColor rarityColor); // Function WBP_ItemDetails.WBP_ItemDetails_C.BndEvt__ItemComponent_RarityColor_K2Node_ComponentBoundEvent_5_OnItemRarityColorSet__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__ItemComponent_Mods_WBP_K2Node_ComponentBoundEvent_12_OnModSlotDataAvailableSignature__DelegateSignature(struct FYItemModsInfo itemModsInfo); // Function WBP_ItemDetails.WBP_ItemDetails_C.BndEvt__ItemComponent_Mods_WBP_K2Node_ComponentBoundEvent_12_OnModSlotDataAvailableSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_ItemDetails_WBP_Common_Btn_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature(struct UWBP_ButtonBase_Btn_C* Button); // Function WBP_ItemDetails.WBP_ItemDetails_C.BndEvt__WBP_ItemDetails_WBP_Common_Btn_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void ShowStatsUnequipButton(bool StatAttachments); // Function WBP_ItemDetails.WBP_ItemDetails_C.ShowStatsUnequipButton // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BndEvt__WBP_ItemDetails_ItemComponent_StatsEntryText_WBP_C_Penetration_K2Node_ComponentBoundEvent_0_StatsNumberSet__DelegateSignature(struct FText Label, struct FText Value); // Function WBP_ItemDetails.WBP_ItemDetails_C.BndEvt__WBP_ItemDetails_ItemComponent_StatsEntryText_WBP_C_Penetration_K2Node_ComponentBoundEvent_0_StatsNumberSet__DelegateSignature // (BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_ItemDetails(int32_t EntryPoint); // Function WBP_ItemDetails.WBP_ItemDetails_C.ExecuteUbergraph_WBP_ItemDetails // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

