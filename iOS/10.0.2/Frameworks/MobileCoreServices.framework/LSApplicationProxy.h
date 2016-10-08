/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface LSApplicationProxy : LSBundleProxy <NSSecureCoding> {
    NSArray * _activityTypes;
    _LSApplicationState * _appState;
    NSString * _applicationVariant;
    int  _bundleModTime;
    NSString * _companionApplicationIdentifier;
    NSString * _complicationPrincipalClass;
    NSArray * _deviceFamily;
    NSString * _deviceIdentifierVendorName;
    _LSDiskUsage * _diskUsage;
    NSNumber * _downloaderDSID;
    NSNumber * _familyID;
    unsigned long long  _installType;
    NSNumber * _itemID;
    NSString * _itemName;
    NSString * _minimumSystemVersion;
    unsigned long long  _originalInstallType;
    NSArray * _plugInKitPlugins;
    NSArray * _pluginUUIDs;
    NSString * _preferredArchitecture;
    NSArray * _privateDocumentIconNames;
    LSApplicationProxy * _privateDocumentTypeOwner;
    NSNumber * _purchaserDSID;
    NSString * _ratingLabel;
    NSNumber * _ratingRank;
    NSDate * _registeredDate;
    NSString * _sdkVersion;
    NSString * _shortVersionString;
    NSString * _sourceAppIdentifier;
    NSNumber * _storeFront;
    NSArray * _supportedComplicationFamilies;
    NSString * _teamID;
    bool  _userInitiatedUninstall;
    NSString * _vendorName;
    NSNumber * _versionID;
    NSString * _watchKitVersion;
}

@property (nonatomic, readonly) NSNumber *ODRDiskUsage;
@property (nonatomic, readonly) NSArray *UIBackgroundModes;
@property (nonatomic, readonly) NSArray *VPNPlugins;
@property (nonatomic, readonly) NSArray *activityTypes;
@property (nonatomic, readonly) _LSApplicationState *appState;
@property (nonatomic, readonly) NSArray *appTags;
@property (nonatomic, readonly) NSString *applicationDSID;
@property (nonatomic, readonly) NSString *applicationIdentifier;
@property (nonatomic, readonly) NSString *applicationType;
@property (nonatomic, readonly) NSString *applicationVariant;
@property (nonatomic, readonly) NSArray *audioComponents;
@property (nonatomic, readonly) NSNumber *betaExternalVersionIdentifier;
@property (nonatomic, readonly) int bundleModTime;
@property (nonatomic, readonly) NSString *companionApplicationIdentifier;
@property (readonly) NSString *complicationPrincipalClass;
@property (nonatomic, readonly) NSArray *deviceFamily;
@property (nonatomic, readonly) NSUUID *deviceIdentifierForAdvertising;
@property (nonatomic, readonly) NSUUID *deviceIdentifierForVendor;
@property (nonatomic, readonly) NSArray *directionsModes;
@property (nonatomic, readonly) _LSDiskUsage *diskUsage;
@property (nonatomic, readonly) NSNumber *downloaderDSID;
@property (nonatomic, readonly) NSNumber *dynamicDiskUsage;
@property (nonatomic, readonly) NSArray *externalAccessoryProtocols;
@property (nonatomic, readonly) NSNumber *externalVersionIdentifier;
@property (nonatomic, readonly) NSNumber *familyID;
@property (nonatomic, readonly) bool fileSharingEnabled;
@property (readonly) bool hasComplication;
@property (nonatomic, readonly) bool hasCustomNotification;
@property (nonatomic, readonly) bool hasGlance;
@property (nonatomic, readonly) bool hasMIDBasedSINF;
@property (nonatomic, readonly) bool hasSettingsBundle;
@property (nonatomic, readonly) bool iconIsPrerendered;
@property (nonatomic, readonly) NSProgress *installProgress;
@property (nonatomic, readonly) unsigned long long installType;
@property (nonatomic, readonly) bool isAdHocCodeSigned;
@property (nonatomic, readonly) bool isAppUpdate;
@property (nonatomic, readonly) bool isBetaApp;
@property (nonatomic, readonly) bool isInstalled;
@property (nonatomic, readonly) bool isLaunchProhibited;
@property (nonatomic, readonly) bool isNewsstandApp;
@property (nonatomic, readonly) bool isPlaceholder;
@property (nonatomic, readonly) bool isPurchasedReDownload;
@property (nonatomic, readonly) bool isRestricted;
@property (nonatomic, readonly) bool isStickerProvider;
@property (nonatomic, readonly) bool isWatchKitApp;
@property (nonatomic, readonly) NSNumber *itemID;
@property (nonatomic, readonly) NSString *itemName;
@property (nonatomic, readonly) NSString *minimumSystemVersion;
@property (nonatomic, readonly) bool missingRequiredSINF;
@property (nonatomic, readonly) unsigned long long originalInstallType;
@property (nonatomic, readonly) NSArray *plugInKitPlugins;
@property (nonatomic, readonly) NSString *preferredArchitecture;
@property (nonatomic, copy) NSArray *privateDocumentIconNames;
@property (nonatomic, retain) LSApplicationProxy *privateDocumentTypeOwner;
@property (nonatomic, readonly) NSNumber *purchaserDSID;
@property (nonatomic, readonly) NSString *ratingLabel;
@property (nonatomic, readonly) NSNumber *ratingRank;
@property (nonatomic, readonly) NSDate *registeredDate;
@property (getter=isRemoveableSystemApp, nonatomic, readonly) bool removeableSystemApp;
@property (getter=isRemovedSystemApp, nonatomic, readonly) bool removedSystemApp;
@property (nonatomic, readonly) NSArray *requiredDeviceCapabilities;
@property (nonatomic, readonly) NSString *sdkVersion;
@property (nonatomic, readonly) NSString *shortVersionString;
@property (nonatomic, readonly) bool shouldSkipWatchAppInstall;
@property (nonatomic, readonly) NSString *sourceAppIdentifier;
@property (nonatomic, readonly) NSNumber *staticDiskUsage;
@property (nonatomic, readonly) NSString *storeCohortMetadata;
@property (nonatomic, readonly) NSNumber *storeFront;
@property (readonly) NSArray *supportedComplicationFamilies;
@property (nonatomic, readonly) bool supportsAudiobooks;
@property (nonatomic, readonly) bool supportsExternallyPlayableContent;
@property (nonatomic, readonly) bool supportsODR;
@property (nonatomic, readonly) bool supportsOpenInPlace;
@property (nonatomic, readonly) bool supportsPurgeableLocalStorage;
@property (nonatomic, readonly) NSString *teamID;
@property (nonatomic) bool userInitiatedUninstall;
@property (nonatomic, readonly) NSString *vendorName;
@property (nonatomic, readonly) NSString *watchKitVersion;
@property (getter=isWhitelisted, nonatomic, readonly) bool whitelisted;

// Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices

+ (id)applicationProxyForBundleURL:(id)arg1;
+ (id)applicationProxyForCompanionIdentifier:(id)arg1;
+ (id)applicationProxyForIdentifier:(id)arg1;
+ (id)applicationProxyForIdentifier:(id)arg1 placeholder:(bool)arg2;
+ (id)applicationProxyForItemID:(id)arg1;
+ (id)applicationProxyWithBundleUnitID:(unsigned int)arg1;
+ (bool)supportsSecureCoding;

- (id)ODRDiskUsage;
- (id)UIBackgroundModes;
- (bool)UPPValidated;
- (id)VPNPlugins;
- (id)_initWithBundleUnit:(unsigned int)arg1 applicationIdentifier:(id)arg2;
- (id)activityTypes;
- (id)appState;
- (id)appTags;
- (id)applicationDSID;
- (id)applicationIdentifier;
- (id)applicationType;
- (id)applicationVariant;
- (id)audioComponents;
- (id)betaExternalVersionIdentifier;
- (int)bundleModTime;
- (void)clearAdvertisingIdentifier;
- (id)companionApplicationIdentifier;
- (id)complicationPrincipalClass;
- (void)dealloc;
- (id)description;
- (id)deviceFamily;
- (id)deviceIdentifierForAdvertising;
- (id)deviceIdentifierForVendor;
- (id)directionsModes;
- (id)diskUsage;
- (id)downloaderDSID;
- (id)dynamicDiskUsage;
- (void)encodeWithCoder:(id)arg1;
- (id)externalAccessoryProtocols;
- (id)externalVersionIdentifier;
- (id)familyID;
- (bool)fileSharingEnabled;
- (bool)hasComplication;
- (bool)hasCustomNotification;
- (bool)hasGlance;
- (bool)hasMIDBasedSINF;
- (bool)hasSettingsBundle;
- (id)iconDataForVariant:(int)arg1;
- (bool)iconIsPrerendered;
- (id)iconStyleDomain;
- (id)initWithCoder:(id)arg1;
- (id)installProgress;
- (id)installProgressSync;
- (unsigned long long)installType;
- (bool)isAdHocCodeSigned;
- (bool)isAppUpdate;
- (bool)isBetaApp;
- (bool)isInstalled;
- (bool)isLaunchProhibited;
- (bool)isNewsstandApp;
- (bool)isPlaceholder;
- (bool)isPurchasedReDownload;
- (bool)isRemoveableSystemApp;
- (bool)isRemovedSystemApp;
- (bool)isRestricted;
- (bool)isStickerProvider;
- (bool)isSystemOrInternalApp;
- (bool)isWatchKitApp;
- (bool)isWhitelisted;
- (id)itemID;
- (id)itemName;
- (id)localizedName;
- (id)localizedNameForContext:(id)arg1;
- (id)localizedShortName;
- (id)minimumSystemVersion;
- (bool)missingRequiredSINF;
- (unsigned long long)originalInstallType;
- (id)plugInKitPlugins;
- (id)preferredArchitecture;
- (id)privateDocumentIconNames;
- (id)privateDocumentTypeOwner;
- (bool)profileValidated;
- (id)purchaserDSID;
- (id)ratingLabel;
- (id)ratingRank;
- (id)registeredDate;
- (id)requiredDeviceCapabilities;
- (id)resourcesDirectoryURL;
- (id)sdkVersion;
- (void)setPrivateDocumentIconNames:(id)arg1;
- (void)setPrivateDocumentTypeOwner:(id)arg1;
- (void)setUserInitiatedUninstall:(bool)arg1;
- (id)shortVersionString;
- (bool)shouldSkipWatchAppInstall;
- (id)sourceAppIdentifier;
- (id)staticDiskUsage;
- (id)storeCohortMetadata;
- (id)storeFront;
- (id)supportedComplicationFamilies;
- (bool)supportsAudiobooks;
- (bool)supportsExternallyPlayableContent;
- (bool)supportsODR;
- (bool)supportsOpenInPlace;
- (bool)supportsPurgeableLocalStorage;
- (id)teamID;
- (id)uniqueIdentifier;
- (bool)userInitiatedUninstall;
- (id)vendorName;
- (id)watchKitVersion;

// Image: /System/Library/Frameworks/Intents.framework/Intents

- (bool)_inapptrust_isFirstParty;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (struct CGSize { double x1; double x2; })_defaultStyleSize:(id)arg1;
- (struct { int x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)_iconVariantDefinitions:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (id)__ck_messagesPluginKitProxy;

// Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer

+ (id)uns_bundleForBundleIdentifier:(id)arg1;

- (bool)_uns_isReallyInstalled;
- (id)uns_bundle;
- (id)uns_infoDictionary;
- (bool)uns_isSystemApplication;
- (id)uns_path;
- (bool)uns_requiresLocalNotifications;
- (bool)uns_sdkVersionOnOrLaterThan:(id)arg1;
- (bool)uns_shouldUseDefaultDataProvider;
- (bool)uns_usesCloudKit;
- (bool)uns_usesLocalNotifications;

@end
