/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
 */

@interface QLSeamlessDocumentOpener : NSObject {
    NSURL * _url;
}

@property (nonatomic, readonly) NSURL *URL;
@property (getter=isAnimating, atomic, readonly) BOOL animating;
@property (atomic, readwrite) BOOL automaticallyAdjustWindowPosition;
@property (atomic, readonly) NSDictionary *displayState;
@property (atomic, readwrite) double loadingProgress;
@property (atomic, readonly) NSImage *transitionImage;

+ (void)_checkSeamlessOpeningState;
+ (void)_discardAllActiveOpeners;
+ (BOOL)_isUIHelperMaybeRunning;
+ (void)_popSeamlessEventForURL:(id)arg1;
+ (void)_popShowWindow:(id)arg1 forURL:(id)arg2;
+ (void)_pushSeamlessEventForURL:(id)arg1;
+ (void)_pushShowWindow:(id)arg1 forURL:(id)arg2;
+ (void)_resetHelperActiveState;
+ (void)_someWindowWillOrderOnScreen:(id)arg1;
+ (id)existingSeamlessDocumentOpenerForURL:(id)arg1;
+ (void)initialize;
+ (BOOL)isSeamlesslyOpeningDocuments;
+ (id)seamlessApplicationOpenerForURL:(id)arg1;
+ (id)seamlessDocumentOpenerForURL:(id)arg1;
+ (void)setIgnorePIDCheck:(BOOL)arg1;

- (id)URL;
- (BOOL)_beginShowingWindow:(id)arg1 effect:(id*)arg2;
- (void)_endShowingWindow:(id)arg1 contentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 alreadyVisible:(BOOL)arg3 effect:(id)arg4;
- (BOOL)automaticallyAdjustWindowPosition;
- (void)beginDocumentLoading;
- (void)beginDocumentOpening;
- (void)dealloc;
- (void)deferDocumentLoading;
- (void)deferDocumentShowing;
- (id)displayState;
- (void)endDocumentLoading;
- (void)endDocumentOpening;
- (id)initWithURL:(id)arg1;
- (BOOL)isAnimating;
- (BOOL)isOpening;
- (double)loadingProgress;
- (void)setAutomaticallyAdjustWindowPosition:(BOOL)arg1;
- (void)setLoadingProgress:(double)arg1;
- (void)showLoadingWindow;
- (void)showWindow:(id)arg1 contentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withBlock:(id)arg3;
- (id)transitionImage;

@end
