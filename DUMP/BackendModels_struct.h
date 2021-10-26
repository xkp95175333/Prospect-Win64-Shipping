// Enum BackendModels.EYAttachmentType
enum class EYAttachmentType : uint8 {
	NONE,
	GRANT,
	MAX,
};

// Enum BackendModels.EYCharacterCustomizationUpdateResult
enum class EYCharacterCustomizationUpdateResult : uint8 {
	OK,
	INVALID_ID,
	UNKNOWN_ERROR,
	EYCharacterCustomizationUpdateResult_MAX,
};

// Enum BackendModels.EYSquadInviteResult
enum class EYSquadInviteResult : uint8 {
	OK,
	TARGET_OFFLINE,
	INTERNAL_ERROR,
	EYSquadInviteResult_MAX,
};

// Enum BackendModels.EYForceStartResult
enum class EYForceStartResult : uint8 {
	OK,
	EMPTY_QUEUE,
	WRONG_GAME_MODE,
	EYForceStartResult_MAX,
};

// Enum BackendModels.EYCheatResult
enum class EYCheatResult : uint8 {
	OK,
	NO_SUCH_USER,
	NO_SUCH_ITEM,
	ALREADY_REMOVED,
	EYCheatResult_MAX,
};

// Enum BackendModels.EYMatchmakeGameModeType
enum class EYMatchmakeGameModeType : uint8 {
	NONE,
	SOLO,
	DUO,
	SQUAD,
	MAX,
};

// Enum BackendModels.EYUpdateCategory
enum class EYUpdateCategory : uint8 {
	GAME_MODES,
	GAME_MAX,
};

// Enum BackendModels.EYClaimContractRewardsStatus
enum class EYClaimContractRewardsStatus : uint8 {
	UNKNOWN_ERROR,
	CLAIMING_ONE_TIME_CONTRACT,
	FAILED_FACTION_PARSING,
	FAILED_GETTING_FACTION_PROGRESSION,
	FAILED_GETTING_STATIC_DATA,
	FAILED_GIVING_REWARDS,
	FAILED_REMOVAL_ACTIVE_CONTRACT,
	FAILED_SETTING_DATA,
	NO_ACTIVE_CONTRACT,
	NO_CONTRACTS_BOARDS_DATA_FOUND,
	NO_FACTION_DATA,
	STASH_FULL,
	STASH_LIMIT_NOT_FOUND,
	WRONG_CONTRACT_ID,
	WRONG_FACTION_ID,
	WRONG_FACTION_REP,
	OK,
	MAX,
};

// Enum BackendModels.EYActivateContractRequestStatus
enum class EYActivateContractRequestStatus : uint8 {
	UNKNOWN_ERROR,
	CONTRACT_OF_THIS_FACTION_IS_ALREADY_ACTIVE,
	FAILED_GETTING_PROGRESS,
	FAILED_GETTING_STATIC_DATA,
	FAILED_STORING_CONTRACT,
	NOT_ENOUGH_MONEY,
	NO_ACTIVE_CONTRACT,
	NO_CONTRACTS_BOARDS_DATA_FOUND,
	WRONG_CONTRACT_ID,
	WRONG_FACTION_ID,
	WRONG_STORED_FACTION_ID,
	OK,
	MAX,
};

// Enum BackendModels.EYRepairItemResult
enum class EYRepairItemResult : uint8 {
	UNKNOWN_ERROR,
	OK,
	NOT_ENOUGH_RESOURCES,
	PLAYER_INVENTORY_NOT_FOUND,
	WRONG_ITEMID,
	WRONG_USERID,
	MAX,
};

// Enum BackendModels.EYScrapItemResult
enum class EYScrapItemResult : uint8 {
	OK,
	ITEM_MISSING,
	INVALID_TYPE,
	STARTING_ITEM,
	NO_BLUEPRINT,
	NO_SCRAPPING_RULE,
	UNKNOWN_ERROR,
	EYScrapItemResult_MAX,
};

// Enum BackendModels.EYClaimCraftedItemStatus
enum class EYClaimCraftedItemStatus : uint8 {
	UNKNOWN_ERROR,
	OK,
	BLUEPRINT_DATA_NOT_FOUND,
	FAILED_GETTING_INVENTORY,
	FAILED_GETTING_ITEM_CUSTOM_DATA,
	FAILED_GETTING_PLAYER_SET,
	FAILED_GRANTING_OR_UPDATING_ITEM,
	ITEM_CURRENTLY_CRAFTED_NOT_FOUND,
	NOT_ENOUGH_RESOURCES,
	NO_ITEMS_GRANTED_OR_UPDATED,
	PRICE_CRAFTING_STATION_NOT_FOUND,
	RECIPE_DATA_NOT_FOUND,
	WRONG_ITEMID,
	WRONG_RARITY,
	WRONG_SHOPITEMBELONGSTO,
	WRONG_USERID,
	MAX,
};

// Enum BackendModels.EYStartItemCraftingResultStatus
enum class EYStartItemCraftingResultStatus : uint8 {
	UNKNOWN_ERROR,
	OK,
	ANOTHER_ITEM_IS_ALREADY_BEING_CRAFTED,
	NOT_ENOUGH_RESOURCES,
	PLAYER_INVENTORY_NOT_FOUND,
	RECIPE_DATA_NOT_FOUND,
	STASH_FULL,
	WRONG_ITEMID,
	WRONG_PURCHASE_AMOUNT,
	WRONG_RARITY,
	WRONG_SHOPITEMBELONGSTO,
	WRONG_USERID,
	MAX,
};

// Enum BackendModels.EYPurchaseWeaponShopItemStatus
enum class EYPurchaseWeaponShopItemStatus : uint8 {
	UNKNOWN_ERROR,
	OK,
	NOT_ENOUGH_RESOURCES,
	PLAYER_INVENTORY_NOT_FOUND,
	RECIPE_DATA_NOT_FOUND,
	STASH_FULL,
	WRONG_ITEMID,
	WRONG_USERID,
	WRONG_SHOPITEMBELONGSTO,
	MAX,
};

// Enum BackendModels.EYResponse
enum class EYResponse : uint8 {
	OK,
	UNKNOWN,
	EYResponse_MAX,
};

// Enum BackendModels.EYClaimGeneratorIncomeStatus
enum class EYClaimGeneratorIncomeStatus : uint8 {
	UNKNOWN_ERROR,
	OK,
	FAILED_SETTING_LASTCLAIM_TIME,
	MISSING_GENERATOR_ID,
	NO_STATIC_DATA_GENERATOR,
	NO_REWARDS_ACCRUED,
	NO_REWARDS_DATA_FOUND,
	NO_REWARDS_FOUND_IN_CRATE,
	STASH_FULL,
	MAX,
};

// Enum BackendModels.EYUpdateGlobalVanityResult
enum class EYUpdateGlobalVanityResult : uint8 {
	OK,
	INVALID_ID,
	NOT_OWNED_ITEM,
	UNKNOWN_ERROR,
	EYUpdateGlobalVanityResult_MAX,
};

// Enum BackendModels.EYClaimGrantState
enum class EYClaimGrantState : uint8 {
	UNCLAIMED,
	BEING_CLAIMED,
	CLAIMED,
	EYClaimGrantState_MAX,
};

// Enum BackendModels.EYClaimGrantResult
enum class EYClaimGrantResult : uint8 {
	OK,
	INVALID_ID,
	ALREADY_CLAIMED,
	WRONG_USER_GUID,
	INVALID_GRANT_SETUP,
	UNKNOWN_ERROR,
	EYClaimGrantResult_MAX,
};

// Enum BackendModels.EYGrantType
enum class EYGrantType : uint8 {
	None,
	Blueprint,
	CustomItem,
	Modification,
	Vanity,
	HardCurrency,
	SoftCurrency,
	CraftingMaterial,
	SeasonXP,
	SeasonLevel,
	SeasonPass,
	LoreItem,
	ProspectorLevelXP,
	MAX,
};

// Enum BackendModels.EYUpdateReadStateResult
enum class EYUpdateReadStateResult : uint8 {
	OK,
	INVALID_ID,
	NO_UPDATE,
	UNKNOWN_ERROR,
	EYUpdateReadStateResult_MAX,
};

// Enum BackendModels.EYInboxMessageType
enum class EYInboxMessageType : uint8 {
	None,
	FoundersPack,
	Progression,
	MAX,
};

// Enum BackendModels.EYCompleteInventoryUpdateReason
enum class EYCompleteInventoryUpdateReason : uint8 {
	NONE,
	UI_DRAG,
	ITEM_STATE_CHANGED,
	END_OF_MATCH_ESCAPED,
	END_OF_MATCH_DIED,
	CHEAT,
	MAX,
};

// Enum BackendModels.EYGetUsersCurrenciesResult
enum class EYGetUsersCurrenciesResult : uint8 {
	OK,
	UNKNOWN_ERROR,
	EYGetUsersCurrenciesResult_MAX,
};

// Enum BackendModels.EYVanityUpdateResult
enum class EYVanityUpdateResult : uint8 {
	OK,
	INVALID_ID,
	INCOMPATIBLE_ITEM,
	TOO_FEW_OWNED_ITEMS,
	UNKNOWN_ERROR,
	EYVanityUpdateResult_MAX,
};

// Enum BackendModels.EYCustomizationCategory
enum class EYCustomizationCategory : uint8 {
	Invalid,
	None,
	CharacterDefault,
	Head,
	Boots,
	Chest,
	BaseSuit,
	Gloves,
	WeaponPreview,
	Emote,
	WeaponNear,
	WeaponDefault,
	WeaponFar,
	WeaponCharm,
	KitPreview,
	CategoryPlaceholder12,
	CategoryPlaceholder13,
	Archetype,
	MeleeWeapon,
	Overview,
	Banner,
	Item,
	Vehicle,
	Droppod,
	EYCustomizationCategory_MAX,
};

// Enum BackendModels.EYDefaultItemSlot
enum class EYDefaultItemSlot : uint8 {
	Unassigned,
	StarterWeapon,
	Gadget,
	Kit,
	Ability0,
	Ability1,
	Ability2,
	Ability3,
	Consumable0,
	Consumable1,
	Consumable2,
	Consumable3,
	Device0,
	Device1,
	Device2,
	Device3,
	Miscellaneous0,
	Miscellaneous1,
	Miscellaneous2,
	Miscellaneous3,
	Shield,
	EYDefaultItemSlot_MAX,
};

// Enum BackendModels.EYCustomizationBodyType
enum class EYCustomizationBodyType : uint8 {
	INVALID,
	MaleDefault,
	FemaleDefault,
	Both,
	EYCustomizationBodyType_MAX,
};

// Enum BackendModels.EYVanityType
enum class EYVanityType : uint8 {
	None,
	Weapon,
	Character,
	Melee,
	Banner,
	DeathEmote,
	NormalEmote,
	Vehicle,
	Droppod,
	SocialProfile,
	Spray,
	WeaponCharm,
	Pet,
	Material,
	MAX,
};

// Enum BackendModels.EYModificationSlotType
enum class EYModificationSlotType : uint8 {
	None,
	Optics,
	Magazine,
	Barrel,
	Muzzle,
	Stock,
	Ability,
	ForeGrip,
	Tactical,
	AmmoConverter,
	Receiver,
	Attachment,
	ScannerUpgrade1,
	ScannerUpgrade2,
	ScannerUpgrade3,
	ScannerUpgrade4,
	RearGrip,
	MAX,
};

// Enum BackendModels.EYAmmoType
enum class EYAmmoType : uint8 {
	None,
	Bullet,
	Beam,
	Gauss,
	Explosives,
	EnergyLight,
	EnergyHeavy,
	Shard,
	Missiles,
	Needler,
	PrototypeCategory_01,
	PrototypeCategory_02,
	PrototypeCategory_03,
	PrototypeCategory_04,
	Overheat,
	All,
	MAX,
};

// Enum BackendModels.EYMiscellaneousType
enum class EYMiscellaneousType : uint8 {
	Invalid,
	None,
	Vehicle,
	MAX,
};

// Enum BackendModels.EYDeviceCategory
enum class EYDeviceCategory : uint8 {
	AssaultRifle,
	Pistol,
	SMG,
	SniperRifle,
	HeavyWeapon,
	Shotgun,
	BurstRifle,
	Exotic,
	MissileLauncher,
	Scanner,
	All,
	INVALID,
	MAX,
};

// Enum BackendModels.EYDeviceClass
enum class EYDeviceClass : uint8 {
	None,
	Gadget,
	PrimaryWeapon,
	SecondaryWeapon,
	Tool,
	All,
	MAX,
};

// Enum BackendModels.EYItemType
enum class EYItemType : uint8 {
	None,
	Device,
	Ability,
	Kit,
	Consumable,
	Mod,
	Blueprint,
	Material,
	Miscellaneous,
	Currency,
	Vanity,
	Experience,
	Lore,
	Vehicle,
	Ammo,
	Upgrade,
	Collectible,
	QuestItem,
	Shield,
	ProspectorBadge,
	TechTreeNode,
	PlayerQuartersLevel,
	PassiveGenerator,
	Bag,
	Helmet,
	Key,
	MeleeWeapon,
	All,
	MAX,
};

// Enum BackendModels.EYMatchServerSocialAdmissionType
enum class EYMatchServerSocialAdmissionType : uint8 {
	Mixed,
	Solo,
	Squad,
	EYMatchServerSocialAdmissionType_MAX,
};

// Enum BackendModels.EYMatchmakingDebugOption
enum class EYMatchmakingDebugOption : uint8 {
	None,
	ForceMultiplayerStation,
	ForceSinglePlayerStation,
	EYMatchmakingDebugOption_MAX,
};

// Enum BackendModels.EYPlayfabMatchmakingState
enum class EYPlayfabMatchmakingState : uint8 {
	Invalid,
	WaitingForPlayers,
	WaitingForMatch,
	WaitingForServer,
	Canceled,
	Matched,
	EYPlayfabMatchmakingState_MAX,
};

// Enum BackendModels.EYMatchmakingResult
enum class EYMatchmakingResult : uint8 {
	OK,
	ALREADY_IN_QUEUE,
	ALREADY_IN_ROOM,
	NOT_IN_MATCHMAKING,
	CANCELED,
	NO_GAME_MODE,
	GAME_MODE_INACTIVE,
	UNKNOWN_REGION,
	CHANGED_REGIONS,
	EYMatchmakingResult_MAX,
};

// Enum BackendModels.EYMuteResult
enum class EYMuteResult : uint8 {
	OK,
	NOT_ADMIN,
	INVALID_REASON,
	UNKNOWN,
	EYMuteResult_MAX,
};

// Enum BackendModels.EYMuteReason
enum class EYMuteReason : uint8 {
	INAPROPRIATE_LANGUAGE,
	SPAM,
	HATE_SPEECH,
	PLAYER_ABUSE,
	EYMuteReason_MAX,
};

// Enum BackendModels.EYChannelType
enum class EYChannelType : uint8 {
	NONE,
	SYSTEM,
	GLOBAL,
	WHISPER,
	SQUAD,
	TEAM,
	MATCH,
	SPECTATE,
	GLOBAL_EN,
	GLOBAL_GER,
	GLOBAL_RU,
	GLOBAL_FR,
	GLOBAL_ES,
	GLOBAL_PTBR,
	GLOBAL_PL,
	GLOBAL_TR,
	GLOBAL_ZH,
	CHEAT_CHANNEL,
	EYChannelType_MAX,
};

// Enum BackendModels.EYMetaMissionType
enum class EYMetaMissionType : uint8 {
	Mission,
	DailyChallenge,
	WeeklyChallenge,
	SeasonChallenge,
	RepeatedDaily,
	ShowcaseTitle,
	PersistentChallenge,
	None,
	EYMetaMissionType_MAX,
};

// Enum BackendModels.EYRankedCategory
enum class EYRankedCategory : uint8 {
	None,
	Solo,
	Duo,
	Squad,
	Rewards,
	MAX,
};

// Enum BackendModels.EYRewardResult
enum class EYRewardResult : uint8 {
	OK,
	INVALID_REWARD,
	EYRewardResult_MAX,
};

// Enum BackendModels.EYPlayerRewardSource
enum class EYPlayerRewardSource : uint8 {
	IN_GAME,
	END_OF_MATCH,
	BASE,
	VICTORY_POINTS_MULTIPLIER,
	EVACUATION,
	SCOREBOARD_PLACEMENT,
	MISSION,
	GRANTS,
	DIED,
	MAX,
};

// Enum BackendModels.EYServerCommand
enum class EYServerCommand : uint8 {
	OK,
	SHUT_DOWN,
	TRAVEL_BACK,
	EYServerCommand_MAX,
};

// Enum BackendModels.EYUserStateChangeType
enum class EYUserStateChangeType : uint8 {
	None,
	Registered,
	Left,
	MAX,
};

// Enum BackendModels.EYGetCurrencyResult
enum class EYGetCurrencyResult : uint8 {
	FAILED,
	SUCCEEDED,
	EYGetCurrencyResult_MAX,
};

// Enum BackendModels.EYPurchaseOfferState
enum class EYPurchaseOfferState : uint8 {
	UNPURCHASED,
	BEING_PURCHASED,
	PURCHASED,
	EYPurchaseOfferState_MAX,
};

// Enum BackendModels.EYPurchaseOfferResult
enum class EYPurchaseOfferResult : uint8 {
	OK,
	INVALID_ID,
	ALREADY_PURCHASED,
	OFFER_NOT_ACTIVE,
	NOT_ENOUGH_CURRENCY,
	INVALID_CURRENCY_TYPE,
	INVALID_AMOUNT,
	UNKNOWN_ERROR,
	EYPurchaseOfferResult_MAX,
};

// Enum BackendModels.EYOfferUnavailableReason
enum class EYOfferUnavailableReason : uint8 {
	None,
	AlreadyPurchased,
	BeingPurchased,
	NotEnoughFunds,
	PurchasedSeasonPass,
	MaxSeasonLevel,
	OwningAllVanityItems,
	QuantityValueTooHigh,
	OtherOffersRequired,
	Unknown,
	MAX,
};

// Enum BackendModels.EYOfferRarity
enum class EYOfferRarity : uint8 {
	Invalid,
	Common,
	Uncommon,
	Rare,
	MAX,
};

// Enum BackendModels.EYShopCategory
enum class EYShopCategory : uint8 {
	None,
	Special,
	Daily,
	Weekly,
	HardCurrency,
	FounderPacks,
	SeasonPass,
	MAX,
};

// Enum BackendModels.EYPromotionType
enum class EYPromotionType : uint8 {
	None,
	SpecialDaily,
	SpecialWeekly,
	Currency,
	Season,
	StarterPacks,
	MAX,
};

// Enum BackendModels.EYCurrencyType
enum class EYCurrencyType : uint8 {
	Invalid,
	SoftCurrency,
	HardCurrency,
	RealCurrency,
	MAX,
};

// Enum BackendModels.EYSocialRequestResult
enum class EYSocialRequestResult : uint8 {
	OK,
	GUID_PARSING_FAILED,
	GOT_NO_SOCIAL_PROFILES,
	UNKNOWN_ERROR,
	EYSocialRequestResult_MAX,
};

// Enum BackendModels.EYFriendActionResult
enum class EYFriendActionResult : uint8 {
	OK,
	INVALID_TARGET,
	TARGET_OFFLINE,
	INITIATOR_OFFLINE,
	ALREADY_FRIEND,
	NOT_IN_STATION,
	INTERNAL_ERROR,
	EYFriendActionResult_MAX,
};

// Enum BackendModels.EYPlatformTypes
enum class EYPlatformTypes : uint8 {
	INTERNAL,
	EGS,
	PLAYFAB,
	UNITIALIZED,
	EYPlatformTypes_MAX,
};

// Enum BackendModels.EYGetFriendListResult
enum class EYGetFriendListResult : uint8 {
	OK,
	UNKNOWN_ERROR,
	EYGetFriendListResult_MAX,
};

// Enum BackendModels.EYSocialNotificationBackend
enum class EYSocialNotificationBackend : uint8 {
	NONE,
	ONLINE,
	OFFLINE,
	ADDED,
	MATCH,
	EYSocialNotificationBackend_MAX,
};

// Enum BackendModels.EYSocialGameStateType
enum class EYSocialGameStateType : uint8 {
	IN_STATION,
	IN_MATCH,
	UNKNOWN,
	EYSocialGameStateType_MAX,
};

// Enum BackendModels.EYFriendState
enum class EYFriendState : uint8 {
	NONE,
	PENDINGINBOUND,
	PENDINGOUTBOUND,
	ACCEPTED,
	BLOCKED,
	SUGGESTED,
	EYFriendState_MAX,
};

// Enum BackendModels.EYSquadUpdateState
enum class EYSquadUpdateState : uint8 {
	JOINED,
	LEFT,
	GENERIC,
	DISBANDED,
	EYSquadUpdateState_MAX,
};

// Enum BackendModels.EYUserState
enum class EYUserState : uint8 {
	IN_STATION,
	IN_MATCH,
	IN_EOM,
	IN_MAX,
};

// Enum BackendModels.EYSquadActionResult
enum class EYSquadActionResult : uint8 {
	OK,
	INVALID_TARGET,
	TARGET_OFFLINE,
	INITIATOR_OFFLINE,
	INVALID_SQUAD,
	SQUAD_FULL,
	INVALID_SQUAD_INVITE,
	INTERNAL_ERROR,
	EYSquadActionResult_MAX,
};

// Enum BackendModels.EYClientStationRequestResult
enum class EYClientStationRequestResult : uint8 {
	INVALID_USERI_ID,
	UNKNOWN,
	PENDING,
	TRAVEL_SINGLEPLAYER,
	OK,
	EYClientStationRequestResult_MAX,
};

// Enum BackendModels.EYStationCommandResultType
enum class EYStationCommandResultType : uint8 {
	UNKNOWN_ERROR,
	OK,
	SHUTDOWN,
	EYStationCommandResultType_MAX,
};

// Enum BackendModels.EYPlayerSessionMatchState
enum class EYPlayerSessionMatchState : uint8 {
	Invalid,
	Match,
	Escape,
	Pending,
	EYPlayerSessionMatchState_MAX,
};

// ScriptStruct BackendModels.YPlayfabMessage
// Size: 0x40 (Inherited: 0x00)
struct FYPlayfabMessage {
	struct FString m_userId; // 0x00(0x10)
	struct FString m_service; // 0x10(0x10)
	struct UScriptStruct* m_desiredStruct; // 0x20(0x08)
	struct FString m_jsonData; // 0x28(0x10)
	int32_t m_requestHandle; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct BackendModels.YMessage
// Size: 0x28 (Inherited: 0x00)
struct FYMessage {
	struct FString from; // 0x00(0x10)
	struct FString Msg; // 0x10(0x10)
	enum class EYChannelType ChannelType; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct BackendModels.YUserMatchmakingSettings
// Size: 0x28 (Inherited: 0x00)
struct FYUserMatchmakingSettings {
	bool isReadyForMatch; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString selectedMapName; // 0x08(0x10)
	struct TArray<struct FYPurchaseInventoryInsuranceRequest> purchaseInventoryInsurances; // 0x18(0x10)
};

// ScriptStruct BackendModels.YPurchaseInventoryInsuranceRequest
// Size: 0x20 (Inherited: 0x00)
struct FYPurchaseInventoryInsuranceRequest {
	struct FString m_insuranceId; // 0x00(0x10)
	struct TArray<struct FString> m_itemIds; // 0x10(0x10)
};

// ScriptStruct BackendModels.YPlatformEntry
// Size: 0x18 (Inherited: 0x00)
struct FYPlatformEntry {
	enum class EYPlatformTypes Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString ID; // 0x08(0x10)
};

// ScriptStruct BackendModels.YCompleteQuestState
// Size: 0x40 (Inherited: 0x00)
struct FYCompleteQuestState {
	struct FYQuestState questState; // 0x00(0x40)
};

// ScriptStruct BackendModels.YQuestState
// Size: 0x40 (Inherited: 0x00)
struct FYQuestState {
	struct FString questId; // 0x00(0x10)
	bool Completed; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t Count; // 0x14(0x04)
	enum class EYMetaMissionType Type; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FYTimestamp updated; // 0x20(0x08)
	struct FString backendId; // 0x28(0x10)
	int32_t remainingUnits; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct BackendModels.YTimestamp
// Size: 0x08 (Inherited: 0x00)
struct FYTimestamp {
	int64_t Seconds; // 0x00(0x08)
};

// ScriptStruct BackendModels.YCraftedBlueprintInfo
// Size: 0x48 (Inherited: 0x00)
struct FYCraftedBlueprintInfo {
	struct FName blueprintName; // 0x00(0x08)
	struct FString shopItemBelongsTo; // 0x08(0x10)
	int32_t itemRarity; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString itemBackendId; // 0x20(0x10)
	struct FString baseItemId; // 0x30(0x10)
	int32_t purchaseAmount; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct BackendModels.YFactionProgress
// Size: 0x18 (Inherited: 0x00)
struct FYFactionProgress {
	struct FName factionId; // 0x00(0x08)
	int32_t reputation; // 0x08(0x04)
	int32_t Level; // 0x0c(0x04)
	int32_t standingRank; // 0x10(0x04)
	int32_t Points; // 0x14(0x04)
};

// ScriptStruct BackendModels.YSocialProfileEntry
// Size: 0x88 (Inherited: 0x00)
struct FYSocialProfileEntry {
	struct FString internalUserId; // 0x00(0x10)
	struct FString epicId; // 0x10(0x10)
	struct FString Username; // 0x20(0x10)
	struct FYSocialPresenceEntry presence; // 0x30(0x38)
	struct FString productUserId; // 0x68(0x10)
	struct FString PlayFabId; // 0x78(0x10)
};

// ScriptStruct BackendModels.YSocialPresenceEntry
// Size: 0x38 (Inherited: 0x00)
struct FYSocialPresenceEntry {
	enum class EYSocialGameStateType State; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString squadId; // 0x08(0x10)
	int32_t squadSize; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString socialRowId; // 0x20(0x10)
	int32_t prospectorLevelXP; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct BackendModels.YUserCurrenciesItems
// Size: 0x20 (Inherited: 0x00)
struct FYUserCurrenciesItems {
	struct FString UserId; // 0x00(0x10)
	struct TArray<struct FYCurrencyItem> currencies; // 0x10(0x10)
};

// ScriptStruct BackendModels.YCurrencyItem
// Size: 0x18 (Inherited: 0x00)
struct FYCurrencyItem {
	struct FString currencyName; // 0x00(0x10)
	int32_t Amount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BackendModels.YUpdatedFactionProgression
// Size: 0x28 (Inherited: 0x00)
struct FYUpdatedFactionProgression {
	struct FString m_userId; // 0x00(0x10)
	struct FString m_faction; // 0x10(0x10)
	int32_t m_factionProgression; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct BackendModels.YCustomItemInfo
// Size: 0x70 (Inherited: 0x00)
struct FYCustomItemInfo {
	struct FString ItemId; // 0x00(0x10)
	struct FString baseItemId; // 0x10(0x10)
	struct FString vanityId; // 0x20(0x10)
	struct FString secondaryVanityId; // 0x30(0x10)
	int32_t Level; // 0x40(0x04)
	int32_t Amount; // 0x44(0x04)
	int32_t durability; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FYModItems modData; // 0x50(0x10)
	struct FString insuranceId; // 0x60(0x10)
};

// ScriptStruct BackendModels.YModItems
// Size: 0x10 (Inherited: 0x00)
struct FYModItems {
	struct TArray<int32_t> M; // 0x00(0x10)
};

// ScriptStruct BackendModels.YInstanceUpdateAmount
// Size: 0x18 (Inherited: 0x00)
struct FYInstanceUpdateAmount {
	struct FString ID; // 0x00(0x10)
	int32_t Amount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BackendModels.YRankSeasonsData
// Size: 0x10 (Inherited: 0x00)
struct FYRankSeasonsData {
	struct TArray<struct FYRankSeasonData> rankSeasons; // 0x00(0x10)
};

// ScriptStruct BackendModels.YRankSeasonData
// Size: 0x20 (Inherited: 0x00)
struct FYRankSeasonData {
	struct FString seasonId; // 0x00(0x10)
	struct TArray<struct FYPlayerRankedSeasonGamemodeData> playersRankedSeasonData; // 0x10(0x10)
};

// ScriptStruct BackendModels.YPlayerRankedSeasonGamemodeData
// Size: 0x28 (Inherited: 0x00)
struct FYPlayerRankedSeasonGamemodeData {
	struct FString UserId; // 0x00(0x10)
	struct FString GameMode; // 0x10(0x10)
	int32_t rank; // 0x20(0x04)
	int32_t highestRank; // 0x24(0x04)
};

// ScriptStruct BackendModels.YPlayerRankedSeasonData
// Size: 0x20 (Inherited: 0x00)
struct FYPlayerRankedSeasonData {
	struct FString UserId; // 0x00(0x10)
	struct TArray<struct FYPlayerRankedGamemodeData> playerRankedGamemodesData; // 0x10(0x10)
};

// ScriptStruct BackendModels.YPlayerRankedGamemodeData
// Size: 0x18 (Inherited: 0x00)
struct FYPlayerRankedGamemodeData {
	struct FString GameMode; // 0x00(0x10)
	int32_t rank; // 0x10(0x04)
	int32_t highestRank; // 0x14(0x04)
};

// ScriptStruct BackendModels.YGetBatchedRankedSeasonsResponse
// Size: 0x40 (Inherited: 0x00)
struct FYGetBatchedRankedSeasonsResponse {
	struct FYRankSeasonsData hofData; // 0x00(0x10)
	struct FYPlayersRankedSeasonData topNPlayersActiveRankedSeason; // 0x10(0x10)
	struct FYPlayerRankedSeasonData localPlayerRankedSeasonData; // 0x20(0x20)
};

// ScriptStruct BackendModels.YPlayersRankedSeasonData
// Size: 0x10 (Inherited: 0x00)
struct FYPlayersRankedSeasonData {
	struct TArray<struct FYPlayerRankedSeasonGamemodeData> playersRankedSeasonArray; // 0x00(0x10)
};

// ScriptStruct BackendModels.YPlayerRankUpdatedForGameMode
// Size: 0x20 (Inherited: 0x00)
struct FYPlayerRankUpdatedForGameMode {
	struct FString GameMode; // 0x00(0x10)
	int32_t oldRank; // 0x10(0x04)
	int32_t newRank; // 0x14(0x04)
	int32_t highestRank; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct BackendModels.YShopOffer
// Size: 0x18 (Inherited: 0x00)
struct FYShopOffer {
	struct FString shopOfferRowId; // 0x00(0x10)
	enum class EYPurchaseOfferState purchaseState; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct BackendModels.YFriendAction
// Size: 0x18 (Inherited: 0x00)
struct FYFriendAction {
	struct FString internalUserId; // 0x00(0x10)
	enum class EYFriendState stateToChangeTo; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct BackendModels.YPlayerReward
// Size: 0x18 (Inherited: 0x00)
struct FYPlayerReward {
	struct FString RewardId; // 0x00(0x10)
	int32_t Amount; // 0x10(0x04)
	enum class EYPlayerRewardSource Source; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct BackendModels.YMissionProgressionUpdated
// Size: 0x50 (Inherited: 0x00)
struct FYMissionProgressionUpdated {
	struct FString m_userId; // 0x00(0x10)
	struct FString m_currentMissionID; // 0x10(0x10)
	int32_t m_progress; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FYCustomItemInfo> m_rewards; // 0x28(0x10)
	struct TArray<struct FYCurrencyItem> m_updatedCurrencies; // 0x38(0x10)
	bool m_shouldShowPopup; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct BackendModels.YPlayerQuarterStatus
// Size: 0x10 (Inherited: 0x00)
struct FYPlayerQuarterStatus {
	int32_t Level; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FYTimestamp upgradeStartedTime; // 0x08(0x08)
};

// ScriptStruct BackendModels.YTechTreeNodeStatus
// Size: 0x20 (Inherited: 0x00)
struct FYTechTreeNodeStatus {
	struct FString nodeId; // 0x00(0x10)
	int32_t Level; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FYTimestamp upgradeStartedTime; // 0x18(0x08)
};

// ScriptStruct BackendModels.YCurrency
// Size: 0x04 (Inherited: 0x00)
struct FYCurrency {
	int32_t hardCurrency; // 0x00(0x04)
};

// ScriptStruct BackendModels.YPlayerSeasonGrants
// Size: 0x20 (Inherited: 0x00)
struct FYPlayerSeasonGrants {
	struct FString seasonRowId; // 0x00(0x10)
	struct TArray<struct FYPlayerSeasonGrant> grants; // 0x10(0x10)
};

// ScriptStruct BackendModels.YPlayerSeasonGrant
// Size: 0x38 (Inherited: 0x00)
struct FYPlayerSeasonGrant {
	int32_t Level; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString grantRowId; // 0x08(0x10)
	struct FString grantId; // 0x18(0x10)
	struct FString seasonRowId; // 0x28(0x10)
};

// ScriptStruct BackendModels.YPlayerSeasonsData
// Size: 0x38 (Inherited: 0x00)
struct FYPlayerSeasonsData {
	struct FName seasonRowId; // 0x00(0x08)
	struct FString startDateTime; // 0x08(0x10)
	struct FString endDateTime; // 0x18(0x10)
	int32_t xp; // 0x28(0x04)
	int32_t Level; // 0x2c(0x04)
	bool hasPaidPass; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct BackendModels.YShopPromotion
// Size: 0x50 (Inherited: 0x00)
struct FYShopPromotion {
	struct FString ID; // 0x00(0x10)
	struct FString shopPromotionRowId; // 0x10(0x10)
	enum class EYPromotionType promotionType; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FString startDateTime; // 0x28(0x10)
	int32_t layoutIdx; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct FString> shopOfferRowIds; // 0x40(0x10)
};

// ScriptStruct BackendModels.YMutingState
// Size: 0x20 (Inherited: 0x00)
struct FYMutingState {
	bool m_isMuted; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float m_durationMuted; // 0x04(0x04)
	float m_timeStartedMuted; // 0x08(0x04)
	char pad_C[0xc]; // 0x0c(0x0c)
	int32_t m_amountOfTimeMuted; // 0x18(0x04)
	enum class EYMuteReason m_reason; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct BackendModels.YAttachment
// Size: 0x28 (Inherited: 0x00)
struct FYAttachment {
	struct FString ID; // 0x00(0x10)
	enum class EYAttachmentType attachmentType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString attachmentTypeId; // 0x18(0x10)
};

// ScriptStruct BackendModels.YGetOwnedCharacterArchetypesResponse
// Size: 0x30 (Inherited: 0x00)
struct FYGetOwnedCharacterArchetypesResponse {
	struct FString UserId; // 0x00(0x10)
	struct FString Error; // 0x10(0x10)
	struct TArray<struct FName> archetypeIds; // 0x20(0x10)
};

// ScriptStruct BackendModels.YGetOwnedCharacterArchetypesRequest
// Size: 0x20 (Inherited: 0x00)
struct FYGetOwnedCharacterArchetypesRequest {
	struct FString UserId; // 0x00(0x10)
	struct TArray<struct FString> archetypeIds; // 0x10(0x10)
};

// ScriptStruct BackendModels.YResetCharacterArchetypeResponse
// Size: 0xc0 (Inherited: 0x00)
struct FYResetCharacterArchetypeResponse {
	struct FYCharacterVanity returnVanity; // 0x00(0xc0)
};

// ScriptStruct BackendModels.YCharacterVanity
// Size: 0xc0 (Inherited: 0x00)
struct FYCharacterVanity {
	struct FString UserId; // 0x00(0x10)
	struct FYVanityMaterialItem head_item; // 0x10(0x18)
	struct FYVanityMaterialItem boots_item; // 0x28(0x18)
	struct FYVanityMaterialItem chest_item; // 0x40(0x18)
	struct FYVanityMaterialItem glove_item; // 0x58(0x18)
	struct FYVanityMaterialItem base_suit_item; // 0x70(0x18)
	struct FYVanityMaterialItem melee_weapon_item; // 0x88(0x18)
	int32_t body_type; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct FString archetype_id; // 0xa8(0x10)
	int32_t slot_index; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// ScriptStruct BackendModels.YVanityMaterialItem
// Size: 0x18 (Inherited: 0x00)
struct FYVanityMaterialItem {
	struct FString ID; // 0x00(0x10)
	int32_t material_index; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BackendModels.YResetCharacterArchetypeRequest
// Size: 0x20 (Inherited: 0x00)
struct FYResetCharacterArchetypeRequest {
	struct FString UserId; // 0x00(0x10)
	struct FString archetypeId; // 0x10(0x10)
};

// ScriptStruct BackendModels.YSetActiveCharacterVanityResponse
// Size: 0xc0 (Inherited: 0x00)
struct FYSetActiveCharacterVanityResponse {
	struct FYCharacterVanity returnVanity; // 0x00(0xc0)
};

// ScriptStruct BackendModels.YSetActiveCharacterVanityRequest
// Size: 0xd0 (Inherited: 0x00)
struct FYSetActiveCharacterVanityRequest {
	struct FString UserId; // 0x00(0x10)
	struct FYCharacterVanity desiredVanity; // 0x10(0xc0)
};

// ScriptStruct BackendModels.YSetActiveCharacterArchetypeResponse
// Size: 0xc8 (Inherited: 0x00)
struct FYSetActiveCharacterArchetypeResponse {
	bool SUCCESS; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FYCharacterVanity returnVanity; // 0x08(0xc0)
};

// ScriptStruct BackendModels.YSetActiveCharacterArchetypeRequest
// Size: 0x20 (Inherited: 0x00)
struct FYSetActiveCharacterArchetypeRequest {
	struct FString UserId; // 0x00(0x10)
	struct FString archetypeId; // 0x10(0x10)
};

// ScriptStruct BackendModels.YGetCharacterVanityResponse
// Size: 0xc8 (Inherited: 0x00)
struct FYGetCharacterVanityResponse {
	bool SUCCESS; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FYCharacterVanity returnVanity; // 0x08(0xc0)
};

// ScriptStruct BackendModels.YGetCharacterVanityRequest
// Size: 0x10 (Inherited: 0x00)
struct FYGetCharacterVanityRequest {
	struct FString UserId; // 0x00(0x10)
};

// ScriptStruct BackendModels.YDebugModifyUserSkills
// Size: 0x18 (Inherited: 0x00)
struct FYDebugModifyUserSkills {
	struct FString UserId; // 0x00(0x10)
	int32_t skill; // 0x10(0x04)
	int32_t deviation; // 0x14(0x04)
};

// ScriptStruct BackendModels.YDebugResetAllFactionsProgressionResponse
// Size: 0x20 (Inherited: 0x00)
struct FYDebugResetAllFactionsProgressionResponse {
	struct FString UserId; // 0x00(0x10)
	struct FString Error; // 0x10(0x10)
};

// ScriptStruct BackendModels.YDebugResetAllFactionsProgressionRequest
// Size: 0x01 (Inherited: 0x00)
struct FYDebugResetAllFactionsProgressionRequest {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BackendModels.YDebugAddFactionProgressResponse
// Size: 0x38 (Inherited: 0x00)
struct FYDebugAddFactionProgressResponse {
	struct FString UserId; // 0x00(0x10)
	struct FString Error; // 0x10(0x10)
	struct FString factionId; // 0x20(0x10)
	int32_t reputation; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct BackendModels.YDebugAddFactionProgressRequest
// Size: 0x18 (Inherited: 0x00)
struct FYDebugAddFactionProgressRequest {
	struct FString factionId; // 0x00(0x10)
	int32_t reputationIncrement; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BackendModels.YDebugResetFactionProgressResponse
// Size: 0x38 (Inherited: 0x00)
struct FYDebugResetFactionProgressResponse {
	struct FString UserId; // 0x00(0x10)
	struct FString Error; // 0x10(0x10)
	struct FString factionId; // 0x20(0x10)
	int32_t reputation; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct BackendModels.YDebugResetFactionProgressRequest
// Size: 0x10 (Inherited: 0x00)
struct FYDebugResetFactionProgressRequest {
	struct FString factionId; // 0x00(0x10)
};

// ScriptStruct BackendModels.YDebugSendInboxMessage
// Size: 0x28 (Inherited: 0x00)
struct FYDebugSendInboxMessage {
	struct FString messageRowId; // 0x00(0x10)
	enum class EYAttachmentType attachmentType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString attachmentTypeRowId; // 0x18(0x10)
};

// ScriptStruct BackendModels.YClearInventory
// Size: 0x10 (Inherited: 0x00)
struct FYClearInventory {
	struct FString UserId; // 0x00(0x10)
};

// ScriptStruct BackendModels.YInviteToSquadByNameResponse
// Size: 0x01 (Inherited: 0x00)
struct FYInviteToSquadByNameResponse {
	enum class EYSquadInviteResult Result; // 0x00(0x01)
};

// ScriptStruct BackendModels.YInviteToSquadByName
// Size: 0x10 (Inherited: 0x00)
struct FYInviteToSquadByName {
	struct FString targetName; // 0x00(0x10)
};

// ScriptStruct BackendModels.YResetSession
// Size: 0x10 (Inherited: 0x00)
struct FYResetSession {
	struct FString ServerId; // 0x00(0x10)
};

// ScriptStruct BackendModels.YShowCraftingMaterials
// Size: 0x10 (Inherited: 0x00)
struct FYShowCraftingMaterials {
	struct FString UserId; // 0x00(0x10)
};

// ScriptStruct BackendModels.YRemoveAllCraftingMaterials
// Size: 0x10 (Inherited: 0x00)
struct FYRemoveAllCraftingMaterials {
	struct FString UserId; // 0x00(0x10)
};

// ScriptStruct BackendModels.YSetCraftingMaterialAmount
// Size: 0x28 (Inherited: 0x00)
struct FYSetCraftingMaterialAmount {
	struct FString UserId; // 0x00(0x10)
	struct FString materialName; // 0x10(0x10)
	int32_t Amount; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct BackendModels.YResetAllRooms
// Size: 0x01 (Inherited: 0x00)
struct FYResetAllRooms {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BackendModels.YRooms
// Size: 0x20 (Inherited: 0x00)
struct FYRooms {
	struct TArray<struct FYRoomInfo> waitingRooms; // 0x00(0x10)
	struct TArray<struct FYRoomInfo> playingRooms; // 0x10(0x10)
};

// ScriptStruct BackendModels.YRoomInfo
// Size: 0x40 (Inherited: 0x00)
struct FYRoomInfo {
	struct FString roomId; // 0x00(0x10)
	struct FString ServerId; // 0x10(0x10)
	struct TArray<struct FString> Players; // 0x20(0x10)
	struct FString Region; // 0x30(0x10)
};

// ScriptStruct BackendModels.YListRooms
// Size: 0x01 (Inherited: 0x00)
struct FYListRooms {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BackendModels.YQueueuingPlayers
// Size: 0x20 (Inherited: 0x00)
struct FYQueueuingPlayers {
	struct TArray<struct FYQueueDetails> queues; // 0x00(0x10)
	struct FString exchangeActive; // 0x10(0x10)
};

// ScriptStruct BackendModels.YQueueDetails
// Size: 0x38 (Inherited: 0x00)
struct FYQueueDetails {
	struct FString GameMode; // 0x00(0x10)
	bool isRanked; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString Region; // 0x18(0x10)
	struct TArray<struct FString> Players; // 0x28(0x10)
};

// ScriptStruct BackendModels.YListQueues
// Size: 0x01 (Inherited: 0x00)
struct FYListQueues {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BackendModels.YForceStartResponse
// Size: 0x01 (Inherited: 0x00)
struct FYForceStartResponse {
	enum class EYForceStartResult Error; // 0x00(0x01)
};

// ScriptStruct BackendModels.YForceStartMatch
// Size: 0x28 (Inherited: 0x00)
struct FYForceStartMatch {
	struct FString GameMode; // 0x00(0x10)
	bool isRanked; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString Region; // 0x18(0x10)
};

// ScriptStruct BackendModels.YInventoryItems
// Size: 0x18 (Inherited: 0x00)
struct FYInventoryItems {
	enum class EYCheatResult Status; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FYCustomItemInfo> Items; // 0x08(0x10)
};

// ScriptStruct BackendModels.YShowItems
// Size: 0x10 (Inherited: 0x00)
struct FYShowItems {
	struct FString UserId; // 0x00(0x10)
};

// ScriptStruct BackendModels.YCheatResponse
// Size: 0x01 (Inherited: 0x00)
struct FYCheatResponse {
	enum class EYCheatResult Status; // 0x00(0x01)
};

// ScriptStruct BackendModels.YDebugResetPlayerResult
// Size: 0x18 (Inherited: 0x00)
struct FYDebugResetPlayerResult {
	struct FString UserId; // 0x00(0x10)
	bool SUCCESS; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct BackendModels.YDebugResetPlayerRequest
// Size: 0x10 (Inherited: 0x00)
struct FYDebugResetPlayerRequest {
	struct FString UserId; // 0x00(0x10)
};

// ScriptStruct BackendModels.YDebugResetAllGeneratorsResult
// Size: 0x18 (Inherited: 0x00)
struct FYDebugResetAllGeneratorsResult {
	struct FString UserId; // 0x00(0x10)
	enum class EYCheatResult Status; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct BackendModels.YDebugResetAllGenerators
// Size: 0x10 (Inherited: 0x00)
struct FYDebugResetAllGenerators {
	struct FString UserId; // 0x00(0x10)
};

// ScriptStruct BackendModels.YDebugResetGeneratorResult
// Size: 0x28 (Inherited: 0x00)
struct FYDebugResetGeneratorResult {
	struct FString UserId; // 0x00(0x10)
	struct FString generatorId; // 0x10(0x10)
	enum class EYCheatResult Status; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct BackendModels.YDebugResetGenerator
// Size: 0x20 (Inherited: 0x00)
struct FYDebugResetGenerator {
	struct FString UserId; // 0x00(0x10)
	struct FString generatorId; // 0x10(0x10)
};

// ScriptStruct BackendModels.YDebugResetTechTreeResult
// Size: 0x18 (Inherited: 0x00)
struct FYDebugResetTechTreeResult {
	struct FString UserId; // 0x00(0x10)
	enum class EYCheatResult Status; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct BackendModels.YDebugResetTechTree
// Size: 0x10 (Inherited: 0x00)
struct FYDebugResetTechTree {
	struct FString UserId; // 0x00(0x10)
};

// ScriptStruct BackendModels.YDebugSetTechTreeNodeLevelResult
// Size: 0x28 (Inherited: 0x00)
struct FYDebugSetTechTreeNodeLevelResult {
	struct FString UserId; // 0x00(0x10)
	struct FString nodeId; // 0x10(0x10)
	int32_t Level; // 0x20(0x04)
	enum class EYCheatResult Status; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct BackendModels.YDebugSetTechTreeNodeLevel
// Size: 0x28 (Inherited: 0x00)
struct FYDebugSetTechTreeNodeLevel {
	struct FString UserId; // 0x00(0x10)
	struct FString nodeId; // 0x10(0x10)
	int32_t Level; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct BackendModels.YDebugSetPlayerQuartersLevelResult
// Size: 0x18 (Inherited: 0x00)
struct FYDebugSetPlayerQuartersLevelResult {
	struct FString UserId; // 0x00(0x10)
	int32_t Level; // 0x10(0x04)
	enum class EYCheatResult Status; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct BackendModels.YDebugSetPlayerQuartersLevel
// Size: 0x18 (Inherited: 0x00)
struct FYDebugSetPlayerQuartersLevel {
	struct FString UserId; // 0x00(0x10)
	int32_t Level; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BackendModels.YDebugSetBagLimit
// Size: 0x18 (Inherited: 0x00)
struct FYDebugSetBagLimit {
	struct FString UserId; // 0x00(0x10)
	int32_t bagLimit; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BackendModels.YDebugSetStashLimit
// Size: 0x18 (Inherited: 0x00)
struct FYDebugSetStashLimit {
	struct FString UserId; // 0x00(0x10)
	int32_t stashLimit; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BackendModels.YRemoveAllCustomItems
// Size: 0x10 (Inherited: 0x00)
struct FYRemoveAllCustomItems {
	struct FString UserId; // 0x00(0x10)
};

// ScriptStruct BackendModels.YRemoveCustomItem
// Size: 0x20 (Inherited: 0x00)
struct FYRemoveCustomItem {
	struct FString UserId; // 0x00(0x10)
	struct FString ItemId; // 0x10(0x10)
};

// ScriptStruct BackendModels.YDebugAddCustomItem
// Size: 0x20 (Inherited: 0x00)
struct FYDebugAddCustomItem {
	struct FString UserId; // 0x00(0x10)
	struct FString baseItemId; // 0x10(0x10)
};

// ScriptStruct BackendModels.YLiveEventModifiersConfiguration
// Size: 0x10 (Inherited: 0x00)
struct FYLiveEventModifiersConfiguration {
	struct TArray<struct FYLiveEventModifier> liveEventModifiers; // 0x00(0x10)
};

// ScriptStruct BackendModels.YLiveEventModifier
// Size: 0x20 (Inherited: 0x00)
struct FYLiveEventModifier {
	struct FString ID; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct BackendModels.YLiveEventModifiersConfigurationRequest
// Size: 0x01 (Inherited: 0x00)
struct FYLiveEventModifiersConfigurationRequest {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BackendModels.YTournamentDataUpdatedPushMessage
// Size: 0x18 (Inherited: 0x00)
struct FYTournamentDataUpdatedPushMessage {
	struct FString UserId; // 0x00(0x10)
	bool isAllowed; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct BackendModels.YTournamentDataRemoveUser
// Size: 0x10 (Inherited: 0x00)
struct FYTournamentDataRemoveUser {
	struct FString UserId; // 0x00(0x10)
};

// ScriptStruct BackendModels.YTournamentDataAddUser
// Size: 0x10 (Inherited: 0x00)
struct FYTournamentDataAddUser {
	struct FString UserId; // 0x00(0x10)
};

// ScriptStruct BackendModels.YTournamentDataResponse
// Size: 0x18 (Inherited: 0x00)
struct FYTournamentDataResponse {
	struct FString UserId; // 0x00(0x10)
	bool isAllowed; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct BackendModels.YTournamentDataRequest
// Size: 0x10 (Inherited: 0x00)
struct FYTournamentDataRequest {
	struct FString UserId; // 0x00(0x10)
};

// ScriptStruct BackendModels.YConfigurationKickUser
// Size: 0x10 (Inherited: 0x00)
struct FYConfigurationKickUser {
	struct FString UserId; // 0x00(0x10)
};

// ScriptStruct BackendModels.YGameModeConfig
// Size: 0x05 (Inherited: 0x00)
struct FYGameModeConfig {
	enum class EYMatchmakeGameModeType m_gameModeType; // 0x00(0x01)
	bool m_isRanked; // 0x01(0x01)
	bool m_isEnabled; // 0x02(0x01)
	bool m_isAlwaysVisible; // 0x03(0x01)
	bool m_isTournamentMode; // 0x04(0x01)
};

// ScriptStruct BackendModels.YClientConfiguratonUpdated
// Size: 0x30 (Inherited: 0x00)
struct FYClientConfiguratonUpdated {
	struct FYClientConfiguration config; // 0x00(0x30)
};

// ScriptStruct BackendModels.YClientConfiguration
// Size: 0x30 (Inherited: 0x00)
struct FYClientConfiguration {
	struct FString surveyLink; // 0x00(0x10)
	struct TArray<struct FYConfigEntry> dataTablesData; // 0x10(0x10)
	struct FString matchmakingExchange; // 0x20(0x10)
};

// ScriptStruct BackendModels.YConfigEntry
// Size: 0x20 (Inherited: 0x00)
struct FYConfigEntry {
	struct FString Name; // 0x00(0x10)
	struct FString jsonData; // 0x10(0x10)
};

// ScriptStruct BackendModels.YGameModeConfigurationUpdated
// Size: 0x38 (Inherited: 0x00)
struct FYGameModeConfigurationUpdated {
	struct FYGameModeConfigEntry updatedData; // 0x00(0x38)
};

// ScriptStruct BackendModels.YGameModeConfigEntry
// Size: 0x38 (Inherited: 0x00)
struct FYGameModeConfigEntry {
	struct FString Name; // 0x00(0x10)
	int32_t ranked; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString jsonData; // 0x18(0x10)
	struct FYMapRotationData mapRotationData; // 0x28(0x10)
};

// ScriptStruct BackendModels.YMapRotationData
// Size: 0x10 (Inherited: 0x00)
struct FYMapRotationData {
	struct TArray<struct FYMapData> maps; // 0x00(0x10)
};

// ScriptStruct BackendModels.YMapData
// Size: 0x18 (Inherited: 0x00)
struct FYMapData {
	struct FString Name; // 0x00(0x10)
	int32_t weight; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BackendModels.YConfigurationUpdated
// Size: 0x28 (Inherited: 0x00)
struct FYConfigurationUpdated {
	enum class EYUpdateCategory Category; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FYConfigEntry Data; // 0x08(0x20)
};

// ScriptStruct BackendModels.YConfiguration
// Size: 0x10 (Inherited: 0x00)
struct FYConfiguration {
	struct TArray<struct FYGameModeConfigEntry> GameModes; // 0x00(0x10)
};

// ScriptStruct BackendModels.YGetClientConfiguration
// Size: 0x01 (Inherited: 0x00)
struct FYGetClientConfiguration {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BackendModels.YGetConfiguration
// Size: 0x01 (Inherited: 0x00)
struct FYGetConfiguration {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BackendModels.YUpdatePlayerActiveContractsResult
// Size: 0x20 (Inherited: 0x00)
struct FYUpdatePlayerActiveContractsResult {
	struct FString UserId; // 0x00(0x10)
	struct FString Error; // 0x10(0x10)
};

// ScriptStruct BackendModels.YUpdatePlayerActiveContractsRequest
// Size: 0x20 (Inherited: 0x00)
struct FYUpdatePlayerActiveContractsRequest {
	struct FString UserId; // 0x00(0x10)
	struct TArray<struct FYContractProgressData> contractsProgress; // 0x10(0x10)
};

// ScriptStruct BackendModels.YContractProgressData
// Size: 0x20 (Inherited: 0x00)
struct FYContractProgressData {
	struct FString contractId; // 0x00(0x10)
	struct TArray<int32_t> newProgress; // 0x10(0x10)
};

// ScriptStruct BackendModels.YGetPlayerContractsResult
// Size: 0x50 (Inherited: 0x00)
struct FYGetPlayerContractsResult {
	struct FString UserId; // 0x00(0x10)
	struct FString Error; // 0x10(0x10)
	struct TArray<struct FYActiveContractPlayerData> activeContracts; // 0x20(0x10)
	struct FYFactionsContractsData factionsContracts; // 0x30(0x18)
	int32_t refreshHours24UtcFromBackend; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct BackendModels.YFactionsContractsData
// Size: 0x18 (Inherited: 0x00)
struct FYFactionsContractsData {
	struct TArray<struct FYFactionContractsData> boards; // 0x00(0x10)
	struct FYTimestamp lastBoardRefreshTimeUtc; // 0x10(0x08)
};

// ScriptStruct BackendModels.YFactionContractsData
// Size: 0x20 (Inherited: 0x00)
struct FYFactionContractsData {
	struct FString factionId; // 0x00(0x10)
	struct TArray<struct FYFactionContractData> contracts; // 0x10(0x10)
};

// ScriptStruct BackendModels.YFactionContractData
// Size: 0x18 (Inherited: 0x00)
struct FYFactionContractData {
	struct FString contractId; // 0x00(0x10)
	bool contractIsLockedDueToLowFactionReputation; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct BackendModels.YActiveContractPlayerData
// Size: 0x20 (Inherited: 0x00)
struct FYActiveContractPlayerData {
	struct FString contractId; // 0x00(0x10)
	struct TArray<int32_t> progress; // 0x10(0x10)
};

// ScriptStruct BackendModels.YGetPlayerContractsRequest
// Size: 0x18 (Inherited: 0x00)
struct FYGetPlayerContractsRequest {
	struct FString UserId; // 0x00(0x10)
	bool forceBoardsRefresh; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct BackendModels.YGetActiveContractsResult
// Size: 0x30 (Inherited: 0x00)
struct FYGetActiveContractsResult {
	struct FString UserId; // 0x00(0x10)
	struct FString Error; // 0x10(0x10)
	struct TArray<struct FYActiveContractPlayerData> activeContracts; // 0x20(0x10)
};

// ScriptStruct BackendModels.YGetActiveContractsRequest
// Size: 0x10 (Inherited: 0x00)
struct FYGetActiveContractsRequest {
	struct FString UserId; // 0x00(0x10)
};

// ScriptStruct BackendModels.YClaimCompletedActiveContractRewardsResult
// Size: 0x90 (Inherited: 0x00)
struct FYClaimCompletedActiveContractRewardsResult {
	struct FString UserId; // 0x00(0x10)
	struct FString Error; // 0x10(0x10)
	struct FString claimedContractId; // 0x20(0x10)
	struct FString newContractId; // 0x30(0x10)
	struct TArray<struct FYCurrencyItem> changedCurrencies; // 0x40(0x10)
	struct TArray<struct FYCustomItemInfo> ItemsGranted; // 0x50(0x10)
	struct TArray<struct FYCustomItemInfo> itemsUpdatedOrRemoved; // 0x60(0x10)
	struct FYPlayerFactionProgressData playerFactionProgressData; // 0x70(0x18)
	enum class EYClaimContractRewardsStatus Status; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// ScriptStruct BackendModels.YPlayerFactionProgressData
// Size: 0x18 (Inherited: 0x00)
struct FYPlayerFactionProgressData {
	struct FString factionId; // 0x00(0x10)
	int32_t currentProgression; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BackendModels.YClaimCompletedActiveContractRewardsRequest
// Size: 0x20 (Inherited: 0x00)
struct FYClaimCompletedActiveContractRewardsRequest {
	struct FString UserId; // 0x00(0x10)
	struct FString contractId; // 0x10(0x10)
};

// ScriptStruct BackendModels.YCancelActiveContractResult
// Size: 0x30 (Inherited: 0x00)
struct FYCancelActiveContractResult {
	struct FString UserId; // 0x00(0x10)
	struct FString Error; // 0x10(0x10)
	struct FString contractId; // 0x20(0x10)
};

// ScriptStruct BackendModels.YCancelActiveContractRequest
// Size: 0x20 (Inherited: 0x00)
struct FYCancelActiveContractRequest {
	struct FString UserId; // 0x00(0x10)
	struct FString contractId; // 0x10(0x10)
};

// ScriptStruct BackendModels.YPlayerContractsInfoUpdated
// Size: 0x28 (Inherited: 0x00)
struct FYPlayerContractsInfoUpdated {
	struct FString UserId; // 0x00(0x10)
	struct TArray<struct FYFactionContractsData> factionsContracts; // 0x10(0x10)
	struct FYTimestamp lastBoardRefreshTimeUtc; // 0x20(0x08)
};

// ScriptStruct BackendModels.YActiveContractsInfoUpdated
// Size: 0x20 (Inherited: 0x00)
struct FYActiveContractsInfoUpdated {
	struct FString UserId; // 0x00(0x10)
	struct TArray<struct FYActiveContractPlayerData> activeContracts; // 0x10(0x10)
};

// ScriptStruct BackendModels.YActivateContractResult
// Size: 0x58 (Inherited: 0x00)
struct FYActivateContractResult {
	struct FString UserId; // 0x00(0x10)
	struct FString Error; // 0x10(0x10)
	struct TArray<struct FYCurrencyItem> changedCurrencies; // 0x20(0x10)
	struct FYActiveContractPlayerData activatedContract; // 0x30(0x20)
	enum class EYActivateContractRequestStatus Status; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct BackendModels.YActivateContractRequest
// Size: 0x20 (Inherited: 0x00)
struct FYActivateContractRequest {
	struct FString UserId; // 0x00(0x10)
	struct FString contractId; // 0x10(0x10)
};

// ScriptStruct BackendModels.YActiveContractAndCorrespondingFaction
// Size: 0x20 (Inherited: 0x00)
struct FYActiveContractAndCorrespondingFaction {
	struct FString contractId; // 0x00(0x10)
	struct FString factionId; // 0x10(0x10)
};

// ScriptStruct BackendModels.YDebugClearSpecificCompletedContractResult
// Size: 0x20 (Inherited: 0x00)
struct FYDebugClearSpecificCompletedContractResult {
	struct FString UserId; // 0x00(0x10)
	struct FString Error; // 0x10(0x10)
};

// ScriptStruct BackendModels.YDebugClearSpecificCompletedContractRequest
// Size: 0x20 (Inherited: 0x00)
struct FYDebugClearSpecificCompletedContractRequest {
	struct FString UserId; // 0x00(0x10)
	struct FString contractId; // 0x10(0x10)
};

// ScriptStruct BackendModels.YDebugClearAllCompletedContractsResult
// Size: 0x20 (Inherited: 0x00)
struct FYDebugClearAllCompletedContractsResult {
	struct FString UserId; // 0x00(0x10)
	struct FString Error; // 0x10(0x10)
};

// ScriptStruct BackendModels.YDebugClearAllCompletedContractsRequest
// Size: 0x10 (Inherited: 0x00)
struct FYDebugClearAllCompletedContractsRequest {
	struct FString UserId; // 0x00(0x10)
};

// ScriptStruct BackendModels.YDebugRemoveAllActiveContractsResult
// Size: 0x30 (Inherited: 0x00)
struct FYDebugRemoveAllActiveContractsResult {
	struct FString UserId; // 0x00(0x10)
	struct FString Error; // 0x10(0x10)
	struct TArray<struct FString> cancelledContractsIds; // 0x20(0x10)
};

// ScriptStruct BackendModels.YDebugRemoveAllActiveContractsRequest
// Size: 0x10 (Inherited: 0x00)
struct FYDebugRemoveAllActiveContractsRequest {
	struct FString UserId; // 0x00(0x10)
};

// ScriptStruct BackendModels.YDebugGivePlayerContractRewardsResult
// Size: 0x68 (Inherited: 0x00)
struct FYDebugGivePlayerContractRewardsResult {
	struct FString UserId; // 0x00(0x10)
	struct FString Error; // 0x10(0x10)
	struct FString contractId; // 0x20(0x10)
	struct TArray<struct FYCurrencyItem> changedCurrencies; // 0x30(0x10)
	struct TArray<struct FYCustomItemInfo> itemsGrantedOrUpdated; // 0x40(0x10)
	struct FYPlayerFactionProgressData playerFactionProgressData; // 0x50(0x18)
};

// ScriptStruct BackendModels.YDebugGivePlayerContractRewardsRequest
// Size: 0x20 (Inherited: 0x00)
struct FYDebugGivePlayerContractRewardsRequest {
	struct FString UserId; // 0x00(0x10)
	struct FString contractId; // 0x10(0x10)
};

// ScriptStruct BackendModels.YDebugSetActiveContractProgressResult
// Size: 0x48 (Inherited: 0x00)
struct FYDebugSetActiveContractProgressResult {
	struct FString UserId; // 0x00(0x10)
	struct FString Error; // 0x10(0x10)
	struct FString contractId; // 0x20(0x10)
	int32_t newProgress; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct FYCustomItemInfo> updatedItems; // 0x38(0x10)
};

// ScriptStruct BackendModels.YDebugSetActiveContractProgressRequest
// Size: 0x28 (Inherited: 0x00)
struct FYDebugSetActiveContractProgressRequest {
	struct FString UserId; // 0x00(0x10)
	struct FString contractId; // 0x10(0x10)
	int32_t objectiveIndex; // 0x20(0x04)
	int32_t newProgress; // 0x24(0x04)
};

// ScriptStruct BackendModels.YDebugActivateContractResult
// Size: 0x58 (Inherited: 0x00)
struct FYDebugActivateContractResult {
	struct FString UserId; // 0x00(0x10)
	struct FString Error; // 0x10(0x10)
	struct TArray<struct FYCurrencyItem> changedCurrencies; // 0x20(0x10)
	struct FYActiveContractPlayerData activatedContract; // 0x30(0x20)
	enum class EYActivateContractRequestStatus Status; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct BackendModels.YDebugActivateContractRequest
// Size: 0x20 (Inherited: 0x00)
struct FYDebugActivateContractRequest {
	struct FString UserId; // 0x00(0x10)
	struct FString contractId; // 0x10(0x10)
};

// ScriptStruct BackendModels.YGetCraftingInProgressDataResult
// Size: 0x40 (Inherited: 0x00)
struct FYGetCraftingInProgressDataResult {
	struct FString UserId; // 0x00(0x10)
	struct FString Error; // 0x10(0x10)
	struct FYItemCurrentlyBeingCrafted itemCurrentlyBeingCrafted; // 0x20(0x20)
};

// ScriptStruct BackendModels.YItemCurrentlyBeingCrafted
// Size: 0x20 (Inherited: 0x00)
struct FYItemCurrentlyBeingCrafted {
	struct FString ItemId; // 0x00(0x10)
	int32_t itemRarity; // 0x10(0x04)
	int32_t purchaseAmount; // 0x14(0x04)
	struct FYTimestamp utcTimestampWhenCraftingStarted; // 0x18(0x08)
};

// ScriptStruct BackendModels.YGetCraftingInProgressDataRequest
// Size: 0x10 (Inherited: 0x00)
struct FYGetCraftingInProgressDataRequest {
	struct FString UserId; // 0x00(0x10)
};

// ScriptStruct BackendModels.YRepairItemResult
// Size: 0x40 (Inherited: 0x00)
struct FYRepairItemResult {
	struct FString UserId; // 0x00(0x10)
	struct FString Error; // 0x10(0x10)
	struct TArray<struct FYCurrencyItem> changedCurrencies; // 0x20(0x10)
	struct TArray<struct FYCustomItemInfo> changedItems; // 0x30(0x10)
};

// ScriptStruct BackendModels.YRepairItemRequest
// Size: 0x20 (Inherited: 0x00)
struct FYRepairItemRequest {
	struct FString instanceId; // 0x00(0x10)
	struct FString UserId; // 0x10(0x10)
};

// ScriptStruct BackendModels.YScrapItemResult
// Size: 0x68 (Inherited: 0x00)
struct FYScrapItemResult {
	struct FString Error; // 0x00(0x10)
	struct FString UserId; // 0x10(0x10)
	struct TArray<struct FString> scrappedItemIds; // 0x20(0x10)
	struct TArray<struct FYCustomItemInfo> changedItems; // 0x30(0x10)
	struct TArray<struct FYCurrencyItem> changedCurrencies; // 0x40(0x10)
	struct FYPlayerFactionProgressData playerFactionProgressionData; // 0x50(0x18)
};

// ScriptStruct BackendModels.YScrapItem
// Size: 0x60 (Inherited: 0x00)
struct FYScrapItem {
	struct TArray<struct FString> ids; // 0x00(0x10)
	struct FString UserId; // 0x10(0x10)
	struct FString factionId; // 0x20(0x10)
	struct FYSellInventoryUpdate inventoryUpdateData; // 0x30(0x30)
};

// ScriptStruct BackendModels.YSellInventoryUpdate
// Size: 0x30 (Inherited: 0x00)
struct FYSellInventoryUpdate {
	struct TArray<struct FString> itemsToRemove; // 0x00(0x10)
	struct TArray<struct FYCustomItemInfo> itemsToAdd; // 0x10(0x10)
	struct TArray<struct FYCustomItemInfo> itemsToUpdateAmount; // 0x20(0x10)
};

// ScriptStruct BackendModels.YSkipItemCraftingResult
// Size: 0x58 (Inherited: 0x00)
struct FYSkipItemCraftingResult {
	struct FYStopItemCraftingResult stopItemCraftingResult; // 0x00(0x48)
	struct TArray<struct FYCurrencyItem> changedCurrencies; // 0x48(0x10)
};

// ScriptStruct BackendModels.YStopItemCraftingResult
// Size: 0x48 (Inherited: 0x00)
struct FYStopItemCraftingResult {
	struct FString UserId; // 0x00(0x10)
	struct FString Error; // 0x10(0x10)
	struct TArray<struct FYCustomItemInfo> itemsGrantedOrUpdated; // 0x20(0x10)
	struct FString blueprintName; // 0x30(0x10)
	int32_t itemRarity; // 0x40(0x04)
	int32_t purchaseAmount; // 0x44(0x04)
};

// ScriptStruct BackendModels.YSkipItemCraftingRequest
// Size: 0x28 (Inherited: 0x00)
struct FYSkipItemCraftingRequest {
	struct FString UserId; // 0x00(0x10)
	struct FString blueprintName; // 0x10(0x10)
	int32_t blueprintRarity; // 0x20(0x04)
	int32_t purchaseAmount; // 0x24(0x04)
};

// ScriptStruct BackendModels.YStopItemCraftingRequest
// Size: 0x28 (Inherited: 0x00)
struct FYStopItemCraftingRequest {
	struct FString UserId; // 0x00(0x10)
	struct FString blueprintName; // 0x10(0x10)
	int32_t blueprintRarity; // 0x20(0x04)
	int32_t purchaseAmount; // 0x24(0x04)
};

// ScriptStruct BackendModels.YStartItemCraftingResult
// Size: 0x50 (Inherited: 0x00)
struct FYStartItemCraftingResult {
	struct FString UserId; // 0x00(0x10)
	struct FString Error; // 0x10(0x10)
	struct TArray<struct FYCurrencyItem> changedCurrencies; // 0x20(0x10)
	struct TArray<struct FYCustomItemInfo> changedItems; // 0x30(0x10)
	struct TArray<struct FString> deletedItemsIds; // 0x40(0x10)
};

// ScriptStruct BackendModels.YStartItemCraftingRequest
// Size: 0x38 (Inherited: 0x00)
struct FYStartItemCraftingRequest {
	struct FString UserId; // 0x00(0x10)
	struct FString blueprintName; // 0x10(0x10)
	int32_t blueprintRarity; // 0x20(0x04)
	int32_t purchaseAmount; // 0x24(0x04)
	struct FString baseItemId; // 0x28(0x10)
};

// ScriptStruct BackendModels.YPurchaseWeaponShopItemResult
// Size: 0x68 (Inherited: 0x00)
struct FYPurchaseWeaponShopItemResult {
	struct FString UserId; // 0x00(0x10)
	struct FString Error; // 0x10(0x10)
	struct TArray<struct FYCurrencyItem> changedCurrencies; // 0x20(0x10)
	struct TArray<struct FYCustomItemInfo> itemsGrantedOrUpdated; // 0x30(0x10)
	int32_t itemRarity; // 0x40(0x04)
	int32_t purchaseAmount; // 0x44(0x04)
	struct FString blueprintName; // 0x48(0x10)
	struct FString shopItemBelongsTo; // 0x58(0x10)
};

// ScriptStruct BackendModels.YPurchaseWeaponShopItemRequest
// Size: 0x48 (Inherited: 0x00)
struct FYPurchaseWeaponShopItemRequest {
	struct FString UserId; // 0x00(0x10)
	struct FString blueprintName; // 0x10(0x10)
	int32_t blueprintRarity; // 0x20(0x04)
	int32_t purchaseAmount; // 0x24(0x04)
	struct FString baseItemId; // 0x28(0x10)
	struct FString shopItemBelongsTo; // 0x38(0x10)
};

// ScriptStruct BackendModels.YDebugRevokeEntitlement
// Size: 0x10 (Inherited: 0x00)
struct FYDebugRevokeEntitlement {
	struct FString entitlementName; // 0x00(0x10)
};

// ScriptStruct BackendModels.YDebugClearEntitlements
// Size: 0x10 (Inherited: 0x00)
struct FYDebugClearEntitlements {
	struct FString epicAccountId; // 0x00(0x10)
};

// ScriptStruct BackendModels.YEntitlements
// Size: 0x10 (Inherited: 0x00)
struct FYEntitlements {
	struct TArray<struct FName> entitlements; // 0x00(0x10)
};

// ScriptStruct BackendModels.YFetchEntitlements
// Size: 0x20 (Inherited: 0x00)
struct FYFetchEntitlements {
	struct FString epicAccountId; // 0x00(0x10)
	struct FString epicAccessToken; // 0x10(0x10)
};

// ScriptStruct BackendModels.YGetUsersDataResponse
// Size: 0x18 (Inherited: 0x00)
struct FYGetUsersDataResponse {
	struct TArray<struct FYUserData> usersData; // 0x00(0x10)
	enum class EYResponse Result; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct BackendModels.YUserData
// Size: 0x30 (Inherited: 0x00)
struct FYUserData {
	struct FString epicId; // 0x00(0x10)
	struct FString UserId; // 0x10(0x10)
	struct FString Username; // 0x20(0x10)
};

// ScriptStruct BackendModels.YGetUsersDataByNamesRequest
// Size: 0x10 (Inherited: 0x00)
struct FYGetUsersDataByNamesRequest {
	struct TArray<struct FString> userNames; // 0x00(0x10)
};

// ScriptStruct BackendModels.YGetUsersDataByUserIdsRequest
// Size: 0x10 (Inherited: 0x00)
struct FYGetUsersDataByUserIdsRequest {
	struct TArray<struct FString> userIds; // 0x00(0x10)
};

// ScriptStruct BackendModels.YGetUsersDataByEpicIdsRequest
// Size: 0x10 (Inherited: 0x00)
struct FYGetUsersDataByEpicIdsRequest {
	struct TArray<struct FString> epicIds; // 0x00(0x10)
};

// ScriptStruct BackendModels.YGetFactionsProgressionResult
// Size: 0x10 (Inherited: 0x00)
struct FYGetFactionsProgressionResult {
	struct TArray<struct FYPlayerFactionProgressData> factions; // 0x00(0x10)
};

// ScriptStruct BackendModels.YGetFactionsProgressionRequest
// Size: 0x20 (Inherited: 0x00)
struct FYGetFactionsProgressionRequest {
	struct FString UserId; // 0x00(0x10)
	struct FString Error; // 0x10(0x10)
};

// ScriptStruct BackendModels.YPassiveGeneratorCrateResultsReceived
// Size: 0x38 (Inherited: 0x00)
struct FYPassiveGeneratorCrateResultsReceived {
	struct FYPassiveGenerator Source; // 0x00(0x18)
	struct TArray<struct FYCurrencyItem> currencies; // 0x18(0x10)
	struct TArray<struct FYCustomItemInfo> customItems; // 0x28(0x10)
};

// ScriptStruct BackendModels.YPassiveGenerator
// Size: 0x18 (Inherited: 0x00)
struct FYPassiveGenerator {
	struct FString generatorId; // 0x00(0x10)
	struct FYTimestamp lastClaimTime; // 0x10(0x08)
};

// ScriptStruct BackendModels.YPassiveGeneratorsUpdated
// Size: 0x20 (Inherited: 0x00)
struct FYPassiveGeneratorsUpdated {
	struct FString UserId; // 0x00(0x10)
	struct TArray<struct FYPassiveGenerator> updatedGenerators; // 0x10(0x10)
};

// ScriptStruct BackendModels.YClaimGeneratorIncomeResult
// Size: 0x98 (Inherited: 0x00)
struct FYClaimGeneratorIncomeResult {
	struct FString UserId; // 0x00(0x10)
	struct FString Error; // 0x10(0x10)
	struct FString generatorId; // 0x20(0x10)
	int32_t claimedAmount; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct FYCurrencyItem> grantedCurrencies; // 0x38(0x10)
	struct TArray<struct FYCurrencyItem> changedCurrenciesBalances; // 0x48(0x10)
	struct TArray<struct FYCustomItemInfo> changedItems; // 0x58(0x10)
	struct TArray<struct FYCustomItemInfo> changedMaterialsBalances; // 0x68(0x10)
	struct TArray<struct FYCustomItemInfo> GrantedItems; // 0x78(0x10)
	struct FYTimestamp lastClaimTime; // 0x88(0x08)
	enum class EYClaimGeneratorIncomeStatus Status; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
};

// ScriptStruct BackendModels.YClaimGeneratorIncomeRequest
// Size: 0x18 (Inherited: 0x00)
struct FYClaimGeneratorIncomeRequest {
	struct FString UserId; // 0x00(0x10)
	struct FName generatorId; // 0x10(0x08)
};

// ScriptStruct BackendModels.YGlobalVanityUpdateResultData
// Size: 0x98 (Inherited: 0x00)
struct FYGlobalVanityUpdateResultData {
	enum class EYUpdateGlobalVanityResult returnResult; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FYGlobalVanityData globalVanity; // 0x08(0x90)
};

// ScriptStruct BackendModels.YGlobalVanityData
// Size: 0x90 (Inherited: 0x00)
struct FYGlobalVanityData {
	struct FString UserId; // 0x00(0x10)
	struct TArray<struct FYVanityMaterialItem> bannerItems; // 0x10(0x10)
	struct FYVanityMaterialItem deathEmote_item; // 0x20(0x18)
	struct TArray<struct FYVanityMaterialItem> normalEmoteItems; // 0x38(0x10)
	struct FYVanityMaterialItem droppod_item; // 0x48(0x18)
	struct TArray<struct FYVanityMaterialItem> sprayItems; // 0x60(0x10)
	struct FYVanityMaterialItem pet_item; // 0x70(0x18)
	int32_t slot_index; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct BackendModels.YDebugUpdateGlobalVanityData
// Size: 0x28 (Inherited: 0x00)
struct FYDebugUpdateGlobalVanityData {
	struct FString UserId; // 0x00(0x10)
	struct FString ID; // 0x10(0x10)
	int32_t variation; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct BackendModels.YUpdateGlobalVanity
// Size: 0x28 (Inherited: 0x00)
struct FYUpdateGlobalVanity {
	struct FString UserId; // 0x00(0x10)
	struct FString ID; // 0x10(0x10)
	int32_t variation; // 0x20(0x04)
	int32_t Slot; // 0x24(0x04)
};

// ScriptStruct BackendModels.YGetPlayerGlobalVanity
// Size: 0x10 (Inherited: 0x00)
struct FYGetPlayerGlobalVanity {
	struct FString UserId; // 0x00(0x10)
};

// ScriptStruct BackendModels.YGetGlobalVanity
// Size: 0x10 (Inherited: 0x00)
struct FYGetGlobalVanity {
	struct FString UserId; // 0x00(0x10)
};

// ScriptStruct BackendModels.YClaimGrantsResponse
// Size: 0x10 (Inherited: 0x00)
struct FYClaimGrantsResponse {
	struct TArray<struct FYClaimGrantsResponseInfo> claimGrantsResponseInfos; // 0x00(0x10)
};

// ScriptStruct BackendModels.YClaimGrantsResponseInfo
// Size: 0x30 (Inherited: 0x00)
struct FYClaimGrantsResponseInfo {
	enum class EYClaimGrantResult claimGrantResult; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FYGrant grant; // 0x08(0x28)
};

// ScriptStruct BackendModels.YGrant
// Size: 0x28 (Inherited: 0x00)
struct FYGrant {
	struct FString ID; // 0x00(0x10)
	struct FString grantRowId; // 0x10(0x10)
	enum class EYClaimGrantState claimState; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct BackendModels.YClaimGrants
// Size: 0x10 (Inherited: 0x00)
struct FYClaimGrants {
	struct TArray<struct FString> grantIds; // 0x00(0x10)
};

// ScriptStruct BackendModels.YGrantsData
// Size: 0x10 (Inherited: 0x00)
struct FYGrantsData {
	struct TArray<struct FYGrant> grants; // 0x00(0x10)
};

// ScriptStruct BackendModels.YGetGrantsData
// Size: 0x01 (Inherited: 0x00)
struct FYGetGrantsData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BackendModels.YGrantGrantsResult
// Size: 0x38 (Inherited: 0x00)
struct FYGrantGrantsResult {
	struct FString UserId; // 0x00(0x10)
	struct TArray<struct FYCustomItemInfo> changedItems; // 0x10(0x10)
	struct TArray<struct FYCurrencyItem> changedCurrencies; // 0x20(0x10)
	bool successfullyGranted; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct BackendModels.YGrantGrantsRequest
// Size: 0x20 (Inherited: 0x00)
struct FYGrantGrantsRequest {
	struct FString UserId; // 0x00(0x10)
	struct TArray<struct FYGrantEntry> grantsToGive; // 0x10(0x10)
};

// ScriptStruct BackendModels.YGrantEntry
// Size: 0x20 (Inherited: 0x00)
struct FYGrantEntry {
	enum class EYGrantType m_grantType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FDataTableRowHandle m_grantTypeRowHandle; // 0x08(0x10)
	int32_t m_amount; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct BackendModels.YGrantRow
// Size: 0x20 (Inherited: 0x08)
struct FYGrantRow : FTableRowBase {
	struct TArray<struct FYGrantEntry> m_grants; // 0x08(0x10)
	bool m_autoClaim; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct BackendModels.YUpdateReadStateResponse
// Size: 0x20 (Inherited: 0x00)
struct FYUpdateReadStateResponse {
	enum class EYUpdateReadStateResult returnResult; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString messageId; // 0x08(0x10)
	bool hasRead; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct BackendModels.YUpdateReadState
// Size: 0x18 (Inherited: 0x00)
struct FYUpdateReadState {
	struct FString messageId; // 0x00(0x10)
	bool hasRead; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct BackendModels.YInboxMessageRemoved
// Size: 0x10 (Inherited: 0x00)
struct FYInboxMessageRemoved {
	struct FString ID; // 0x00(0x10)
};

// ScriptStruct BackendModels.YInboxMessagesDataUpdated
// Size: 0x10 (Inherited: 0x00)
struct FYInboxMessagesDataUpdated {
	struct TArray<struct FYInboxMessage> inboxMessages; // 0x00(0x10)
};

// ScriptStruct BackendModels.YInboxMessage
// Size: 0x40 (Inherited: 0x00)
struct FYInboxMessage {
	struct FString ID; // 0x00(0x10)
	struct FString inboxMessageRowId; // 0x10(0x10)
	struct TArray<struct FYAttachment> attachments; // 0x20(0x10)
	struct FYTimestamp receivedDate; // 0x30(0x08)
	bool hasRead; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct BackendModels.YGetInboxMessagesData
// Size: 0x01 (Inherited: 0x00)
struct FYGetInboxMessagesData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BackendModels.YEntitlementRow
// Size: 0x38 (Inherited: 0x08)
struct FYEntitlementRow : FTableRowBase {
	struct FString m_entitlementName; // 0x08(0x10)
	struct FDataTableRowHandle m_messageId; // 0x18(0x10)
	struct TArray<struct FDataTableRowHandle> m_grants; // 0x28(0x10)
};

// ScriptStruct BackendModels.YInboxMessageRow
// Size: 0x80 (Inherited: 0x08)
struct FYInboxMessageRow : FTableRowBase {
	enum class EYInboxMessageType m_messageType; // 0x08(0x01)
	bool m_autoOpen; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct TSoftObjectPtr<struct UTexture2D> m_bannerImage; // 0x10(0x28)
	struct FText m_sender; // 0x38(0x18)
	struct FText m_subject; // 0x50(0x18)
	struct FText m_message; // 0x68(0x18)
};

// ScriptStruct BackendModels.YDebugRemoveAllItemsFromPlayerResponse
// Size: 0x30 (Inherited: 0x00)
struct FYDebugRemoveAllItemsFromPlayerResponse {
	struct FString UserId; // 0x00(0x10)
	struct FString Error; // 0x10(0x10)
	struct TArray<struct FYCustomItemInfo> returnedItems; // 0x20(0x10)
};

// ScriptStruct BackendModels.YDebugRemoveAllItemsFromPlayerRequest
// Size: 0x10 (Inherited: 0x00)
struct FYDebugRemoveAllItemsFromPlayerRequest {
	struct FString UserId; // 0x00(0x10)
};

// ScriptStruct BackendModels.YDebugRemoveAllMaterialsFromPlayerResponse
// Size: 0x30 (Inherited: 0x00)
struct FYDebugRemoveAllMaterialsFromPlayerResponse {
	struct FString UserId; // 0x00(0x10)
	struct FString Error; // 0x10(0x10)
	struct TArray<struct FYCustomItemInfo> returnedMaterials; // 0x20(0x10)
};

// ScriptStruct BackendModels.YDebugRemoveAllMaterialsFromPlayerRequest
// Size: 0x10 (Inherited: 0x00)
struct FYDebugRemoveAllMaterialsFromPlayerRequest {
	struct FString UserId; // 0x00(0x10)
};

// ScriptStruct BackendModels.YDebugSetAllCraftingMaterialsAmountResponse
// Size: 0x30 (Inherited: 0x00)
struct FYDebugSetAllCraftingMaterialsAmountResponse {
	struct FString UserId; // 0x00(0x10)
	struct FString Error; // 0x10(0x10)
	struct TArray<struct FYCustomItemInfo> changedMaterials; // 0x20(0x10)
};

// ScriptStruct BackendModels.YDebugSetAllCraftingMaterialsAmount
// Size: 0x18 (Inherited: 0x00)
struct FYDebugSetAllCraftingMaterialsAmount {
	struct FString UserId; // 0x00(0x10)
	int32_t materialAmount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BackendModels.YDebugSetCraftingMaterialAmountResponse
// Size: 0x90 (Inherited: 0x00)
struct FYDebugSetCraftingMaterialAmountResponse {
	struct FString UserId; // 0x00(0x10)
	struct FString Error; // 0x10(0x10)
	struct FYCustomItemInfo changedMaterial; // 0x20(0x70)
};

// ScriptStruct BackendModels.YDebugSetCraftingMaterialAmount
// Size: 0x28 (Inherited: 0x00)
struct FYDebugSetCraftingMaterialAmount {
	struct FString UserId; // 0x00(0x10)
	struct FString materialName; // 0x10(0x10)
	int32_t materialAmount; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct BackendModels.YModifyCustomItemResult
// Size: 0x38 (Inherited: 0x00)
struct FYModifyCustomItemResult {
	struct FString UserId; // 0x00(0x10)
	bool SUCCESS; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct FYCustomItemInfo> itemsUpdated; // 0x18(0x10)
	struct TArray<struct FString> itemsRemoved; // 0x28(0x10)
};

// ScriptStruct BackendModels.YModifyCustomItem
// Size: 0x90 (Inherited: 0x00)
struct FYModifyCustomItem {
	struct FString UserId; // 0x00(0x10)
	struct FYCustomItemInfo itemToUpdate; // 0x10(0x70)
	struct FString modIdUsed; // 0x80(0x10)
};

// ScriptStruct BackendModels.YRequestPlayerQuarterUpgradePurchaseResult
// Size: 0x60 (Inherited: 0x00)
struct FYRequestPlayerQuarterUpgradePurchaseResult {
	struct FString Error; // 0x00(0x10)
	struct FString UserId; // 0x10(0x10)
	int32_t newLevel; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FYTimestamp upgradeStartedTime; // 0x28(0x08)
	struct TArray<struct FYCustomItemInfo> changedItems; // 0x30(0x10)
	struct TArray<struct FString> deletedItems; // 0x40(0x10)
	struct TArray<struct FYCurrencyItem> changedCurrencies; // 0x50(0x10)
};

// ScriptStruct BackendModels.YRequestPlayerQuarterUpgradePurchase
// Size: 0x10 (Inherited: 0x00)
struct FYRequestPlayerQuarterUpgradePurchase {
	struct FString UserId; // 0x00(0x10)
};

// ScriptStruct BackendModels.YRequestTechTreeNodeUpgradePurchaseResult
// Size: 0x70 (Inherited: 0x00)
struct FYRequestTechTreeNodeUpgradePurchaseResult {
	struct FString Error; // 0x00(0x10)
	struct FString UserId; // 0x10(0x10)
	struct FYTechTreeNodeStatus upgradedNode; // 0x20(0x20)
	struct TArray<struct FYCustomItemInfo> changedItems; // 0x40(0x10)
	struct TArray<struct FString> deletedItems; // 0x50(0x10)
	struct TArray<struct FYCurrencyItem> changedCurrencies; // 0x60(0x10)
};

// ScriptStruct BackendModels.YCancelTechTreeNodeUpgradeRequest
// Size: 0x18 (Inherited: 0x00)
struct FYCancelTechTreeNodeUpgradeRequest {
	struct FString UserId; // 0x00(0x10)
	struct FName nodeId; // 0x10(0x08)
};

// ScriptStruct BackendModels.YSkipTechTreeNodeUpgradeRequest
// Size: 0x18 (Inherited: 0x00)
struct FYSkipTechTreeNodeUpgradeRequest {
	struct FString UserId; // 0x00(0x10)
	struct FName nodeId; // 0x10(0x08)
};

// ScriptStruct BackendModels.YRequestTechTreeNodeUpgradePurchaseRequest
// Size: 0x18 (Inherited: 0x00)
struct FYRequestTechTreeNodeUpgradePurchaseRequest {
	struct FString UserId; // 0x00(0x10)
	struct FName nodeId; // 0x10(0x08)
};

// ScriptStruct BackendModels.YRequestUserUnlockedTechTreeNodes
// Size: 0x10 (Inherited: 0x00)
struct FYRequestUserUnlockedTechTreeNodes {
	struct FString UserId; // 0x00(0x10)
};

// ScriptStruct BackendModels.YRequestItemRerollResult
// Size: 0x98 (Inherited: 0x00)
struct FYRequestItemRerollResult {
	bool SUCCESS; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString UserId; // 0x08(0x10)
	struct FYCustomItemInfo updatedItem; // 0x18(0x70)
	int32_t itemStatType; // 0x88(0x04)
	int32_t currentVal; // 0x8c(0x04)
	int32_t newVal; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

// ScriptStruct BackendModels.YRequestItemReroll
// Size: 0xa0 (Inherited: 0x00)
struct FYRequestItemReroll {
	struct FString UserId; // 0x00(0x10)
	struct FString ID; // 0x10(0x10)
	struct FYCustomItemInfo desiredState; // 0x20(0x70)
	int32_t itemStatType; // 0x90(0x04)
	int32_t currentVal; // 0x94(0x04)
	int32_t newVal; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// ScriptStruct BackendModels.YRequestUpgradeItemResult
// Size: 0x38 (Inherited: 0x00)
struct FYRequestUpgradeItemResult {
	bool SUCCESS; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString UserId; // 0x08(0x10)
	struct TArray<struct FYCustomItemInfo> resultEntries; // 0x18(0x10)
	struct TArray<struct FYInstanceUpdateAmount> instanceUpdate; // 0x28(0x10)
};

// ScriptStruct BackendModels.YRequestUpgradePickaxeResult
// Size: 0x20 (Inherited: 0x00)
struct FYRequestUpgradePickaxeResult {
	struct FString ID; // 0x00(0x10)
	bool SUCCESS; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t ErrorCode; // 0x14(0x04)
	int32_t Level; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct BackendModels.YRequestUpgradeItemsRequest
// Size: 0x20 (Inherited: 0x00)
struct FYRequestUpgradeItemsRequest {
	struct FString UserId; // 0x00(0x10)
	struct TArray<struct FYUpgradeEntry> upgradeEntries; // 0x10(0x10)
};

// ScriptStruct BackendModels.YUpgradeEntry
// Size: 0x88 (Inherited: 0x00)
struct FYUpgradeEntry {
	struct FString ID; // 0x00(0x10)
	int32_t desiredLevel; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FYCustomItemInfo desiredItemState; // 0x18(0x70)
};

// ScriptStruct BackendModels.YDebugSetPickaxeLevelRequest
// Size: 0x18 (Inherited: 0x00)
struct FYDebugSetPickaxeLevelRequest {
	struct FString UserId; // 0x00(0x10)
	int32_t Level; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BackendModels.YRequestUpgradePickaxe
// Size: 0x20 (Inherited: 0x00)
struct FYRequestUpgradePickaxe {
	struct FString UserId; // 0x00(0x10)
	struct FString pickaxeId; // 0x10(0x10)
};

// ScriptStruct BackendModels.YUpdateCustomItemsResult
// Size: 0x18 (Inherited: 0x00)
struct FYUpdateCustomItemsResult {
	bool SUCCESS; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString UserId; // 0x08(0x10)
};

// ScriptStruct BackendModels.YUpdateCustomItemsRequest
// Size: 0x20 (Inherited: 0x00)
struct FYUpdateCustomItemsRequest {
	struct FString UserId; // 0x00(0x10)
	struct TArray<struct FYCustomItemInfo> itemsToUpdate; // 0x10(0x10)
};

// ScriptStruct BackendModels.YSetUpdated
// Size: 0xc0 (Inherited: 0x00)
struct FYSetUpdated {
	struct FString UserId; // 0x00(0x10)
	struct FYPlayerSetItemsEntry newSet; // 0x10(0xb0)
};

// ScriptStruct BackendModels.YPlayerSetItemsEntry
// Size: 0xb0 (Inherited: 0x00)
struct FYPlayerSetItemsEntry {
	struct FYPlayerSet SetData; // 0x00(0xa0)
	struct TArray<struct FYCustomItemInfo> Items; // 0xa0(0x10)
};

// ScriptStruct BackendModels.YPlayerSet
// Size: 0xa0 (Inherited: 0x00)
struct FYPlayerSet {
	struct FString ID; // 0x00(0x10)
	struct FString UserId; // 0x10(0x10)
	struct FString kit; // 0x20(0x10)
	struct FString shield; // 0x30(0x10)
	struct FString helmet; // 0x40(0x10)
	struct FString weaponOne; // 0x50(0x10)
	struct FString weaponTwo; // 0x60(0x10)
	struct FString bag; // 0x70(0x10)
	struct FString bagItemsAsJsonStr; // 0x80(0x10)
	struct FString safeItemsAsJsonStr; // 0x90(0x10)
};

// ScriptStruct BackendModels.YCompleteInventoryUpdateResult
// Size: 0xe8 (Inherited: 0x00)
struct FYCompleteInventoryUpdateResult {
	struct FString UserId; // 0x00(0x10)
	enum class EYCompleteInventoryUpdateReason Reason; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct FString> itemsRemoved; // 0x18(0x10)
	struct TArray<struct FYCustomItemInfo> itemsAdded; // 0x28(0x10)
	struct TArray<struct FString> itemsUpdated; // 0x38(0x10)
	struct FYPlayerSet newSet; // 0x48(0xa0)
};

// ScriptStruct BackendModels.YCompleteInventoryUpdateRequest
// Size: 0xe8 (Inherited: 0x00)
struct FYCompleteInventoryUpdateRequest {
	struct FString UserId; // 0x00(0x10)
	enum class EYCompleteInventoryUpdateReason Reason; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct FString> itemsToRemove; // 0x18(0x10)
	struct TArray<struct FYCustomItemInfo> itemsToAdd; // 0x28(0x10)
	struct FYPlayerSet newSet; // 0x38(0xa0)
	struct TArray<struct FYCustomItemInfo> itemsToUpdateAmount; // 0xd8(0x10)
};

// ScriptStruct BackendModels.YRemoveInventoryItemRequest
// Size: 0x20 (Inherited: 0x00)
struct FYRemoveInventoryItemRequest {
	struct FString UserId; // 0x00(0x10)
	struct TArray<struct FString> itemIdsToRemove; // 0x10(0x10)
};

// ScriptStruct BackendModels.YUpdatePlayerSetResult
// Size: 0x20 (Inherited: 0x00)
struct FYUpdatePlayerSetResult {
	struct FString Error; // 0x00(0x10)
	struct FString UserId; // 0x10(0x10)
};

// ScriptStruct BackendModels.YUpdatePlayerSet
// Size: 0xb0 (Inherited: 0x00)
struct FYUpdatePlayerSet {
	struct FString UserId; // 0x00(0x10)
	struct FYPlayerSet newSet; // 0x10(0xa0)
};

// ScriptStruct BackendModels.YGetPlayerSetsResult
// Size: 0x18 (Inherited: 0x00)
struct FYGetPlayerSetsResult {
	bool SUCCESS; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FYPlayerSetItemsEntry> entries; // 0x08(0x10)
};

// ScriptStruct BackendModels.YGetPlayersSets
// Size: 0x10 (Inherited: 0x00)
struct FYGetPlayersSets {
	struct TArray<struct FString> userIds; // 0x00(0x10)
};

// ScriptStruct BackendModels.YGetUsersCurrenciesResult
// Size: 0x18 (Inherited: 0x00)
struct FYGetUsersCurrenciesResult {
	enum class EYGetUsersCurrenciesResult Result; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FYUserCurrenciesItems> currencyItems; // 0x08(0x10)
};

// ScriptStruct BackendModels.YGetUsersCurrencies
// Size: 0x10 (Inherited: 0x00)
struct FYGetUsersCurrencies {
	struct TArray<struct FString> userIds; // 0x00(0x10)
};

// ScriptStruct BackendModels.YGetUserCharacterVisualizationData
// Size: 0x10 (Inherited: 0x00)
struct FYGetUserCharacterVisualizationData {
	struct TArray<struct FString> UserId; // 0x00(0x10)
};

// ScriptStruct BackendModels.YInventoryUpdated
// Size: 0x60 (Inherited: 0x00)
struct FYInventoryUpdated {
	struct FYInventory Inventory; // 0x00(0x60)
};

// ScriptStruct BackendModels.YInventory
// Size: 0x60 (Inherited: 0x00)
struct FYInventory {
	struct FString UserId; // 0x00(0x10)
	struct FYUserCurrenciesItems Currency; // 0x10(0x20)
	struct TArray<struct FYCustomItemInfo> Items; // 0x30(0x10)
	struct TArray<struct FYVanityBackendItemInfo> vanity; // 0x40(0x10)
	struct TArray<struct FYLoreBackendItemInfo> loreItems; // 0x50(0x10)
};

// ScriptStruct BackendModels.YLoreBackendItemInfo
// Size: 0x18 (Inherited: 0x00)
struct FYLoreBackendItemInfo {
	struct FString loreItemId; // 0x00(0x10)
	int32_t Amount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BackendModels.YVanityBackendItemInfo
// Size: 0x18 (Inherited: 0x00)
struct FYVanityBackendItemInfo {
	struct FString vanity_id; // 0x00(0x10)
	int32_t Amount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BackendModels.YVanityClearCustomItem
// Size: 0x28 (Inherited: 0x00)
struct FYVanityClearCustomItem {
	struct FString UserId; // 0x00(0x10)
	struct FString custom_id; // 0x10(0x10)
	int32_t slotId; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct BackendModels.YVanityUpdateAmountResultData
// Size: 0x18 (Inherited: 0x00)
struct FYVanityUpdateAmountResultData {
	enum class EYVanityUpdateResult returnResult; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FYVanityAmountUpdatedData vanityAmountUpdated; // 0x08(0x10)
};

// ScriptStruct BackendModels.YVanityAmountUpdatedData
// Size: 0x10 (Inherited: 0x00)
struct FYVanityAmountUpdatedData {
	struct TArray<struct FYVanityBackendItemInfo> updatedVanityItems; // 0x00(0x10)
};

// ScriptStruct BackendModels.YDebugVanityUpdateAmount
// Size: 0x28 (Inherited: 0x00)
struct FYDebugVanityUpdateAmount {
	struct FString UserId; // 0x00(0x10)
	struct FString vanity_id; // 0x10(0x10)
	int32_t Amount; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct BackendModels.YVanitySetCustomItemResultData
// Size: 0x38 (Inherited: 0x00)
struct FYVanitySetCustomItemResultData {
	enum class EYVanityUpdateResult return_result; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString UserId; // 0x08(0x10)
	struct TArray<struct FYCustomItemInfo> updated_items; // 0x18(0x10)
	struct TArray<struct FYVanityBackendItemInfo> updated_vanity_items; // 0x28(0x10)
};

// ScriptStruct BackendModels.YVanitySetCustomItemData
// Size: 0x38 (Inherited: 0x00)
struct FYVanitySetCustomItemData {
	struct FString UserId; // 0x00(0x10)
	struct FString custom_id; // 0x10(0x10)
	struct FString vanity_id; // 0x20(0x10)
	int32_t slotId; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct BackendModels.YCharacterVanityUpdateArchetype
// Size: 0x20 (Inherited: 0x00)
struct FYCharacterVanityUpdateArchetype {
	struct FString UserId; // 0x00(0x10)
	struct FString archetype_id; // 0x10(0x10)
};

// ScriptStruct BackendModels.YCharacterCustomizationSetCharacterSlot
// Size: 0x18 (Inherited: 0x00)
struct FYCharacterCustomizationSetCharacterSlot {
	struct FString UserId; // 0x00(0x10)
	int32_t requested_slot; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BackendModels.YCharacterVanityResetAppearance
// Size: 0x10 (Inherited: 0x00)
struct FYCharacterVanityResetAppearance {
	struct FString UserId; // 0x00(0x10)
};

// ScriptStruct BackendModels.YCharacterVanityUpdateBodyPart
// Size: 0x38 (Inherited: 0x00)
struct FYCharacterVanityUpdateBodyPart {
	struct FString UserId; // 0x00(0x10)
	struct FString ID; // 0x10(0x10)
	int32_t material_index; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString archetypeId; // 0x28(0x10)
};

// ScriptStruct BackendModels.YLoreItemsAdded
// Size: 0x10 (Inherited: 0x00)
struct FYLoreItemsAdded {
	struct TArray<struct FYLoreBackendItemInfo> loreItems; // 0x00(0x10)
};

// ScriptStruct BackendModels.YPlayerQuartersLevelUpdated
// Size: 0x20 (Inherited: 0x00)
struct FYPlayerQuartersLevelUpdated {
	struct FString UserId; // 0x00(0x10)
	int32_t Level; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FYTimestamp upgradeStartedTime; // 0x18(0x08)
};

// ScriptStruct BackendModels.YItemsRemoved
// Size: 0x20 (Inherited: 0x00)
struct FYItemsRemoved {
	struct FString UserId; // 0x00(0x10)
	struct TArray<struct FString> removedItems; // 0x10(0x10)
};

// ScriptStruct BackendModels.YBagLimitUpdated
// Size: 0x18 (Inherited: 0x00)
struct FYBagLimitUpdated {
	struct FString UserId; // 0x00(0x10)
	int32_t bagLimit; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BackendModels.YStashLimitUpdated
// Size: 0x18 (Inherited: 0x00)
struct FYStashLimitUpdated {
	struct FString UserId; // 0x00(0x10)
	int32_t stashLimit; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BackendModels.YTechTreeNodesUpdated
// Size: 0x20 (Inherited: 0x00)
struct FYTechTreeNodesUpdated {
	struct FString UserId; // 0x00(0x10)
	struct TArray<struct FYTechTreeNodeStatus> updatedNodes; // 0x10(0x10)
};

// ScriptStruct BackendModels.YItemsUpdated
// Size: 0x20 (Inherited: 0x00)
struct FYItemsUpdated {
	struct TArray<struct FYCustomItemInfo> updatedItems; // 0x00(0x10)
	struct FString UserId; // 0x10(0x10)
};

// ScriptStruct BackendModels.YCurrenciesUpdated
// Size: 0x20 (Inherited: 0x00)
struct FYCurrenciesUpdated {
	struct FString UserId; // 0x00(0x10)
	struct TArray<struct FYCurrencyItem> updatedCurrencies; // 0x10(0x10)
};

// ScriptStruct BackendModels.YDebugGiveCurrenciesResult
// Size: 0x20 (Inherited: 0x00)
struct FYDebugGiveCurrenciesResult {
	struct FString UserId; // 0x00(0x10)
	struct TArray<struct FYCurrencyItem> updatedCurrencies; // 0x10(0x10)
};

// ScriptStruct BackendModels.YDebugGiveCurrenciesRequest
// Size: 0x30 (Inherited: 0x00)
struct FYDebugGiveCurrenciesRequest {
	struct FString UserId; // 0x00(0x10)
	struct FString userPlatform; // 0x10(0x10)
	struct TArray<struct FYCurrencyItem> currencies; // 0x20(0x10)
};

// ScriptStruct BackendModels.YGetPassiveGenerators
// Size: 0x10 (Inherited: 0x00)
struct FYGetPassiveGenerators {
	struct FString UserId; // 0x00(0x10)
};

// ScriptStruct BackendModels.YGetTechTreeNodes
// Size: 0x10 (Inherited: 0x00)
struct FYGetTechTreeNodes {
	struct FString UserId; // 0x00(0x10)
};

// ScriptStruct BackendModels.YGetAllPlayfabUserDataResult
// Size: 0x18 (Inherited: 0x00)
struct FYGetAllPlayfabUserDataResult {
	struct FString UserId; // 0x00(0x10)
	bool SUCCESS; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct BackendModels.YGetAllPlayfabUserData
// Size: 0x10 (Inherited: 0x00)
struct FYGetAllPlayfabUserData {
	struct FString UserId; // 0x00(0x10)
};

// ScriptStruct BackendModels.YPlayerQuartersLevelResultData
// Size: 0x20 (Inherited: 0x00)
struct FYPlayerQuartersLevelResultData {
	struct FString UserId; // 0x00(0x10)
	int32_t Level; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FYTimestamp upgradeStartedTime; // 0x18(0x08)
};

// ScriptStruct BackendModels.YGetPlayerQuartersLevel
// Size: 0x10 (Inherited: 0x00)
struct FYGetPlayerQuartersLevel {
	struct FString UserId; // 0x00(0x10)
};

// ScriptStruct BackendModels.YGetPlayerInventoriesResult
// Size: 0x18 (Inherited: 0x00)
struct FYGetPlayerInventoriesResult {
	bool SUCCESS; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FYInventory> entries; // 0x08(0x10)
};

// ScriptStruct BackendModels.YGetPlayerInventoriesLimitsResult
// Size: 0x18 (Inherited: 0x00)
struct FYGetPlayerInventoriesLimitsResult {
	bool SUCCESS; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FYPlayerInventoryLimitResultData> entries; // 0x08(0x10)
};

// ScriptStruct BackendModels.YPlayerInventoryLimitResultData
// Size: 0x20 (Inherited: 0x00)
struct FYPlayerInventoryLimitResultData {
	struct FString UserId; // 0x00(0x10)
	int32_t inventoryStashLimit; // 0x10(0x04)
	int32_t inventoryBagLimit; // 0x14(0x04)
	int32_t inventorySafeLimit; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct BackendModels.YVanityMiscData
// Size: 0x30 (Inherited: 0x00)
struct FYVanityMiscData {
	struct FString V; // 0x00(0x10)
	struct FString S; // 0x10(0x10)
	int32_t L; // 0x20(0x04)
	int32_t A; // 0x24(0x04)
	int32_t D; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct BackendModels.YInventoryInfoUserEntry
// Size: 0x08 (Inherited: 0x00)
struct FYInventoryInfoUserEntry {
	int32_t inventoryStashLimit; // 0x00(0x04)
	int32_t inventoryBagLimit; // 0x04(0x04)
};

// ScriptStruct BackendModels.YGetPlayerInventories
// Size: 0x10 (Inherited: 0x00)
struct FYGetPlayerInventories {
	struct TArray<struct FString> userIds; // 0x00(0x10)
};

// ScriptStruct BackendModels.YGetPlayersInventoriesLimitsRequest
// Size: 0x10 (Inherited: 0x00)
struct FYGetPlayersInventoriesLimitsRequest {
	struct TArray<struct FString> userIds; // 0x00(0x10)
};

// ScriptStruct BackendModels.YGetPlayerInventoryLimit
// Size: 0x10 (Inherited: 0x00)
struct FYGetPlayerInventoryLimit {
	struct FString UserId; // 0x00(0x10)
};

// ScriptStruct BackendModels.YGetInventory
// Size: 0x10 (Inherited: 0x00)
struct FYGetInventory {
	struct FString UserId; // 0x00(0x10)
};

// ScriptStruct BackendModels.YItemAmountToUpdateData
// Size: 0x01 (Inherited: 0x00)
struct FYItemAmountToUpdateData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BackendModels.YTechTreeNodesStatuses
// Size: 0x20 (Inherited: 0x00)
struct FYTechTreeNodesStatuses {
	struct FString UserId; // 0x00(0x10)
	struct TArray<struct FYTechTreeNodeStatus> nodes; // 0x10(0x10)
};

// ScriptStruct BackendModels.YMetaDefaultItemDataTableRow
// Size: 0x30 (Inherited: 0x08)
struct FYMetaDefaultItemDataTableRow : FTableRowBase {
	enum class EYDefaultItemSlot Slot; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FDataTableRowHandle default_vanity; // 0x10(0x10)
	struct FDataTableRowHandle default_secondary_vanity; // 0x20(0x10)
};

// ScriptStruct BackendModels.YItemStatOldValNewVal
// Size: 0x0c (Inherited: 0x00)
struct FYItemStatOldValNewVal {
	int32_t m_itemStatType; // 0x00(0x04)
	int32_t m_currentVal; // 0x04(0x04)
	int32_t m_newVal; // 0x08(0x04)
};

// ScriptStruct BackendModels.YMatchmakingListDebugUserInfoResult
// Size: 0x48 (Inherited: 0x00)
struct FYMatchmakingListDebugUserInfoResult {
	struct FString UserId; // 0x00(0x10)
	int32_t userNVR; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FYUserStatisticsEntry> Statistics; // 0x18(0x10)
	bool isBeginner; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct TArray<struct FYMatchmakingDebugSessionUserInfo> matchmakingSessionsUserInfo; // 0x30(0x10)
	int32_t dataTableDeathCooldownMinutes; // 0x40(0x04)
	bool dataTableBeginnerFlagEnabled; // 0x44(0x01)
	bool featureToggleSplitSoloAndSquadMatchesEnabled; // 0x45(0x01)
	char pad_46[0x2]; // 0x46(0x02)
};

// ScriptStruct BackendModels.YMatchmakingDebugSessionUserInfo
// Size: 0x48 (Inherited: 0x00)
struct FYMatchmakingDebugSessionUserInfo {
	struct FString SessionId; // 0x00(0x10)
	struct FString mapName; // 0x10(0x10)
	int32_t playersCount; // 0x20(0x04)
	bool allowsJoinDueToStorm; // 0x24(0x01)
	bool activeDeathCooldown; // 0x25(0x01)
	bool isBeginnerSession; // 0x26(0x01)
	char pad_27[0x1]; // 0x27(0x01)
	int64_t transitionTime; // 0x28(0x08)
	struct FString Region; // 0x30(0x10)
	enum class EYMatchServerSocialAdmissionType socialAdmissionType; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32_t nvr; // 0x44(0x04)
};

// ScriptStruct BackendModels.YUserStatisticsEntry
// Size: 0x18 (Inherited: 0x00)
struct FYUserStatisticsEntry {
	struct FString Name; // 0x00(0x10)
	int32_t Value; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BackendModels.YEmptyRequest
// Size: 0x01 (Inherited: 0x00)
struct FYEmptyRequest {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BackendModels.YResetSessionsAndCreateNewRequestResult
// Size: 0x01 (Inherited: 0x00)
struct FYResetSessionsAndCreateNewRequestResult {
	bool SUCCESS; // 0x00(0x01)
};

// ScriptStruct BackendModels.YResetSessionsAndCreateNewRequestRequest
// Size: 0x20 (Inherited: 0x00)
struct FYResetSessionsAndCreateNewRequestRequest {
	struct FString desiredRegion; // 0x00(0x10)
	int32_t shutdownType; // 0x10(0x04)
	int32_t newStationServers; // 0x14(0x04)
	int32_t newMatchServers; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct BackendModels.YRequestMaintenanceModeStateResult
// Size: 0x01 (Inherited: 0x00)
struct FYRequestMaintenanceModeStateResult {
	bool Enabled; // 0x00(0x01)
};

// ScriptStruct BackendModels.YRequestServerMapResult
// Size: 0x38 (Inherited: 0x00)
struct FYRequestServerMapResult {
	struct FYGameInfo GameInfo; // 0x00(0x38)
};

// ScriptStruct BackendModels.YGameInfo
// Size: 0x38 (Inherited: 0x00)
struct FYGameInfo {
	struct FString roomId; // 0x00(0x10)
	struct FString matchMap; // 0x10(0x10)
	struct FString GameMode; // 0x20(0x10)
	bool hasSquads; // 0x30(0x01)
	bool beginnerServer; // 0x31(0x01)
	bool isRanked; // 0x32(0x01)
	bool useReplicationGraph; // 0x33(0x01)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct BackendModels.YRequestServerMapRequest
// Size: 0x10 (Inherited: 0x00)
struct FYRequestServerMapRequest {
	struct FString SessionId; // 0x00(0x10)
};

// ScriptStruct BackendModels.YRefreshSessionMatchmakingNVRRequest
// Size: 0x20 (Inherited: 0x00)
struct FYRefreshSessionMatchmakingNVRRequest {
	struct FString SessionId; // 0x00(0x10)
	struct TArray<struct FString> userIds; // 0x10(0x10)
};

// ScriptStruct BackendModels.YEnterMatchAzureFunctionResult
// Size: 0x50 (Inherited: 0x00)
struct FYEnterMatchAzureFunctionResult {
	bool SUCCESS; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString address; // 0x08(0x10)
	struct FString ErrorMessage; // 0x18(0x10)
	int32_t Port; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString SessionId; // 0x30(0x10)
	int32_t shardIndex; // 0x40(0x04)
	bool singleplayerStation; // 0x44(0x01)
	bool maintenanceMode; // 0x45(0x01)
	char pad_46[0x2]; // 0x46(0x02)
	float sessionTimeJoinDelay; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct BackendModels.YEnterMatchAzureFunction
// Size: 0x48 (Inherited: 0x00)
struct FYEnterMatchAzureFunction {
	struct FString optimalRegion; // 0x00(0x10)
	bool isMatch; // 0x10(0x01)
	bool bypassMaintenanceMode; // 0x11(0x01)
	enum class EYMatchmakingDebugOption debugOption; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
	struct FString mapName; // 0x18(0x10)
	struct FString squad_id; // 0x28(0x10)
	struct TArray<struct FYPurchaseInventoryInsuranceRequest> purchaseInventoryInsurances; // 0x38(0x10)
};

// ScriptStruct BackendModels.YGetQueueStatisticsResult
// Size: 0x08 (Inherited: 0x00)
struct FYGetQueueStatisticsResult {
	int32_t m_usersSearching; // 0x00(0x04)
	float m_averageSearchTime; // 0x04(0x04)
};

// ScriptStruct BackendModels.YGetQueueStatistics
// Size: 0x01 (Inherited: 0x00)
struct FYGetQueueStatistics {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BackendModels.YEnterMatchResult
// Size: 0x40 (Inherited: 0x00)
struct FYEnterMatchResult {
	bool m_succeeded; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString m_matchTicket; // 0x08(0x10)
	struct FString m_ip; // 0x18(0x10)
	struct FString m_region; // 0x28(0x10)
	int32_t m_port; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct BackendModels.YEnterMatch
// Size: 0x10 (Inherited: 0x00)
struct FYEnterMatch {
	struct FString m_matchTicket; // 0x00(0x10)
};

// ScriptStruct BackendModels.YPollMatchmakingStateResult
// Size: 0x28 (Inherited: 0x00)
struct FYPollMatchmakingStateResult {
	enum class EYPlayfabMatchmakingState m_state; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString m_matchmakingTicket; // 0x08(0x10)
	struct FString m_matchTicket; // 0x18(0x10)
};

// ScriptStruct BackendModels.YPollMatchmakingState
// Size: 0x01 (Inherited: 0x00)
struct FYPollMatchmakingState {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BackendModels.YClientAvgQueueTime
// Size: 0x04 (Inherited: 0x00)
struct FYClientAvgQueueTime {
	char pad_0[0x4]; // 0x00(0x04)
};

// ScriptStruct BackendModels.YCancelMatchmakingAllDebug
// Size: 0x01 (Inherited: 0x00)
struct FYCancelMatchmakingAllDebug {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BackendModels.YCurrentQueueInfo
// Size: 0x28 (Inherited: 0x00)
struct FYCurrentQueueInfo {
	struct FString GameMode; // 0x00(0x10)
	struct FString Region; // 0x10(0x10)
	int32_t numPlayers; // 0x20(0x04)
	int32_t roomSize; // 0x24(0x04)
};

// ScriptStruct BackendModels.YQueueDisbanded
// Size: 0x20 (Inherited: 0x00)
struct FYQueueDisbanded {
	struct FString GameMode; // 0x00(0x10)
	struct FString Region; // 0x10(0x10)
};

// ScriptStruct BackendModels.YPlayerMatched
// Size: 0x10 (Inherited: 0x00)
struct FYPlayerMatched {
	struct FString matchTicketId; // 0x00(0x10)
};

// ScriptStruct BackendModels.YMatchmakingResponse
// Size: 0x30 (Inherited: 0x00)
struct FYMatchmakingResponse {
	enum class EYMatchmakingResult Error; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString GameMode; // 0x08(0x10)
	struct FString Region; // 0x18(0x10)
	bool isRanked; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32_t estimatedTimeSeconds; // 0x2c(0x04)
};

// ScriptStruct BackendModels.YRegionEndpoints
// Size: 0x10 (Inherited: 0x00)
struct FYRegionEndpoints {
	struct TArray<struct FYMatchmakingRegionEndpointEntry> entries; // 0x00(0x10)
};

// ScriptStruct BackendModels.YMatchmakingRegionEndpointEntry
// Size: 0x20 (Inherited: 0x00)
struct FYMatchmakingRegionEndpointEntry {
	struct FString Region; // 0x00(0x10)
	struct FString endpoint; // 0x10(0x10)
};

// ScriptStruct BackendModels.YMaintenanceModeState
// Size: 0x01 (Inherited: 0x00)
struct FYMaintenanceModeState {
	bool bypassMaintenanceMode; // 0x00(0x01)
};

// ScriptStruct BackendModels.YRequestRegionEndpoints
// Size: 0x01 (Inherited: 0x00)
struct FYRequestRegionEndpoints {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BackendModels.YNotifyUpdatedProfanitylist
// Size: 0x20 (Inherited: 0x00)
struct FYNotifyUpdatedProfanitylist {
	struct TArray<struct FString> profanityList; // 0x00(0x10)
	struct TArray<struct FString> regexProfanityList; // 0x10(0x10)
};

// ScriptStruct BackendModels.YGetProfanityList
// Size: 0x01 (Inherited: 0x00)
struct FYGetProfanityList {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BackendModels.YMutedNotification
// Size: 0x08 (Inherited: 0x00)
struct FYMutedNotification {
	int32_t durationSeconds; // 0x00(0x04)
	enum class EYMuteReason Reason; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct BackendModels.YMuteResult
// Size: 0x01 (Inherited: 0x00)
struct FYMuteResult {
	enum class EYMuteResult Result; // 0x00(0x01)
};

// ScriptStruct BackendModels.YMute
// Size: 0x18 (Inherited: 0x00)
struct FYMute {
	struct FString UserId; // 0x00(0x10)
	int32_t durationSeconds; // 0x10(0x04)
	enum class EYMuteReason Reason; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct BackendModels.YAnnouncement
// Size: 0x18 (Inherited: 0x00)
struct FYAnnouncement {
	struct FString Msg; // 0x00(0x10)
	enum class EYChannelType ChannelType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct BackendModels.YSquadMessage
// Size: 0x30 (Inherited: 0x00)
struct FYSquadMessage {
	struct FString from; // 0x00(0x10)
	struct FString Msg; // 0x10(0x10)
	struct FString squadId; // 0x20(0x10)
};

// ScriptStruct BackendModels.YSendAnnouncement
// Size: 0x10 (Inherited: 0x00)
struct FYSendAnnouncement {
	struct FString Msg; // 0x00(0x10)
};

// ScriptStruct BackendModels.YBroadcast
// Size: 0x20 (Inherited: 0x00)
struct FYBroadcast {
	struct FString from; // 0x00(0x10)
	struct FString Msg; // 0x10(0x10)
};

// ScriptStruct BackendModels.YWhisper
// Size: 0x30 (Inherited: 0x00)
struct FYWhisper {
	struct FString from; // 0x00(0x10)
	struct FString Msg; // 0x10(0x10)
	struct FString to; // 0x20(0x10)
};

// ScriptStruct BackendModels.YPlayFabPlayerProfile
// Size: 0x30 (Inherited: 0x00)
struct FYPlayFabPlayerProfile {
	struct FString AvatarUrl; // 0x00(0x10)
	struct FString DisplayName; // 0x10(0x10)
	struct FString PlayerId; // 0x20(0x10)
};

// ScriptStruct BackendModels.YPlayfabExecuteCloudscriptMessage
// Size: 0x20 (Inherited: 0x00)
struct FYPlayfabExecuteCloudscriptMessage {
	struct FString m_functionName; // 0x00(0x10)
	struct FString m_jsonData; // 0x10(0x10)
};

// ScriptStruct BackendModels.YPlayfabExecuteEventMessage
// Size: 0x80 (Inherited: 0x00)
struct FYPlayfabExecuteEventMessage {
	struct FString m_userId; // 0x00(0x10)
	struct FString m_service; // 0x10(0x10)
	struct FString m_eventName; // 0x20(0x10)
	struct TMap<struct FString, int32_t> m_keyToJsons; // 0x30(0x50)
};

// ScriptStruct BackendModels.YQueryFactionProgressionRequest
// Size: 0x01 (Inherited: 0x00)
struct FYQueryFactionProgressionRequest {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BackendModels.YRerollDailyIncompleteChallengeResponse
// Size: 0xa0 (Inherited: 0x00)
struct FYRerollDailyIncompleteChallengeResponse {
	bool rerollWasSuccessful; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FYQuestState removedChallengeData; // 0x08(0x40)
	struct FYQuestState newChallengeData; // 0x48(0x40)
	int32_t playerNumOfRerollTokens; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct FString UserId; // 0x90(0x10)
};

// ScriptStruct BackendModels.YRerollDailyIncompleteChallengeClient
// Size: 0x10 (Inherited: 0x00)
struct FYRerollDailyIncompleteChallengeClient {
	struct FString challengeName; // 0x00(0x10)
};

// ScriptStruct BackendModels.YDebugSetCompositeProgress
// Size: 0x28 (Inherited: 0x00)
struct FYDebugSetCompositeProgress {
	struct FString parentQuestId; // 0x00(0x10)
	struct FString compositeName; // 0x10(0x10)
	int32_t Count; // 0x20(0x04)
	bool Completed; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct BackendModels.YDebugStartMission
// Size: 0x20 (Inherited: 0x00)
struct FYDebugStartMission {
	struct FString missionArcId; // 0x00(0x10)
	struct FString missionId; // 0x10(0x10)
};

// ScriptStruct BackendModels.YDebugGiveRerollTokensResponse
// Size: 0x18 (Inherited: 0x00)
struct FYDebugGiveRerollTokensResponse {
	struct FString UserId; // 0x00(0x10)
	int32_t playerNumOfRerollTokens; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BackendModels.YDebugGiveRerollTokens
// Size: 0x04 (Inherited: 0x00)
struct FYDebugGiveRerollTokens {
	int32_t numOfTokensToGiveToThePlayer; // 0x00(0x04)
};

// ScriptStruct BackendModels.YDebugResetAllChallengesProgress
// Size: 0x01 (Inherited: 0x00)
struct FYDebugResetAllChallengesProgress {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BackendModels.YDebugClearAllMissions
// Size: 0x01 (Inherited: 0x00)
struct FYDebugClearAllMissions {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BackendModels.YDebugRerollDailyChallenges
// Size: 0x01 (Inherited: 0x00)
struct FYDebugRerollDailyChallenges {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BackendModels.YDebugRerollWeeklyChallenges
// Size: 0x01 (Inherited: 0x00)
struct FYDebugRerollWeeklyChallenges {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BackendModels.YResetMission
// Size: 0x20 (Inherited: 0x00)
struct FYResetMission {
	struct FString missionArcId; // 0x00(0x10)
	struct FString missionId; // 0x10(0x10)
};

// ScriptStruct BackendModels.YSetMissionAcknowledged
// Size: 0x20 (Inherited: 0x00)
struct FYSetMissionAcknowledged {
	struct FString missionArcId; // 0x00(0x10)
	struct FString missionId; // 0x10(0x10)
};

// ScriptStruct BackendModels.YSetMissionActive
// Size: 0x38 (Inherited: 0x00)
struct FYSetMissionActive {
	struct FString UserId; // 0x00(0x10)
	struct FString missionArcId; // 0x10(0x10)
	struct FString missionId; // 0x20(0x10)
	bool newState; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct BackendModels.YSetMissionsCompleted
// Size: 0x20 (Inherited: 0x00)
struct FYSetMissionsCompleted {
	struct FString UserId; // 0x00(0x10)
	struct TArray<struct FYMissionUpdateDataEntry> entries; // 0x10(0x10)
};

// ScriptStruct BackendModels.YMissionUpdateDataEntry
// Size: 0x38 (Inherited: 0x00)
struct FYMissionUpdateDataEntry {
	struct FYMissionState missionState; // 0x00(0x28)
	struct TArray<struct FYCompositeQuestProgress> compositeProgress; // 0x28(0x10)
};

// ScriptStruct BackendModels.YCompositeQuestProgress
// Size: 0x28 (Inherited: 0x00)
struct FYCompositeQuestProgress {
	struct FString parentQuestId; // 0x00(0x10)
	struct FString compositeName; // 0x10(0x10)
	int32_t Count; // 0x20(0x04)
	bool Completed; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct BackendModels.YMissionState
// Size: 0x28 (Inherited: 0x00)
struct FYMissionState {
	struct FString missionId; // 0x00(0x10)
	struct FString missionArcId; // 0x10(0x10)
	int32_t Count; // 0x20(0x04)
	bool Completed; // 0x24(0x01)
	bool IsActive; // 0x25(0x01)
	bool acknowledged; // 0x26(0x01)
	bool receivedReward; // 0x27(0x01)
};

// ScriptStruct BackendModels.YSetMissionsCount
// Size: 0x20 (Inherited: 0x00)
struct FYSetMissionsCount {
	struct FString UserId; // 0x00(0x10)
	struct TArray<struct FYMissionUpdateDataEntry> entries; // 0x10(0x10)
};

// ScriptStruct BackendModels.YGetMissionsResponse
// Size: 0x20 (Inherited: 0x00)
struct FYGetMissionsResponse {
	struct FString UserId; // 0x00(0x10)
	struct TArray<struct FYMissionUpdateDataEntry> missions; // 0x10(0x10)
};

// ScriptStruct BackendModels.YMissionCompletedResult
// Size: 0x48 (Inherited: 0x00)
struct FYMissionCompletedResult {
	struct FString UserId; // 0x00(0x10)
	struct FString currentMissionID; // 0x10(0x10)
	struct TArray<struct FYCustomItemInfo> rewards; // 0x20(0x10)
	struct TArray<struct FYCurrencyItem> updatedCurrencies; // 0x30(0x10)
	int32_t progress; // 0x40(0x04)
	bool shouldShowPopup; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
};

// ScriptStruct BackendModels.YRequestMissionCompleted
// Size: 0x20 (Inherited: 0x00)
struct FYRequestMissionCompleted {
	struct FString UserId; // 0x00(0x10)
	struct FString currentMissionID; // 0x10(0x10)
};

// ScriptStruct BackendModels.YRequestActiveMissionResult
// Size: 0x28 (Inherited: 0x00)
struct FYRequestActiveMissionResult {
	struct FString UserId; // 0x00(0x10)
	struct FString currentMissionID; // 0x10(0x10)
	int32_t progress; // 0x20(0x04)
	bool showPopup; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct BackendModels.YSetActiveMission
// Size: 0x28 (Inherited: 0x00)
struct FYSetActiveMission {
	struct FString UserId; // 0x00(0x10)
	struct FString currentMissionID; // 0x10(0x10)
	int32_t progress; // 0x20(0x04)
	bool showPopup; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct BackendModels.YRequestActiveMission
// Size: 0x10 (Inherited: 0x00)
struct FYRequestActiveMission {
	struct FString UserId; // 0x00(0x10)
};

// ScriptStruct BackendModels.YMissionUpdateResult
// Size: 0x48 (Inherited: 0x00)
struct FYMissionUpdateResult {
	struct FString UserId; // 0x00(0x10)
	struct FString Error; // 0x10(0x10)
	struct FString currentMissionID; // 0x20(0x10)
	struct TArray<struct FYCustomItemInfo> rewards; // 0x30(0x10)
	bool shouldShowPopup; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32_t progress; // 0x44(0x04)
};

// ScriptStruct BackendModels.YRequestMissionUpdate
// Size: 0x38 (Inherited: 0x00)
struct FYRequestMissionUpdate {
	struct FString UserId; // 0x00(0x10)
	struct FString currentMissionID; // 0x10(0x10)
	struct FString currentStepName; // 0x20(0x10)
	int32_t progress; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct BackendModels.YDebugResetOnboaringProgress
// Size: 0x10 (Inherited: 0x00)
struct FYDebugResetOnboaringProgress {
	struct FString UserId; // 0x00(0x10)
};

// ScriptStruct BackendModels.YPickaxeUpgradeLevelUpdated
// Size: 0x18 (Inherited: 0x00)
struct FYPickaxeUpgradeLevelUpdated {
	struct FString m_userId; // 0x00(0x10)
	int32_t m_upgradeLevel; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BackendModels.YMissionProgressionInfo
// Size: 0x18 (Inherited: 0x00)
struct FYMissionProgressionInfo {
	struct FString currentMissionID; // 0x00(0x10)
	int32_t progress; // 0x10(0x04)
	bool showPopup; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct BackendModels.YGetMissions
// Size: 0x10 (Inherited: 0x00)
struct FYGetMissions {
	struct FString UserId; // 0x00(0x10)
};

// ScriptStruct BackendModels.YPlayerInfoUserDataEntry
// Size: 0x0c (Inherited: 0x00)
struct FYPlayerInfoUserDataEntry {
	int32_t inventoryStashLimit; // 0x00(0x04)
	int32_t inventoryBagLimit; // 0x04(0x04)
	int32_t inventorySafeLimit; // 0x08(0x04)
};

// ScriptStruct BackendModels.YQuestsUpdatedMessage
// Size: 0x20 (Inherited: 0x00)
struct FYQuestsUpdatedMessage {
	struct FString UserId; // 0x00(0x10)
	struct TArray<struct FYQuestState> quests; // 0x10(0x10)
};

// ScriptStruct BackendModels.YSetQuestCompleted
// Size: 0x20 (Inherited: 0x00)
struct FYSetQuestCompleted {
	struct FString UserId; // 0x00(0x10)
	struct TArray<struct FYQuestUpdateDataEntry> entries; // 0x10(0x10)
};

// ScriptStruct BackendModels.YQuestUpdateDataEntry
// Size: 0x28 (Inherited: 0x00)
struct FYQuestUpdateDataEntry {
	struct FString questId; // 0x00(0x10)
	struct FString backendId; // 0x10(0x10)
	int32_t Count; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct BackendModels.YSetQuestsCount
// Size: 0x20 (Inherited: 0x00)
struct FYSetQuestsCount {
	struct FString UserId; // 0x00(0x10)
	struct TArray<struct FYQuestUpdateDataEntry> entries; // 0x10(0x10)
};

// ScriptStruct BackendModels.YGetQuestsResponse
// Size: 0x28 (Inherited: 0x00)
struct FYGetQuestsResponse {
	struct FString UserId; // 0x00(0x10)
	struct TArray<struct FYQuestState> quests; // 0x10(0x10)
	int32_t playerNumOfRerollTokens; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct BackendModels.YGetDailyChallengesResponse
// Size: 0x28 (Inherited: 0x00)
struct FYGetDailyChallengesResponse {
	struct FString UserId; // 0x00(0x10)
	struct TArray<struct FYQuestState> quests; // 0x10(0x10)
	int32_t playerNumOfRerollTokens; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct BackendModels.YGetDailyChallengesClient
// Size: 0x01 (Inherited: 0x00)
struct FYGetDailyChallengesClient {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BackendModels.YGetQuestsClient
// Size: 0x01 (Inherited: 0x00)
struct FYGetQuestsClient {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BackendModels.YGetQuestsBS
// Size: 0x10 (Inherited: 0x00)
struct FYGetQuestsBS {
	struct FString UserId; // 0x00(0x10)
};

// ScriptStruct BackendModels.YRewardsSent
// Size: 0x01 (Inherited: 0x00)
struct FYRewardsSent {
	enum class EYRewardResult Status; // 0x00(0x01)
};

// ScriptStruct BackendModels.YDebugGiveProspectorLevelXP
// Size: 0x04 (Inherited: 0x00)
struct FYDebugGiveProspectorLevelXP {
	int32_t xpIncrement; // 0x00(0x04)
};

// ScriptStruct BackendModels.YRewardProgression
// Size: 0x28 (Inherited: 0x00)
struct FYRewardProgression {
	struct FString UserId; // 0x00(0x10)
	struct TArray<struct FYPlayerReward> factionProgressionRewards; // 0x10(0x10)
	int32_t seasonXP; // 0x20(0x04)
	int32_t prospectorLevelXP; // 0x24(0x04)
};

// ScriptStruct BackendModels.YRewardInventory
// Size: 0x38 (Inherited: 0x00)
struct FYRewardInventory {
	struct FString UserId; // 0x00(0x10)
	struct TArray<struct FYPlayerReward> Materials; // 0x10(0x10)
	struct TArray<struct FYPlayerReward> currencies; // 0x20(0x10)
	enum class EYPlayerRewardSource Source; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct BackendModels.YDebugMatchHasEnded
// Size: 0x01 (Inherited: 0x00)
struct FYDebugMatchHasEnded {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BackendModels.YPreviousMatchHasEnded
// Size: 0x01 (Inherited: 0x00)
struct FYPreviousMatchHasEnded {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BackendModels.YConnect
// Size: 0x20 (Inherited: 0x00)
struct FYConnect {
	struct FString addr; // 0x00(0x10)
	struct FString roomId; // 0x10(0x10)
};

// ScriptStruct BackendModels.YMatchHasEnded
// Size: 0x10 (Inherited: 0x00)
struct FYMatchHasEnded {
	struct TArray<struct FString> users; // 0x00(0x10)
};

// ScriptStruct BackendModels.YPlayerLeftMatch
// Size: 0x10 (Inherited: 0x00)
struct FYPlayerLeftMatch {
	struct FString UserId; // 0x00(0x10)
};

// ScriptStruct BackendModels.YPlayerFinishedMatch
// Size: 0x10 (Inherited: 0x00)
struct FYPlayerFinishedMatch {
	struct FString UserId; // 0x00(0x10)
};

// ScriptStruct BackendModels.YGameOver
// Size: 0x01 (Inherited: 0x00)
struct FYGameOver {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BackendModels.YSquadModeInfo
// Size: 0x20 (Inherited: 0x00)
struct FYSquadModeInfo {
	struct TArray<struct FYRoomSquad> squads; // 0x00(0x10)
	struct TArray<struct FYRoomPlayer> users; // 0x10(0x10)
};

// ScriptStruct BackendModels.YRoomPlayer
// Size: 0x20 (Inherited: 0x00)
struct FYRoomPlayer {
	struct FString UserId; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
};

// ScriptStruct BackendModels.YRoomSquad
// Size: 0x20 (Inherited: 0x00)
struct FYRoomSquad {
	struct FString squadId; // 0x00(0x10)
	struct TArray<struct FString> users; // 0x10(0x10)
};

// ScriptStruct BackendModels.YSingleModeInfo
// Size: 0x10 (Inherited: 0x00)
struct FYSingleModeInfo {
	struct TArray<struct FYRoomPlayer> users; // 0x00(0x10)
};

// ScriptStruct BackendModels.YGetRoomInfo
// Size: 0x10 (Inherited: 0x00)
struct FYGetRoomInfo {
	struct FString roomId; // 0x00(0x10)
};

// ScriptStruct BackendModels.YMapLoaded
// Size: 0x01 (Inherited: 0x00)
struct FYMapLoaded {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BackendModels.YServerCommand
// Size: 0x01 (Inherited: 0x00)
struct FYServerCommand {
	enum class EYServerCommand Command; // 0x00(0x01)
};

// ScriptStruct BackendModels.YServerReady
// Size: 0x10 (Inherited: 0x00)
struct FYServerReady {
	struct FString networkAddress; // 0x00(0x10)
};

// ScriptStruct BackendModels.YDebugSimulateDateTimeSeasons
// Size: 0x10 (Inherited: 0x00)
struct FYDebugSimulateDateTimeSeasons {
	struct FString DateTime; // 0x00(0x10)
};

// ScriptStruct BackendModels.YDebugResetSeasonProgress
// Size: 0x01 (Inherited: 0x00)
struct FYDebugResetSeasonProgress {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BackendModels.YDebugSetSeasonLevel
// Size: 0x04 (Inherited: 0x00)
struct FYDebugSetSeasonLevel {
	int32_t Level; // 0x00(0x04)
};

// ScriptStruct BackendModels.YDebugGiveSeasonLevel
// Size: 0x04 (Inherited: 0x00)
struct FYDebugGiveSeasonLevel {
	int32_t levelIncrement; // 0x00(0x04)
};

// ScriptStruct BackendModels.YDebugGiveSeasonXp
// Size: 0x04 (Inherited: 0x00)
struct FYDebugGiveSeasonXp {
	int32_t xpIncrement; // 0x00(0x04)
};

// ScriptStruct BackendModels.YPlayerSeasonGrantsChanged
// Size: 0x20 (Inherited: 0x00)
struct FYPlayerSeasonGrantsChanged {
	struct FString seasonRowId; // 0x00(0x10)
	struct TArray<struct FYPlayerSeasonGrant> grants; // 0x10(0x10)
};

// ScriptStruct BackendModels.YPlayerActiveSeasonChanged
// Size: 0x01 (Inherited: 0x00)
struct FYPlayerActiveSeasonChanged {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BackendModels.YGetPlayerSeasonGrants
// Size: 0x01 (Inherited: 0x00)
struct FYGetPlayerSeasonGrants {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BackendModels.YGetPlayerActiveSeason
// Size: 0x01 (Inherited: 0x00)
struct FYGetPlayerActiveSeason {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BackendModels.YUserStateChange
// Size: 0x28 (Inherited: 0x00)
struct FYUserStateChange {
	struct FString m_userId; // 0x00(0x10)
	struct FString m_playfabId; // 0x10(0x10)
	enum class EYUserStateChangeType m_stateChange; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct BackendModels.YShopRelevantDataUpdated
// Size: 0x28 (Inherited: 0x00)
struct FYShopRelevantDataUpdated {
	struct FYCurrency Currency; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FYShopPromotion> shopPromotions; // 0x08(0x10)
	struct TArray<struct FYShopOffer> shopOffers; // 0x18(0x10)
};

// ScriptStruct BackendModels.YDebugSimulateDateTimeShop
// Size: 0x10 (Inherited: 0x00)
struct FYDebugSimulateDateTimeShop {
	struct FString DateTime; // 0x00(0x10)
};

// ScriptStruct BackendModels.YDebugForceRotate
// Size: 0x01 (Inherited: 0x00)
struct FYDebugForceRotate {
	enum class EYPromotionType rotationType; // 0x00(0x01)
};

// ScriptStruct BackendModels.YDebugPurchaseOffer
// Size: 0x18 (Inherited: 0x00)
struct FYDebugPurchaseOffer {
	struct FString shopOfferId; // 0x00(0x10)
	int32_t quantity; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BackendModels.YDebugAddCurrency
// Size: 0x04 (Inherited: 0x00)
struct FYDebugAddCurrency {
	int32_t Value; // 0x00(0x04)
};

// ScriptStruct BackendModels.YPurchaseShopOfferResponse
// Size: 0x30 (Inherited: 0x00)
struct FYPurchaseShopOfferResponse {
	enum class EYPurchaseOfferResult returnResult; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FYShopOffer shopOffer; // 0x08(0x18)
	struct FString TransactionId; // 0x20(0x10)
};

// ScriptStruct BackendModels.YPurchaseShopOffer
// Size: 0x18 (Inherited: 0x00)
struct FYPurchaseShopOffer {
	struct FString shopOfferId; // 0x00(0x10)
	int32_t quantity; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BackendModels.YGetActiveOffers
// Size: 0x01 (Inherited: 0x00)
struct FYGetActiveOffers {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BackendModels.YActiveOffers
// Size: 0x10 (Inherited: 0x00)
struct FYActiveOffers {
	struct TArray<struct FYShopOffer> shopOffers; // 0x00(0x10)
};

// ScriptStruct BackendModels.YGetActivePromotions
// Size: 0x01 (Inherited: 0x00)
struct FYGetActivePromotions {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BackendModels.YActivePromotions
// Size: 0x10 (Inherited: 0x00)
struct FYActivePromotions {
	struct TArray<struct FYShopPromotion> shopPromotions; // 0x00(0x10)
};

// ScriptStruct BackendModels.YGetCurrencyResult
// Size: 0x08 (Inherited: 0x00)
struct FYGetCurrencyResult {
	struct FYCurrency Currency; // 0x00(0x04)
	enum class EYGetCurrencyResult Result; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct BackendModels.YGetCurrency
// Size: 0x01 (Inherited: 0x00)
struct FYGetCurrency {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BackendModels.YShopOfferRow
// Size: 0xe0 (Inherited: 0x08)
struct FYShopOfferRow : FTableRowBase {
	struct FString m_epicOfferId; // 0x08(0x10)
	struct FText m_name; // 0x18(0x18)
	struct FText m_description; // 0x30(0x18)
	struct FText m_flavor; // 0x48(0x18)
	struct FText m_offerCategory; // 0x60(0x18)
	struct TSoftObjectPtr<struct UTexture2D> m_banner; // 0x78(0x28)
	enum class EYCurrencyType m_currencyType; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	int32_t m_price; // 0xa4(0x04)
	enum class EYOfferRarity m_offerRarity; // 0xa8(0x01)
	bool m_isOneTimePurchase; // 0xa9(0x01)
	bool m_isSeasonLevel; // 0xaa(0x01)
	char pad_AB[0x5]; // 0xab(0x05)
	struct FDataTableRowHandle m_grantRowId; // 0xb0(0x10)
	struct FDataTableRowHandle m_entitlementRowId; // 0xc0(0x10)
	struct TArray<struct FString> m_requiredOfferIds; // 0xd0(0x10)
};

// ScriptStruct BackendModels.YShopPromotionRow
// Size: 0x40 (Inherited: 0x08)
struct FYShopPromotionRow : FTableRowBase {
	enum class EYPromotionType m_promotionType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString m_startDateTime; // 0x10(0x10)
	int64_t m_utcStartDateTime; // 0x20(0x08)
	int32_t m_layoutIdx; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FDataTableRowHandle> m_shopOffers; // 0x30(0x10)
};

// ScriptStruct BackendModels.YGetSignalRConnectionResult
// Size: 0x20 (Inherited: 0x00)
struct FYGetSignalRConnectionResult {
	struct FString URL; // 0x00(0x10)
	struct FString AccessToken; // 0x10(0x10)
};

// ScriptStruct BackendModels.YGetSignalRConnection
// Size: 0x10 (Inherited: 0x00)
struct FYGetSignalRConnection {
	struct FString UserId; // 0x00(0x10)
};

// ScriptStruct BackendModels.YPendingFriendRequestsResponse
// Size: 0x10 (Inherited: 0x00)
struct FYPendingFriendRequestsResponse {
	struct TArray<struct FYSimplePlayerProfile> invites; // 0x00(0x10)
};

// ScriptStruct BackendModels.YSimplePlayerProfile
// Size: 0x20 (Inherited: 0x00)
struct FYSimplePlayerProfile {
	struct FString PlayFabId; // 0x00(0x10)
	struct FString DisplayName; // 0x10(0x10)
};

// ScriptStruct BackendModels.YBaseSocialNotificationResponse
// Size: 0x20 (Inherited: 0x00)
struct FYBaseSocialNotificationResponse {
	struct FString PlayFabId; // 0x00(0x10)
	struct FString DisplayName; // 0x10(0x10)
};

// ScriptStruct BackendModels.YBaseSocialResponse
// Size: 0x20 (Inherited: 0x00)
struct FYBaseSocialResponse {
	struct FString UserId; // 0x00(0x10)
	struct FString Error; // 0x10(0x10)
};

// ScriptStruct BackendModels.YBaseSocialRequest
// Size: 0x10 (Inherited: 0x00)
struct FYBaseSocialRequest {
	struct FString targetPlayFabId; // 0x00(0x10)
};

// ScriptStruct BackendModels.YDebugAddRandomFriendsResult
// Size: 0x01 (Inherited: 0x00)
struct FYDebugAddRandomFriendsResult {
	enum class EYSocialRequestResult Result; // 0x00(0x01)
};

// ScriptStruct BackendModels.YDebugAddRandomFriends
// Size: 0x18 (Inherited: 0x00)
struct FYDebugAddRandomFriends {
	struct FString UserId; // 0x00(0x10)
	int32_t Amount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BackendModels.YExecuteFriendStateChangeUserName
// Size: 0x28 (Inherited: 0x00)
struct FYExecuteFriendStateChangeUserName {
	struct FString internalUserId; // 0x00(0x10)
	struct FString Username; // 0x10(0x10)
	enum class EYFriendState stateToChangeTo; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct BackendModels.YDebugExecuteSocialPresence
// Size: 0x18 (Inherited: 0x00)
struct FYDebugExecuteSocialPresence {
	struct FString UserId; // 0x00(0x10)
	enum class EYSocialGameStateType State; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct BackendModels.YExecuteSocialPresenceStateResult
// Size: 0x18 (Inherited: 0x00)
struct FYExecuteSocialPresenceStateResult {
	enum class EYSocialRequestResult Result; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString UserId; // 0x08(0x10)
};

// ScriptStruct BackendModels.YExecuteSocialPresenceState
// Size: 0x18 (Inherited: 0x00)
struct FYExecuteSocialPresenceState {
	struct FString UserId; // 0x00(0x10)
	enum class EYSocialGameStateType State; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct BackendModels.YDebugSocialNotification
// Size: 0x18 (Inherited: 0x00)
struct FYDebugSocialNotification {
	struct FString UserId; // 0x00(0x10)
	int32_t Type; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BackendModels.YSocialPresenceUpdated
// Size: 0x48 (Inherited: 0x00)
struct FYSocialPresenceUpdated {
	struct FString UserId; // 0x00(0x10)
	struct FYSocialPresenceEntry Entry; // 0x10(0x38)
};

// ScriptStruct BackendModels.YSocialProfileUpdated
// Size: 0x28 (Inherited: 0x00)
struct FYSocialProfileUpdated {
	struct FYPlayerProfile Entry; // 0x00(0x28)
};

// ScriptStruct BackendModels.YPlayerProfile
// Size: 0x28 (Inherited: 0x00)
struct FYPlayerProfile {
	struct FString internalUserId; // 0x00(0x10)
	struct FString rowId; // 0x10(0x10)
	int32_t prospectorLevelXP; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct BackendModels.YUpdatePlayerPresenceStateRequest
// Size: 0x01 (Inherited: 0x00)
struct FYUpdatePlayerPresenceStateRequest {
	bool inMatch; // 0x00(0x01)
};

// ScriptStruct BackendModels.YOnPlayerPresenceStateChangedEvent
// Size: 0x18 (Inherited: 0x00)
struct FYOnPlayerPresenceStateChangedEvent {
	struct FString UserId; // 0x00(0x10)
	enum class EYSocialGameStateType presenceState; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct BackendModels.YSocialFriendStateUpdated
// Size: 0x60 (Inherited: 0x00)
struct FYSocialFriendStateUpdated {
	struct FString internalUserId; // 0x00(0x10)
	struct FYFriendEntry friendEntry; // 0x10(0x50)
};

// ScriptStruct BackendModels.YFriendEntry
// Size: 0x50 (Inherited: 0x00)
struct FYFriendEntry {
	struct FString internalUserId; // 0x00(0x10)
	enum class EYFriendState State; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FYSocialPresenceEntry presence; // 0x18(0x38)
};

// ScriptStruct BackendModels.YSocialNotificationUpdate
// Size: 0xa0 (Inherited: 0x00)
struct FYSocialNotificationUpdate {
	struct FString UserId; // 0x00(0x10)
	int32_t Type; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FYSocialProfileEntry Entry; // 0x18(0x88)
};

// ScriptStruct BackendModels.YDebugActionTowardsUserName
// Size: 0x28 (Inherited: 0x00)
struct FYDebugActionTowardsUserName {
	struct FString ownerInternalUserId; // 0x00(0x10)
	struct FString friendActionUserName; // 0x10(0x10)
	int32_t actionRequest; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct BackendModels.YSearchSocialProfilesResult
// Size: 0x20 (Inherited: 0x00)
struct FYSearchSocialProfilesResult {
	enum class EYSocialRequestResult Result; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FYSocialProfileEntry> entries; // 0x08(0x10)
	int32_t searchRequest; // 0x18(0x04)
	bool includePresence; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct BackendModels.YSearchSocialProfiles
// Size: 0x18 (Inherited: 0x00)
struct FYSearchSocialProfiles {
	struct FString Username; // 0x00(0x10)
	int32_t searchRequest; // 0x10(0x04)
	bool includePresence; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct BackendModels.YGetSocialProfilesResult
// Size: 0x20 (Inherited: 0x00)
struct FYGetSocialProfilesResult {
	enum class EYSocialRequestResult Result; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FYSocialProfileEntry> entries; // 0x08(0x10)
	bool includePresence; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32_t requestHandle; // 0x1c(0x04)
};

// ScriptStruct BackendModels.YAcceptFriendRequestResult
// Size: 0x48 (Inherited: 0x00)
struct FYAcceptFriendRequestResult {
	struct FYPlayFabFriendWithState friendInfo; // 0x00(0x30)
	struct FString OperationId; // 0x30(0x10)
	enum class EYFriendActionResult Result; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct BackendModels.YPlayFabFriendWithState
// Size: 0x30 (Inherited: 0x00)
struct FYPlayFabFriendWithState {
	struct FYPlayFabFriend PlayerInfo; // 0x00(0x28)
	enum class EYSocialGameStateType PlayerOnlineState; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct BackendModels.YPlayFabFriend
// Size: 0x28 (Inherited: 0x00)
struct FYPlayFabFriend {
	struct FString FriendPlayFabId; // 0x00(0x10)
	enum class EYFriendState State; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString TitleDisplayName; // 0x18(0x10)
};

// ScriptStruct BackendModels.YDeclineFriendRequestResult
// Size: 0x28 (Inherited: 0x00)
struct FYDeclineFriendRequestResult {
	struct FString UserId; // 0x00(0x10)
	struct FString OperationId; // 0x10(0x10)
	enum class EYFriendActionResult Result; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct BackendModels.YRemoveFriendRequestResult
// Size: 0x28 (Inherited: 0x00)
struct FYRemoveFriendRequestResult {
	struct FString UserId; // 0x00(0x10)
	struct FString OperationId; // 0x10(0x10)
	enum class EYFriendActionResult Result; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct BackendModels.YAddFriendResult
// Size: 0x28 (Inherited: 0x00)
struct FYAddFriendResult {
	struct FString UserId; // 0x00(0x10)
	struct FString OperationId; // 0x10(0x10)
	enum class EYFriendActionResult Result; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct BackendModels.YGetSocialProfiles
// Size: 0x30 (Inherited: 0x00)
struct FYGetSocialProfiles {
	struct TArray<struct FYPlatformEntry> entries; // 0x00(0x10)
	bool includePresence; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString contextString; // 0x18(0x10)
	int32_t requestHandle; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct BackendModels.YFriendListUpdated
// Size: 0x20 (Inherited: 0x00)
struct FYFriendListUpdated {
	struct FString internalUserId; // 0x00(0x10)
	struct TArray<struct FYFriendEntry> updatedFriends; // 0x10(0x10)
};

// ScriptStruct BackendModels.YExecuteFriendStateChangeReturnData
// Size: 0x28 (Inherited: 0x00)
struct FYExecuteFriendStateChangeReturnData {
	enum class EYGetFriendListResult Result; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString internalUserId; // 0x08(0x10)
	struct TArray<struct FYFriendEntry> updatedFriends; // 0x18(0x10)
};

// ScriptStruct BackendModels.YExecuteFriendStateChange
// Size: 0x20 (Inherited: 0x00)
struct FYExecuteFriendStateChange {
	struct FString internalUserId; // 0x00(0x10)
	struct TArray<struct FYFriendAction> friendExecutionStates; // 0x10(0x10)
};

// ScriptStruct BackendModels.YGetFriendListReturnData
// Size: 0x30 (Inherited: 0x00)
struct FYGetFriendListReturnData {
	struct FString internalUserId; // 0x00(0x10)
	struct FYUserFriendList friendList; // 0x10(0x20)
};

// ScriptStruct BackendModels.YUserFriendList
// Size: 0x20 (Inherited: 0x00)
struct FYUserFriendList {
	struct TArray<struct FYFriendEntry> entries; // 0x00(0x10)
	struct FString ownerFriendInternalUserId; // 0x10(0x10)
};

// ScriptStruct BackendModels.YFriendActionUserName
// Size: 0x28 (Inherited: 0x00)
struct FYFriendActionUserName {
	struct FString desiredUserName; // 0x00(0x10)
	struct FYFriendAction friendAction; // 0x10(0x18)
};

// ScriptStruct BackendModels.YGetUserFriendList
// Size: 0x10 (Inherited: 0x00)
struct FYGetUserFriendList {
	struct FString internalUserId; // 0x00(0x10)
};

// ScriptStruct BackendModels.YSquadMemberReadyUpNotification
// Size: 0x38 (Inherited: 0x00)
struct FYSquadMemberReadyUpNotification {
	struct FString UserId; // 0x00(0x10)
	struct FYUserMatchmakingSettings matchmakingSettings; // 0x10(0x28)
};

// ScriptStruct BackendModels.YSquadMatchmakingReadyResponse
// Size: 0x02 (Inherited: 0x00)
struct FYSquadMatchmakingReadyResponse {
	enum class EYSquadActionResult Result; // 0x00(0x01)
	bool isSquadReadyForMatch; // 0x01(0x01)
};

// ScriptStruct BackendModels.YSquadMatchmakingReady
// Size: 0x38 (Inherited: 0x00)
struct FYSquadMatchmakingReady {
	struct FString squadId; // 0x00(0x10)
	struct FYUserMatchmakingSettings matchmakingSettings; // 0x10(0x28)
};

// ScriptStruct BackendModels.YSquadInviteExpired
// Size: 0x20 (Inherited: 0x00)
struct FYSquadInviteExpired {
	struct FString ID; // 0x00(0x10)
	struct FString TargetId; // 0x10(0x10)
};

// ScriptStruct BackendModels.YSquadDisbanded
// Size: 0x10 (Inherited: 0x00)
struct FYSquadDisbanded {
	struct FString ID; // 0x00(0x10)
};

// ScriptStruct BackendModels.YLeaveSquadResponse
// Size: 0x01 (Inherited: 0x00)
struct FYLeaveSquadResponse {
	enum class EYSquadActionResult Result; // 0x00(0x01)
};

// ScriptStruct BackendModels.YLeaveSquad
// Size: 0x10 (Inherited: 0x00)
struct FYLeaveSquad {
	struct FString ID; // 0x00(0x10)
};

// ScriptStruct BackendModels.YSquadInviteDeclined
// Size: 0x10 (Inherited: 0x00)
struct FYSquadInviteDeclined {
	struct FString TargetId; // 0x00(0x10)
};

// ScriptStruct BackendModels.YDeclineSquadInviteResponse
// Size: 0x18 (Inherited: 0x00)
struct FYDeclineSquadInviteResponse {
	enum class EYSquadActionResult Result; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString inviteId; // 0x08(0x10)
};

// ScriptStruct BackendModels.YDeclineSquadInvite
// Size: 0x10 (Inherited: 0x00)
struct FYDeclineSquadInvite {
	struct FString ID; // 0x00(0x10)
};

// ScriptStruct BackendModels.YSquadInviteResponse
// Size: 0x38 (Inherited: 0x00)
struct FYSquadInviteResponse {
	enum class EYSquadActionResult Result; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString inviteId; // 0x08(0x10)
	struct FYPlayFabSquad squad; // 0x18(0x20)
};

// ScriptStruct BackendModels.YPlayFabSquad
// Size: 0x20 (Inherited: 0x00)
struct FYPlayFabSquad {
	struct FString squadId; // 0x00(0x10)
	struct TArray<struct FYPlayFabSquadMember> Members; // 0x10(0x10)
};

// ScriptStruct BackendModels.YPlayFabSquadMember
// Size: 0x60 (Inherited: 0x00)
struct FYPlayFabSquadMember {
	struct FYPlayFabPlayerProfile Profile; // 0x00(0x30)
	enum class EYUserState onlineState; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FYUserMatchmakingSettings matchmakingSettings; // 0x38(0x28)
};

// ScriptStruct BackendModels.YAcceptSquadInvite
// Size: 0x30 (Inherited: 0x00)
struct FYAcceptSquadInvite {
	struct FString ID; // 0x00(0x10)
	struct FString requesterPlayerId; // 0x10(0x10)
	struct FString squadId; // 0x20(0x10)
};

// ScriptStruct BackendModels.YSquadUpdated
// Size: 0x20 (Inherited: 0x00)
struct FYSquadUpdated {
	struct FYSquad squad; // 0x00(0x20)
};

// ScriptStruct BackendModels.YSquad
// Size: 0x20 (Inherited: 0x00)
struct FYSquad {
	struct FString ID; // 0x00(0x10)
	struct TArray<struct FYSquadMemberBE> Members; // 0x10(0x10)
};

// ScriptStruct BackendModels.YSquadMemberBE
// Size: 0x18 (Inherited: 0x00)
struct FYSquadMemberBE {
	struct FString ID; // 0x00(0x10)
	enum class EYUserState State; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct BackendModels.YRequestUserStateUpdateBroadcastToFriends
// Size: 0x10 (Inherited: 0x00)
struct FYRequestUserStateUpdateBroadcastToFriends {
	struct TArray<struct FString> Friends; // 0x00(0x10)
};

// ScriptStruct BackendModels.YUserInfosUpdated
// Size: 0x10 (Inherited: 0x00)
struct FYUserInfosUpdated {
	struct TArray<struct FYClientUserInfo> clientUserInfos; // 0x00(0x10)
};

// ScriptStruct BackendModels.YClientUserInfo
// Size: 0x18 (Inherited: 0x00)
struct FYClientUserInfo {
	struct FString UserId; // 0x00(0x10)
	enum class EYUserState State; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t squadSize; // 0x14(0x04)
};

// ScriptStruct BackendModels.YRequestUserInfos
// Size: 0x10 (Inherited: 0x00)
struct FYRequestUserInfos {
	struct TArray<struct FString> userIds; // 0x00(0x10)
};

// ScriptStruct BackendModels.YPlayFabBaseSquadRequest
// Size: 0x10 (Inherited: 0x00)
struct FYPlayFabBaseSquadRequest {
	struct FString squadId; // 0x00(0x10)
};

// ScriptStruct BackendModels.YPlayFabAcceptSquadInvite
// Size: 0x28 (Inherited: 0x00)
struct FYPlayFabAcceptSquadInvite {
	struct FYPlayFabSquad squadInfo; // 0x00(0x20)
	enum class EYSquadActionResult Result; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct BackendModels.YRequestCurrentSquadInfo
// Size: 0x01 (Inherited: 0x00)
struct FYRequestCurrentSquadInfo {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BackendModels.YPendingSquadInvites
// Size: 0x10 (Inherited: 0x00)
struct FYPendingSquadInvites {
	struct TArray<struct FYSquadInvite> invites; // 0x00(0x10)
};

// ScriptStruct BackendModels.YSquadInvite
// Size: 0x50 (Inherited: 0x00)
struct FYSquadInvite {
	struct FString ID; // 0x00(0x10)
	struct FString fromId; // 0x10(0x10)
	struct FString requesterDisplayName; // 0x20(0x10)
	struct FString TargetId; // 0x30(0x10)
	struct FString squadId; // 0x40(0x10)
};

// ScriptStruct BackendModels.YRequestPendingSquadInvites
// Size: 0x01 (Inherited: 0x00)
struct FYRequestPendingSquadInvites {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BackendModels.YSquadInviteAdded
// Size: 0x50 (Inherited: 0x00)
struct FYSquadInviteAdded {
	struct FYSquadInvite invite; // 0x00(0x50)
};

// ScriptStruct BackendModels.YInviteToSquadResponse
// Size: 0x58 (Inherited: 0x00)
struct FYInviteToSquadResponse {
	enum class EYSquadActionResult Result; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FYSquadInvite invite; // 0x08(0x50)
};

// ScriptStruct BackendModels.YPlayerDisconnectNotification
// Size: 0x10 (Inherited: 0x00)
struct FYPlayerDisconnectNotification {
	struct FString UserId; // 0x00(0x10)
};

// ScriptStruct BackendModels.YInviteToSquad
// Size: 0x20 (Inherited: 0x00)
struct FYInviteToSquad {
	struct FString fromId; // 0x00(0x10)
	struct FString TargetId; // 0x10(0x10)
};

// ScriptStruct BackendModels.YListPersistentMatchesResult
// Size: 0x10 (Inherited: 0x00)
struct FYListPersistentMatchesResult {
	struct TArray<struct FYPersistentMatch> Results; // 0x00(0x10)
};

// ScriptStruct BackendModels.YPersistentMatch
// Size: 0x80 (Inherited: 0x00)
struct FYPersistentMatch {
	struct FString ServerId; // 0x00(0x10)
	struct FString SessionId; // 0x10(0x10)
	struct FString State; // 0x20(0x10)
	bool isMatch; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FString mapName; // 0x38(0x10)
	struct FString Region; // 0x48(0x10)
	int64_t transitionTime; // 0x58(0x08)
	struct TArray<struct FString> userIds; // 0x60(0x10)
	struct TArray<struct FString> userNames; // 0x70(0x10)
};

// ScriptStruct BackendModels.YListPersistentSessionRequestsResult
// Size: 0x08 (Inherited: 0x00)
struct FYListPersistentSessionRequestsResult {
	bool SUCCESS; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t numServersShutdown; // 0x04(0x04)
};

// ScriptStruct BackendModels.YDebugMatchmakingSetUserNVRRequest
// Size: 0x04 (Inherited: 0x00)
struct FYDebugMatchmakingSetUserNVRRequest {
	int32_t nvr; // 0x00(0x04)
};

// ScriptStruct BackendModels.YDebugMatchmakingSetSessionNVRRequest
// Size: 0x18 (Inherited: 0x00)
struct FYDebugMatchmakingSetSessionNVRRequest {
	struct FString SessionId; // 0x00(0x10)
	int32_t nvr; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BackendModels.YListPersistentSessionRequests
// Size: 0x10 (Inherited: 0x00)
struct FYListPersistentSessionRequests {
	struct FString desiredRegion; // 0x00(0x10)
};

// ScriptStruct BackendModels.YListPersistentMatches
// Size: 0x01 (Inherited: 0x00)
struct FYListPersistentMatches {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BackendModels.YPersistentSessionResetResult
// Size: 0x08 (Inherited: 0x00)
struct FYPersistentSessionResetResult {
	bool SUCCESS; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t numServersShutdown; // 0x04(0x04)
};

// ScriptStruct BackendModels.YPersistentSessionResetRequest
// Size: 0x10 (Inherited: 0x00)
struct FYPersistentSessionResetRequest {
	struct FString desiredRegion; // 0x00(0x10)
};

// ScriptStruct BackendModels.YPersistentMatchReset
// Size: 0x10 (Inherited: 0x00)
struct FYPersistentMatchReset {
	struct FString UserId; // 0x00(0x10)
};

// ScriptStruct BackendModels.YDebugRequestShardStationChange
// Size: 0x18 (Inherited: 0x00)
struct FYDebugRequestShardStationChange {
	struct FString UserId; // 0x00(0x10)
	int32_t shardIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BackendModels.YRequestUserChangeStation
// Size: 0x40 (Inherited: 0x00)
struct FYRequestUserChangeStation {
	struct FString Context; // 0x00(0x10)
	struct FYStationConnect connectData; // 0x10(0x30)
};

// ScriptStruct BackendModels.YStationConnect
// Size: 0x30 (Inherited: 0x00)
struct FYStationConnect {
	struct FString addr; // 0x00(0x10)
	struct FString roomId; // 0x10(0x10)
	bool connectSinglePlayer; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	int32_t shardIndex; // 0x24(0x04)
	bool isMatch; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct BackendModels.YRequestLeaveStationInfo
// Size: 0x18 (Inherited: 0x00)
struct FYRequestLeaveStationInfo {
	struct FString UserId; // 0x00(0x10)
	bool isMatch; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct BackendModels.YServerReportResult
// Size: 0x10 (Inherited: 0x00)
struct FYServerReportResult {
	struct FYServerReport serverData; // 0x00(0x10)
};

// ScriptStruct BackendModels.YServerReport
// Size: 0x10 (Inherited: 0x00)
struct FYServerReport {
	struct TArray<struct FYStationInfoProto> infos; // 0x00(0x10)
};

// ScriptStruct BackendModels.YStationInfoProto
// Size: 0x40 (Inherited: 0x00)
struct FYStationInfoProto {
	struct FString stationInfo; // 0x00(0x10)
	int32_t numUsers; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString battleServerInfo; // 0x18(0x10)
	struct TArray<struct FString> userIds; // 0x28(0x10)
	int32_t shardIndex; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct BackendModels.YGetServerStateReport
// Size: 0x01 (Inherited: 0x00)
struct FYGetServerStateReport {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BackendModels.YStationLoginUserEntry
// Size: 0x10 (Inherited: 0x00)
struct FYStationLoginUserEntry {
	struct TArray<struct FYStationPingEntry> entries; // 0x00(0x10)
};

// ScriptStruct BackendModels.YStationPingEntry
// Size: 0x20 (Inherited: 0x00)
struct FYStationPingEntry {
	struct FString Region; // 0x00(0x10)
	struct FString endpoint; // 0x10(0x10)
};

// ScriptStruct BackendModels.YRequestStationConnectResult
// Size: 0x38 (Inherited: 0x00)
struct FYRequestStationConnectResult {
	enum class EYClientStationRequestResult Result; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FYStationConnect connectData; // 0x08(0x30)
};

// ScriptStruct BackendModels.YRequestStationConnect
// Size: 0x30 (Inherited: 0x00)
struct FYRequestStationConnect {
	struct FString UserId; // 0x00(0x10)
	bool isDevelopment; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct FYStationUserPings> userPings; // 0x18(0x10)
	bool isMatch; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct BackendModels.YStationUserPings
// Size: 0x18 (Inherited: 0x00)
struct FYStationUserPings {
	struct FString Region; // 0x00(0x10)
	int32_t Ping; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BackendModels.YStationServerCommandResult
// Size: 0x18 (Inherited: 0x00)
struct FYStationServerCommandResult {
	enum class EYStationCommandResultType Result; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Context; // 0x08(0x10)
};

// ScriptStruct BackendModels.YStationReadyResult
// Size: 0x10 (Inherited: 0x00)
struct FYStationReadyResult {
	struct FString serverAddress; // 0x00(0x10)
};

// ScriptStruct BackendModels.YServerUsersConnected
// Size: 0x10 (Inherited: 0x00)
struct FYServerUsersConnected {
	struct TArray<struct FString> userIds; // 0x00(0x10)
};

// ScriptStruct BackendModels.YStationServerPlayerLeft
// Size: 0x10 (Inherited: 0x00)
struct FYStationServerPlayerLeft {
	struct FString UserId; // 0x00(0x10)
};

// ScriptStruct BackendModels.YServerShutdown
// Size: 0x10 (Inherited: 0x00)
struct FYServerShutdown {
	struct FString Region; // 0x00(0x10)
};

// ScriptStruct BackendModels.YStationServerReady
// Size: 0x10 (Inherited: 0x00)
struct FYStationServerReady {
	struct FString serverAddress; // 0x00(0x10)
};

// ScriptStruct BackendModels.YStationMapLoaded
// Size: 0x01 (Inherited: 0x00)
struct FYStationMapLoaded {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BackendModels.YModifyPlayerSkillsResult
// Size: 0x18 (Inherited: 0x00)
struct FYModifyPlayerSkillsResult {
	bool succeeded; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FYPlayerSkillData> entries; // 0x08(0x10)
};

// ScriptStruct BackendModels.YPlayerSkillData
// Size: 0x18 (Inherited: 0x00)
struct FYPlayerSkillData {
	struct FString UserId; // 0x00(0x10)
	int32_t skill; // 0x10(0x04)
	int32_t deviation; // 0x14(0x04)
};

// ScriptStruct BackendModels.YModifyPlayerSkills
// Size: 0x10 (Inherited: 0x00)
struct FYModifyPlayerSkills {
	struct TArray<struct FYModifySkillEntry> entries; // 0x00(0x10)
};

// ScriptStruct BackendModels.YModifySkillEntry
// Size: 0x18 (Inherited: 0x00)
struct FYModifySkillEntry {
	struct FString UserId; // 0x00(0x10)
	int32_t skill; // 0x10(0x04)
	int32_t deviation; // 0x14(0x04)
};

// ScriptStruct BackendModels.YGetPlayerSkillsResult
// Size: 0x18 (Inherited: 0x00)
struct FYGetPlayerSkillsResult {
	bool succeeded; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FYPlayerSkillData> Data; // 0x08(0x10)
};

// ScriptStruct BackendModels.YGetPlayerSkills
// Size: 0x10 (Inherited: 0x00)
struct FYGetPlayerSkills {
	struct TArray<struct FString> uniqueIds; // 0x00(0x10)
};

// ScriptStruct BackendModels.YGetBatchedRankedSeasonsRequest
// Size: 0x04 (Inherited: 0x00)
struct FYGetBatchedRankedSeasonsRequest {
	int32_t numTopPlayers; // 0x00(0x04)
};

// ScriptStruct BackendModels.YClientSkillUpdated
// Size: 0x08 (Inherited: 0x00)
struct FYClientSkillUpdated {
	int32_t skill; // 0x00(0x04)
	int32_t deviation; // 0x04(0x04)
};

// ScriptStruct BackendModels.YPastSeasonSummary
// Size: 0x20 (Inherited: 0x00)
struct FYPastSeasonSummary {
	struct FString seasonId; // 0x00(0x10)
	struct FYPlayersRankedSeasonData Summary; // 0x10(0x10)
};

// ScriptStruct BackendModels.YDebugCheckPastSeasonRewardsResponse
// Size: 0x01 (Inherited: 0x00)
struct FYDebugCheckPastSeasonRewardsResponse {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BackendModels.YDebugCheckPastSeasonRewards
// Size: 0x01 (Inherited: 0x00)
struct FYDebugCheckPastSeasonRewards {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BackendModels.YDebugGiveSeasonRewardsResponse
// Size: 0x01 (Inherited: 0x00)
struct FYDebugGiveSeasonRewardsResponse {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BackendModels.YDebugGiveSeasonRewards
// Size: 0x01 (Inherited: 0x00)
struct FYDebugGiveSeasonRewards {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BackendModels.YDebugResetPlayerAllGamemodesRankRequest
// Size: 0x01 (Inherited: 0x00)
struct FYDebugResetPlayerAllGamemodesRankRequest {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BackendModels.YDebugResetPlayerGamemodeRankRequest
// Size: 0x10 (Inherited: 0x00)
struct FYDebugResetPlayerGamemodeRankRequest {
	struct FString GameMode; // 0x00(0x10)
};

// ScriptStruct BackendModels.YDebugSetPlayerGamemodeRankRequest
// Size: 0x18 (Inherited: 0x00)
struct FYDebugSetPlayerGamemodeRankRequest {
	int32_t rank; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString GameMode; // 0x08(0x10)
};

// ScriptStruct BackendModels.YDebugGivePlayerGamemodeRankRequest
// Size: 0x18 (Inherited: 0x00)
struct FYDebugGivePlayerGamemodeRankRequest {
	int32_t rankIncrement; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString GameMode; // 0x08(0x10)
};

// ScriptStruct BackendModels.YGetCompetitorsDataRequest
// Size: 0x08 (Inherited: 0x00)
struct FYGetCompetitorsDataRequest {
	int32_t playersAbove; // 0x00(0x04)
	int32_t playersBelow; // 0x04(0x04)
};

// ScriptStruct BackendModels.YGetTopNPlayersNSeasonsRequest
// Size: 0x01 (Inherited: 0x00)
struct FYGetTopNPlayersNSeasonsRequest {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BackendModels.YGetTopNPlayersActiveRankedSeasonRequest
// Size: 0x04 (Inherited: 0x00)
struct FYGetTopNPlayersActiveRankedSeasonRequest {
	int32_t numTopPlayers; // 0x00(0x04)
};

// ScriptStruct BackendModels.YGivePlayerSeasonGamemodeRankResponse
// Size: 0x01 (Inherited: 0x00)
struct FYGivePlayerSeasonGamemodeRankResponse {
	bool SUCCESS; // 0x00(0x01)
};

// ScriptStruct BackendModels.YGivePlayerSeasonGamemodeRankRequest
// Size: 0x28 (Inherited: 0x00)
struct FYGivePlayerSeasonGamemodeRankRequest {
	struct FString UserId; // 0x00(0x10)
	struct FString GameMode; // 0x10(0x10)
	int32_t rankIncrement; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct BackendModels.YGetPlayersActiveRankedSeasonBattleServerRequest
// Size: 0x20 (Inherited: 0x00)
struct FYGetPlayersActiveRankedSeasonBattleServerRequest {
	struct TArray<struct FString> otherPlayersIds; // 0x00(0x10)
	struct FString playerOwnId; // 0x10(0x10)
};

// ScriptStruct BackendModels.YGetPlayersActiveRankedSeasonClientRequest
// Size: 0x10 (Inherited: 0x00)
struct FYGetPlayersActiveRankedSeasonClientRequest {
	struct TArray<struct FString> otherPlayersIds; // 0x00(0x10)
};

// ScriptStruct BackendModels.YPlayersRankedSeasonsData
// Size: 0x20 (Inherited: 0x00)
struct FYPlayersRankedSeasonsData {
	struct TArray<struct FString> seasonIds; // 0x00(0x10)
	struct TArray<struct FYPlayersRankedSeasonData> playersRankedSeasonsArray; // 0x10(0x10)
};

// ScriptStruct BackendModels.YSessionUserData
// Size: 0x20 (Inherited: 0x00)
struct FYSessionUserData {
	struct FString activeSessionId; // 0x00(0x10)
	uint64_t utcLastTimeChanged; // 0x10(0x08)
	int32_t matchState; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct BackendModels.YVivoxSettingsData
// Size: 0x38 (Inherited: 0x00)
struct FYVivoxSettingsData {
	struct FString vivoxServer; // 0x00(0x10)
	struct FString vivoxDomain; // 0x10(0x10)
	struct FString vivoxIssuer; // 0x20(0x10)
	char pad_30[0x8]; // 0x30(0x08)
};

// ScriptStruct BackendModels.YVivoxJoinData
// Size: 0x48 (Inherited: 0x00)
struct FYVivoxJoinData {
	struct FYVivoxJoinTokenRequest Request; // 0x00(0x38)
	struct FString Token; // 0x38(0x10)
};

// ScriptStruct BackendModels.YVivoxJoinTokenRequest
// Size: 0x38 (Inherited: 0x00)
struct FYVivoxJoinTokenRequest {
	struct FString Username; // 0x00(0x10)
	struct FString Channel; // 0x10(0x10)
	enum class EYChannelType ChannelType; // 0x20(0x01)
	bool hasText; // 0x21(0x01)
	bool hasAudio; // 0x22(0x01)
	char pad_23[0x5]; // 0x23(0x05)
	struct FString channelId; // 0x28(0x10)
};

// ScriptStruct BackendModels.YVivoxGetServerSettings
// Size: 0x01 (Inherited: 0x00)
struct FYVivoxGetServerSettings {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BackendModels.YVivoxLoginData
// Size: 0x20 (Inherited: 0x00)
struct FYVivoxLoginData {
	struct FYVivoxLoginTokenRequest Request; // 0x00(0x10)
	struct FString Token; // 0x10(0x10)
};

// ScriptStruct BackendModels.YVivoxLoginTokenRequest
// Size: 0x10 (Inherited: 0x00)
struct FYVivoxLoginTokenRequest {
	struct FString Username; // 0x00(0x10)
};

