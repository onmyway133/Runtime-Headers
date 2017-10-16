/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
 */

@interface AVPlayerControlsViewController : AVControlsViewController <AVScrubberValueTransformerDelegate, AVSlowMotionSliderDelegate> {
    AVChapterMenuController * _chapterMenuController;
    double  _downTime;
    NSTextField * _durationTextField;
    NSTextField * _elapsedTimeTextField;
    BOOL  _gasPedaling;
    BOOL  _havePostGasPedalRate;
    BOOL  _ignoreRateChanges;
    AVPlayerControllerTimeResolver * _intervalTimeResolver;
    NSMenu * _mediaSelectionMenu;
    AVOutputDeviceMenuController * _outputDeviceMenuController;
    NSButton * _playPauseButton;
    AVPlayerView * _playerView;
    double  _postGasPedalRate;
    NSTextField * _remainingTimeTextField;
    AVPlayerControllerTimeResolver * _resolutionTimeResolver;
    NSButton * _scanBackwardButton;
    NSButton * _scanForwardButton;
    AVSlowMotionSlider * _slowMotionSlider;
    AVTouchBarPlaybackControlsProvider * _touchBarPlaybackControlsProvider;
    BOOL  _viewDidLoad;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) BOOL externalPlaybackButtonHidden;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) AVPlayerControllerTimeResolver *intervalTimeResolver;
@property (atomic, readonly) AVOutputDeviceMenuController *outputDeviceMenuController;
@property (atomic, readwrite, retain) NSButton *playPauseButton;
@property (atomic, readonly) AVPlayerController *playerController;
@property (atomic, readwrite, retain) AVPlayerView *playerView;
@property (atomic, readonly) AVPlayerControllerTimeResolver *resolutionTimeResolver;
@property (atomic, readonly) NSView *slowMotionSlider;
@property (atomic, readonly) Class superclass;
@property (atomic, readonly) AVTouchBarPlaybackControlsProvider *touchBarPlaybackControlsProvider;

+ (id)keyPathsForValuesAffectingExternalPlaybackButtonHidden;
+ (id)keyPathsForValuesAffectingPlayerController;

- (void).cxx_destruct;
- (void)_updateSlowMotionSlider;
- (void)actionButtonPressed:(id)arg1;
- (void)chapterButtonPressed:(id)arg1;
- (void)dealloc;
- (BOOL)externalPlaybackButtonHidden;
- (void)externalPlaybackButtonPressed:(id)arg1;
- (void)hideControlsForAuxiliaryControl;
- (id)intervalTimeResolver;
- (id)makeTouchBar;
- (void)mediaSelectionButtonPressed:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)outputDeviceMenuController;
- (id)playPauseButton;
- (void)playPauseButtonPressed:(id)arg1;
- (id)playerController;
- (id)playerView;
- (id)resolutionTimeResolver;
- (void)scanBackward:(id)arg1;
- (void)scanForward:(id)arg1;
- (double)scrubberValueTransformer:(id)arg1 reverseTransformedTimeInterval:(double)arg2;
- (double)scrubberValueTransformer:(id)arg1 transformedTimeInterval:(double)arg2;
- (BOOL)scrubberValueTransformerRequiresTransformation:(id)arg1;
- (void)setOutputDeviceMenuController:(id)arg1;
- (void)setPlayPauseButton:(id)arg1;
- (void)setPlayerView:(id)arg1;
- (void)setPlayingState:(long long)arg1;
- (void)setView:(id)arg1;
- (void)shareButtonPressed:(id)arg1;
- (void)showControlsForAuxiliaryControl;
- (id)slowMotionSlider;
- (void)slowMotionSlider:(id)arg1 tracksMouseDownEventWithCurrentValue:(double)arg2;
- (void)slowMotionSliderMouseDownEventTrackingBegan:(id)arg1;
- (void)slowMotionSliderMouseDownEventTrackingEnded:(id)arg1;
- (id)touchBarPlaybackControlsProvider;
- (void)updateAudibleMediaSelection:(id)arg1;
- (void)updateLegibleMediaSelection:(id)arg1;
- (void)updateRateForIntegerValue:(long long)arg1 scanDirection:(long long)arg2;

@end
