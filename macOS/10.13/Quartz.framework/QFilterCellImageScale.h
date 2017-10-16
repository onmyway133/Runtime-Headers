/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzFilters.framework/Versions/A/QuartzFilters
 */

@interface QFilterCellImageScale : QFilterCell {
    NSBox * ImageScaleBox;
    NSNumberFormatter * ImageScaleFormatter;
    NSTextField * ImageScalePercentSign;
    NSTextField * ImageScaleTextField;
    NSTextField * ImageScaleTitleText;
    QFilterImageScaleView * ImageScaleView;
}

+ (BOOL)needsToRemainInViewHierarchy;

- (void)ImageScaleTextFieldAction:(id)arg1;
- (void)instantiateView;
- (void)updateUI;

@end
