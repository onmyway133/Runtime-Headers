/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/Versions/A/VectorKit
 */

@interface VKTileSource : NSObject {
    <VKTileSourceClient> * _client;
    double  _contentScale;
    VKTileKeyList * _decoding;
    VKTileKeyList * _failedTiles;
    NSLocale * _locale;
    GEOResourceManifestConfiguration * _manifestConfiguration;
    long long  _mapType;
    VKTileKeyMap * _pendingLoads;
    BOOL  _preloadOnly;
    NSError * _recentError;
    BOOL  _requireWiFi;
    VKSharedResources * _sharedResources;
    struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { 
        struct StylesheetManager<gss::PropertyID> {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _styleManager;
    unsigned char  _targetDisplay;
    struct shared_ptr<md::TaskContext> { 
        struct TaskContext {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _taskContext;
    NSString * _tileLoaderClientIdentifier;
    VKTilePool * _tilePool;
    int  loadingTiles;
}

@property (nonatomic, readwrite) <VKTileSourceClient> *client;
@property (nonatomic, readwrite) double contentScale;
@property (nonatomic, readonly) struct Device { int (**x1)(); struct DeviceVersion { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; struct DeviceCapabilities { bool x_3_1_1; bool x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; struct DeviceSize { unsigned int x_6_2_1; unsigned int x_6_2_2; unsigned int x_6_2_3; } x_3_1_6; } x3; struct DeviceAPIProperties { int x_4_1_1; double x_4_1_2; } x4; int x5; int x6; }*device;
@property (nonatomic, readwrite) long long mapType;
@property (nonatomic, readonly) unsigned int maximumDownloadZoomLevel;
@property (nonatomic, readonly) long long maximumZoomLevel;
@property (nonatomic, readonly) BOOL maximumZoomLevelBoundsCamera;
@property (nonatomic, readonly) long long maximumZoomLevelWithoutOverride;
@property (nonatomic, readonly) unsigned int minimumDownloadZoomLevel;
@property (nonatomic, readonly) long long minimumZoomLevel;
@property (nonatomic, readonly) BOOL minimumZoomLevelBoundsCamera;
@property (nonatomic, readwrite) BOOL preloadOnly;
@property (nonatomic, readwrite) BOOL requireWiFi;
@property (nonatomic, readwrite, retain) VKSharedResources *sharedResources;
@property (nonatomic, readwrite) struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; } styleManager;
@property (nonatomic, readwrite) unsigned char targetDisplay;
@property (nonatomic, readonly) long long tileSize;
@property (nonatomic, readonly) long long zEquivalenceClass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_extraInfoForPendingSourceKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (void)_failedToLoadSourceKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1 downloadKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2 error:(id)arg3;
- (void)_fetchedTile:(id)arg1;
- (BOOL)_shouldDecodeTile:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (BOOL)_shouldUseDecodedTile:(id)arg1 extraInfo:(id)arg2;
- (BOOL)canFetchTileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (void)cancelAllDownloads;
- (void)cancelDownload:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (BOOL)cancelFetchForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (BOOL)cancelFetchForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1 sourceKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg2;
- (void)clearCaches;
- (id)client;
- (double)contentScale;
- (void)dealloc;
- (void)decodeData:(id)arg1 downloadKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2 sourceKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg3;
- (id)detailedDescription;
- (id)detailedDescriptionDictionaryRepresentation;
- (struct Device { int (**x1)(); struct DeviceVersion { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; struct DeviceCapabilities { bool x_3_1_1; bool x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; struct DeviceSize { unsigned int x_6_2_1; unsigned int x_6_2_2; unsigned int x_6_2_3; } x_3_1_6; } x3; struct DeviceAPIProperties { int x_4_1_1; double x_4_1_2; } x4; int x5; int x6; }*)device;
- (void)didFailToLoadTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 error:(id)arg2;
- (void)didFetchData:(id)arg1 forKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2;
- (void)didFinishWithNetwork;
- (void)didLoadTile:(id)arg1 forKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg2;
- (struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })downloadKeyAtX:(unsigned int)arg1 y:(unsigned int)arg2 z:(unsigned int)arg3;
- (struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })downloadKeyForSourceKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (void)failedToDecodeSourceKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (void)fetchTileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (void)fetchTileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1 sourceKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg2;
- (void)fetchedTile:(id)arg1 forKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg2;
- (void)forceDownload;
- (void)foreachTileInPool:(id)arg1;
- (id)initWithResourceManifestConfiguration:(id)arg1 locale:(id)arg2 sharedResources:(id)arg3 taskContext:(struct shared_ptr<md::TaskContext> { struct TaskContext {} *x1; struct __shared_weak_count {} *x2; })arg4;
- (id)initWithTaskContext:(struct shared_ptr<md::TaskContext> { struct TaskContext {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (long long)mapType;
- (unsigned int)maximumDownloadZoomLevel;
- (long long)maximumZoomLevel;
- (BOOL)maximumZoomLevelBoundsCamera;
- (long long)maximumZoomLevelWithoutOverride;
- (unsigned int)minimumDownloadZoomLevel;
- (long long)minimumZoomLevel;
- (BOOL)minimumZoomLevelBoundsCamera;
- (struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; })nativeKeyForRenderKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (void)performDownload:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)populateVisibleTileSets:(id)arg1 withTiles:(id)arg2;
- (BOOL)preloadOnly;
- (BOOL)requireWiFi;
- (void)setClient:(id)arg1;
- (void)setContentScale:(double)arg1;
- (void)setMapType:(long long)arg1;
- (void)setPreloadOnly:(BOOL)arg1;
- (void)setRequireWiFi:(BOOL)arg1;
- (void)setSharedResources:(id)arg1;
- (void)setStyleManager:(struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setTargetDisplay:(unsigned char)arg1;
- (id)sharedResources;
- (struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; })sourceKeyForDownloadKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; })sourceKeyForRenderKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })styleManager;
- (unsigned char)targetDisplay;
- (void)tileAvailabilityChanged:(id)arg1;
- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2 sourceKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg3;
- (id)tileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (id)tileForSourceKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1 renderKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg2;
- (id)tileLoader;
- (long long)tileSize;
- (void)willGoToNetwork;
- (long long)zEquivalenceClass;

@end
