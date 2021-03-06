/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSScrollingConcurrentRubberbandSnapAnimation : _NSScrollingConcurrentVBLPreprocessFilter {
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialOrigin;
    struct CGSize { 
        double width; 
        double height; 
    }  _initialStretchAmount;
    double  _initialTimestamp;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialVelocity;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastSetOrigin;
}

- (void)dealloc;
- (id)initWithInitialOrigin:(struct CGPoint { double x1; double x2; })arg1 velocity:(struct CGPoint { double x1; double x2; })arg2 stretch:(struct CGSize { double x1; double x2; })arg3;
- (void)scrollingVBLMonitor:(id)arg1 synchronizeForVBLSerialNumber:(unsigned long long)arg2 timestamp:(double)arg3 updateDuration:(double)arg4;

@end
