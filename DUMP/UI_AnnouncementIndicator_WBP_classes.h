// WidgetBlueprintGeneratedClass UI_AnnouncementIndicator_WBP.UI_AnnouncementIndicator_WBP_C
// Size: 0x278 (Inherited: 0x260)
struct UUI_AnnouncementIndicator_WBP_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Image_Icon; // 0x268(0x08)
	struct UObject* AssociatedPlayerState; // 0x270(0x08)

	void BP_OnAnnouncementStarted_Event_1(struct FYVOAudioDatatableRow voicelineData, struct FYAnnouncementPlaybackOptions playbackOptions, struct FYVOLine voiceLine); // Function UI_AnnouncementIndicator_WBP.UI_AnnouncementIndicator_WBP_C.BP_OnAnnouncementStarted_Event_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void InitializeAnnouncementIndicator(struct UObject* AssociatedPlayerState); // Function UI_AnnouncementIndicator_WBP.UI_AnnouncementIndicator_WBP_C.InitializeAnnouncementIndicator // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function UI_AnnouncementIndicator_WBP.UI_AnnouncementIndicator_WBP_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void TriggerShowAndHide(); // Function UI_AnnouncementIndicator_WBP.UI_AnnouncementIndicator_WBP_C.TriggerShowAndHide // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_UI_AnnouncementIndicator_WBP(int32_t EntryPoint); // Function UI_AnnouncementIndicator_WBP.UI_AnnouncementIndicator_WBP_C.ExecuteUbergraph_UI_AnnouncementIndicator_WBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

