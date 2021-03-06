/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface _GEOTransitRoutePreloaderData : NSObject {
    _GEOTransitPreloadCamera * _camera;
    unsigned long long  _currentBatchGeneration;
    BOOL  _isSufficientlyLoaded;
    NSMutableSet * _placecardsMissed;
    NSMutableSet * _placecardsReceived;
    NSMutableArray * _preloadBatches;
    GEOTileKeyList * _tilesLoadingOrLoaded;
    GEOTileKeyList * _tilesMissed;
    GEOTileKeyList * _tilesReceived;
}

@property (nonatomic, readwrite, retain) _GEOTransitPreloadCamera *camera;
@property (nonatomic, readwrite) unsigned long long currentBatchGeneration;
@property (nonatomic, readwrite) BOOL isSufficientlyLoaded;
@property (nonatomic, readwrite, retain) NSMutableSet *placecardsMissed;
@property (nonatomic, readwrite, retain) NSMutableSet *placecardsReceived;
@property (nonatomic, readwrite, retain) NSMutableArray *preloadBatches;
@property (nonatomic, readwrite, retain) GEOTileKeyList *tilesLoadingOrLoaded;
@property (nonatomic, readwrite, retain) GEOTileKeyList *tilesMissed;
@property (nonatomic, readwrite, retain) GEOTileKeyList *tilesReceived;

- (void).cxx_destruct;
- (id)camera;
- (unsigned long long)currentBatchGeneration;
- (id)init;
- (BOOL)isSufficientlyLoaded;
- (id)placecardsMissed;
- (id)placecardsReceived;
- (id)preloadBatches;
- (void)setCamera:(id)arg1;
- (void)setCurrentBatchGeneration:(unsigned long long)arg1;
- (void)setIsSufficientlyLoaded:(BOOL)arg1;
- (void)setPlacecardsMissed:(id)arg1;
- (void)setPlacecardsReceived:(id)arg1;
- (void)setPreloadBatches:(id)arg1;
- (void)setTilesLoadingOrLoaded:(id)arg1;
- (void)setTilesMissed:(id)arg1;
- (void)setTilesReceived:(id)arg1;
- (id)tilesLoadingOrLoaded;
- (id)tilesMissed;
- (id)tilesReceived;

@end
