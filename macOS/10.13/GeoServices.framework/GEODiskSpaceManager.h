/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEODiskSpaceManager : NSObject <GEODiskSpaceProvider> {
    NSString * _cacheDeleteID;
    unsigned long long  _cachedPurgableSpace;
    double  _cachedPurgableTime;
    NSMutableArray * _diskSpaceProviders;
    BOOL  _freePurgableInProgress;
    double  _lastSignificantUpdate;
}

@property (atomic, readonly, copy) NSString *cacheDeleteID;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_registerCacheDeleteCallbacks;
- (id)_validVolume:(id)arg1;
- (void)addDiskSpaceProvider:(id)arg1;
- (id)cacheDeleteID;
- (unsigned long long)freePurgableDiskSpace:(unsigned long long)arg1 urgency:(int)arg2;
- (id)initWithCacheDeleteID:(id)arg1;
- (unsigned long long)purgableDiskSpaceForUrgency:(int)arg1;
- (void)reportSignificantPurgableDiskSpaceUpdate;

// GEODiskSpaceManager (MapLayerData)

- (BOOL)shouldIncreaseCacheSizeBy:(unsigned long long)arg1 urgency:(int)arg2;

@end