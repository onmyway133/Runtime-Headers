/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSLevelIndicatorDiscreteCapacityCore : NSObject <_NSLevelIndicatorCore> {
    NSMutableArray * _segmentLayers;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (void)_drawSingleSegmentInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(id)arg2 withState:(struct { double x1; double x2; double x3; double x4; double x5; int x6; int x7; double x8; double x9; id x10; id x11; id x12; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; })arg3 withTintColor:(id)arg4;
- (id)_fillLayerInLayer:(id)arg1;
- (id)_outlineLayerInLayer:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectOfDiscreteSegmentAtIndex:(long long)arg1 withDrawingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 forState:(struct { double x1; double x2; double x3; double x4; double x5; int x6; int x7; double x8; double x9; id x10; id x11; id x12; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; })arg3;
- (void)_updateSingleSegmentLayer:(id)arg1 withState:(struct { double x1; double x2; double x3; double x4; double x5; int x6; int x7; double x8; double x9; id x10; id x11; id x12; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; })arg2 withTintColor:(id)arg3;
- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsetsForState:(struct { double x1; double x2; double x3; double x4; double x5; int x6; int x7; double x8; double x9; id x10; id x11; id x12; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; })arg1;
- (BOOL)allowsVibrancyForState:(struct { double x1; double x2; double x3; double x4; double x5; int x6; int x7; double x8; double x9; id x10; id x11; id x12; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; })arg1;
- (void)dealloc;
- (void)drawFocusRingMaskInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(id)arg2 forState:(struct { double x1; double x2; double x3; double x4; double x5; int x6; int x7; double x8; double x9; id x10; id x11; id x12; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; })arg3;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(id)arg2 forState:(struct { double x1; double x2; double x3; double x4; double x5; int x6; int x7; double x8; double x9; id x10; id x11; id x12; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; })arg3;
- (struct CGSize { double x1; double x2; })indicatorSizeForState:(struct { double x1; double x2; double x3; double x4; double x5; int x6; int x7; double x8; double x9; id x10; id x11; id x12; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; })arg1;
- (id)init;
- (void)layoutSublayersOfLayer:(id)arg1 forState:(struct { double x1; double x2; double x3; double x4; double x5; int x6; int x7; double x8; double x9; id x10; id x11; id x12; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; })arg2;
- (void)updateLayer:(id)arg1 forState:(struct { double x1; double x2; double x3; double x4; double x5; int x6; int x7; double x8; double x9; id x10; id x11; id x12; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; })arg2;

@end
