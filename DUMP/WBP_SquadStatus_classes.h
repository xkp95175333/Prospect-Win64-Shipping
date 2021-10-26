// WidgetBlueprintGeneratedClass WBP_SquadStatus.WBP_SquadStatus_C
// Size: 0x2f0 (Inherited: 0x2c0)
struct UWBP_SquadStatus_C : UYWidget {
	struct UWidgetAnimation* Ready_Anim; // 0x2c0(0x08)
	struct UWidgetAnimation* WidgetIn_Anim; // 0x2c8(0x08)
	struct UImage* Gfx_Backer; // 0x2d0(0x08)
	struct UImage* Gfx_ReadyFlash; // 0x2d8(0x08)
	struct UOverlay* StatusBadgeHolder; // 0x2e0(0x08)
	struct UTextBlock* Txt_SquadStatus; // 0x2e8(0x08)

	void SetText(struct FText newText); // Function WBP_SquadStatus.WBP_SquadStatus_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
};

