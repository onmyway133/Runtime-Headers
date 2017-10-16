/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
 */

@interface _WKProcessPoolConfiguration : NSObject <NSCopying, WKObject> {
    struct ObjectStorage<API::ProcessPoolConfiguration> { 
        struct type { 
            unsigned char __lx[224]; 
        } data; 
    }  _processPoolConfiguration;
}

@property (atomic, readonly) /* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*_apiObject;
@property (nonatomic, readwrite, copy) NSArray *additionalReadAccessAllowedURLs;
@property (nonatomic, readwrite) BOOL allowsCellularAccess;
@property (nonatomic, readwrite, copy) NSArray *alwaysRevalidatedURLSchemes;
@property (nonatomic, readwrite, copy) NSArray *cachePartitionedURLSchemes;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (nonatomic, readwrite) long long diskCacheSizeOverride;
@property (nonatomic, readwrite) BOOL diskCacheSpeculativeValidationEnabled;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readwrite) BOOL ignoreSynchronousMessagingTimeoutsForTesting;
@property (nonatomic, readwrite, copy) NSURL *injectedBundleURL;
@property (nonatomic, readwrite) unsigned long long maximumProcessCount;
@property (nonatomic, readwrite) int presentingApplicationPID;
@property (nonatomic, readwrite) BOOL shouldCaptureAudioInUIProcess;
@property (nonatomic, readwrite, copy) NSString *sourceApplicationBundleIdentifier;
@property (nonatomic, readwrite, copy) NSString *sourceApplicationSecondaryIdentifier;
@property (atomic, readonly) Class superclass;

- (/* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*)_apiObject;
- (id)additionalReadAccessAllowedURLs;
- (BOOL)allowsCellularAccess;
- (id)alwaysRevalidatedURLSchemes;
- (id)cachePartitionedURLSchemes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (long long)diskCacheSizeOverride;
- (BOOL)diskCacheSpeculativeValidationEnabled;
- (BOOL)ignoreSynchronousMessagingTimeoutsForTesting;
- (id)init;
- (id)injectedBundleURL;
- (unsigned long long)maximumProcessCount;
- (int)presentingApplicationPID;
- (void)setAdditionalReadAccessAllowedURLs:(id)arg1;
- (void)setAllowsCellularAccess:(BOOL)arg1;
- (void)setAlwaysRevalidatedURLSchemes:(id)arg1;
- (void)setCachePartitionedURLSchemes:(id)arg1;
- (void)setDiskCacheSizeOverride:(long long)arg1;
- (void)setDiskCacheSpeculativeValidationEnabled:(BOOL)arg1;
- (void)setIgnoreSynchronousMessagingTimeoutsForTesting:(BOOL)arg1;
- (void)setInjectedBundleURL:(id)arg1;
- (void)setMaximumProcessCount:(unsigned long long)arg1;
- (void)setPresentingApplicationPID:(int)arg1;
- (void)setShouldCaptureAudioInUIProcess:(BOOL)arg1;
- (void)setSourceApplicationBundleIdentifier:(id)arg1;
- (void)setSourceApplicationSecondaryIdentifier:(id)arg1;
- (BOOL)shouldCaptureAudioInUIProcess;
- (id)sourceApplicationBundleIdentifier;
- (id)sourceApplicationSecondaryIdentifier;

@end
