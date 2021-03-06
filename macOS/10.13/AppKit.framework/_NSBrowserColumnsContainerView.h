/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSBrowserColumnsContainerView : NSView {
    struct __BrccvFlags { 
        unsigned int ignoreScrolling : 1; 
        unsigned int reserved : 31; 
    }  _brccvFlags;
}

- (void)_drawScrollViewFocusRing:(id)arg1 clipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 needsFullDisplay:(BOOL)arg3;
- (id)_enclosingBrowserView;
- (BOOL)_ignoringScrolling;
- (void)_scrollerStyleRecommendationChanged:(id)arg1;
- (void)_setIgnoringScrolling:(BOOL)arg1;
- (BOOL)_showingFocusRingAroundEnclosingScrollView:(id)arg1;
- (BOOL)_willDrawFocusRingAroundEnclosingScrollView;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1;
- (BOOL)isOpaque;
- (id)menuForEvent:(id)arg1;
- (BOOL)preservesContentDuringLiveResize;
- (void)scrollPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)scrollRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 by:(struct CGSize { double x1; double x2; })arg2;
- (BOOL)scrollRectToVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrameOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFrameSize:(struct CGSize { double x1; double x2; })arg1;
- (void)updateLayer;
- (void)viewDidMoveToWindow;
- (BOOL)wantsUpdateLayer;

@end
