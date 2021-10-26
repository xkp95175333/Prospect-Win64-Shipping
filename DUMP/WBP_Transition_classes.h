// WidgetBlueprintGeneratedClass WBP_Transition.WBP_Transition_C
// Size: 0x2f8 (Inherited: 0x2c0)
struct UWBP_Transition_C : UYWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct UWidgetAnimation* TransitionOut_Anim; // 0x2c8(0x08)
	struct UWidgetAnimation* TransitionIn_Anim; // 0x2d0(0x08)
	struct UImage* Gfx_Logo; // 0x2d8(0x08)
	struct FMulticastInlineDelegate AnimationFinished; // 0x2e0(0x10)
	int32_t NewVar_1; // 0x2f0(0x04)
	float DurationBeforeTransition; // 0x2f4(0x04)

	bool BP_StartTransition(float outDuration); // Function WBP_Transition.WBP_Transition_C.BP_StartTransition // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void Construct(); // Function WBP_Transition.WBP_Transition_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1e02480
	void OnTransitionInFinished(); // Function WBP_Transition.WBP_Transition_C.OnTransitionInFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void PlayTransition(); // Function WBP_Transition.WBP_Transition_C.PlayTransition // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void OnTransitionOutAnimationFinished(); // Function WBP_Transition.WBP_Transition_C.OnTransitionOutAnimationFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
	void ExecuteUbergraph_WBP_Transition(int32_t EntryPoint); // Function WBP_Transition.WBP_Transition_C.ExecuteUbergraph_WBP_Transition // (Final|UbergraphFunction) // @ game+0x1e02480
	void AnimationFinished__DelegateSignature(); // Function WBP_Transition.WBP_Transition_C.AnimationFinished__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1e02480
};

