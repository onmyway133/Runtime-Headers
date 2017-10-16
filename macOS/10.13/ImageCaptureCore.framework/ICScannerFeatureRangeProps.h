/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ImageCaptureCore.framework/Versions/A/ImageCaptureCore
 */

@interface ICScannerFeatureRangeProps : NSObject {
    double  _currentValue;
    double  _defaultValue;
    double  _maxValue;
    double  _minValue;
    double  _stepSize;
}

@property (atomic, readwrite) double currentValue;
@property (atomic, readwrite) double defaultValue;
@property (atomic, readwrite) double maxValue;
@property (atomic, readwrite) double minValue;
@property (atomic, readwrite) double stepSize;

- (double)currentValue;
- (double)defaultValue;
- (double)getValidatedValue:(double)arg1;
- (double)maxValue;
- (double)minValue;
- (void)setCurrentValue:(double)arg1;
- (void)setDefaultValue:(double)arg1;
- (void)setMaxValue:(double)arg1;
- (void)setMinValue:(double)arg1;
- (void)setStepSize:(double)arg1;
- (double)stepSize;

@end