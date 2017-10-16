/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSScrollingMomentumCatesCalculator : _NSScrollingMomentumCalculatorBase {
    struct CGSize { 
        double width; 
        double height; 
    }  _absDisplacementVectorIgnoringRubberbanding;
    struct CGPoint { 
        double x; 
        double y; 
    }  _destinationIgnoringRubberbanding;
    double  _durationUntilRubberband;
    double  _durationUntilStop;
    double  _durationUntilStopIgnoringRubberbanding;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialRubberbandingOrigin;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialRubberbandingVelocity;
    double  _linearDisplacementIgnoringRubberbanding;
}

- (void)calculateDestination;
- (void)calculateToReachDestination;
- (double)durationUntilStop;
- (struct CGPoint { double x1; double x2; })positionAfterDuration:(double)arg1;
- (double)velocityAfterDuration:(double)arg1;

@end
