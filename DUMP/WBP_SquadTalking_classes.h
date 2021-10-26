// WidgetBlueprintGeneratedClass WBP_SquadTalking.WBP_SquadTalking_C
// Size: 0x2f9 (Inherited: 0x2d8)
struct UWBP_SquadTalking_C : UYWidget_TalkingIcon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UImage* Gfx_Circle; // 0x2e0(0x08)
	struct UCanvasPanel* GraphicHolder; // 0x2e8(0x08)
	struct UImage* Icn_Talking; // 0x2f0(0x08)
	bool ShowBacker; // 0x2f8(0x01)

	void PreConstruct(bool IsDesignTime); // Function WBP_SquadTalking.WBP_SquadTalking_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void BP_SetTalking(bool IsTalking); // Function WBP_SquadTalking.WBP_SquadTalking_C.BP_SetTalking // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_SquadTalking(int32_t EntryPoint); // Function WBP_SquadTalking.WBP_SquadTalking_C.ExecuteUbergraph_WBP_SquadTalking // (Final|UbergraphFunction) // @ game+0x1e02480
};

