/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVScrubber : UISlider {
    double  _beginTouchLocationInViewY;
    _UIFeedbackRetargetBehavior * _feedbackBehavior;
    NSArray * _loadedTimeRanges;
    AVLoadedTimeRangesView * _loadedTimeRangesMaxTrackView;
    float  _rate;
    AVRateBubbleView * _rateBubbleView;
    long long  _scrubbingSpeed;
    UIImageView * _thumbView;
    double  _touchLocationOffsetFromThumbViewCenter;
    double  _width;
}

@property (nonatomic, retain) NSArray *loadedTimeRanges;
@property (nonatomic, readonly) NSString *localizedScrubbingSpeedName;
@property (getter=isPreciseScrubbingFeasible, nonatomic, readonly) bool preciseScrubbingFeasible;
@property (nonatomic) float rate;
@property (nonatomic) long long scrubbingSpeed;
@property (nonatomic) double width;

+ (id)keyPathsForValuesAffectingLocalizedScrubbingSpeedName;
+ (id)keyPathsForValuesAffectingPreciseScrubbingFeasible;

- (void).cxx_destruct;
- (id)_feedbackBehavior;
- (void)_initSubviews;
- (void)_layoutSubviewsForBoundsChange:(bool)arg1;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)createThumbView;
- (void)dealloc;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isPreciseScrubbingFeasible;
- (void)layoutSubviews;
- (id)loadedTimeRanges;
- (id)localizedScrubbingSpeedName;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (float)rate;
- (long long)scrubbingSpeed;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLoadedTimeRanges:(id)arg1;
- (void)setRate:(float)arg1;
- (void)setScrubbingSpeed:(long long)arg1;
- (void)setWidth:(double)arg1;
- (double)width;

@end
