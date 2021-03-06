// ScriptStruct LoadingScreen.LoadingScreenDescription
// Size: 0x98 (Inherited: 0x00)
struct FLoadingScreenDescription {
	float MinimumLoadingScreenDisplayTime; // 0x00(0x04)
	bool bAutoCompleteWhenLoadingCompletes; // 0x04(0x01)
	bool bMoviesAreSkippable; // 0x05(0x01)
	bool bIndividualMovieSkippable; // 0x06(0x01)
	bool bWaitForManualStop; // 0x07(0x01)
	enum class EMoviePlaybackType PlaybackType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct FString> MoviePaths; // 0x10(0x10)
	struct TArray<struct FString> FirstLoginMoviePaths; // 0x20(0x10)
	struct TArray<bool> ForceShowMovies; // 0x30(0x10)
	bool bShowUIOverlay; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FText LoadingText; // 0x48(0x18)
	struct TArray<struct FSoftObjectPath> Images; // 0x60(0x10)
	enum class EStretch ImageStretch; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	struct FLinearColor BackgroundColor; // 0x74(0x10)
	struct FLinearColor TipBackgroundColor; // 0x84(0x10)
	bool m_allowEngineTick; // 0x94(0x01)
	bool m_requireForceStop; // 0x95(0x01)
	char pad_96[0x2]; // 0x96(0x02)
};

