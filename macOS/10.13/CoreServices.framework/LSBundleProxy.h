/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
 */

@interface LSBundleProxy : LSResourceProxy <NSSecureCoding> {
    BOOL  _UPPValidated;
    _LSLazyPropertyList * __entitlements;
    _LSLazyPropertyList * __environmentVariables;
    _LSLazyPropertyList * __groupContainers;
    _LSLazyPropertyList * __infoDictionary;
    _LSBundleIDValidationToken * __validationToken;
    NSString * _bundleExecutable;
    unsigned long long  _bundleFlags;
    NSString * _bundleType;
    NSURL * _bundleURL;
    NSString * _bundleVersion;
    NSUUID * _cacheGUID;
    unsigned long long  _compatibilityState;
    BOOL  _containerized;
    BOOL  _foundBackingBundle;
    unsigned char  _iconFlags;
    NSString * _localizedShortName;
    NSArray * _machOUUIDs;
    unsigned int  _plistContentFlags;
    BOOL  _profileValidated;
    NSString * _sdkVersion;
    unsigned long long  _sequenceNumber;
    NSString * _signerIdentity;
    NSString * _signerOrganization;
}

@property (nonatomic, readonly) BOOL UPPValidated;
@property (setter=_setEntitlements:, nonatomic, readwrite, copy) _LSLazyPropertyList *_entitlements;
@property (setter=_setEnvironmentVariables:, nonatomic, readwrite, copy) _LSLazyPropertyList *_environmentVariables;
@property (setter=_setGroupContainers:, nonatomic, readwrite, copy) _LSLazyPropertyList *_groupContainers;
@property (setter=_setInfoDictionary:, nonatomic, readwrite, copy) _LSLazyPropertyList *_infoDictionary;
@property (setter=_setValidationToken:, nonatomic, readwrite, retain) _LSBundleIDValidationToken *_validationToken;
@property (nonatomic, readonly) NSURL *appStoreReceiptURL;
@property (nonatomic, readonly) NSURL *bundleContainerURL;
@property (nonatomic, readonly) NSString *bundleExecutable;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *bundleType;
@property (nonatomic, readonly) NSURL *bundleURL;
@property (nonatomic, readonly) NSString *bundleVersion;
@property (nonatomic, readonly) NSUUID *cacheGUID;
@property (nonatomic, readonly) NSString *canonicalExecutablePath;
@property (setter=_setCompatibilityState:, nonatomic, readwrite) unsigned long long compatibilityState;
@property (nonatomic, readonly) NSURL *containerURL;
@property (getter=isContainerized, nonatomic, readonly) BOOL containerized;
@property (nonatomic, readonly) NSURL *dataContainerURL;
@property (nonatomic, readonly) NSDictionary *entitlements;
@property (nonatomic, readonly) NSDictionary *environmentVariables;
@property (nonatomic, readonly) BOOL foundBackingBundle;
@property (nonatomic, readonly) NSDictionary *groupContainerURLs;
@property (nonatomic, readonly) NSString *localizedShortName;
@property (nonatomic, readwrite, copy) NSArray *machOUUIDs;
@property (nonatomic, readonly) BOOL profileValidated;
@property (setter=setSDKVersion:, nonatomic, readwrite, copy) NSString *sdkVersion;
@property (nonatomic, readonly) unsigned long long sequenceNumber;
@property (nonatomic, readonly) NSString *signerIdentity;
@property (nonatomic, readonly) NSString *signerOrganization;

+ (id)bundleProxyForCurrentProcess;
+ (BOOL)bundleProxyForCurrentProcessNeedsUpdate:(id)arg1;
+ (id)bundleProxyForIdentifier:(id)arg1;
+ (id)bundleProxyForURL:(id)arg1;
+ (BOOL)canInstantiateFromDatabase;
+ (BOOL)supportsSecureCoding;

- (BOOL)UPPValidated;
- (id)_dataContainerURLFromContainerManager;
- (id)_entitlements;
- (id)_environmentVariables;
- (id)_environmentVariablesFromContainerManager;
- (id)_groupContainerURLsFromContainerManager;
- (id)_groupContainers;
- (id)_infoDictionary;
- (id)_initWithBundleUnit:(unsigned int)arg1 context:(struct LSContext { struct LSDatabase {} *x1; }*)arg2 bundleType:(unsigned long long)arg3 bundleID:(id)arg4 localizedName:(id)arg5 bundleContainerURL:(id)arg6 dataContainerURL:(id)arg7 resourcesDirectoryURL:(id)arg8 iconsDictionary:(id)arg9 iconFileNames:(id)arg10 version:(id)arg11;
- (void)_setCompatibilityState:(unsigned long long)arg1;
- (void)_setEntitlements:(id)arg1;
- (void)_setEnvironmentVariables:(id)arg1;
- (void)_setGroupContainers:(id)arg1;
- (void)_setInfoDictionary:(id)arg1;
- (void)_setValidationToken:(id)arg1;
- (id)_validationToken;
- (id)_valueForEqualityTesting;
- (id)appStoreReceiptName;
- (id)appStoreReceiptURL;
- (id)bundleContainerURL;
- (id)bundleExecutable;
- (id)bundleIdentifier;
- (id)bundleType;
- (id)bundleURL;
- (id)bundleVersion;
- (id)cacheGUID;
- (id)canonicalExecutablePath;
- (unsigned long long)compatibilityState;
- (id)containerURL;
- (id)dataContainerURL;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)entitlementValueForKey:(id)arg1 ofClass:(Class)arg2;
- (id)entitlementValueForKey:(id)arg1 ofClass:(Class)arg2 valuesOfClass:(Class)arg3;
- (id)entitlementValuesForKeys:(id)arg1;
- (id)entitlements;
- (id)environmentVariables;
- (BOOL)foundBackingBundle;
- (id)groupContainerURLs;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isContainerized;
- (BOOL)isEqual:(id)arg1;
- (id)localizedValuesForKeys:(id)arg1 fromTable:(id)arg2;
- (id)machOUUIDs;
- (id)objectForInfoDictionaryKey:(id)arg1 ofClass:(Class)arg2;
- (id)objectForInfoDictionaryKey:(id)arg1 ofClass:(Class)arg2 valuesOfClass:(Class)arg3;
- (id)objectsForInfoDictionaryKeys:(id)arg1;
- (BOOL)profileValidated;
- (id)sdkVersion;
- (unsigned long long)sequenceNumber;
- (void)setMachOUUIDs:(id)arg1;
- (void)setSDKVersion:(id)arg1;
- (id)signerIdentity;
- (id)signerOrganization;
- (id)uniqueIdentifier;

// LSBundleProxy (Localization)

- (id)localizedName;
- (id)localizedNameWithPreferredLocalizations:(id)arg1 useShortNameOnly:(BOOL)arg2;
- (id)localizedShortName;

@end
