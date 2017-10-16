/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/Versions/A/VectorKit
 */

@interface VKClassicGlobeCanvas : VKScreenCanvas <GEOResourceManifestTileGroupObserver, LabelManagerDelegate, VKCameraControllerDelegate, VKGlobeLineContainerDelegate, VKInteractiveMap, VKMapDataAccess> {
    struct shared_ptr<md::AnchorContext> { 
        struct AnchorContext {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _anchorContext;
    VKARCameraController * _arCameraController;
    BOOL  _arRoadDisabledState;
    id  _artworkIsReadyBlock;
    BOOL  _canShowFlyover;
    BOOL  _coarseLoading;
    double  _contentScale;
    double  _currentZoomLevel;
    struct AltitudeDebugSettings { 
        BOOL altitudePauseLoading; 
        BOOL altitudeFreezeViewNode; 
        BOOL altitudeTexturePaging; 
        BOOL altitudeShowTileBounds; 
        BOOL altitudeThreadDrawing; 
        BOOL altitudeHighResSatellite; 
        BOOL altitudeMipmapSatellite; 
        BOOL altitudeMipmapFlyover; 
        BOOL altitudeMipmapObjectTree; 
        BOOL altitudeShowNightLight; 
        float lodScale; 
        float tileQualityThreshold; 
        float hideMeshTime; 
        float fadeSpeed; 
        BOOL tourSpeedup; 
        float tourSpeedupFactor; 
    }  _debugSettings;
    <VKInteractiveMapDelegate> * _delegate;
    BOOL  _disableLabels;
    BOOL  _disableRoads;
    NSMutableArray * _externalAnchors;
    struct shared_ptr<ggl::FlyoverLibrary> { 
        struct FlyoverLibrary {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _flyoverLibrary;
    int  _flyoverMode;
    struct GlobeAdapter { struct shared_ptr<md::GlobeAdapterData> { struct GlobeAdapterData {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; struct GlobeView {} *x2; struct vector<std::__1::shared_ptr<md::LabelMapTile>, std::__1::allocator<std::__1::shared_ptr<md::LabelMapTile> > > { struct shared_ptr<md::LabelMapTile> {} *x_3_1_1; struct shared_ptr<md::LabelMapTile> {} *x_3_1_2; struct __compressed_pair<std::__1::shared_ptr<md::LabelMapTile> *, std::__1::allocator<std::__1::shared_ptr<md::LabelMapTile> > > { struct shared_ptr<md::LabelMapTile> {} *x_3_2_1; } x_3_1_3; } x3; struct shared_ptr<md::LabelManager> { struct LabelManager {} *x_4_1_1; struct __shared_weak_count {} *x_4_1_2; } x4; struct unique_ptr<md::LabelSettings, std::__1::default_delete<md::LabelSettings> > { struct __compressed_pair<md::LabelSettings *, std::__1::default_delete<md::LabelSettings> > { struct LabelSettings {} *x_1_2_1; } x_5_1_1; } x5; struct _retain_ptr<GEOResourceManifestConfiguration *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_6_1_1)(); id x_6_1_2; /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x_6_1_3; const void*x_6_1_4; void*x_6_1_5; void*x_6_1_6; int x_6_1_7; in void*x_6_1_8; out unsigned int x_6_1_9/* : ? */; void*x_6_1_10; BOOL x_6_1_11; void*x_6_1_12; } x6; } * _globeAdapter;
    VKGlobeCameraController * _globeCameraController;
    struct shared_ptr<md::VKGlobeStylesheet> { 
        struct VKGlobeStylesheet {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _globeStyleSheet;
    BOOL  _initialized;
    struct shared_ptr<bool> { 
        bool *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _isDead;
    BOOL  _isDownloading;
    BOOL  _isLoading;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastCanvasSize;
    VKGlobeLineContainer * _lineContainer;
    GEOResourceManifestConfiguration * _manifestConfiguration;
    struct { 
        unsigned char timePeriod; 
        unsigned char overlayType; 
        unsigned char applicationState; 
        unsigned char searchResultsType; 
        BOOL mapHasLabels; 
    }  _mapDisplayStyle;
    long long  _mapType;
    struct shared_ptr<md::GlobeOverlayContainer> { 
        struct GlobeOverlayContainer {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _overlayContainer;
    /* Warning: unhandled struct encoding: '{RealisticRenderer=^^?{shared_ptr<md::TaskContext>=^{TaskContext}^{__shared_weak_count}}{unique_ptr<md::RenderQueue, std::__1::default_delete<md::RenderQueue> >={__compressed_pair<md::RenderQueue *, std::__1::default_delete<md::RenderQueue> >=^{RenderQueue}}}[28^{RenderLayer}][65^{RenderLayer}]^{RunLoopController}^{MapEngine}@^{Device}^{GlobeView}^{Context}^{StencilManager}^{GlobeDispatch}^{CullingNode}^{GlobeTileRenderManager}^{TexturePager}{shared_ptr<md::GlobeOverlayContainer>=^{GlobeOverlayContainer}^{__shared_weak_count}}{shared_ptr<ggl::FlyoverLibrary>=^{FlyoverLibrary}^{__shared_weak_count}}@}' */ struct RealisticRenderer { int (**x1)(); struct shared_ptr<md::TaskContext> { struct TaskContext {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct unique_ptr<md::RenderQueue, std::__1::default_delete<md::RenderQueue> > { struct __compressed_pair<md::RenderQueue *, std::__1::default_delete<md::RenderQueue> > { struct RenderQueue {} *x_1_2_1; } x_3_1_1; } x3; struct RenderLayer {} *x4[28]; struct RenderLayer {} *x5[65]; struct RunLoopController {} *x6; struct MapEngine {} *x7; id x8; struct Device {} x9; struct GlobeView {} *x10; struct Context {} *x11; struct StencilManager {} *x12; struct GlobeDispatch {} *x13; struct CullingNode {} *x14; struct GlobeTileRenderManager {} *x15; struct TexturePager {} *x16; struct shared_ptr<md::GlobeOverlayContainer> { struct GlobeOverlayContainer {} *x_17_1_1; struct __shared_weak_count {} *x_17_1_2; } x17; struct shared_ptr<ggl::FlyoverLibrary> { struct FlyoverLibrary {} *x_18_1_1; struct __shared_weak_count {} *x_18_1_2; } x18; id x19; } * _renderer;
    id  _sceneDidLoadCallback;
    BOOL  _showsBuildings;
    BOOL  _showsVenues;
    BOOL  _tourIsDownloading;
}

@property (nonatomic, readonly) VKARCameraController *arCameraController;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (nonatomic, readwrite) <VKInteractiveMapDelegate> *delegate;
@property (atomic, readonly, copy) NSString *description;
@property (nonatomic, readwrite) BOOL disableLabels;
@property (nonatomic, readwrite) BOOL disableRoads;
@property (nonatomic, readonly) VKAnchorWrapper *externalAnchors;
@property (nonatomic, readonly) BOOL flyoverAvailable;
@property (nonatomic, readonly) int flyoverMode;
@property (getter=isFullyDrawn, nonatomic, readonly) BOOL fullyDrawn;
@property (nonatomic, readonly) VKGlobeCameraController *globeCameraController;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readwrite) long long mapType;
@property (nonatomic, readonly) NSArray *overlays;
@property (nonatomic, readonly) NSSet *persistentOverlays;
@property (nonatomic, readonly) NSArray *rasterOverlays;
@property (nonatomic, readwrite) <VKRouteMatchedAnnotationPresentation> *routeLineSplitAnnotation;
@property (nonatomic, readwrite, copy) id sceneDidLoadCallback;
@property (nonatomic, readwrite) BOOL showsBuildings;
@property (nonatomic, readwrite) BOOL showsVenues;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readwrite) BOOL trafficEnabled;
@property (nonatomic, readwrite) BOOL trafficIncidentsEnabled;
@property (nonatomic, readonly) NSArray *visibleTileSets;

+ (BOOL)supportsMapType:(long long)arg1 scale:(int)arg2 manifestConfiguration:(id)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_centerScreenPoint;
- (struct CameraFrame<geo::Radians, double> { struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_2_1; } x_1_1_1; struct Unit<RadianUnitDescription, double> { double x_2_2_1; } x_1_1_2; struct Unit<MeterUnitDescription, double> { double x_3_2_1; } x_1_1_3; } x1; struct Unit<MeterUnitDescription, double> { double x_2_1_1; } x2; struct Unit<RadianUnitDescription, double> { double x_3_1_1; } x3; struct Unit<RadianUnitDescription, double> { double x_4_1_1; } x4; struct Unit<RadianUnitDescription, double> { double x_5_1_1; } x5; })_lookAtToCameraFrame:(const struct Matrix<double, 3, 1> { double x1[3]; }*)arg1 target:(const struct Matrix<double, 3, 1> { double x1[3]; }*)arg2 up:(const struct Matrix<double, 3, 1> { double x1[3]; }*)arg3;
- (void)_reloadStylesheet;
- (void)_setDefaultFov:(float)arg1;
- (void)_setStyleTransitionProgress:(double)arg1 targetStyle:(struct DisplayStyle { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; })arg2 step:(long long)arg3;
- (double)_styleTransitionProgress;
- (void)_update;
- (void)_updateDebugSettings;
- (void)_viewTransformSetup;
- (void)addExternalAnchor:(id)arg1;
- (void)addOverlay:(id)arg1;
- (void)addPersistentOverlay:(id)arg1;
- (void)addRasterOverlay:(id)arg1;
- (id)annotationCoordinateTest;
- (id)annotationRectTest;
- (id)arCameraController;
- (id)attributionsForCurrentRegion;
- (void)beginStyleAnimationGroup;
- (id)boundsForSelectedTransitLines;
- (id)camera;
- (void)cameraController:(id)arg1 canEnter3DModeDidChange:(BOOL)arg2;
- (void)cameraController:(id)arg1 didBecomePitched:(BOOL)arg2;
- (void)cameraController:(id)arg1 didChangeRegionAnimated:(BOOL)arg2;
- (void)cameraController:(id)arg1 flyoverModeDidChange:(int)arg2;
- (void)cameraController:(id)arg1 flyoverModeWillChange:(int)arg2;
- (id)cameraController:(id)arg1 presentationForAnnotation:(id)arg2;
- (void)cameraController:(id)arg1 willChangeRegionAnimated:(BOOL)arg2;
- (void)cameraControllerDidChangeCameraState:(id)arg1;
- (void)cameraControllerDidFinishInitialTrackingAnimation:(id)arg1;
- (void)cameraControllerRequestsLayout:(id)arg1;
- (id)consoleString:(BOOL)arg1;
- (struct CGPoint { double x1; double x2; })convertCoordinateToCameraModelPoint:(struct { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertCoordinateToPoint:(struct { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertMapPointToPoint:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })convertPointToCoordinate:(struct CGPoint { double x1; double x2; })arg1;
- (struct { double x1; double x2; })convertPointToCoordinateOnSphere:(struct CGPoint { double x1; double x2; })arg1;
- (struct { double x1; double x2; })convertPointToMapPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)createFlyoverPreTourAnimation:(id)arg1 duration:(double)arg2;
- (float)currentRoadSignOffset;
- (BOOL)currentSceneRequiresMSAA;
- (void)dealloc;
- (void)debugHighlightFeatureMarker:(const struct shared_ptr<md::FeatureMarker> { }*)arg1;
- (void)debugHighlightObjectAtPoint:(struct CGPoint { double x1; double x2; })arg1 highlightTarget:(unsigned char)arg2;
- (id)debugLabelString:(BOOL)arg1;
- (id)delegate;
- (void)deselectTransitLineMarker;
- (id)detailedDescription;
- (id)detailedDescriptionDictionaryRepresentation;
- (void)didPresent;
- (void)didReceiveMemoryWarning:(BOOL)arg1 beAggressive:(BOOL)arg2;
- (void)disableFlyoverStatistics;
- (BOOL)disableLabels;
- (BOOL)disableRoads;
- (void)disableTileAnalytics;
- (double)displayZoomLevel;
- (void)enableFlyoverStatistics;
- (void)enableTileAnalytics;
- (void)endStyleAnimationGroup;
- (id)externalAnchors;
- (void)finishStyleBlend;
- (BOOL)flyoverAvailable;
- (int)flyoverMode;
- (id)flyoverStatistics;
- (double)fovAdjustment;
- (void)gglWillDrawWithTimestamp;
- (id)globeCameraController;
- (struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_1_1; } x1; struct Unit<RadianUnitDescription, double> { double x_2_1_1; } x2; struct Unit<MeterUnitDescription, double> { double x_3_1_1; } x3; })groundCoordinateForScreenPixel:(const struct Matrix<double, 2, 1> { double x1[2]; }*)arg1 cameraFrame:(const struct CameraFrame<geo::Radians, double> { struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_2_1; } x_1_1_1; struct Unit<RadianUnitDescription, double> { double x_2_2_1; } x_1_1_2; struct Unit<MeterUnitDescription, double> { double x_3_2_1; } x_1_1_3; } x1; struct Unit<MeterUnitDescription, double> { double x_2_1_1; } x2; struct Unit<RadianUnitDescription, double> { double x_3_1_1; } x3; struct Unit<RadianUnitDescription, double> { double x_4_1_1; } x4; struct Unit<RadianUnitDescription, double> { double x_5_1_1; } x5; }*)arg2;
- (double)heightAtCoordinate:(const struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_1_1; } x1; struct Unit<RadianUnitDescription, double> { double x_2_1_1; } x2; struct Unit<MeterUnitDescription, double> { double x_3_1_1; } x3; }*)arg1;
- (id)initWithMapEngine:(struct MapEngine { int (**x1)(); struct shared_ptr<md::TaskContext> { struct TaskContext {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct _retain_ptr<GEOResourceManifestConfiguration *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_3_1_1)(); id x_3_1_2; /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x_3_1_3; const void*x_3_1_4; void*x_3_1_5; void*x_3_1_6; int x_3_1_7; in void*x_3_1_8; out unsigned int x_3_1_9/* : ? */; void*x_3_1_10; BOOL x_3_1_11; void*x_3_1_12; } x3; struct _release_objc { } x4; }*)arg1 inBackground:(BOOL)arg2 manifestConfiguration:(id)arg3;
- (void)insertRasterOverlay:(id)arg1 aboveOverlay:(id)arg2;
- (void)insertRasterOverlay:(id)arg1 belowOverlay:(id)arg2;
- (BOOL)isFullyDrawn;
- (BOOL)isPointValidForGesturing:(struct CGPoint { double x1; double x2; })arg1;
- (BOOL)isShowingNoDataPlaceholders;
- (void)labelManager:(struct LabelManager { int (**x1)(); struct weak_ptr<md::LabelManager> { struct LabelManager {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct _retain_ptr<VKSharedResources *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_3_1_1)(); id x_3_1_2; /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x_3_1_3; const void*x_3_1_4; void*x_3_1_5; void*x_3_1_6; int x_3_1_7; in void*x_3_1_8; out unsigned int x_3_1_9/* : ? */; void*x_3_1_10; BOOL x_3_1_11; void*x_3_1_12; } x3; struct _release_objc { } x4; }*)arg1 pendingArtworkIsReady:(BOOL)arg2;
- (void)labelManager:(struct LabelManager { int (**x1)(); struct weak_ptr<md::LabelManager> { struct LabelManager {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct _retain_ptr<VKSharedResources *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_3_1_1)(); id x_3_1_2; /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x_3_1_3; const void*x_3_1_4; void*x_3_1_5; void*x_3_1_6; int x_3_1_7; in void*x_3_1_8; out unsigned int x_3_1_9/* : ? */; void*x_3_1_10; BOOL x_3_1_11; void*x_3_1_12; } x3; struct _release_objc { } x4; }*)arg1 selectedLabelMarkerDidChangeState:(const struct shared_ptr<md::LabelMarker> { struct LabelMarker {} *x1; struct __shared_weak_count {} *x2; }*)arg2;
- (void)labelManager:(struct LabelManager { int (**x1)(); struct weak_ptr<md::LabelManager> { struct LabelManager {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct _retain_ptr<VKSharedResources *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_3_1_1)(); id x_3_1_2; /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x_3_1_3; const void*x_3_1_4; void*x_3_1_5; void*x_3_1_6; int x_3_1_7; in void*x_3_1_8; out unsigned int x_3_1_9/* : ? */; void*x_3_1_10; BOOL x_3_1_11; void*x_3_1_12; } x3; struct _release_objc { } x4; }*)arg1 selectedLabelMarkerWillDisappear:(const struct shared_ptr<md::LabelMarker> { struct LabelMarker {} *x1; struct __shared_weak_count {} *x2; }*)arg2;
- (void)labelManager:(struct LabelManager { int (**x1)(); struct weak_ptr<md::LabelManager> { struct LabelManager {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct _retain_ptr<VKSharedResources *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_3_1_1)(); id x_3_1_2; /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x_3_1_3; const void*x_3_1_4; void*x_3_1_5; void*x_3_1_6; int x_3_1_7; in void*x_3_1_8; out unsigned int x_3_1_9/* : ? */; void*x_3_1_10; BOOL x_3_1_11; void*x_3_1_12; } x3; struct _release_objc { } x4; }*)arg1 setNeedsDisplay:(BOOL)arg2;
- (void)labelManager:(struct LabelManager { int (**x1)(); struct weak_ptr<md::LabelManager> { struct LabelManager {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct _retain_ptr<VKSharedResources *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_3_1_1)(); id x_3_1_2; /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x_3_1_3; const void*x_3_1_4; void*x_3_1_5; void*x_3_1_6; int x_3_1_7; in void*x_3_1_8; out unsigned int x_3_1_9/* : ? */; void*x_3_1_10; BOOL x_3_1_11; void*x_3_1_12; } x3; struct _release_objc { } x4; }*)arg1 setNeedsLayout:(BOOL)arg2;
- (void)labelManagerDidLayout:(struct LabelManager { int (**x1)(); struct weak_ptr<md::LabelManager> { struct LabelManager {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct _retain_ptr<VKSharedResources *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_3_1_1)(); id x_3_1_2; /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x_3_1_3; const void*x_3_1_4; void*x_3_1_5; void*x_3_1_6; int x_3_1_7; in void*x_3_1_8; out unsigned int x_3_1_9/* : ? */; void*x_3_1_10; BOOL x_3_1_11; void*x_3_1_12; } x3; struct _release_objc { } x4; }*)arg1;
- (struct LabelSettings { struct LabelSettings_Presentation { struct LabelSettings {} *x_1_1_1; } x1; struct LabelSettings_Navigation { struct LabelSettings {} *x_2_1_1; } x2; struct LabelSettings_Markers { struct LabelSettings {} *x_3_1_1; } x3; struct shared_ptr<md::LabelManager> { struct LabelManager {} *x_4_1_1; struct __shared_weak_count {} *x_4_1_2; } x4; struct unique_ptr<md::LabelSettingsData, std::__1::default_delete<md::LabelSettingsData> > { struct __compressed_pair<md::LabelSettingsData *, std::__1::default_delete<md::LabelSettingsData> > { struct LabelSettingsData {} *x_1_2_1; } x_5_1_1; } x5; }*)labelSettings;
- (void)lineContainerNeedsDisplay:(id)arg1;
- (long long)mapType;
- (struct GlobeOverlayContainer { struct GlobeView {} *x1; struct NSMutableArray {} *x2; struct mutex { struct _opaque_pthread_mutex_t { long long x_1_2_1; BOOL x_1_2_2[56]; } x_3_1_1; } x3; double x4; }*)overlayContainer;
- (id)overlays;
- (void)pauseFlyoverTourAnimation;
- (id)persistentOverlays;
- (void)prepareFlyoverAnimation:(id)arg1 completion:(id)arg2;
- (const struct Matrix<double, 4, 4> { double x1[16]; }*)projectionMatrix;
- (void)puckAnimator:(id)arg1 updatedPosition:(const struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_1_1; } x1; struct Unit<RadianUnitDescription, double> { double x_2_1_1; } x2; struct Unit<MeterUnitDescription, double> { double x_3_1_1; } x3; }*)arg2 course:(const struct Unit<RadianUnitDescription, double> { double x1; }*)arg3;
- (id)rasterOverlays;
- (void)removeExternalAnchor:(id)arg1;
- (void)removeOverlay:(id)arg1;
- (void)removePersistentOverlay:(id)arg1;
- (void)removeRasterOverlay:(id)arg1;
- (void)requestStylesheetAnimation:(id)arg1 targetMapDisplayStyle:(struct DisplayStyle { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; })arg2 setupHandler:(id)arg3;
- (void)resetFlyoverStatistics;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)resumeFlyoverTourAnimation;
- (struct RigidTransform<double> { struct Quaternion<double> { struct Matrix<double, 3, 1> { double x_1_2_1[3]; } x_1_1_1; double x_1_1_2; } x1; struct Matrix<double, 3, 1> { double x_2_1_1[3]; } x2; })rigidTransformForFrame:(const struct CameraFrame<geo::Radians, double> { struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_2_1; } x_1_1_1; struct Unit<RadianUnitDescription, double> { double x_2_2_1; } x_1_1_2; struct Unit<MeterUnitDescription, double> { double x_3_2_1; } x_1_1_3; } x1; struct Unit<MeterUnitDescription, double> { double x_2_1_1; } x2; struct Unit<RadianUnitDescription, double> { double x_3_1_1; } x3; struct Unit<RadianUnitDescription, double> { double x_4_1_1; } x4; struct Unit<RadianUnitDescription, double> { double x_5_1_1; } x5; }*)arg1;
- (struct CameraFrame<geo::Radians, double> { struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_2_1; } x_1_1_1; struct Unit<RadianUnitDescription, double> { double x_2_2_1; } x_1_1_2; struct Unit<MeterUnitDescription, double> { double x_3_2_1; } x_1_1_3; } x1; struct Unit<MeterUnitDescription, double> { double x_2_1_1; } x2; struct Unit<RadianUnitDescription, double> { double x_3_1_1; } x3; struct Unit<RadianUnitDescription, double> { double x_4_1_1; } x4; struct Unit<RadianUnitDescription, double> { double x_5_1_1; } x5; })rotateCameraFrameAboutCoordinate:(const struct CameraFrame<geo::Radians, double> { struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_2_1; } x_1_1_1; struct Unit<RadianUnitDescription, double> { double x_2_2_1; } x_1_1_2; struct Unit<MeterUnitDescription, double> { double x_3_2_1; } x_1_1_3; } x1; struct Unit<MeterUnitDescription, double> { double x_2_1_1; } x2; struct Unit<RadianUnitDescription, double> { double x_3_1_1; } x3; struct Unit<RadianUnitDescription, double> { double x_4_1_1; } x4; struct Unit<RadianUnitDescription, double> { double x_5_1_1; } x5; }*)arg1 coordinate:(struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_1_1; } x1; struct Unit<RadianUnitDescription, double> { double x_2_1_1; } x2; struct Unit<MeterUnitDescription, double> { double x_3_1_1; } x3; })arg2 deltaAngle:(double)arg3;
- (id)routeLineSplitAnnotation;
- (id)sceneDidLoadCallback;
- (struct Matrix<double, 2, 1> { double x1[2]; })screenPixelForCoordinate:(const struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_1_1; } x1; struct Unit<RadianUnitDescription, double> { double x_2_1_1; } x2; struct Unit<MeterUnitDescription, double> { double x_3_1_1; } x3; }*)arg1 cameraFrame:(const struct CameraFrame<geo::Radians, double> { struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_2_1; } x_1_1_1; struct Unit<RadianUnitDescription, double> { double x_2_2_1; } x_1_1_2; struct Unit<MeterUnitDescription, double> { double x_3_2_1; } x_1_1_3; } x1; struct Unit<MeterUnitDescription, double> { double x_2_1_1; } x2; struct Unit<RadianUnitDescription, double> { double x_3_1_1; } x3; struct Unit<RadianUnitDescription, double> { double x_4_1_1; } x4; struct Unit<RadianUnitDescription, double> { double x_5_1_1; } x5; }*)arg2;
- (void)selectTransitLineMarker:(id)arg1;
- (id)selectedTransitLineIDs;
- (void)setCameraFrame:(const struct CameraFrame<geo::Radians, double> { struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_2_1; } x_1_1_1; struct Unit<RadianUnitDescription, double> { double x_2_2_1; } x_1_1_2; struct Unit<MeterUnitDescription, double> { double x_3_2_1; } x_1_1_3; } x1; struct Unit<MeterUnitDescription, double> { double x_2_1_1; } x2; struct Unit<RadianUnitDescription, double> { double x_3_1_1; } x3; struct Unit<RadianUnitDescription, double> { double x_4_1_1; } x4; struct Unit<RadianUnitDescription, double> { double x_5_1_1; } x5; }*)arg1;
- (void)setContentsScale:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisableLabels:(BOOL)arg1;
- (void)setDisableRoads:(BOOL)arg1;
- (void)setMapType:(long long)arg1;
- (void)setMapType:(long long)arg1 animated:(BOOL)arg2;
- (void)setNavCameraIsDetached:(BOOL)arg1;
- (void)setNightMode:(BOOL)arg1;
- (void)setRouteLineSplitAnnotation:(id)arg1;
- (void)setSceneDidLoadCallback:(id)arg1;
- (void)setShowsBuildings:(BOOL)arg1;
- (void)setShowsVenues:(BOOL)arg1;
- (void)setStylesheetMapDisplayStyle:(struct DisplayStyle { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; })arg1;
- (void)setTrafficEnabled:(BOOL)arg1;
- (void)setTrafficIncidentsEnabled:(BOOL)arg1;
- (void)setupMapScene;
- (BOOL)shouldHideOffscreenSelectedAnnotation;
- (BOOL)showsBuildings;
- (BOOL)showsVenues;
- (struct DisplayStyle { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; })sourceMapDisplayStyle;
- (void)startFlyoverAnimation:(id)arg1 animateToStart:(BOOL)arg2 labelChanged:(id)arg3 stateChange:(id)arg4;
- (void)startFlyoverTourAnimation:(unsigned long long)arg1 animateToStart:(BOOL)arg2 labelChanged:(id)arg3 stateChange:(id)arg4;
- (void)stopAnimations;
- (void)stopFlyoverAnimation;
- (void)stopLoading;
- (void)stopSnappingAnimations;
- (struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })styleManager;
- (void)stylesheetAnimationDidEnd:(BOOL)arg1;
- (void)stylesheetAnimationDidProgress:(float)arg1;
- (void)stylesheetAnimationWillStartFromStyle:(struct DisplayStyle { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; })arg1 toStyle:(struct DisplayStyle { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; })arg2;
- (BOOL)supportsMapDisplayStyle:(struct DisplayStyle { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; })arg1;
- (BOOL)trafficEnabled;
- (BOOL)trafficIncidentsEnabled;
- (void)transferStateFromCanvas:(id)arg1;
- (id)transitLineMarkersForSelectionAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)transitLineMarkersInCurrentViewport;
- (void)transitionToTracking:(BOOL)arg1 mapMode:(long long)arg2 startLocation:(struct { double x1; double x2; })arg3 startCourse:(double)arg4 cameraController:(id)arg5 pounceCompletionHandler:(id)arg6;
- (struct Matrix<double, 3, 1> { double x1[3]; })upForCoordinate:(const struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_1_1; } x1; struct Unit<RadianUnitDescription, double> { double x_2_1_1; } x2; struct Unit<MeterUnitDescription, double> { double x_3_1_1; } x3; }*)arg1;
- (void)updateCameraForFrameResize;
- (void)updateCameraFromGlobe;
- (void)updateWithTimestamp:(double)arg1;
- (BOOL)useNewRenderPath;
- (id)viewportInfo;
- (id)visibleTileSets;
- (void)waitForLoading;
- (struct Matrix<double, 4, 4> { double x1[16]; })worldViewProjectionMatrix:(const struct CameraFrame<geo::Radians, double> { struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_2_1; } x_1_1_1; struct Unit<RadianUnitDescription, double> { double x_2_2_1; } x_1_1_2; struct Unit<MeterUnitDescription, double> { double x_3_2_1; } x_1_1_3; } x1; struct Unit<MeterUnitDescription, double> { double x_2_1_1; } x2; struct Unit<RadianUnitDescription, double> { double x_3_1_1; } x3; struct Unit<RadianUnitDescription, double> { double x_4_1_1; } x4; struct Unit<RadianUnitDescription, double> { double x_5_1_1; } x5; }*)arg1;

@end
