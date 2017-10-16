/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
 */

@interface IKCenteringClipView : NSClipView {
    BOOL  _disableCentering;
}

@property (atomic, readwrite) BOOL disableCentering;

- (void)centerDocument;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })constrainBoundsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)disableCentering;
- (BOOL)documentShouldCenter;
- (void)setDisableCentering:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrameOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFrameRotation:(double)arg1;
- (void)setFrameSize:(struct CGSize { double x1; double x2; })arg1;
- (void)viewBoundsChanged:(id)arg1;
- (void)viewFrameChanged:(id)arg1;

@end