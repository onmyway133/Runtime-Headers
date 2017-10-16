/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSScrubberItemLayoutDiscreteWithLens : NSScrubberItemLayoutDiscrete <NSScrubberItemLayout> {
    struct CGSize { 
        double width; 
        double height; 
    }  _lensThreshold;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite, retain) NSScrubberLayout *scrubberLayout;
@property (atomic, readwrite) struct CGSize { double x1; double x2; } selectionLensThreshold;
@property (atomic, readonly) Class superclass;
@property (atomic, readonly) BOOL wantsTrackingPosition;

- (void)_updateAttributes:(id)arg1 forLensWithState:(struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; long long x2; long long x3; double x4; long long x5; long long x6; struct CGPoint { double x_7_1_1; double x_7_1_2; } x7; BOOL x8; })arg2 inView:(id)arg3;
- (BOOL)_wantsLensForState:(struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; long long x2; long long x3; double x4; long long x5; long long x6; struct CGPoint { double x_7_1_1; double x_7_1_2; } x7; BOOL x8; })arg1;
- (id)itemLayoutAttributesForItemAtIndex:(long long)arg1 withState:(struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; long long x2; long long x3; double x4; long long x5; long long x6; struct CGPoint { double x_7_1_1; double x_7_1_2; } x7; BOOL x8; })arg2 inView:(id)arg3;
- (id)itemLayoutAttributesForState:(struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; long long x2; long long x3; double x4; long long x5; long long x6; struct CGPoint { double x_7_1_1; double x_7_1_2; } x7; BOOL x8; })arg1 inView:(id)arg2;
- (struct CGSize { double x1; double x2; })selectionLensThreshold;
- (void)setSelectionLensThreshold:(struct CGSize { double x1; double x2; })arg1;
- (BOOL)wantsTrackingPosition;

@end
