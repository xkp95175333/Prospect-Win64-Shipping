// BlueprintGeneratedClass WBP_Settings_Provider.WBP_Settings_Provider_C
// Size: 0x220 (Inherited: 0x130)
struct UWBP_Settings_Provider_C : UYWidgetProvider_Settings {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x130(0x08)
	struct TArray<struct FName> QualitySettings; // 0x138(0x10)
	struct TMap<struct FString, struct FString> LanguagesToCultures; // 0x148(0x50)
	struct FString OriginalCulture; // 0x198(0x10)
	struct TMap<struct FString, struct FIntPoint> Resolutions; // 0x1a8(0x50)
	int32_t OriginalResolutionIndex; // 0x1f8(0x04)
	char pad_1FC[0x4]; // 0x1fc(0x04)
	struct FMulticastInlineDelegate OnSettingInfoSet; // 0x200(0x10)
	struct FMulticastInlineDelegate OnCloseSettingInfo; // 0x210(0x10)

	void CloseSettingInfo(); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.CloseSettingInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetSettingInfo(struct FText Title, struct FText Description, struct TSoftObjectPtr<struct UTexture2D> Image); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.SetSettingInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void UpdateVideoQuality(struct FName DataName); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.UpdateVideoQuality // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ApplySettings(); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.ApplySettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void GetCurrentResolution(struct FString Resolution); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.GetCurrentResolution // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void GetAvailableResolutions(struct TArray<struct FString> Resolutions); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.GetAvailableResolutions // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void RefreshResolutions(); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.RefreshResolutions // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void RevertSettingsChanges(); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.RevertSettingsChanges // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void RestoreDefaultSettings(); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.RestoreDefaultSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void RestoreDefaultCulture(); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.RestoreDefaultCulture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void RevertCultureChanges(); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.RevertCultureChanges // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void RefreshLanguages(); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.RefreshLanguages // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void GetCultureForLanguage(struct FString Language, struct FString Culture); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.GetCultureForLanguage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void GetAvailableLanguages(struct TArray<struct FString> Languages); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.GetAvailableLanguages // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void ApplyVoiceChatSettings(struct UUserWidget* Widget); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.ApplyVoiceChatSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnDropdown_Language(struct UWBP_DropdownBase_Btn_C* Dropdown, struct FString Option, int32_t Index); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnDropdown_Language // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnToggle_BrazilianPortuguese(struct UWBP_ToggleText_Btn_C* Toggle, bool toggled); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_BrazilianPortuguese // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnToggle_ChatEnabled(struct UWBP_ToggleText_Btn_C* Toggle, bool toggled); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_ChatEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnToggle_Chinese(struct UWBP_ToggleText_Btn_C* Toggle, bool toggled); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_Chinese // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnToggle_English(struct UWBP_ToggleText_Btn_C* Toggle, bool toggled); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_English // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnToggle_FOVMovementChanges(struct UWBP_ToggleText_Btn_C* Toggle, bool toggled); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_FOVMovementChanges // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnToggle_French(struct UWBP_ToggleText_Btn_C* Toggle, bool toggled); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_French // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnToggle_German(struct UWBP_ToggleText_Btn_C* Toggle, bool toggled); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_German // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnToggle_Polish(struct UWBP_ToggleText_Btn_C* Toggle, bool toggled); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_Polish // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnToggle_RotateMinimap(struct UWBP_ToggleText_Btn_C* Toggle, bool toggled); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_RotateMinimap // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnToggle_Russian(struct UWBP_ToggleText_Btn_C* Toggle, bool toggled); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_Russian // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnToggle_Spanish(struct UWBP_ToggleText_Btn_C* Toggle, bool toggled); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_Spanish // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnToggle_Subtitles(struct UWBP_ToggleText_Btn_C* Toggle, bool toggled); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_Subtitles // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnToggle_Turkish(struct UWBP_ToggleText_Btn_C* Toggle, bool toggled); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_Turkish // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnSelector_ADSSensitivity(struct UWBP_Selector_Btn_C* selector, struct FStructure_SelectorData Value); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_ADSSensitivity // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnSelector_MouseSensitivity(struct UWBP_Selector_Btn_C* selector, struct FStructure_SelectorData Value); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_MouseSensitivity // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnSelector_ScopedSensitivity(struct UWBP_Selector_Btn_C* selector, struct FStructure_SelectorData Value); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_ScopedSensitivity // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnToggle_CrouchToggle(struct UWBP_ToggleText_Btn_C* Toggle, bool toggled); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_CrouchToggle // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnToggle_FOVBasedSensitivityScaling(struct UWBP_ToggleText_Btn_C* Toggle, bool toggled); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_FOVBasedSensitivityScaling // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnToggle_InvertX(struct UWBP_ToggleText_Btn_C* Toggle, bool toggled); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_InvertX // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnToggle_InvertY(struct UWBP_ToggleText_Btn_C* Toggle, bool toggled); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_InvertY // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnToggle_MouseSmoothing(struct UWBP_ToggleText_Btn_C* Toggle, bool toggled); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_MouseSmoothing // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnToggle_PerScopeSensitivity(struct UWBP_ToggleText_Btn_C* Toggle, bool toggled); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_PerScopeSensitivity // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnToggle_SprintToggle(struct UWBP_ToggleText_Btn_C* Toggle, bool toggled); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_SprintToggle // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnToggle_TargetingToggle(struct UWBP_ToggleText_Btn_C* Toggle, bool toggled); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_TargetingToggle // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnSelector_ScopedSensitivity_1_5x(struct UWBP_Selector_Btn_C* selector, struct FStructure_SelectorData Value); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_ScopedSensitivity_1_5x // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnSelector_ScopedSensitivity_2x(struct UWBP_Selector_Btn_C* selector, struct FStructure_SelectorData Value); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_ScopedSensitivity_2x // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnSelector_ScopedSensitivity_4x(struct UWBP_Selector_Btn_C* selector, struct FStructure_SelectorData Value); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_ScopedSensitivity_4x // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnSelector_ScopedSensitivity_8x(struct UWBP_Selector_Btn_C* selector, struct FStructure_SelectorData Value); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_ScopedSensitivity_8x // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnSelector_ScopedSensitivity_16x(struct UWBP_Selector_Btn_C* selector, struct FStructure_SelectorData Value); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_ScopedSensitivity_16x // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnToggle_LeaningToggle(struct UWBP_ToggleText_Btn_C* Toggle, bool toggled); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_LeaningToggle // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnSelector_DialogueVolume(struct FStructure_SelectorData Value); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_DialogueVolume // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnSelector_HitmarkerVolume(struct FStructure_SelectorData Value); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_HitmarkerVolume // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnSelector_InputVolume(struct FStructure_SelectorData Value, struct UWBP_Selector_Btn_C* selector); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_InputVolume // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnSelector_MasterVolume(struct FStructure_SelectorData Value); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_MasterVolume // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnSelector_MicrophoneSensitivity(struct FStructure_SelectorData Value, struct UWBP_Selector_Btn_C* selector); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_MicrophoneSensitivity // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnSelector_MusicVolume(struct FStructure_SelectorData Value); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_MusicVolume // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnSelector_OutputVolume(struct FStructure_SelectorData Value, struct UWBP_Selector_Btn_C* selector); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_OutputVolume // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnSelector_SfxVolume(struct FStructure_SelectorData Value); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_SfxVolume // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnToggle_MuteInputAudio(struct UWBP_ToggleText_Btn_C* Toggle, bool toggled); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_MuteInputAudio // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnToggle_MuteOutputAudio(struct UWBP_ToggleText_Btn_C* Toggle, bool toggled); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_MuteOutputAudio // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnToggle_PushToTalk(struct UWBP_ToggleText_Btn_C* Toggle, bool toggled); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_PushToTalk // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnDropdown_InputDevice(struct FString Device, struct UWBP_DropdownBase_Btn_C* Dropdown); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnDropdown_InputDevice // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnDropdown_OutputDevice(struct FString Device, struct UWBP_DropdownBase_Btn_C* Dropdown); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnDropdown_OutputDevice // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnToggle_AutoDetect(bool toggled); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_AutoDetect // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnToggle_Vsync(bool toggled); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_Vsync // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnToggle_ShowFps(bool toggled); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_ShowFps // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnToggle_MultithreadedRendering(bool toggled); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_MultithreadedRendering // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnToggle_GpuCrashDebugging(bool toggled); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_GpuCrashDebugging // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnToggle_MotionBlur(bool toggled); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_MotionBlur // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnToggle_ImageSharpening(bool toggled); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnToggle_ImageSharpening // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnSelector_Colorblind(struct UWBP_Selector_Btn_C* selector, struct FStructure_SelectorData Value); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_Colorblind // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnSelector_FOV(struct FStructure_SelectorData Value); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_FOV // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnSelector_Gamma(struct FStructure_SelectorData Value); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_Gamma // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnSelector_MaxFps(struct FStructure_SelectorData Value); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_MaxFps // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnSelector_ResolutionQuality(struct FStructure_SelectorData Value); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_ResolutionQuality // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnDropdown_Antialiasing(struct UWBP_DropdownBase_Btn_C* Dropdown, struct FString Option, int32_t Index); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnDropdown_Antialiasing // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnDropdown_Colorblind(struct UWBP_DropdownBase_Btn_C* Dropdown, struct FString Option, int32_t Index); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnDropdown_Colorblind // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnDropdown_Foliage(struct UWBP_DropdownBase_Btn_C* Dropdown, struct FString Option, int32_t Index); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnDropdown_Foliage // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnDropdown_FullscreenMode(struct UWBP_DropdownBase_Btn_C* Dropdown, struct FString Option, int32_t Index); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnDropdown_FullscreenMode // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnDropdown_Postprocess(struct UWBP_DropdownBase_Btn_C* Dropdown, struct FString Option, int32_t Index); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnDropdown_Postprocess // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnDropdown_Resolution(struct UWBP_DropdownBase_Btn_C* Dropdown, struct FString Option, int32_t Index); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnDropdown_Resolution // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnDropdown_Shadow(struct UWBP_DropdownBase_Btn_C* Dropdown, struct FString Option, int32_t Index); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnDropdown_Shadow // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnDropdown_Texture(struct UWBP_DropdownBase_Btn_C* Dropdown, struct FString Option, int32_t Index); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnDropdown_Texture // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnDropdown_ViewDistance(struct UWBP_DropdownBase_Btn_C* Dropdown, struct FString Option, int32_t Index); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnDropdown_ViewDistance // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnDropdown_VisualEffects(struct UWBP_DropdownBase_Btn_C* Dropdown, struct FString Option, int32_t Index); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnDropdown_VisualEffects // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnDropdown_VideoQuality(struct UWBP_DropdownBase_Btn_C* Dropdown, struct FString Option, int32_t Index); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnDropdown_VideoQuality // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnSelector_UIScale(struct FStructure_SelectorData Value); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSelector_UIScale // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnDropdown_Dlss(struct UWBP_DropdownBase_Btn_C* Dropdown, struct FString Option, int32_t Index); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnDropdown_Dlss // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void BP_OnWidgetEvent(struct FName DataName); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.BP_OnWidgetEvent // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BP_RefreshData(); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.BP_RefreshData // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void BP_Initialize(); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.BP_Initialize // (Event|Protected|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_Settings_Provider(int32_t EntryPoint); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.ExecuteUbergraph_WBP_Settings_Provider // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
	void OnCloseSettingInfo__DelegateSignature(); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnCloseSettingInfo__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnSettingInfoSet__DelegateSignature(struct FText Title, struct FText Description, struct TSoftObjectPtr<struct UTexture2D> Image); // Function WBP_Settings_Provider.WBP_Settings_Provider_C.OnSettingInfoSet__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
};

