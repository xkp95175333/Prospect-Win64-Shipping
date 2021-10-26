// WidgetBlueprintGeneratedClass WBP_Subtitles.WBP_Subtitles_C
// Size: 0x278 (Inherited: 0x260)
struct UWBP_Subtitles_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Gfx_SubtitleBacker; // 0x268(0x08)
	struct UTextBlock* Txt_Subtitles; // 0x270(0x08)

	void HideSubtitle(); // Function WBP_Subtitles.WBP_Subtitles_C.HideSubtitle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ShowSubtitle(struct FText Text); // Function WBP_Subtitles.WBP_Subtitles_C.ShowSubtitle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnInitialized(); // Function WBP_Subtitles.WBP_Subtitles_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void OnAnnouncementStarted(struct FYVOAudioDatatableRow voicelineData, struct FYAnnouncementPlaybackOptions playbackOptions, struct FYVOLine voiceLine); // Function WBP_Subtitles.WBP_Subtitles_C.OnAnnouncementStarted // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnAnnouncementStopped(struct FYAnnouncementPlayEntryData voicelineData); // Function WBP_Subtitles.WBP_Subtitles_C.OnAnnouncementStopped // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_Subtitles(int32_t EntryPoint); // Function WBP_Subtitles.WBP_Subtitles_C.ExecuteUbergraph_WBP_Subtitles // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
};

