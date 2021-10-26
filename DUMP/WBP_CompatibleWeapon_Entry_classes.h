// WidgetBlueprintGeneratedClass WBP_CompatibleWeapon_Entry.WBP_CompatibleWeapon_Entry_C
// Size: 0x330 (Inherited: 0x2c0)
struct UWBP_CompatibleWeapon_Entry_C : UYWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct UWidgetAnimation* ScreenIn_Anim; // 0x2c8(0x08)
	struct UImage* Gfx_WeaponIcon; // 0x2d0(0x08)
	struct UWBP_Divider_Vertical_Panel_C* WBP_Divider_Vertical_Panel; // 0x2d8(0x08)
	struct UTextBlock* WeaponLabel; // 0x2e0(0x08)
	struct FText Label; // 0x2e8(0x18)
	bool ShowDivide; // 0x300(0x01)
	char pad_301[0x7]; // 0x301(0x07)
	struct TSoftObjectPtr<struct UTexture2D> WeaponImage; // 0x308(0x28)

	struct UWidgetAnimation* BP_AnimateVisibility(enum class ESlateVisibility newVisibility); // Function WBP_CompatibleWeapon_Entry.WBP_CompatibleWeapon_Entry_C.BP_AnimateVisibility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function WBP_CompatibleWeapon_Entry.WBP_CompatibleWeapon_Entry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function WBP_CompatibleWeapon_Entry.WBP_CompatibleWeapon_Entry_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_CompatibleWeapon_Entry(int32_t EntryPoint); // Function WBP_CompatibleWeapon_Entry.WBP_CompatibleWeapon_Entry_C.ExecuteUbergraph_WBP_CompatibleWeapon_Entry // (Final|UbergraphFunction) // @ game+0x1e02480
};

