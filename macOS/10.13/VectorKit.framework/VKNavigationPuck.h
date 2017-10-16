/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/Versions/A/VectorKit
 */

@interface VKNavigationPuck : NSObject <VKTrackableAnnotationPresentation> {
    BOOL  _animatingToCoordinate;
    struct AnimationRunner { struct MapEngine {} *x1; } * _animationRunner;
    <VKAnnotation> * _annotation;
    struct NavigationPuck { struct CPuckStyleInfo {} *x1; struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_2_1; } x_2_1_1; struct Unit<RadianUnitDescription, double> { double x_2_2_1; } x_2_1_2; struct Unit<MeterUnitDescription, double> { double x_3_2_1; } x_2_1_3; } x2; struct Unit<RadianUnitDescription, double> { double x_3_1_1; } x3; float x4; float x5; int x6; bool x7; bool x8; bool x9; } * _navigationPuck;
    VKTimedAnimation * _puckStyleAnimation;
    BOOL  _stale;
    BOOL  _tracking;
}

@property (nonatomic, readwrite) BOOL animatingToCoordinate;
@property (nonatomic, readwrite, retain) <VKAnnotation> *annotation;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (nonatomic, readwrite) BOOL enabled;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readwrite) int mode;
@property (nonatomic, readwrite) struct { double x1; double x2; } presentationCoordinate;
@property (nonatomic, readwrite) double presentationCourse;
@property (nonatomic, readwrite) float scale;
@property (nonatomic, readwrite) BOOL showCourse;
@property (nonatomic, readwrite) BOOL stale;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readwrite) BOOL tracking;

- (BOOL)animatingToCoordinate;
- (id)annotation;
- (void)dealloc;
- (void)destroyAnimationRunner;
- (BOOL)enabled;
- (id)initWithAnimationRunner:(struct AnimationRunner { struct MapEngine {} *x1; }*)arg1;
- (int)mode;
- (struct { double x1; double x2; })presentationCoordinate;
- (double)presentationCourse;
- (struct NavigationPuck { struct CPuckStyleInfo {} *x1; struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_2_1; } x_2_1_1; struct Unit<RadianUnitDescription, double> { double x_2_2_1; } x_2_1_2; struct Unit<MeterUnitDescription, double> { double x_3_2_1; } x_2_1_3; } x2; struct Unit<RadianUnitDescription, double> { double x_3_1_1; } x3; float x4; float x5; int x6; bool x7; bool x8; bool x9; }*)puck;
- (void)runAnimation:(id)arg1;
- (float)scale;
- (void)setAnimatingToCoordinate:(BOOL)arg1;
- (void)setAnnotation:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setMode:(int)arg1;
- (void)setPresentationCoordinate:(struct { double x1; double x2; })arg1;
- (void)setPresentationCourse:(double)arg1;
- (void)setScale:(float)arg1;
- (void)setShowCourse:(BOOL)arg1;
- (void)setStale:(BOOL)arg1;
- (void)setTracking:(BOOL)arg1;
- (BOOL)showCourse;
- (BOOL)stale;
- (BOOL)tracking;

@end
