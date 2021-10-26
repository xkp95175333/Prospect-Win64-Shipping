// WidgetBlueprintGeneratedClass YProgressBarProspectorLevel_WBP.YProgressBarProspectorLevel_WBP_C
// Size: 0x459 (Inherited: 0x2c0)
struct UYProgressBarProspectorLevel_WBP_C : UYWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct UWidgetAnimation* UpdateWhiteRadialProgressBar; // 0x2c8(0x08)
	struct UWidgetAnimation* UpdateWhiteProgressBar_Reverse; // 0x2d0(0x08)
	struct UWidgetAnimation* DifferencePulse; // 0x2d8(0x08)
	struct UWidgetAnimation* UpdateYellowProgressBar; // 0x2e0(0x08)
	struct UWidgetAnimation* UpdateWhiteProgressBar; // 0x2e8(0x08)
	struct UImage* img_Border; // 0x2f0(0x08)
	struct UImage* img_RadialBar_BG; // 0x2f8(0x08)
	struct UImage* img_RadialBar_Delta; // 0x300(0x08)
	struct UImage* img_RadialBar_Main; // 0x308(0x08)
	struct UYProgressBar* RedProgressBar; // 0x310(0x08)
	struct UYTextBlock* text_CurrentAddText; // 0x318(0x08)
	struct UYTextBlock* text_CurrentXP; // 0x320(0x08)
	struct UYTextBlock* text_LevelXP; // 0x328(0x08)
	struct UUI_ImageBase_WBP_C* UI_ImageBase_WBP; // 0x330(0x08)
	struct UYProgressBar* WhiteProgBar; // 0x338(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_BarType; // 0x340(0x08)
	struct UHorizontalBox* XP_Display_Container; // 0x348(0x08)
	struct UYProgressBar* YellowProgBar; // 0x350(0x08)
	struct UYWidget_ProspectorLevel_Small_WBP_C* YWidget_ProspectorLevel_Small_WBP; // 0x358(0x08)
	float CachedPercentage; // 0x360(0x04)
	float PendingPercentage; // 0x364(0x04)
	float AnimDuration; // 0x368(0x04)
	float PlaybackSpeed; // 0x36c(0x04)
	struct UAudioComponent* ProgressBarAnim_SoundComponent; // 0x370(0x08)
	bool PlaySoundDuringAnimation; // 0x378(0x01)
	bool ProgressBarAnimationReachedFull; // 0x379(0x01)
	bool ProgressBarAnimationReachedEmpty; // 0x37a(0x01)
	char pad_37B[0x1]; // 0x37b(0x01)
	int32_t ProgressBar_Type; // 0x37c(0x04)
	int32_t ProgressBar_ParentValue; // 0x380(0x04)
	char pad_384[0x4]; // 0x384(0x04)
	struct FSlateBrush ProgressBar_IconImg; // 0x388(0x88)
	int32_t ProgressBar_CurrentValue; // 0x410(0x04)
	int32_t ProgressBar_MaxValue; // 0x414(0x04)
	bool ShowDetailedInfo; // 0x418(0x01)
	char pad_419[0x7]; // 0x419(0x07)
	struct UMaterialInterface* RadialBar_Material; // 0x420(0x08)
	bool ShowParentValue; // 0x428(0x01)
	bool Show_ImgIcon; // 0x429(0x01)
	char pad_42A[0x2]; // 0x42a(0x02)
	int32_t ProgressBar_DeltaValue; // 0x42c(0x04)
	bool ShowDetailedInfo_AddText; // 0x430(0x01)
	char pad_431[0x7]; // 0x431(0x07)
	struct FMulticastInlineDelegate OnProgressBarAnimFinished; // 0x438(0x10)
	struct FLinearColor ProspectorLevelProgressBarColor; // 0x448(0x10)
	bool ShowRadialProgressBar; // 0x458(0x01)

	void SetData(struct TSoftObjectPtr<struct UTexture2D> IconImg, int32_t CurrentValue, int32_t MaxValue, int32_t ParentLevel, bool IsInstant, struct FText AddText); // Function YProgressBarProspectorLevel_WBP.YProgressBarProspectorLevel_WBP_C.SetData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void StopProgressAnimation(); // Function YProgressBarProspectorLevel_WBP.YProgressBarProspectorLevel_WBP_C.StopProgressAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void SetProgressInstant(float progress); // Function YProgressBarProspectorLevel_WBP.YProgressBarProspectorLevel_WBP_C.SetProgressInstant // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void GetCurrentPercentage(float retVal); // Function YProgressBarProspectorLevel_WBP.YProgressBarProspectorLevel_WBP_C.GetCurrentPercentage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void SetProgressAnimated(float NewPercentageValue, bool ShouldPlayFromBeginning, bool ShouldSnapToEndImmediately, bool ReachedFull, bool ReachedEmpty); // Function YProgressBarProspectorLevel_WBP.YProgressBarProspectorLevel_WBP_C.SetProgressAnimated // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnLoaded_E2D980CE45FC423C70999B854316D04A(struct UObject* Loaded); // Function YProgressBarProspectorLevel_WBP.YProgressBarProspectorLevel_WBP_C.OnLoaded_E2D980CE45FC423C70999B854316D04A // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function YProgressBarProspectorLevel_WBP.YProgressBarProspectorLevel_WBP_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function YProgressBarProspectorLevel_WBP.YProgressBarProspectorLevel_WBP_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void SetBorderAndIcon(int32_t Level); // Function YProgressBarProspectorLevel_WBP.YProgressBarProspectorLevel_WBP_C.SetBorderAndIcon // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function YProgressBarProspectorLevel_WBP.YProgressBarProspectorLevel_WBP_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void OnAnimFinishedDelegate(); // Function YProgressBarProspectorLevel_WBP.YProgressBarProspectorLevel_WBP_C.OnAnimFinishedDelegate // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_YProgressBarProspectorLevel_WBP(int32_t EntryPoint); // Function YProgressBarProspectorLevel_WBP.YProgressBarProspectorLevel_WBP_C.ExecuteUbergraph_YProgressBarProspectorLevel_WBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
	void OnProgressBarAnimFinished__DelegateSignature(bool ProgressBarReachedFull, bool ProgressBarReachedEmpty); // Function YProgressBarProspectorLevel_WBP.YProgressBarProspectorLevel_WBP_C.OnProgressBarAnimFinished__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
};

