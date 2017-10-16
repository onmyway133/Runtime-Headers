/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCImageResize : QCPatch {
    QCIndexPort * inputCondition;
    QCIndexPort * inputHeight;
    QCImagePort * inputImage;
    QCIndexPort * inputMode;
    QCIndexPort * inputWidth;
    QCImagePort * outputImage;
}

+ (BOOL)allowsSubpatchesWithIdentifier:(id)arg1;
+ (BOOL)isSafe;

- (void)_forwardRenderingFlag;
- (BOOL)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3;
- (id)initWithIdentifier:(id)arg1;

@end
