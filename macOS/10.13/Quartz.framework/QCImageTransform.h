/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCImageTransform : QCPatch {
    QCImagePort * inputImage;
    QCNumberPort * inputTransform_OriginX;
    QCNumberPort * inputTransform_OriginY;
    QCNumberPort * inputTransform_Rotate;
    QCNumberPort * inputTransform_ScaleX;
    QCNumberPort * inputTransform_ScaleY;
    QCNumberPort * inputTransform_TranslateX;
    QCNumberPort * inputTransform_TranslateY;
    QCImagePort * outputImage;
}

+ (BOOL)allowsSubpatchesWithIdentifier:(id)arg1;
+ (BOOL)isSafe;

- (void)_forwardRenderingFlag;
- (BOOL)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3;
- (id)initWithIdentifier:(id)arg1;
- (BOOL)setState:(id)arg1;
- (id)state;

@end
