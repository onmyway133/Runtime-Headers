/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/Versions/A/VectorKit
 */

@interface VKGlobeGestureCameraController : VKGestureCameraBehavior {
    double  _beganDoublePanPitch;
    struct CameraManager { int (**x1)(); bool x2; bool x3; bool x4; struct Matrix<int, 2, 1> { int x_5_1_1[2]; } x5; struct Matrix<int, 2, 1> { int x_6_1_1[2]; } x6; struct Matrix<int, 2, 1> { int x_7_1_1[2]; } x7; struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_2_1; } x_8_1_1; struct Unit<RadianUnitDescription, double> { double x_2_2_1; } x_8_1_2; struct Unit<MeterUnitDescription, double> { double x_3_2_1; } x_8_1_3; } x8; double x9; bool x10; bool x11; bool x12; bool x13; struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_2_1; } x_14_1_1; struct Unit<RadianUnitDescription, double> { double x_2_2_1; } x_14_1_2; struct Unit<MeterUnitDescription, double> { double x_3_2_1; } x_14_1_3; } x14; struct Matrix<int, 2, 1> { int x_15_1_1[2]; } x15; double x16; bool x17; bool x18; bool x19; struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_2_1; } x_20_1_1; struct Unit<RadianUnitDescription, double> { double x_2_2_1; } x_20_1_2; struct Unit<MeterUnitDescription, double> { double x_3_2_1; } x_20_1_3; } x20; } * _cameraManager;
    double  _currentDoublePanPitch;
    struct GlobeView { int (**x1)(); struct GeoServicesLoader {} *x2; struct ManifestManager {} *x3; struct TriggerManager {} *x4; struct shared_ptr<altitude::AnchorManager> { struct AnchorManager {} *x_5_1_1; struct __shared_weak_count {} *x_5_1_2; } x5; struct DtmCacheNode {} *x6; struct DtmRequestManager {} *x7; struct FreezeViewNode {} *x8; struct Projection { struct Perspective { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_9_1_1; struct Ortho { double x_2_2_1; double x_2_2_2; double x_2_2_3; double x_2_2_4; double x_2_2_5; double x_2_2_6; } x_9_1_2; bool x_9_1_3; bool x_9_1_4; } x9; struct CameraFrame<geo::Radians, double> { struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_3_1; } x_1_2_1; struct Unit<RadianUnitDescription, double> { double x_2_3_1; } x_1_2_2; struct Unit<MeterUnitDescription, double> { double x_3_3_1; } x_1_2_3; } x_10_1_1; struct Unit<MeterUnitDescription, double> { double x_2_2_1; } x_10_1_2; struct Unit<RadianUnitDescription, double> { double x_3_2_1; } x_10_1_3; struct Unit<RadianUnitDescription, double> { double x_4_2_1; } x_10_1_4; struct Unit<RadianUnitDescription, double> { double x_5_2_1; } x_10_1_5; } x10; } * _globeView;
    BOOL  _isPitchIncreasing;
}

- (void)beginPan:(struct CGPoint { double x1; double x2; })arg1;
- (void)beginPitch:(struct CGPoint { double x1; double x2; })arg1;
- (void)beginRotate:(struct CGPoint { double x1; double x2; })arg1;
- (void)beginZoom:(struct CGPoint { double x1; double x2; })arg1;
- (void)endPan:(struct CGPoint { double x1; double x2; })arg1;
- (void)endPitch:(struct CGPoint { double x1; double x2; })arg1;
- (void)endRotate:(struct CGPoint { double x1; double x2; })arg1;
- (void)endZoom:(struct CGPoint { double x1; double x2; })arg1;
- (BOOL)isPitchIncreasing;
- (void)setCameraManager:(struct CameraManager { int (**x1)(); bool x2; bool x3; bool x4; struct Matrix<int, 2, 1> { int x_5_1_1[2]; } x5; struct Matrix<int, 2, 1> { int x_6_1_1[2]; } x6; struct Matrix<int, 2, 1> { int x_7_1_1[2]; } x7; struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_2_1; } x_8_1_1; struct Unit<RadianUnitDescription, double> { double x_2_2_1; } x_8_1_2; struct Unit<MeterUnitDescription, double> { double x_3_2_1; } x_8_1_3; } x8; double x9; bool x10; bool x11; bool x12; bool x13; struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_2_1; } x_14_1_1; struct Unit<RadianUnitDescription, double> { double x_2_2_1; } x_14_1_2; struct Unit<MeterUnitDescription, double> { double x_3_2_1; } x_14_1_3; } x14; struct Matrix<int, 2, 1> { int x_15_1_1[2]; } x15; double x16; bool x17; bool x18; bool x19; struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_2_1; } x_20_1_1; struct Unit<RadianUnitDescription, double> { double x_2_2_1; } x_20_1_2; struct Unit<MeterUnitDescription, double> { double x_3_2_1; } x_20_1_3; } x20; }*)arg1;
- (void)setGlobeView:(struct GlobeView { int (**x1)(); struct GeoServicesLoader {} *x2; struct ManifestManager {} *x3; struct TriggerManager {} *x4; struct shared_ptr<altitude::AnchorManager> { struct AnchorManager {} *x_5_1_1; struct __shared_weak_count {} *x_5_1_2; } x5; struct DtmCacheNode {} *x6; struct DtmRequestManager {} *x7; struct FreezeViewNode {} *x8; struct Projection { struct Perspective { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_9_1_1; struct Ortho { double x_2_2_1; double x_2_2_2; double x_2_2_3; double x_2_2_4; double x_2_2_5; double x_2_2_6; } x_9_1_2; bool x_9_1_3; bool x_9_1_4; } x9; struct CameraFrame<geo::Radians, double> { struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_3_1; } x_1_2_1; struct Unit<RadianUnitDescription, double> { double x_2_3_1; } x_1_2_2; struct Unit<MeterUnitDescription, double> { double x_3_3_1; } x_1_2_3; } x_10_1_1; struct Unit<MeterUnitDescription, double> { double x_2_2_1; } x_10_1_2; struct Unit<RadianUnitDescription, double> { double x_3_2_1; } x_10_1_3; struct Unit<RadianUnitDescription, double> { double x_4_2_1; } x_10_1_4; struct Unit<RadianUnitDescription, double> { double x_5_2_1; } x_10_1_5; } x10; }*)arg1;
- (void)updatePan:(struct CGPoint { double x1; double x2; })arg1 lastScreenPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)updatePitch:(struct CGPoint { double x1; double x2; })arg1 translation:(double)arg2;
- (void)updateRotate:(double)arg1 atScreenPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)updateZoom:(struct CGPoint { double x1; double x2; })arg1 oldFactor:(double)arg2 newFactor:(double)arg3;

@end
