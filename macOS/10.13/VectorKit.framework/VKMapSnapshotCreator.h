/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/Versions/A/VectorKit
 */

@interface VKMapSnapshotCreator : NSObject <MapEngineDelegate, VKImageCanvasDelegate> {
    id  _completion;
    BOOL  _didBecomeFullyDrawn;
    BOOL  _didSoftDealloc;
    unsigned char  _emphasis;
    VKGlobeImageCanvas * _globeCanvas;
    BOOL  _hasFailedTiles;
    NSLocale * _locale;
    GEOResourceManifestConfiguration * _manifestConfiguration;
    VKMapImageCanvas * _mapCanvas;
    struct { 
        unsigned char timePeriod; 
        unsigned char overlayType; 
        unsigned char applicationState; 
        unsigned char searchResultsType; 
        BOOL mapHasLabels; 
    }  _mapDisplayStyle;
    struct unique_ptr<md::MapEngine, std::__1::default_delete<md::MapEngine> > { 
        struct __compressed_pair<md::MapEngine *, std::__1::default_delete<md::MapEngine> > { 
            struct MapEngine {} *__first_; 
        } __ptr_; 
    }  _mapEngine;
    long long  _mapType;
    VKMemoryObserver * _memoryObserver;
    struct shared_ptr<md::TaskContext> { 
        struct TaskContext {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _taskContext;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (nonatomic, readwrite) unsigned char emphasis;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readwrite) long long labelScaleFactor;
@property (nonatomic, readwrite) BOOL localizeLabels;
@property (nonatomic, readwrite) struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; BOOL x5; } mapDisplayStyle;
@property (nonatomic, readwrite) long long mapType;
@property (nonatomic, readwrite) BOOL showsBuildings;
@property (nonatomic, readwrite) BOOL showsPointsOfInterest;
@property (nonatomic, readwrite) BOOL showsVenues;
@property (atomic, readonly) struct CGSize { double x1; double x2; } size;
@property (atomic, readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/VectorKit.framework/Versions/A/VectorKit

+ (BOOL)supportsSharingThumbnails;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_transferSettingsFrom:(id)arg1 to:(id)arg2;
- (id)activeCanvas;
- (void)addCustomFeatureDataSource:(id)arg1;
- (void)cancel;
- (void)cancelFlushingTileDecodes:(BOOL)arg1;
- (void)dealloc;
- (void)didPresent;
- (void)didReceiveMemoryWarning:(id)arg1;
- (unsigned char)emphasis;
- (void)imageCanvasDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(BOOL)arg2;
- (void)imageCanvasWillBecomeFullyDrawn:(id)arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 homeQueue:(id)arg3;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 homeQueue:(id)arg3 manifestConfiguration:(id)arg4 locale:(id)arg5;
- (BOOL)isRoadClassDisabled:(int)arg1;
- (long long)labelScaleFactor;
- (BOOL)localizeLabels;
- (void)lookAtX:(unsigned long long)arg1 y:(unsigned long long)arg2 z:(unsigned long long)arg3;
- (struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; BOOL x5; })mapDisplayStyle;
- (long long)mapType;
- (void)nearestVenueDidChange:(const struct Venue { unsigned long long x1; unsigned long long x2; struct vector<md::VenueBuilding, std::__1::allocator<md::VenueBuilding> > { struct VenueBuilding {} *x_3_1_1; struct VenueBuilding {} *x_3_1_2; struct __compressed_pair<md::VenueBuilding *, std::__1::allocator<md::VenueBuilding> > { struct VenueBuilding {} *x_3_2_1; } x_3_1_3; } x3; struct Polygon2<double> { struct vector<gm::Matrix<double, 2, 1>, std::__1::allocator<gm::Matrix<double, 2, 1> > > { struct Matrix<double, 2, 1> {} *x_1_2_1; struct Matrix<double, 2, 1> {} *x_1_2_2; struct __compressed_pair<gm::Matrix<double, 2, 1> *, std::__1::allocator<gm::Matrix<double, 2, 1> > > { struct Matrix<double, 2, 1> {} *x_3_3_1; } x_1_2_3; } x_4_1_1; } x4; struct ConvexHull2<double> { struct vector<gm::Matrix<double, 2, 1>, std::__1::allocator<gm::Matrix<double, 2, 1> > > { struct Matrix<double, 2, 1> {} *x_1_2_1; struct Matrix<double, 2, 1> {} *x_1_2_2; struct __compressed_pair<gm::Matrix<double, 2, 1> *, std::__1::allocator<gm::Matrix<double, 2, 1> > > { struct Matrix<double, 2, 1> {} *x_3_3_1; } x_1_2_3; } x_5_1_1; } x5; }*)arg1 building:(const struct VenueBuilding { struct vector<md::VenueLevel, std::__1::allocator<md::VenueLevel> > { struct VenueLevel {} *x_1_1_1; struct VenueLevel {} *x_1_1_2; struct __compressed_pair<md::VenueLevel *, std::__1::allocator<md::VenueLevel> > { struct VenueLevel {} *x_3_2_1; } x_1_1_3; } x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; short x6; struct Matrix<double, 2, 1> { double x_7_1_1[2]; } x7; struct ConvexHull2<double> { struct vector<gm::Matrix<double, 2, 1>, std::__1::allocator<gm::Matrix<double, 2, 1> > > { struct Matrix<double, 2, 1> {} *x_1_2_1; struct Matrix<double, 2, 1> {} *x_1_2_2; struct __compressed_pair<gm::Matrix<double, 2, 1> *, std::__1::allocator<gm::Matrix<double, 2, 1> > > { struct Matrix<double, 2, 1> {} *x_3_3_1; } x_1_2_3; } x_8_1_1; } x8; }*)arg2;
- (void)removeCustomFeatureDataSource:(id)arg1;
- (void)renderRequest:(id)arg1 completion:(id)arg2;
- (void)renderSnapshot:(id)arg1;
- (void)setCenterCoordinate:(struct { double x1; double x2; })arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4;
- (void)setEmphasis:(unsigned char)arg1;
- (void)setLabelScaleFactor:(long long)arg1;
- (void)setLocalizeLabels:(BOOL)arg1;
- (void)setMapDisplayStyle:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; BOOL x5; })arg1;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3;
- (void)setMapType:(long long)arg1;
- (void)setShowsBuildings:(BOOL)arg1;
- (void)setShowsPointsOfInterest:(BOOL)arg1;
- (void)setShowsVenues:(BOOL)arg1;
- (BOOL)showsBuildings;
- (BOOL)showsPointsOfInterest;
- (BOOL)showsVenues;
- (struct CGSize { double x1; double x2; })size;
- (void)softDealloc;
- (bool)wantsTimerTick;
- (void)willLayoutWithTimestamp:(double)arg1;

// Image: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit

// VKMapSnapshotCreator (MapKitAdditions)

- (void)_mapkit_configureFromDefaults;

@end
