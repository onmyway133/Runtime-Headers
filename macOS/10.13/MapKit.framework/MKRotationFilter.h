/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
 */

@interface MKRotationFilter : NSObject {
    double  _additionalSnappingAngle;
    <MKRotationFilterDelegate> * _delegate;
    double  _gestureStartAngle;
    VKMapView * _mapLayer;
    double  _previousVerticalYawOverride;
    BOOL  _snappedAtStart;
    BOOL  _snappedToNorth;
    BOOL  _snappingEnabled;
    BOOL  _userRotatedAwayFromVerticalYaw;
}

@property (nonatomic, readwrite) double additionalSnappingAngle;
@property (nonatomic, readwrite) <MKRotationFilterDelegate> *delegate;
@property (getter=isSnappedToNorth, nonatomic, readwrite) BOOL snappedToNorth;

- (void).cxx_destruct;
- (double)additionalSnappingAngle;
- (id)delegate;
- (BOOL)hasAdditionalSnappingAngle;
- (id)init;
- (id)initWithMapLayer:(id)arg1;
- (BOOL)isSnappedToNorth;
- (void)setAdditionalSnappingAngle:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSnappedToNorth:(BOOL)arg1;
- (void)snapToNorthAnimated:(BOOL)arg1 forceTrueNorth:(BOOL)arg2;
- (void)startRotatingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1 withSnapping:(BOOL)arg2;
- (void)stopRotatingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateRotationWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1 newValue:(double)arg2;
- (void)updateSnappedToNorth;

@end
