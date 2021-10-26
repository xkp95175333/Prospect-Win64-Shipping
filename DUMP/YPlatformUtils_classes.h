// Class YPlatformUtils.YAccountLinkingManager
// Size: 0xe0 (Inherited: 0x28)
struct UYAccountLinkingManager : UObject {
	struct FMulticastInlineDelegate OnAccountLinkingResult; // 0x28(0x10)
	struct FMulticastInlineDelegate OnAccountLinkingResultAfterTimeout; // 0x38(0x10)
	struct FMulticastInlineDelegate OnAccountLinkingResultBI; // 0x48(0x10)
	struct FMulticastInlineDelegate OnAccountLinkingProcessUpdate; // 0x58(0x10)
	char pad_68[0x28]; // 0x68(0x28)
	struct FName m_targetSubsystemName; // 0x90(0x08)
	struct FString m_targetPlatformName; // 0x98(0x10)
	struct FString m_targetPlatformUserId; // 0xa8(0x10)
	struct FString m_targetUserIdPlayFabMaster; // 0xb8(0x10)
	struct FString m_sessionToken; // 0xc8(0x10)
	char pad_D8[0x8]; // 0xd8(0x08)

	void StartAccountLinking(struct FName selectedPlatform); // Function YPlatformUtils.YAccountLinkingManager.StartAccountLinking // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1357e40
	void OnAccountLinkingResultBI__DelegateSignature(struct FString targetPlatformUserId, struct FString targetUserIdPlayFabMaster, enum class EYAccountLinkingResultCode resultCode); // DelegateFunction YPlatformUtils.YAccountLinkingManager.OnAccountLinkingResultBI__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1e02480
	void OnAccountLinkingResultAfterTimeout__DelegateSignature(enum class EYAccountLinkingResultCode resultCode); // DelegateFunction YPlatformUtils.YAccountLinkingManager.OnAccountLinkingResultAfterTimeout__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1e02480
	void OnAccountLinkingResult__DelegateSignature(enum class EYAccountLinkingResultCode resultCode); // DelegateFunction YPlatformUtils.YAccountLinkingManager.OnAccountLinkingResult__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1e02480
	void OnAccountLinkingProcessUpdate__DelegateSignature(bool isInProcess); // DelegateFunction YPlatformUtils.YAccountLinkingManager.OnAccountLinkingProcessUpdate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1e02480
	bool IsLinkingInProcess(); // Function YPlatformUtils.YAccountLinkingManager.IsLinkingInProcess // (Final|Native|Public|BlueprintCallable) // @ game+0x1357e20
	float GetTimeoutThreshold(); // Function YPlatformUtils.YAccountLinkingManager.GetTimeoutThreshold // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1357df0
	struct UYAccountLinkingManager* GetAccountLinkingManager(struct UObject* objectContext); // Function YPlatformUtils.YAccountLinkingManager.GetAccountLinkingManager // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1357b80
};

// Class YPlatformUtils.YAuthenticationManager
// Size: 0x30 (Inherited: 0x28)
struct UYAuthenticationManager : UObject {
	struct UYLegalAgreementsManager* m_legalAgreementsManager; // 0x28(0x08)

	struct UYAuthenticationManager* GetAuthenticationManager(struct UObject* objectContext); // Function YPlatformUtils.YAuthenticationManager.GetAuthenticationManager // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1357c10
};

// Class YPlatformUtils.YFriendsImportManager
// Size: 0x48 (Inherited: 0x28)
struct UYFriendsImportManager : UObject {
	struct FMulticastInlineDelegate OnFriendsImportResult; // 0x28(0x10)
	char pad_38[0x10]; // 0x38(0x10)

	void OnFriendsImportResult__DelegateSignature(enum class EYFriendsImportResultCode resultCode); // DelegateFunction YPlatformUtils.YFriendsImportManager.OnFriendsImportResult__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1e02480
	struct UYFriendsImportManager* GetFriendsImportManager(struct UObject* objectContext); // Function YPlatformUtils.YFriendsImportManager.GetFriendsImportManager // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1357cd0
};

// Class YPlatformUtils.YLegalAgreementsManager
// Size: 0x38 (Inherited: 0x28)
struct UYLegalAgreementsManager : UObject {
	struct TArray<struct FYLocallyAcceptedLegalAgreements> m_locallyAcceptedLegalAgreements; // 0x28(0x10)

	struct UYLegalAgreementsManager* GetLegalAgreementsManager(struct UObject* objectContext); // Function YPlatformUtils.YLegalAgreementsManager.GetLegalAgreementsManager // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1357d60
};

// Class YPlatformUtils.YPlatformFunctions
// Size: 0x28 (Inherited: 0x28)
struct UYPlatformFunctions : UObject {

	enum class EYGamePlatform GetCurrentlyUsedPlatform(); // Function YPlatformUtils.YPlatformFunctions.GetCurrentlyUsedPlatform // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1357ca0
};

// Class YPlatformUtils.YPlatformUtilsRetrievalInterface
// Size: 0x28 (Inherited: 0x28)
struct UYPlatformUtilsRetrievalInterface : UInterface {
};

