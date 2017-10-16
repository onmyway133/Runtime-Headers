/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSBrowserScrollView : NSScrollView

- (void)_doScroller:(id)arg1 hitPart:(long long)arg2 multiplier:(double)arg3;
- (id)_enclosingBrowserView;
- (id)_focusRingBleedRegion;
- (void)_handleBoundsChangeForSubview:(id)arg1;
- (void)_overlayScroller:(id)arg1 didBecomeShown:(BOOL)arg2;
- (void)_updateContentInsetsIfAutomatic;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)preservesContentDuringLiveResize;
- (void)scrollWheel:(id)arg1;
- (void)setAutomaticallyAdjustsContentInsets:(BOOL)arg1;
- (void)tile;

@end
