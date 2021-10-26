// Class CinematicCamera.CameraRig_Crane
// Size: 0x270 (Inherited: 0x240)
struct ACameraRig_Crane : AActor {
	float CranePitch; // 0x240(0x04)
	float CraneYaw; // 0x244(0x04)
	float CraneArmLength; // 0x248(0x04)
	bool bLockMountPitch; // 0x24c(0x01)
	bool bLockMountYaw; // 0x24d(0x01)
	char pad_24E[0x2]; // 0x24e(0x02)
	struct USceneComponent* TransformComponent; // 0x250(0x08)
	struct USceneComponent* CraneYawControl; // 0x258(0x08)
	struct USceneComponent* CranePitchControl; // 0x260(0x08)
	struct USceneComponent* CraneCameraMount; // 0x268(0x08)
};

// Class CinematicCamera.CameraRig_Rail
// Size: 0x260 (Inherited: 0x240)
struct ACameraRig_Rail : AActor {
	float CurrentPositionOnRail; // 0x240(0x04)
	bool bLockOrientationToRail; // 0x244(0x01)
	char pad_245[0x3]; // 0x245(0x03)
	struct USceneComponent* TransformComponent; // 0x248(0x08)
	struct USplineComponent* RailSplineComponent; // 0x250(0x08)
	struct USceneComponent* RailCameraMount; // 0x258(0x08)

	struct USplineComponent* GetRailSplineComponent(); // Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x29b6bc0
};

// Class CinematicCamera.CineCameraActor
// Size: 0x820 (Inherited: 0x7c0)
struct ACineCameraActor : ACameraActor {
	struct FCameraLookatTrackingSettings LookatTrackingSettings; // 0x7c0(0x50)
	char pad_810[0x10]; // 0x810(0x10)

	struct UCineCameraComponent* GetCineCameraComponent(); // Function CinematicCamera.CineCameraActor.GetCineCameraComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2edb4e0
};

// Class CinematicCamera.CineCameraComponent
// Size: 0x8c0 (Inherited: 0x7c0)
struct UCineCameraComponent : UCameraComponent {
	struct FCameraFilmbackSettings FilmbackSettings; // 0x7c0(0x0c)
	struct FCameraFilmbackSettings Filmback; // 0x7cc(0x0c)
	struct FCameraLensSettings LensSettings; // 0x7d8(0x18)
	struct FCameraFocusSettings FocusSettings; // 0x7f0(0x58)
	float CurrentFocalLength; // 0x848(0x04)
	float CurrentAperture; // 0x84c(0x04)
	float CurrentFocusDistance; // 0x850(0x04)
	char pad_854[0xc]; // 0x854(0x0c)
	struct TArray<struct FNamedFilmbackPreset> FilmbackPresets; // 0x860(0x10)
	struct TArray<struct FNamedLensPreset> LensPresets; // 0x870(0x10)
	struct FString DefaultFilmbackPresetName; // 0x880(0x10)
	struct FString DefaultFilmbackPreset; // 0x890(0x10)
	struct FString DefaultLensPresetName; // 0x8a0(0x10)
	float DefaultLensFocalLength; // 0x8b0(0x04)
	float DefaultLensFStop; // 0x8b4(0x04)
	char pad_8B8[0x8]; // 0x8b8(0x08)

	void SetLensPresetByName(struct FString InPresetName); // Function CinematicCamera.CineCameraComponent.SetLensPresetByName // (Final|Native|Public|BlueprintCallable) // @ game+0x2edba00
	void SetFilmbackPresetByName(struct FString InPresetName); // Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName // (Final|Native|Public|BlueprintCallable) // @ game+0x2edb960
	void SetCurrentFocalLength(float InFocalLength); // Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength // (Final|Native|Public|BlueprintCallable) // @ game+0x2edb8e0
	float GetVerticalFieldOfView(); // Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2edb8b0
	struct TArray<struct FNamedLensPreset> GetLensPresetsCopy(); // Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2edb7d0
	struct FString GetLensPresetName(); // Function CinematicCamera.CineCameraComponent.GetLensPresetName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2edb750
	float GetHorizontalFieldOfView(); // Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2edb720
	struct TArray<struct FNamedFilmbackPreset> GetFilmbackPresetsCopy(); // Function CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2edb640
	struct FString GetFilmbackPresetName(); // Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2edb5c0
	struct FString GetDefaultFilmbackPresetName(); // Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2edb500
};

