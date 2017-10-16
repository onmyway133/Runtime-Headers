/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
 */

@interface QLBubble : NSObject <NSWindowDelegate, QLControlsDelegate> {
    QLBubbleReserved * _reserved;
}

@property (atomic, readonly) BOOL _shouldDrawBubbleBackground;
@property (atomic, readwrite) int animationType;
@property (atomic, readwrite, copy) NSString *appearanceName;
@property (atomic, readwrite, retain) NSView *contentView;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) BOOL hasControls;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite, retain) NSWindow *parentWindow;
@property (atomic, readwrite) unsigned long long preferredEdge;
@property (atomic, readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceFrame;
@property (atomic, readonly) Class superclass;
@property (getter=isVisible, atomic, readwrite) BOOL visible;

- (void)_activateEventMonitor;
- (double)_additionalContentInset;
- (void)_breakWithParentWindow;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_bubbleFrameFromItemFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forcedEdge:(unsigned long long)arg2 inScreen:(id)arg3 arrowEdge:(unsigned long long*)arg4 position:(double*)arg5;
- (void)_deactivateEventMonitor;
- (void)_dismiss;
- (void)_drawBubbleBackgroundInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_linkWithParentWindow;
- (void)_open;
- (id)_openCloseWindowEffect;
- (void)_setDirectlyVisible:(BOOL)arg1;
- (BOOL)_shouldDrawBubbleBackground;
- (void)_showBubble;
- (void)_updateBubbleShow:(BOOL)arg1;
- (void)_updateControls;
- (void)_windowDidDeminiaturize;
- (void)_windowDidMove;
- (void)_windowWillClose;
- (void)_windowWillMiniaturize;
- (struct CGPoint { double x1; double x2; })aimPoint;
- (BOOL)animating;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })animationContentFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })animationSourceFrame;
- (int)animationType;
- (id)appearanceName;
- (unsigned long long)arrowEdge;
- (double)arrowPosition;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bubbleFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bubbleFrameFromItemFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 size:(struct CGSize { double x1; double x2; })arg2 forcedEdge:(unsigned long long)arg3 inScreen:(id)arg4 arrowEdge:(unsigned long long*)arg5 position:(double*)arg6;
- (void)close;
- (id)closingCompletionBlock;
- (id)contentView;
- (unsigned long long)controlAlignment;
- (id)controls;
- (BOOL)controlsAtBottom;
- (void)createWindowIfNeeded;
- (void)dealloc;
- (id)delegate;
- (id)effect;
- (void)endResizing;
- (BOOL)forcePreferredEdge;
- (BOOL)forceTitleBar;
- (BOOL)hasControls;
- (BOOL)hasWindowOwnership;
- (BOOL)ignoreItemFrameWhenResizing;
- (id)init;
- (void)invalidateBackground;
- (void)invertShowBubbleEffect;
- (void)invokeShowBubbleEffect;
- (BOOL)isVisible;
- (long long)level;
- (BOOL)mouseDown:(id)arg1;
- (BOOL)mouseDownCanMoveBubble;
- (BOOL)mouseDragged:(id)arg1;
- (BOOL)neverResize;
- (id)openingCompletionBlock;
- (id)parentWindow;
- (void)performBubbleAction:(id)arg1;
- (unsigned long long)preferredEdge;
- (BOOL)preventsActivation;
- (void)resetTitlebarVisibility;
- (BOOL)resizing;
- (void)setAimPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setAnimationContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAnimationSourceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAnimationType:(int)arg1;
- (void)setAppearanceName:(id)arg1;
- (void)setArrowEdge:(unsigned long long)arg1;
- (void)setArrowPosition:(double)arg1;
- (void)setAutomaticallyCloseWithMask:(unsigned long long)arg1 filterMask:(unsigned long long)arg2 block:(id)arg3;
- (void)setBubbleFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentView:(id)arg1;
- (void)setControlAlignment:(unsigned long long)arg1;
- (void)setControls:(id)arg1;
- (void)setControlsAtBottom:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setForcePreferredEdge:(BOOL)arg1;
- (void)setForceTitleBar:(BOOL)arg1;
- (void)setIgnoreItemFrameWhenResizing:(BOOL)arg1;
- (void)setLevel:(long long)arg1;
- (void)setMouseDownCanMoveBubble:(BOOL)arg1;
- (void)setNeverResize:(BOOL)arg1;
- (void)setParentWindow:(id)arg1;
- (void)setPreferredEdge:(unsigned long long)arg1;
- (void)setPreventsActivation:(BOOL)arg1;
- (void)setSkipAlphaDuringOpenAnimation:(BOOL)arg1;
- (void)setSkipAnimationInvoke:(BOOL)arg1;
- (void)setSourceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleAlignment:(unsigned long long)arg1;
- (void)setVisible:(BOOL)arg1;
- (BOOL)skipAlphaDuringOpenAnimation;
- (BOOL)skipAnimationInvoke;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceFrameOnScreen;
- (void)startResizing;
- (id)title;
- (unsigned long long)titleAlignment;
- (void)update;
- (void)updateWithOptions:(int)arg1;
- (unsigned long long)usedEdge;
- (id)window;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })window:(id)arg1 willPositionSheet:(id)arg2 usingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)windowController;
- (void)windowDidUpdate;

@end