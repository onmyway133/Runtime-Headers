/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSCarbonWindowFrame : NSView {
    unsigned long long  _styleMask;
    BOOL  resizeByIncrement;
    struct CGSize { 
        double width; 
        double height; 
    }  resizeParameter;
}

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRectForFrameRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 styleMask:(unsigned long long)arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 styleMask:(unsigned long long)arg2;
+ (struct CGSize { double x1; double x2; })minFrameSizeForMinContentSize:(struct CGSize { double x1; double x2; })arg1 styleMask:(unsigned long long)arg2;

- (BOOL)_canHaveToolbar;
- (void)_clearDragMargins;
- (double)_distanceFromToolbarBaseToTitlebar;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_growBoxRect;
- (void)_hideToolbarWithAnimation:(BOOL)arg1;
- (void)_resetDragMargins;
- (void)_setFrameNeedsDisplay:(BOOL)arg1;
- (void)_setNonactivatingPanel:(BOOL)arg1;
- (void)_setSheet:(BOOL)arg1;
- (double)_sheetHeightAdjustment;
- (void)_showToolbarWithAnimation:(BOOL)arg1;
- (BOOL)_toolbarIsHidden;
- (BOOL)_toolbarIsInTransition;
- (BOOL)_toolbarIsManagedByExternalWindow;
- (BOOL)_toolbarIsShown;
- (void)_updateButtonState;
- (void)_windowChangedKeyState;
- (struct CGSize { double x1; double x2; })aspectRatio;
- (id)closeButton;
- (double)contentAlpha;
- (id)contentFill;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRectForFrameRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 styleMask:(unsigned long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })dragRectForFrameRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 styleMask:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 styleMask:(unsigned long long)arg2 owner:(id)arg3;
- (BOOL)isOpaque;
- (struct CGSize { double x1; double x2; })minFrameSizeForMinContentSize:(struct CGSize { double x1; double x2; })arg1 styleMask:(unsigned long long)arg2;
- (id)minimizeButton;
- (struct CGSize { double x1; double x2; })resizeIncrements;
- (void)setAspectRatio:(struct CGSize { double x1; double x2; })arg1;
- (void)setResizeIncrements:(struct CGSize { double x1; double x2; })arg1;
- (void)setStyleMask:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (unsigned long long)styleMask;
- (id)title;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titlebarRect;
- (id)zoomButton;

@end
