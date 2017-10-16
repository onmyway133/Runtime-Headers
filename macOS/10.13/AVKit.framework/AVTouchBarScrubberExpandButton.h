/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
 */

@interface AVTouchBarScrubberExpandButton : NSButton {
    double  _currentValue;
    double  _maxValue;
    double  _minValue;
}

@property (atomic, readwrite) double currentValue;
@property (atomic, readwrite) double maxValue;
@property (atomic, readwrite) double minValue;
@property (atomic, readonly) double normalizedCurrentValue;

+ (Class)cellClass;

- (double)currentValue;
- (double)maxValue;
- (double)minValue;
- (double)normalizedCurrentValue;
- (void)setCurrentValue:(double)arg1;
- (void)setMaxValue:(double)arg1;
- (void)setMinValue:(double)arg1;

@end
