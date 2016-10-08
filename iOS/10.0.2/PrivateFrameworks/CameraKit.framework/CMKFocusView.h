/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKFocusView : UIView {
    double  _animationStartTime;
    CAKeyframeAnimation * _boundsAnimation;
    UIColor * _color;
    CAKeyframeAnimation * _contentsAnimation;
    bool  _fadeOutStarted;
    bool  _fadingOut;
    NSArray * _images;
    double  _lastFadeOutTime;
    double  _lastInteractionTime;
    bool  _shouldFadeOut;
    long long  _suspendCount;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic, readonly) double lastFadeOutTime;

+ (double)minimumTimeBeforeFadeOut;

- (void).cxx_destruct;
- (void)_animateAlpha:(double)arg1 withDuration:(double)arg2 completion:(id /* block */)arg3;
- (void)_cancelDelayedDim;
- (void)_cancelDelayedFadeOut;
- (void)_cancelDelayedPauseContentsAnimation;
- (bool)_cancelFadeOutForSuspend;
- (id)_createBoundsAnimation;
- (id)_createContentsAnimation;
- (void)_dimForInactivity;
- (void)_fadeOut;
- (void)_fadeOutDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_fadeOutIfNeeded;
- (void)_loadImagesWithColor:(id)arg1 imageSize:(struct CGSize { double x1; double x2; }*)arg2;
- (void)_pauseContentsAnimation;
- (void)_scheduleDelayedDim;
- (void)cancelFadeOut;
- (id)color;
- (void)dealloc;
- (double)dimAfterInteractionDelay;
- (double)fadeInDuration;
- (double)fadeOutDuration;
- (void)focusDidEnd;
- (id)init;
- (id)initWithColor:(id)arg1;
- (double)lastFadeOutTime;
- (id)nameForDarkImage;
- (id)nameForLightImage;
- (void)resetFadeOutSuspension;
- (void)resumeFadeOutResetPending:(bool)arg1;
- (void)setColor:(id)arg1;
- (void)setDefaultContents;
- (void)startAnimating;
- (void)startAnimatingContents:(bool)arg1 bounds:(bool)arg2 fadeIn:(bool)arg3;
- (void)stopAnimating;
- (void)stopContentsAnimation;
- (void)suspendFadeOut;
- (void)updateLastInteractionTime;

@end
