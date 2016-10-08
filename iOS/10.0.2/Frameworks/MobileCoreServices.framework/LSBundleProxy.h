/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface LSBundleProxy : LSResourceProxy <NSSecureCoding> {
    bool  _UPPValidated;
    _LSLazyPropertyList * __entitlements;
    _LSLazyPropertyList * __environmentVariables;
    _LSLazyPropertyList * __groupContainers;
    _LSLazyPropertyList * __infoDictionary;
    NSURL * _appStoreReceiptURL;
    NSString * _bundleExecutable;
    unsigned long long  _bundleFlags;
    NSString * _bundleType;
    NSURL * _bundleURL;
    NSString * _bundleVersion;
    NSUUID * _cacheGUID;
    bool  _foundBackingBundle;
    bool  _isContainerized;
    NSString * _localizedShortName;
    NSArray * _machOUUIDs;
    unsigned int  _plistContentFlags;
    bool  _profileValidated;
    unsigned long long  _sequenceNumber;
    NSString * _signerIdentity;
}

@property (nonatomic, readonly) bool UPPValidated;
@property (setter=_setEntitlements:, nonatomic, copy) _LSLazyPropertyList *_entitlements;
@property (setter=_setEnvironmentVariables:, nonatomic, copy) _LSLazyPropertyList *_environmentVariables;
@property (setter=_setGroupContainers:, nonatomic, copy) _LSLazyPropertyList *_groupContainers;
@property (setter=_setInfoDictionary:, nonatomic, copy) _LSLazyPropertyList *_infoDictionary;
@property (nonatomic, copy) NSURL *appStoreReceiptURL;
@property (nonatomic, readonly) NSURL *bundleContainerURL;
@property (nonatomic, readonly) NSString *bundleExecutable;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *bundleType;
@property (nonatomic, readonly) NSURL *bundleURL;
@property (nonatomic, readonly) NSString *bundleVersion;
@property (nonatomic, readonly) NSUUID *cacheGUID;
@property (nonatomic, readonly) NSURL *containerURL;
@property (nonatomic, readonly) NSURL *dataContainerURL;
@property (nonatomic, readonly) NSDictionary *entitlements;
@property (nonatomic, readonly) NSDictionary *environmentVariables;
@property (nonatomic, readonly) bool foundBackingBundle;
@property (nonatomic, readonly) NSDictionary *groupContainerURLs;
@property (nonatomic, readonly) bool isContainerized;
@property (nonatomic, readonly) NSString *localizedShortName;
@property (nonatomic, copy) NSArray *machOUUIDs;
@property (nonatomic, readonly) bool profileValidated;
@property (nonatomic, readonly) unsigned long long sequenceNumber;
@property (nonatomic, readonly) NSString *signerIdentity;

// Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices

+ (id)bundleProxyForCurrentProcess;
+ (id)bundleProxyForIdentifier:(id)arg1;
+ (id)bundleProxyForURL:(id)arg1;
+ (bool)supportsSecureCoding;

- (bool)UPPValidated;
- (unsigned long long)_containerClassForLSBundleType:(id)arg1;
- (id)_dataContainerURLFromContainerManager;
- (id)_entitlements;
- (id)_environmentVariables;
- (id)_environmentVariablesFromContainerManager;
- (id)_groupContainerURLsFromContainerManager;
- (id)_groupContainers;
- (id)_infoDictionary;
- (id)_initWithBundleUnit:(unsigned int)arg1 bundleType:(unsigned long long)arg2 bundleID:(id)arg3 localizedName:(id)arg4 bundleContainerURL:(id)arg5 dataContainerURL:(id)arg6 resourcesDirectoryURL:(id)arg7 iconsDictionary:(id)arg8 iconFileNames:(id)arg9 version:(id)arg10;
- (void)_setEntitlements:(id)arg1;
- (void)_setEnvironmentVariables:(id)arg1;
- (void)_setGroupContainers:(id)arg1;
- (void)_setInfoDictionary:(id)arg1;
- (id)_valueForEqualityTesting;
- (id)appStoreReceiptURL;
- (id)bundleContainerURL;
- (id)bundleExecutable;
- (id)bundleIdentifier;
- (id)bundleType;
- (id)bundleURL;
- (id)bundleVersion;
- (id)cacheGUID;
- (id)containerURL;
- (id)dataContainerURL;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)entitlementValueForKey:(id)arg1 ofClass:(Class)arg2;
- (id)entitlementValueForKey:(id)arg1 ofClass:(Class)arg2 valuesOfClass:(Class)arg3;
- (id)entitlements;
- (id)environmentVariables;
- (bool)foundBackingBundle;
- (id)groupContainerURLs;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isContainerized;
- (bool)isEqual:(id)arg1;
- (id)localizedShortName;
- (id)machOUUIDs;
- (id)objectForInfoDictionaryKey:(id)arg1 ofClass:(Class)arg2;
- (id)objectForInfoDictionaryKey:(id)arg1 ofClass:(Class)arg2 valuesOfClass:(Class)arg3;
- (bool)profileValidated;
- (unsigned long long)sequenceNumber;
- (void)setAppStoreReceiptURL:(id)arg1;
- (void)setLocalizedShortName:(id)arg1;
- (void)setMachOUUIDs:(id)arg1;
- (void)setPropertyListCachingStrategy:(unsigned long long)arg1;
- (id)signerIdentity;
- (id)uniqueIdentifier;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_hk_appExtensionContainerBundleProxyWithProperties:(id)arg1;
+ (id)hk_appExtensionContainerBundleForConnection:(id)arg1;
+ (id)hk_appExtensionContainerBundleForCurrentTask;

// Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications

- (id)_un_applicationBundleURL;
- (id)un_applicationBundle;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (id)__ck_icon;

@end
