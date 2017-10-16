/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
 */

@interface IKCircleAnnotation : IKAnnotation {
    BOOL  _shouldUseOriginalLayerToDraw;
}

- (void)changeBackgroundColor:(id)arg1;
- (void)changeBorderColor:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })circleRect;
- (BOOL)containsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (unsigned int)defaultKnob;
- (void)doDrawInContext:(struct CGContext { }*)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)drawEllipse:(struct CGContext { }*)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (unsigned int)knobLayerFlags;
- (void)setNewBorderWidth:(double)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setup:(id)arg1;
- (BOOL)shouldUseOriginalLayerToDraw;

@end
