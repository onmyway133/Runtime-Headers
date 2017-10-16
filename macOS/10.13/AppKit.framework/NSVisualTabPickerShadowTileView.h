/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSVisualTabPickerShadowTileView : NSView {
    NSView * _containerView;
    NSView * _headerBackgroundView;
    NSMutableArray * _sidebarAndToolbarAnimations;
    NSView * _sidebarView;
    NSView * _toolbarView;
}

@property (atomic, readonly) NSView *containerView;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

+ (double)headerHeight;

- (void).cxx_destruct;
- (void)_getTopBarAnimationDuration:(double*)arg1 timeOffset:(double*)arg2 gridAnimation:(long long)arg3;
- (void)_setUpBorderView;
- (void)_setUpContentViews;
- (id)_sidebarAnimationWithKeyPath:(id)arg1 windowValue:(id)arg2 thumbnailValue:(id)arg3 forGridAnimation:(long long)arg4;
- (void)_viewDidChangeAppearance:(id)arg1;
- (void)dealloc;

// Image: /Applications/Xcode.app/Contents/Developer/usr/lib/libMainThreadChecker.dylib

- (BOOL)accessibilityIsIgnored;
- (void)animateSidebarImage:(id)arg1 width:(double)arg2 gridAnimation:(long long)arg3;
- (void)animateToolbarImage:(id)arg1 height:(double)arg2 gridAnimation:(long long)arg3;
- (void)cleanupAnimations;
- (id)containerView;
- (void)enableEdgeAntialiasingMask:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCloseButtonVisible:(BOOL)arg1;
- (void)setExposeBorderVisible:(BOOL)arg1;

@end
