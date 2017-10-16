/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCInteractionPatchActor : QCPatchActor

- (void)_drawNameForPort:(id)arg1 node:(id)arg2 atPoint:(struct CGPoint { double x1; double x2; })arg3 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 inContext:(struct CGContext { }*)arg5;
- (void)_drawTitleForNode:(id)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inContext:(struct CGContext { }*)arg3;
- (unsigned long long)countOfInteractionPortsInNode:(id)arg1 direction:(int)arg2;
- (struct CGPoint { double x1; double x2; })pointForPort:(id)arg1 inNode:(id)arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)setupTooltipViewForPoint:(struct CGPoint { double x1; double x2; })arg1 inNode:(id)arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 tooltipBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4;
- (struct CGSize { double x1; double x2; })sizeForNode:(id)arg1;

@end
