/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOTransitRoutePreloader : GEORoutePreloader <GEORoutePreloaderSubclass> {
    GEOTransitDecoderData * _decoderData;
    double  _endRoutePosition;
    NSTimer * _geodCrashTimer;
    long long  _indexOfLastStepWithPreparedBatch;
    double  _radialDistanceToImplicateTilesMeters;
    _GEOTransitRoutePreloaderData * _reserved;
    BOOL  _shouldPreloadEntireRoute;
    GEOTransitSuggestedRoute * _suggestedRoute;
    long long  _tilesRequested;
    GEOMapServiceTraits * _traits;
}

@property (nonatomic, readonly) NSObject<OS_os_log> *preloaderLog;

- (void).cxx_destruct;
- (void)_cancelAllBatches;
- (void)_cancelPreloadTasks;
- (void)_geodCrashed:(id)arg1;
- (void)_ignoreAlreadyRequestedTilesAndUpdateGlobalListWithNonDuplicatesForTileKeyList:(id)arg1;
- (void)_loadPlacecardsForBatch:(id)arg1;
- (void)_loadTilesForBatch:(id)arg1;
- (void)_makeBatchForTilesAroundStationsForSteps:(id)arg1;
- (void)_makeBatchesForSteps:(id)arg1;
- (void)_makePreloadBatchForGraph;
- (void)_makePreloadBatchForPlaceDataOnSteps:(id)arg1;
- (void)_makePreloadBatchForSteps:(id)arg1;
- (void)_makePreloadBatchForTilesOnRouteWithSteps:(id)arg1 andPriority:(unsigned int)arg2;
- (void)_performNextRequests;
- (void)_performSubscriptionRequests;
- (struct PolylineCoordinate { unsigned int x1; float x2; })_polylineCoordinateForDouble:(double)arg1;
- (void)_processBatches;
- (void)_processedFinishedBatch:(id)arg1 withPartialStatus:(unsigned long long)arg2;
- (void)_resetErrorCounts;
- (void)_retryFailuresWithErrorsReset:(BOOL)arg1;
- (void)beginLoading;
- (void)dealloc;
- (BOOL)fullDebuggingEnabled;
- (void)getPreloadSetCoordinates:(struct { double x1; double x2; }*)arg1 maxLength:(unsigned long long)arg2 actualLength:(unsigned long long*)arg3;
- (id)initWithRoute:(id)arg1 loggingEnabled:(BOOL)arg2 minimalDebugging:(BOOL)arg3 fullDebugging:(BOOL)arg4 batteryHandler:(id)arg5;
- (BOOL)isSufficientlyLoaded;
- (BOOL)minimalDebuggingEnabled;
- (int)preloadStateForTile:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)preloaderLog;
- (id)route;
- (void)setShouldPreloadEntireRoute:(BOOL)arg1;
- (void)setTraits:(id)arg1;
- (void)stopLoading;
- (long long)tilesRequested;
- (void)updateWithRouteMatch:(id)arg1;

@end