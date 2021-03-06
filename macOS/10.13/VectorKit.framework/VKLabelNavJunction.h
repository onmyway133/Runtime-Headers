/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/Versions/A/VectorKit
 */

@interface VKLabelNavJunction : NSObject <VKLabelNavFeature> {
    BOOL  _areLabelsDisabled;
    BOOL  _cachedSignVisibility;
    unsigned long long  _depthFromRoute;
    float  _distanceFromPreviousShieldLabel;
    BOOL  _foundRoads;
    struct { unsigned int x1; unsigned int x2; struct { /* ? */ } *x3; } * _geoJunction;
    BOOL  _hasSharedRouteDirection;
    VKLabelNavRoad * _incomingRoad;
    BOOL  _isOnDualCarriageway;
    BOOL  _isOverpass;
    BOOL  _isPicked;
    BOOL  _isRouteOverpass;
    BOOL  _isRouteRefineJunction;
    BOOL  _isVisibilityCached;
    BOOL  _isVisible;
    VKLabelNavRoadLabel * _junctionSign;
    struct { struct { id x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; unsigned int x_1_1_6; unsigned long long x_1_1_7; BOOL x_1_1_8; unsigned long long x_1_1_9; float x_1_1_10; unsigned long long x_1_1_11; id x_1_1_12; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; struct { float x_3_1_1; float x_3_1_2; } x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; short x8; unsigned char x9; struct { /* ? */ } *x10; float x11; float x12; unsigned int x13; unsigned char x14; BOOL x15; BOOL x16; BOOL x17; } * _labelFeature;
    int  _largestRoadClass;
    NSString * _name;
    VKLabelNavRoad * _outgoingRoad;
    VKLabelNavJunction * _overpassJunction;
    int  _preferredLabelPlacement;
    NSMutableArray * _roads;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _routeOffset;
    struct Matrix<float, 2, 1> { 
        float _e[2]; 
    }  _sharedRouteDirection;
    double  _sortValue;
    VKLabelTile * _tile;
    struct Matrix<float, 2, 1> { 
        float _e[2]; 
    }  _tileCoordinate;
    struct Matrix<double, 3, 1> { 
        double _e[3]; 
    }  _worldCoordinate;
    double  _worldUnitsPerMeter;
}

@property (nonatomic, readwrite) unsigned long long depthFromRoute;
@property (nonatomic, readwrite) float distanceFromPreviousShieldLabel;
@property (nonatomic, readonly) const struct { unsigned int x1; unsigned int x2; struct { /* ? */ } *x3; }*geoJunction;
@property (nonatomic, readonly) BOOL hasSharedRouteDirection;
@property (nonatomic, readonly) VKLabelNavRoad *incomingRoad;
@property (nonatomic, readonly) long long intraRoadPriority;
@property (nonatomic, readonly) BOOL isAwayFromRoute;
@property (nonatomic, readonly) BOOL isEtaFeature;
@property (nonatomic, readonly) BOOL isGuidanceStepStart;
@property (nonatomic, readonly) BOOL isInGuidance;
@property (nonatomic, readonly) BOOL isIntersection;
@property (nonatomic, readonly) BOOL isIntraRamp;
@property (nonatomic, readonly) BOOL isMultiRoadIntersection;
@property (nonatomic, readonly) BOOL isOffRouteGraph;
@property (nonatomic, readwrite) BOOL isOnDualCarriageway;
@property (nonatomic, readonly) BOOL isOnRoute;
@property (nonatomic, readonly) BOOL isOverpass;
@property (nonatomic, readwrite) BOOL isPicked;
@property (nonatomic, readonly) BOOL isRamp;
@property (nonatomic, readonly) BOOL isRoadTerminus;
@property (nonatomic, readwrite) BOOL isRouteOverpass;
@property (nonatomic, readwrite) BOOL isRouteRefineJunction;
@property (nonatomic, readonly) BOOL isStartOfRoadName;
@property (nonatomic, readonly) BOOL isTileEdgeJunction;
@property (nonatomic, readonly) BOOL isTrafficCameraFeature;
@property (nonatomic, readonly) BOOL isVisible;
@property (nonatomic, readonly) VKLabelNavRoadLabel *junctionSign;
@property (nonatomic, readonly) int largestRoadClass;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) VKLabelNavRoad *outgoingRoad;
@property (nonatomic, readwrite) VKLabelNavJunction *overpassJunction;
@property (nonatomic, readwrite) int preferredLabelPlacement;
@property (nonatomic, readonly) int requiredLabelPlacement;
@property (nonatomic, readonly) NSArray *roads;
@property (nonatomic, readwrite) struct PolylineCoordinate { unsigned int x1; float x2; } routeOffset;
@property (nonatomic, readwrite) /* Warning: unhandled struct encoding: '{Matrix<float' */ struct  sharedRouteDirection; /* unknown property attribute:  1>=[2f]} */
@property (nonatomic, readonly) NSString *shieldDisplayGroup;
@property (nonatomic, readonly) VKLabelTile *tile;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Matrix<float' */ struct  tileCoordinate; /* unknown property attribute:  1>=[2f]} */
@property (nonatomic, readonly) double worldUnitsPerMeter;

- (id).cxx_construct;
- (struct Matrix<double, 3, 1> { double x1[3]; })_anchorCoordinateForSignOrientation:(unsigned char)arg1;
- (unsigned char)_signOrientationWithDrivingSide:(BOOL)arg1;
- (void)_updateWithNavContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct LabelLayoutContext {} *x3; struct LabelNavLayoutContext {} *x4; }*)arg1;
- (void)_updateWithNavContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct LabelLayoutContext {} *x3; struct LabelNavLayoutContext {} *x4; }*)arg1 threshold:(double)arg2;
- (void)addRouteEdge:(const struct VKLabelNavRouteRoadEdge { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; struct { /* ? */ } *x3; }*)arg1 atA:(BOOL)arg2;
- (void)createLabelWithNavContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct LabelLayoutContext {} *x3; struct LabelNavLayoutContext {} *x4; }*)arg1 isDrivingSideRight:(BOOL)arg2 artworkCache:(struct VKLabelNavArtworkCache { struct unique_ptr<LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> >, std::__1::default_delete<LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> > > > { struct __compressed_pair<LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> > *, std::__1::default_delete<LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> > > > { struct LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> > {} *x_1_2_1; } x_1_1_1; } x1; struct unique_ptr<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> >, std::__1::default_delete<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > > > { struct __compressed_pair<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > *, std::__1::default_delete<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > > > { struct LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > {} *x_1_2_1; } x_2_1_1; } x2; struct unique_ptr<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> >, std::__1::default_delete<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > > > { struct __compressed_pair<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > *, std::__1::default_delete<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > > > { struct LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > {} *x_1_2_1; } x_3_1_1; } x3; }*)arg3;
- (void)dealloc;
- (unsigned long long)depthFromRoute;
- (id)description;
- (float)distanceFromPreviousShieldLabel;
- (void)evaluateCrossStreets;
- (void)evaluateCrossStreetsUsingRouteJunction:(id)arg1;
- (void)findRoads;
- (const struct { unsigned int x1; unsigned int x2; struct { /* ? */ } *x3; }*)geoJunction;
- (BOOL)hasSharedRouteDirection;
- (id)incomingRoad;
- (id)initWithGEOJunction:(struct { unsigned int x1; unsigned int x2; struct { /* ? */ } *x3; }*)arg1 routeOffset:(struct PolylineCoordinate { unsigned int x1; float x2; })arg2 tile:(id)arg3;
- (id)initWithRoadEdge:(const struct { struct { /* ? */ } *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; struct { /* ? */ } *x6; struct { /* ? */ } *x7; }*)arg1 atA:(BOOL)arg2 routeOffset:(struct PolylineCoordinate { unsigned int x1; float x2; })arg3 tile:(id)arg4;
- (long long)intraRoadPriority;
- (BOOL)isAwayFromRoute;
- (BOOL)isEtaFeature;
- (BOOL)isGuidanceStepStart;
- (BOOL)isInGuidance;
- (BOOL)isIntersection;
- (BOOL)isIntraRamp;
- (BOOL)isMultiRoadIntersection;
- (BOOL)isOffRouteGraph;
- (BOOL)isOnDualCarriageway;
- (BOOL)isOnRoute;
- (BOOL)isOverpass;
- (BOOL)isPicked;
- (BOOL)isRamp;
- (BOOL)isRoadTerminus;
- (BOOL)isRouteOverpass;
- (BOOL)isRouteRefineJunction;
- (BOOL)isStartOfRoadName;
- (BOOL)isTileEdgeJunction;
- (BOOL)isTrafficCameraFeature;
- (BOOL)isVisible;
- (id)junctionSign;
- (int)largestRoadClass;
- (void)layoutWithNavContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct LabelLayoutContext {} *x3; struct LabelNavLayoutContext {} *x4; }*)arg1;
- (BOOL)matchesLocationForJunction:(id)arg1;
- (id)name;
- (id)outgoingRoad;
- (id)overpassJunction;
- (int)preferredLabelPlacement;
- (void)prepareStyleVarsWithContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct LabelLayoutContext {} *x3; struct LabelNavLayoutContext {} *x4; }*)arg1;
- (int)requiredLabelPlacement;
- (id)roads;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeOffset;
- (void)setDepthFromRoute:(unsigned long long)arg1;
- (void)setDistanceFromPreviousShieldLabel:(float)arg1;
- (void)setIsOnDualCarriageway:(BOOL)arg1;
- (void)setIsPicked:(BOOL)arg1;
- (void)setIsRouteOverpass:(BOOL)arg1;
- (void)setIsRouteRefineJunction:(BOOL)arg1;
- (void)setOverpassJunction:(id)arg1;
- (void)setPreferredLabelPlacement:(int)arg1;
- (void)setRouteOffset:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (void)setSharedRouteDirection:(struct Matrix<float, 2, 1> { float x1[2]; })arg1;
- (struct Matrix<float, 2, 1> { float x1[2]; })sharedRouteDirection;
- (id)shieldDisplayGroup;
- (id)tile;
- (struct Matrix<float, 2, 1> { float x1[2]; })tileCoordinate;
- (double)worldUnitsPerMeter;

@end
