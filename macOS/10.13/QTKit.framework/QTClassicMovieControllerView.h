/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
 */

@interface QTClassicMovieControllerView : QTMovieControllerView {
    QTMovie * _movie;
    QTClassicMovieControllerViewNeedsDisplayData * _needsDisplayThreadData;
    int  _proxy;
}

- (void)_controllerNeedsDisplayCallback:(int)arg1;
- (void)_controllerNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 pleaseDisplayNow:(BOOL)arg2;
- (void)_controllerNeedsDisplayMainThreadCallback;
- (BOOL)_isControllerButtonVisible:(long long)arg1;
- (void)_setVisible:(BOOL)arg1 forControllerButton:(long long)arg2;
- (void)_tearDown;
- (BOOL)acceptsFirstResponder;
- (BOOL)areStepButtonsVisible;
- (BOOL)areZoomButtonsVisible;
- (BOOL)becomeFirstResponder;
- (void)boundsDidChange:(id)arg1;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)finalize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)isBackButtonVisible;
- (BOOL)isCustomButtonVisible;
- (BOOL)isHotSpotButtonVisible;
- (BOOL)isTranslateButtonVisible;
- (BOOL)isVolumeButtonVisible;
- (id)movie;
- (BOOL)resignFirstResponder;
- (void)setBackButtonVisible:(BOOL)arg1;
- (void)setCustomButtonVisible:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHotSpotButtonVisible:(BOOL)arg1;
- (void)setMovie:(id)arg1;
- (void)setShowsResizeIndicator:(BOOL)arg1;
- (void)setStepButtonsVisible:(BOOL)arg1;
- (void)setTranslateButtonVisible:(BOOL)arg1;
- (void)setVolumeButtonVisible:(BOOL)arg1;
- (void)setZoomButtonsVisible:(BOOL)arg1;
- (BOOL)showsResizeIndicator;
- (void)updateMovieControllerBounds;
- (void)viewDidEndLiveResize;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)volumeDidChange:(id)arg1;

@end
