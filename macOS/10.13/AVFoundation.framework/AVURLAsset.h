/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
 */

@interface AVURLAsset : AVAsset <AVContentKeyRecipient> {
    AVURLAssetInternal * _URLAsset;
}

@property (nonatomic, readonly, copy) NSURL *URL;
@property (nonatomic, readonly) NSString *cacheKey;
@property (nonatomic, readonly) BOOL mayRequireContentKeysForMediaDataProcessing;
@property (nonatomic, readonly) AVAssetResourceLoader *resourceLoader;
@property (nonatomic, readonly) BOOL shouldMatchDataInCacheByURLPathComponentOnly;
@property (nonatomic, readonly) BOOL shouldMatchDataInCacheByURLWithoutQueryComponent;

// Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation

+ (id)URLAssetWithURL:(id)arg1 options:(id)arg2;
+ (id)_UTTypes;
+ (id)_avfValidationPlist;
+ (id)_figFileMIMETypes;
+ (id)_figFilePathExtensions;
+ (id)_figFileUTIs;
+ (id)_figHFSFileTypes;
+ (id)_figMIMETypes;
+ (id)_figStreamingMIMETypes;
+ (id)_figStreamingUTIs;
+ (id)_fileUTTypes;
+ (id)_getFigAssetCreationOptionsFromURLAssetInitializationOptions:(id)arg1 figAssetCreationFlags:(unsigned long long*)arg2 error:(id*)arg3;
+ (id)_streamingUTTypes;
+ (id)audiovisualMIMETypes;
+ (id)audiovisualTypes;
+ (BOOL)isPlayableExtendedMIMEType:(id)arg1;

- (id)URL;
- (id)_absoluteURL;
- (void)_addFigAssetNotifications;
- (id)_assetInspector;
- (id)_assetInspectorLoader;
- (Class)_classForAssetTracks;
- (Class)_classForFigAssetInspectorLoader;
- (Class)_classForTrackInspectors;
- (void)_ensureAssetDownloadCache;
- (id)_errorForFigNotificationPayload:(struct __CFDictionary { }*)arg1 key:(struct __CFString { }*)arg2;
- (struct OpaqueFigFormatReader { }*)_formatReader;
- (struct OpaqueFigPlaybackItem { }*)_playbackItem;
- (void)_removeFigAssetNotifications;
- (void)_setAssetInspectorLoader:(id)arg1;
- (void)_tracksDidChange;
- (void)cancelLoading;
- (id)creationOptions;
- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)init;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (id)lyrics;
- (unsigned long long)referenceRestrictions;
- (id)tracks;

// AVURLAsset (AVAssetCache)

- (id)_managedAssetCache;
- (id)assetCache;

// AVURLAsset (AVAssetURLLoading_Private)

- (void)_handleURLRequest:(id)arg1;

// AVURLAsset (AVURLAssetCache_Private)

- (id)SHA1Digest;
- (id)_instanceIdentifier;
- (BOOL)_shouldOptimizeAccessForLinearMoviePlayback;
- (BOOL)_shouldPrepareToOptimizeForExclusivePlayback;
- (id)cacheKey;
- (id)downloadDestinationURL;
- (unsigned long long)downloadToken;
- (id)identifyingTag;
- (id)identifyingTagClass;
- (id)originalNetworkContentURL;
- (id)resolvedURL;
- (BOOL)shouldMatchDataInCacheByURLPathComponentOnly;
- (BOOL)shouldMatchDataInCacheByURLWithoutQueryComponent;

// AVURLAsset (AVURLAssetContentKeyEligibility)

- (int)_attachToContentKeySession:(id)arg1;
- (BOOL)_attachedToExternalContentKeySession;
- (id)contentKeySession;
- (void)expire;
- (BOOL)mayRequireContentKeysForMediaDataProcessing;

// AVURLAsset (AVURLAssetCustomURLHandling)

- (id)_installHandlerForNSURLSessionConfiguration:(id)arg1 queue:(id)arg2;

// AVURLAsset (AVURLAssetInstanceIdentiferMapping)

+ (id)instanceIdentifierMapTable;
+ (void)setUserInfoObject:(id)arg1 forURLAsset:(id)arg2;
+ (id)userInfoObjectForURLAsset:(id)arg1;
+ (id)userInfoObjectForURLAssetInstanceIdentifier:(id)arg1;

- (void)_removeUserInfoObject;
- (void)_setUserInfoObject:(id)arg1;

// AVURLAsset (AVURLAssetURLHandling)

- (BOOL)_hasResourceLoaderDelegate;
- (id)_resourceLoaderURLSession;
- (id)resourceLoader;

// Image: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit

// AVURLAsset (AVURLAsset_ModernizerExtras)

- (BOOL)checkIfAssetNeedsModernization:(BOOL*)arg1 infoString:(id)arg2;
- (BOOL)containsReferences;
- (BOOL)isModernButNotSupportedMediaType:(unsigned int)arg1 mediaSubType:(unsigned int)arg2;

@end
