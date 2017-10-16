/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCCompositionCellLayer : QCCompositionLayer {
    NSMutableDictionary * _cachedDefaultInputParameters;
    id  _controller;
    double  _delayTime;
    float  _expectedFrameRate;
    BOOL  _paused;
    double  _pausedTime;
    NSMutableDictionary * _updatedCompositionValues;
    NSMutableSet * _updatedKeys;
    BOOL  _wasAsynchronous;
}

+ (BOOL)automaticRedisplay;
+ (id)defaultRenderingOptions;
+ (BOOL)implicitParameterAnimations;
+ (BOOL)shouldRenderOnBackgroundThread;

- (BOOL)_needsDisplay;
- (void)_setValue:(id)arg1 forInputkey:(id)arg2 forPort:(id)arg3;
- (double)_timeForTime:(double)arg1;
- (void)addKeyToBeUpdated:(id)arg1;
- (void)addKeysToBeUpdated:(id)arg1;
- (id)initWithComposition:(id)arg1 controller:(id)arg2;
- (void)invalidate;
- (BOOL)needsRender:(double)arg1 arguments:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pauseAnimation;
- (BOOL)renderAtTime:(double)arg1 arguments:(id)arg2;
- (void)resumeAnimation;
- (void)setMaximumFrameRate:(float)arg1;
- (void)setUpdatedCompositionValue:(id)arg1 forKey:(id)arg2;
- (void)sleep;
- (void)updatePatchWithDefaultValues;
- (void)wakeup;

// QCCompositionCellLayer (Accessibility)

- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (void)accessibilityPerformAction:(id)arg1;

@end
