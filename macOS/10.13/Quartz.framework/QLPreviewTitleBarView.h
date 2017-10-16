/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
 */

@interface QLPreviewTitleBarView : NSView {
    NSMutableArray * _activeTitleBarViewConstraints;
}

@property (atomic, readwrite, retain) NSMutableArray *activeTitleBarViewConstraints;

- (void)_updateTitleFieldConstraints:(id)arg1 withLeftControls:(id)arg2 rightControls:(id)arg3 rightmostWindowButton:(id)arg4;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (id)activeTitleBarViewConstraints;
- (void)deactivateExistingConstraints;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setActiveTitleBarViewConstraints:(id)arg1;
- (void)updateConstraints;
- (void)willRemoveSubview:(id)arg1;

@end