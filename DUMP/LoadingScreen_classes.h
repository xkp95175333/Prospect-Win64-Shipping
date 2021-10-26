// Class LoadingScreen.LoadingScreenSettings
// Size: 0x498 (Inherited: 0x38)
struct ULoadingScreenSettings : UDeveloperSettings {
	bool bShowFirstLoginVideo; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FLoadingScreenDescription SpinupScreen; // 0x40(0x98)
	struct FLoadingScreenDescription DefaultSpinupScreen; // 0xd8(0x98)
	struct FLoadingScreenDescription SeamlessTravelScreen; // 0x170(0x98)
	struct FLoadingScreenDescription TutorialLoadingScreen; // 0x208(0x98)
	struct FLoadingScreenDescription FirstMapLoadingScreen; // 0x2a0(0x98)
	struct FLoadingScreenDescription SecondMapLoadingScreen; // 0x338(0x98)
	struct FSlateFontInfo TipFont; // 0x3d0(0x58)
	struct FSlateFontInfo LoadingFont; // 0x428(0x58)
	float TipWrapAt; // 0x480(0x04)
	char pad_484[0x4]; // 0x484(0x04)
	struct TArray<struct FText> Tips; // 0x488(0x10)
};

