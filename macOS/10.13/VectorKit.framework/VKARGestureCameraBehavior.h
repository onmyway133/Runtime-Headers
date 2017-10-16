/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/Versions/A/VectorKit
 */

@interface VKARGestureCameraBehavior : VKGestureCameraBehavior {
    VKARCameraController * _arCameraController;
    struct Geocentric<double> { 
        double _e[3]; 
    }  _startPanPosition;
}

- (id).cxx_construct;
- (void)beginPan:(struct CGPoint { double x1; double x2; })arg1;
- (void)dealloc;
- (id)initWithARCameraController:(id)arg1;
- (void)updatePan:(struct CGPoint { double x1; double x2; })arg1 lastScreenPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)updateRotate:(double)arg1 atScreenPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)updateZoom:(struct CGPoint { double x1; double x2; })arg1 oldFactor:(double)arg2 newFactor:(double)arg3;

@end
