/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCConditional : QCPatch {
    QCIndexPort * inputTest;
    QCNumberPort * inputTolerance;
    QCNumberPort * inputValue1;
    QCNumberPort * inputValue2;
    QCBooleanPort * outputResult;
}

+ (BOOL)allowsSubpatchesWithIdentifier:(id)arg1;
+ (BOOL)isSafe;

- (BOOL)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3;
- (id)initWithIdentifier:(id)arg1;

@end
