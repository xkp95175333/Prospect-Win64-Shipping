// Class OnlineSubsystemUtils.AchievementBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAchievementBlueprintLibrary : UBlueprintFunctionLibrary {

	void GetCachedAchievementProgress(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName AchievementID, bool bFoundID, float progress); // Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x92ac70
	void GetCachedAchievementDescription(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName AchievementID, bool bFoundID, struct FText Title, struct FText LockedDescription, struct FText UnlockedDescription, bool bHidden); // Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x92a910
};

// Class OnlineSubsystemUtils.AchievementQueryCallbackProxy
// Size: 0x68 (Inherited: 0x30)
struct UAchievementQueryCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate onSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate onFailure; // 0x40(0x10)
	char pad_50[0x18]; // 0x50(0x18)

	struct UAchievementQueryCallbackProxy* CacheAchievements(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x929680
	struct UAchievementQueryCallbackProxy* CacheAchievementDescriptions(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9295b0
};

// Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
// Size: 0x80 (Inherited: 0x30)
struct UAchievementWriteCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate onSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate onFailure; // 0x40(0x10)
	char pad_50[0x30]; // 0x50(0x30)

	struct UAchievementWriteCallbackProxy* WriteAchievementProgress(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName AchievementName, float progress, int32_t UserTag); // Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x92b760
};

// Class OnlineSubsystemUtils.ConnectionCallbackProxy
// Size: 0x78 (Inherited: 0x30)
struct UConnectionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate onSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate onFailure; // 0x40(0x10)
	char pad_50[0x28]; // 0x50(0x28)

	struct UConnectionCallbackProxy* ConnectToService(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x929750
};

// Class OnlineSubsystemUtils.CreateSessionCallbackProxy
// Size: 0x98 (Inherited: 0x30)
struct UCreateSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate onSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate onFailure; // 0x40(0x10)
	char pad_50[0x48]; // 0x50(0x48)

	struct UCreateSessionCallbackProxy* CreateSession(struct UObject* WorldContextObject, struct APlayerController* PlayerController, int32_t PublicConnections, bool bUseLAN); // Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x929f80
};

// Class OnlineSubsystemUtils.DestroySessionCallbackProxy
// Size: 0x78 (Inherited: 0x30)
struct UDestroySessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate onSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate onFailure; // 0x40(0x10)
	char pad_50[0x28]; // 0x50(0x28)

	struct UDestroySessionCallbackProxy* DestroySession(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x92a0d0
};

// Class OnlineSubsystemUtils.EndMatchCallbackProxy
// Size: 0x80 (Inherited: 0x30)
struct UEndMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate onSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate onFailure; // 0x40(0x10)
	char pad_50[0x30]; // 0x50(0x30)

	struct UEndMatchCallbackProxy* EndMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct TScriptInterface<None> MatchActor, struct FString MatchID, enum class EMPMatchOutcome LocalPlayerOutcome, enum class EMPMatchOutcome OtherPlayersOutcome); // Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x92a1a0
};

// Class OnlineSubsystemUtils.EndTurnCallbackProxy
// Size: 0x78 (Inherited: 0x30)
struct UEndTurnCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate onSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate onFailure; // 0x40(0x10)
	char pad_50[0x28]; // 0x50(0x28)

	struct UEndTurnCallbackProxy* EndTurn(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, struct TScriptInterface<None> TurnBasedMatchInterface); // Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x92a3d0
};

// Class OnlineSubsystemUtils.FindSessionsCallbackProxy
// Size: 0x90 (Inherited: 0x30)
struct UFindSessionsCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate onSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate onFailure; // 0x40(0x10)
	char pad_50[0x40]; // 0x50(0x40)

	struct FString GetServerName(struct FBlueprintSessionResult Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x92b4e0
	int32_t GetPingInMs(struct FBlueprintSessionResult Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x92b2a0
	int32_t GetMaxPlayers(struct FBlueprintSessionResult Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x92b060
	int32_t GetCurrentPlayers(struct FBlueprintSessionResult Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x92ae20
	struct UFindSessionsCallbackProxy* FindSessions(struct UObject* WorldContextObject, struct APlayerController* PlayerController, int32_t MaxResults, bool bUseLAN); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x92a590
};

// Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
// Size: 0x88 (Inherited: 0x30)
struct UFindTurnBasedMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate onSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate onFailure; // 0x40(0x10)
	char pad_50[0x38]; // 0x50(0x38)

	struct UFindTurnBasedMatchCallbackProxy* FindTurnBasedMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct TScriptInterface<None> MatchActor, int32_t MinPlayers, int32_t MaxPlayers, int32_t PlayerGroup, bool ShowExistingMatches); // Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x92a6e0
};

// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy
// Size: 0x80 (Inherited: 0x28)
struct UInAppPurchaseCallbackProxy : UObject {
	struct FMulticastInlineDelegate onSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate onFailure; // 0x38(0x10)
	char pad_48[0x38]; // 0x48(0x38)

	struct UInAppPurchaseCallbackProxy* CreateProxyObjectForInAppPurchase(struct APlayerController* PlayerController, struct FInAppPurchaseProductRequest ProductRequest); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x929910
};

// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy2
// Size: 0xa8 (Inherited: 0x28)
struct UInAppPurchaseCallbackProxy2 : UObject {
	struct FMulticastInlineDelegate onSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate onFailure; // 0x38(0x10)
	char pad_48[0x60]; // 0x48(0x60)

	struct UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseUnprocessedPurchases(struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseUnprocessedPurchases // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x929ef0
	struct UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseQueryOwned(struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseQueryOwned // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x929c20
	struct UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchase(struct APlayerController* PlayerController, struct FInAppPurchaseProductRequest2 ProductRequest); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchase // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x929820
};

// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy
// Size: 0x90 (Inherited: 0x28)
struct UInAppPurchaseQueryCallbackProxy : UObject {
	struct FMulticastInlineDelegate onSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate onFailure; // 0x38(0x10)
	char pad_48[0x48]; // 0x48(0x48)

	struct UInAppPurchaseQueryCallbackProxy* CreateProxyObjectForInAppPurchaseQuery(struct APlayerController* PlayerController, struct TArray<struct FString> ProductIdentifiers); // Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x929b10
};

// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2
// Size: 0x68 (Inherited: 0x28)
struct UInAppPurchaseQueryCallbackProxy2 : UObject {
	struct FMulticastInlineDelegate onSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate onFailure; // 0x38(0x10)
	char pad_48[0x20]; // 0x48(0x20)

	struct UInAppPurchaseQueryCallbackProxy2* CreateProxyObjectForInAppPurchaseQuery(struct APlayerController* PlayerController, struct TArray<struct FString> ProductIdentifiers); // Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2.CreateProxyObjectForInAppPurchaseQuery // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x929a00
};

// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy
// Size: 0x90 (Inherited: 0x28)
struct UInAppPurchaseRestoreCallbackProxy : UObject {
	struct FMulticastInlineDelegate onSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate onFailure; // 0x38(0x10)
	char pad_48[0x48]; // 0x48(0x48)

	struct UInAppPurchaseRestoreCallbackProxy* CreateProxyObjectForInAppPurchaseRestore(struct TArray<struct FInAppPurchaseProductRequest> ConsumableProductFlags, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x929dd0
};

// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2
// Size: 0xa8 (Inherited: 0x28)
struct UInAppPurchaseRestoreCallbackProxy2 : UObject {
	struct FMulticastInlineDelegate onSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate onFailure; // 0x38(0x10)
	char pad_48[0x60]; // 0x48(0x60)

	struct UInAppPurchaseRestoreCallbackProxy2* CreateProxyObjectForInAppPurchaseRestore(struct TArray<struct FInAppPurchaseProductRequest2> ConsumableProductFlags, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2.CreateProxyObjectForInAppPurchaseRestore // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x929cb0
};

// Class OnlineSubsystemUtils.IpConnection
// Size: 0x1b90 (Inherited: 0x1af0)
struct UIpConnection : UNetConnection {
	char pad_1AF0[0x50]; // 0x1af0(0x50)
	float SocketErrorDisconnectDelay; // 0x1b40(0x04)
	char pad_1B44[0x4c]; // 0x1b44(0x4c)
};

// Class OnlineSubsystemUtils.IpNetDriver
// Size: 0x7b8 (Inherited: 0x748)
struct UIpNetDriver : UNetDriver {
	char LogPortUnreach : 1; // 0x748(0x01)
	char AllowPlayerPortUnreach : 1; // 0x748(0x01)
	char pad_748_2 : 6; // 0x748(0x01)
	char pad_749[0x3]; // 0x749(0x03)
	uint32_t MaxPortCountToTry; // 0x74c(0x04)
	char pad_750[0xc]; // 0x750(0x0c)
	uint32_t ServerDesiredSocketReceiveBufferBytes; // 0x75c(0x04)
	uint32_t ServerDesiredSocketSendBufferBytes; // 0x760(0x04)
	uint32_t ClientDesiredSocketReceiveBufferBytes; // 0x764(0x04)
	uint32_t ClientDesiredSocketSendBufferBytes; // 0x768(0x04)
	char pad_76C[0x4]; // 0x76c(0x04)
	double MaxSecondsInReceive; // 0x770(0x08)
	int32_t NbPacketsBetweenReceiveTimeTest; // 0x778(0x04)
	float ResolutionConnectionTimeout; // 0x77c(0x04)
	char pad_780[0x38]; // 0x780(0x38)
};

// Class OnlineSubsystemUtils.JoinSessionCallbackProxy
// Size: 0x190 (Inherited: 0x30)
struct UJoinSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate onSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate onFailure; // 0x40(0x10)
	char pad_50[0x140]; // 0x50(0x140)

	struct UJoinSessionCallbackProxy* JoinSession(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FBlueprintSessionResult SearchResult); // Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x92f530
};

// Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct ULeaderboardBlueprintLibrary : UBlueprintFunctionLibrary {

	bool WriteLeaderboardInteger(struct APlayerController* PlayerController, struct FName StatName, int32_t StatValue); // Function OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x930500
};

// Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
// Size: 0x68 (Inherited: 0x28)
struct ULeaderboardFlushCallbackProxy : UObject {
	struct FMulticastInlineDelegate onSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate onFailure; // 0x38(0x10)
	char pad_48[0x20]; // 0x48(0x20)

	struct ULeaderboardFlushCallbackProxy* CreateProxyObjectForFlush(struct APlayerController* PlayerController, struct FName SessionName); // Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x92f390
};

// Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
// Size: 0x98 (Inherited: 0x28)
struct ULeaderboardQueryCallbackProxy : UObject {
	struct FMulticastInlineDelegate onSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate onFailure; // 0x38(0x10)
	char pad_48[0x50]; // 0x48(0x50)

	struct ULeaderboardQueryCallbackProxy* CreateProxyObjectForIntQuery(struct APlayerController* PlayerController, struct FName StatName); // Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x92f460
};

// Class OnlineSubsystemUtils.LogoutCallbackProxy
// Size: 0x68 (Inherited: 0x30)
struct ULogoutCallbackProxy : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate onSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate onFailure; // 0x40(0x10)
	char pad_50[0x18]; // 0x50(0x18)

	struct ULogoutCallbackProxy* Logout(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x92f680
};

// Class OnlineSubsystemUtils.OnlineBeacon
// Size: 0x270 (Inherited: 0x240)
struct AOnlineBeacon : AActor {
	char pad_240[0x8]; // 0x240(0x08)
	float BeaconConnectionInitialTimeout; // 0x248(0x04)
	float BeaconConnectionTimeout; // 0x24c(0x04)
	struct UNetDriver* NetDriver; // 0x250(0x08)
	char pad_258[0x18]; // 0x258(0x18)
};

// Class OnlineSubsystemUtils.OnlineBeaconClient
// Size: 0x2d0 (Inherited: 0x270)
struct AOnlineBeaconClient : AOnlineBeacon {
	struct AOnlineBeaconHostObject* BeaconOwner; // 0x270(0x08)
	struct UNetConnection* BeaconConnection; // 0x278(0x08)
	enum class EBeaconConnectionState ConnectionState; // 0x280(0x01)
	char pad_281[0x4f]; // 0x281(0x4f)

	void ClientOnConnected(); // Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected // (Final|Net|NetReliableNative|Event|Private|NetClient) // @ game+0x92f0f0
};

// Class OnlineSubsystemUtils.OnlineBeaconHost
// Size: 0x328 (Inherited: 0x270)
struct AOnlineBeaconHost : AOnlineBeacon {
	int32_t ListenPort; // 0x270(0x04)
	char pad_274[0x4]; // 0x274(0x04)
	struct TArray<struct AOnlineBeaconClient*> ClientActors; // 0x278(0x10)
	char pad_288[0xa0]; // 0x288(0xa0)
};

// Class OnlineSubsystemUtils.OnlineBeaconHostObject
// Size: 0x268 (Inherited: 0x240)
struct AOnlineBeaconHostObject : AActor {
	struct FString BeaconTypeName; // 0x240(0x10)
	struct AOnlineBeaconClient* ClientBeaconActorClass; // 0x250(0x08)
	struct TArray<struct AOnlineBeaconClient*> ClientActors; // 0x258(0x10)
};

// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
// Size: 0x128 (Inherited: 0x28)
struct UOnlineEngineInterfaceImpl : UOnlineEngineInterface {
	struct FName VoiceSubsystemNameOverride; // 0x28(0x08)
	char pad_30[0xf8]; // 0x30(0xf8)
};

// Class OnlineSubsystemUtils.OnlinePIESettings
// Size: 0x50 (Inherited: 0x38)
struct UOnlinePIESettings : UDeveloperSettings {
	bool bOnlinePIEEnabled; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<struct FPIELoginSettingsInternal> Logins; // 0x40(0x10)
};

// Class OnlineSubsystemUtils.OnlineSessionClient
// Size: 0x1f0 (Inherited: 0x28)
struct UOnlineSessionClient : UOnlineSession {
	char pad_28[0x1c0]; // 0x28(0x1c0)
	bool bIsFromInvite; // 0x1e8(0x01)
	bool bHandlingDisconnect; // 0x1e9(0x01)
	char pad_1EA[0x6]; // 0x1ea(0x06)
};

// Class OnlineSubsystemUtils.PartyBeaconClient
// Size: 0x390 (Inherited: 0x2d0)
struct APartyBeaconClient : AOnlineBeaconClient {
	char pad_2D0[0x30]; // 0x2d0(0x30)
	struct FString DestSessionId; // 0x300(0x10)
	struct FPartyReservation PendingReservation; // 0x310(0x50)
	enum class EClientRequestType RequestType; // 0x360(0x01)
	bool bPendingReservationSent; // 0x361(0x01)
	bool bCancelReservation; // 0x362(0x01)
	char pad_363[0x2d]; // 0x363(0x2d)

	void ServerUpdateReservationRequest(struct FString SessionId, struct FPartyReservation ReservationUpdate); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x9301a0
	void ServerReservationRequest(struct FString SessionId, struct FPartyReservation Reservation); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x92fd10
	void ServerRemoveMemberFromReservationRequest(struct FString SessionId, struct FPartyReservation ReservationUpdate); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerRemoveMemberFromReservationRequest // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x92fa80
	void ServerCancelReservationRequest(struct FUniqueNetIdRepl PartyLeader); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x92f920
	void ClientSendReservationUpdates(int32_t NumRemainingReservations); // Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x92f270
	void ClientSendReservationFull(); // Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x92f230
	void ClientReservationResponse(enum class EPartyReservationResult ReservationResponse); // Function OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x92f130
	void ClientCancelReservationResponse(enum class EPartyReservationResult ReservationResponse); // Function OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x92eff0
};

// Class OnlineSubsystemUtils.PartyBeaconHost
// Size: 0x2e0 (Inherited: 0x268)
struct APartyBeaconHost : AOnlineBeaconHostObject {
	struct UPartyBeaconState* State; // 0x268(0x08)
	char pad_270[0x60]; // 0x270(0x60)
	bool bLogoutOnSessionTimeout; // 0x2d0(0x01)
	char pad_2D1[0x3]; // 0x2d1(0x03)
	float SessionTimeoutSecs; // 0x2d4(0x04)
	float TravelSessionTimeoutSecs; // 0x2d8(0x04)
	char pad_2DC[0x4]; // 0x2dc(0x04)
};

// Class OnlineSubsystemUtils.PartyBeaconState
// Size: 0x78 (Inherited: 0x28)
struct UPartyBeaconState : UObject {
	struct FName SessionName; // 0x28(0x08)
	int32_t NumConsumedReservations; // 0x30(0x04)
	int32_t MaxReservations; // 0x34(0x04)
	int32_t NumTeams; // 0x38(0x04)
	int32_t NumPlayersPerTeam; // 0x3c(0x04)
	struct FName TeamAssignmentMethod; // 0x40(0x08)
	int32_t ReservedHostTeamNum; // 0x48(0x04)
	int32_t ForceTeamNum; // 0x4c(0x04)
	bool bRestrictCrossConsole; // 0x50(0x01)
	bool bEnableRemovalRequests; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
	struct TArray<struct FPartyReservation> Reservations; // 0x58(0x10)
	char pad_68[0x10]; // 0x68(0x10)
};

// Class OnlineSubsystemUtils.QuitMatchCallbackProxy
// Size: 0x78 (Inherited: 0x30)
struct UQuitMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate onSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate onFailure; // 0x40(0x10)
	char pad_50[0x28]; // 0x50(0x28)

	struct UQuitMatchCallbackProxy* QuitMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, enum class EMPMatchOutcome Outcome, int32_t TurnTimeoutInSeconds); // Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x92f750
};

// Class OnlineSubsystemUtils.ShowLoginUICallbackProxy
// Size: 0x60 (Inherited: 0x30)
struct UShowLoginUICallbackProxy : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate onSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate onFailure; // 0x40(0x10)
	char pad_50[0x10]; // 0x50(0x10)

	struct UShowLoginUICallbackProxy* ShowExternalLoginUI(struct UObject* WorldContextObject, struct APlayerController* InPlayerController); // Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x930430
};

// Class OnlineSubsystemUtils.SpectatorBeaconClient
// Size: 0x3b8 (Inherited: 0x2d0)
struct ASpectatorBeaconClient : AOnlineBeaconClient {
	char pad_2D0[0x30]; // 0x2d0(0x30)
	struct FString DestSessionId; // 0x300(0x10)
	struct FSpectatorReservation PendingReservation; // 0x310(0x78)
	enum class ESpectatorClientRequestType RequestType; // 0x388(0x01)
	bool bPendingReservationSent; // 0x389(0x01)
	bool bCancelReservation; // 0x38a(0x01)
	char pad_38B[0x2d]; // 0x38b(0x2d)

	void ServerReservationRequest(struct FString SessionId, struct FSpectatorReservation Reservation); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x92ffa0
	void ServerCancelReservationRequest(struct FUniqueNetIdRepl Spectator); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x92f920
	void ClientSendReservationUpdates(int32_t NumRemainingReservations); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationUpdates // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x92f300
	void ClientSendReservationFull(); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationFull // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x92f250
	void ClientReservationResponse(enum class ESpectatorReservationResult ReservationResponse); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientReservationResponse // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x92f1b0
	void ClientCancelReservationResponse(enum class ESpectatorReservationResult ReservationResponse); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientCancelReservationResponse // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x92f070
};

// Class OnlineSubsystemUtils.SpectatorBeaconHost
// Size: 0x2e0 (Inherited: 0x268)
struct ASpectatorBeaconHost : AOnlineBeaconHostObject {
	struct USpectatorBeaconState* State; // 0x268(0x08)
	char pad_270[0x60]; // 0x270(0x60)
	bool bLogoutOnSessionTimeout; // 0x2d0(0x01)
	char pad_2D1[0x3]; // 0x2d1(0x03)
	float SessionTimeoutSecs; // 0x2d4(0x04)
	float TravelSessionTimeoutSecs; // 0x2d8(0x04)
	char pad_2DC[0x4]; // 0x2dc(0x04)
};

// Class OnlineSubsystemUtils.SpectatorBeaconState
// Size: 0x60 (Inherited: 0x28)
struct USpectatorBeaconState : UObject {
	struct FName SessionName; // 0x28(0x08)
	int32_t NumConsumedReservations; // 0x30(0x04)
	int32_t MaxReservations; // 0x34(0x04)
	bool bRestrictCrossConsole; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<struct FSpectatorReservation> Reservations; // 0x40(0x10)
	char pad_50[0x10]; // 0x50(0x10)
};

// Class OnlineSubsystemUtils.TestBeaconClient
// Size: 0x2d0 (Inherited: 0x2d0)
struct ATestBeaconClient : AOnlineBeaconClient {

	void ServerPong(); // Function OnlineSubsystemUtils.TestBeaconClient.ServerPong // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x92fa30
	void ClientPing(); // Function OnlineSubsystemUtils.TestBeaconClient.ClientPing // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x92f110
};

// Class OnlineSubsystemUtils.TestBeaconHost
// Size: 0x268 (Inherited: 0x268)
struct ATestBeaconHost : AOnlineBeaconHostObject {
};

// Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UTurnBasedBlueprintLibrary : UBlueprintFunctionLibrary {

	void RegisterTurnBasedMatchInterfaceObject(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct UObject* Object); // Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x931090
	void GetPlayerDisplayName(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, int32_t PlayerIndex, struct FString PlayerDisplayName); // Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x930e60
	void GetMyPlayerIndex(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, int32_t PlayerIndex); // Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x930cb0
	void GetIsMyTurn(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, bool bIsMyTurn); // Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x930b00
};

// Class OnlineSubsystemUtils.VoipListenerSynthComponent
// Size: 0x720 (Inherited: 0x6c0)
struct UVoipListenerSynthComponent : USynthComponent {
	char pad_6C0[0x60]; // 0x6c0(0x60)

	bool IsIdling(); // Function OnlineSubsystemUtils.VoipListenerSynthComponent.IsIdling // (Final|Native|Public|BlueprintCallable) // @ game+0x931060
};

