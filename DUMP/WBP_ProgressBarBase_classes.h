// WidgetBlueprintGeneratedClass WBP_ProgressBarBase.WBP_ProgressBarBase_C
// Size: 0x6cc (Inherited: 0x2d0)
struct UWBP_ProgressBarBase_C : UYWidget_ProgressBar {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct FProgressBarStyle MainStyle; // 0x2d8(0x1a0)
	struct FProgressBarStyle DeltaStyle; // 0x478(0x1a0)
	struct FStructure_HUD_ProgressBars UpdateDataMain; // 0x618(0x28)
	struct FStructure_HUD_ProgressBars UpdateDataDelta; // 0x640(0x28)
	float DelayIncrease; // 0x668(0x04)
	float DelayDecrease; // 0x66c(0x04)
	float DelayMain; // 0x670(0x04)
	float DurationIncrease; // 0x674(0x04)
	float DurationDecrease; // 0x678(0x04)
	float DurationMain; // 0x67c(0x04)
	struct FLinearColor DeltaColorIncrease; // 0x680(0x10)
	struct FLinearColor DeltaColorDecrease; // 0x690(0x10)
	struct FLinearColor MainColor; // 0x6a0(0x10)
	struct FMulticastInlineDelegate OnAnimationDone; // 0x6b0(0x10)
	float ProgressMain; // 0x6c0(0x04)
	float ProgressDelta; // 0x6c4(0x04)
	float ProgressAbsolute; // 0x6c8(0x04)

	void ForceSetProgress(float desiredProgress); // Function WBP_ProgressBarBase.WBP_ProgressBarBase_C.ForceSetProgress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void UpdateProgressDelta(); // Function WBP_ProgressBarBase.WBP_ProgressBarBase_C.UpdateProgressDelta // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void UpdateProgressMain(); // Function WBP_ProgressBarBase.WBP_ProgressBarBase_C.UpdateProgressMain // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void GetProgressDelta(float progress); // Function WBP_ProgressBarBase.WBP_ProgressBarBase_C.GetProgressDelta // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void UpdateProgressBars(float DeltaTime); // Function WBP_ProgressBarBase.WBP_ProgressBarBase_C.UpdateProgressBars // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void GetProgressMain(float progress); // Function WBP_ProgressBarBase.WBP_ProgressBarBase_C.GetProgressMain // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1e02480
	void SetProgress(float desiredProgress, enum class EHorizonTweenLerpMode interpolationMode); // Function WBP_ProgressBarBase.WBP_ProgressBarBase_C.SetProgress // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_ProgressBarBase.WBP_ProgressBarBase_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void PreConstruct(bool IsDesignTime); // Function WBP_ProgressBarBase.WBP_ProgressBarBase_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void AnimationDone(); // Function WBP_ProgressBarBase.WBP_ProgressBarBase_C.AnimationDone // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_ProgressBarBase(int32_t EntryPoint); // Function WBP_ProgressBarBase.WBP_ProgressBarBase_C.ExecuteUbergraph_WBP_ProgressBarBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x1e02480
	void OnAnimationDone__DelegateSignature(); // Function WBP_ProgressBarBase.WBP_ProgressBarBase_C.OnAnimationDone__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
};

