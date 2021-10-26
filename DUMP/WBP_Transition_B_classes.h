// WidgetBlueprintGeneratedClass WBP_Transition_B.WBP_Transition_B_C
// Size: 0x358 (Inherited: 0x2c0)
struct UWBP_Transition_B_C : UYWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct UWidgetAnimation* TransitionOut_Anim; // 0x2c8(0x08)
	struct UWidgetAnimation* TransitionIn_Anim; // 0x2d0(0x08)
	struct UImage* Gfx_Arrow; // 0x2d8(0x08)
	struct UImage* Gfx_Arrow_2; // 0x2e0(0x08)
	struct UImage* Gfx_Arrow_3; // 0x2e8(0x08)
	struct UImage* Gfx_Arrow_4; // 0x2f0(0x08)
	struct UImage* Gfx_Arrow_5; // 0x2f8(0x08)
	struct UImage* Gfx_BlackBg; // 0x300(0x08)
	struct UImage* Gfx_BlackBg_3; // 0x308(0x08)
	struct UImage* Gfx_BlackBg_4; // 0x310(0x08)
	struct UImage* Gfx_BlackBg_5; // 0x318(0x08)
	struct UImage* Gfx_BlackBg_6; // 0x320(0x08)
	struct UImage* Gfx_Logo_3; // 0x328(0x08)
	struct FMulticastInlineDelegate AnimationFinished; // 0x330(0x10)
	int32_t NewVar_1; // 0x340(0x04)
	float DurationBeforeTransition; // 0x344(0x04)
	struct FDataTableRowHandle SoundFX_Transition; // 0x348(0x10)

	bool BP_StartTransition(float outDuration); // Function WBP_Transition_B.WBP_Transition_B_C.BP_StartTransition // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function WBP_Transition_B.WBP_Transition_B_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void OnTransitionInFinished(); // Function WBP_Transition_B.WBP_Transition_B_C.OnTransitionInFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PlayTransition(); // Function WBP_Transition_B.WBP_Transition_B_C.PlayTransition // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnTransitionOutAnimationFinished(); // Function WBP_Transition_B.WBP_Transition_B_C.OnTransitionOutAnimationFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_Transition_B(int32_t EntryPoint); // Function WBP_Transition_B.WBP_Transition_B_C.ExecuteUbergraph_WBP_Transition_B // (Final|UbergraphFunction) // @ game+0x1e02480
	void AnimationFinished__DelegateSignature(); // Function WBP_Transition_B.WBP_Transition_B_C.AnimationFinished__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
};

