/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCDetector : QCPatch {
    CIDetector * _detector;
    NSMutableDictionary * _option;
    QCIndexPort * inputAccuracy;
    QCBooleanPort * inputBetterEyeLocs;
    QCImagePort * inputImage;
    QCBooleanPort * inputTracking;
    QCStructurePort * outputFeatures;
}

+ (BOOL)allowsSubpatchesWithIdentifier:(id)arg1;

- (void)cleanup:(id)arg1;
- (BOOL)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3;
- (id)initWithIdentifier:(id)arg1;
- (BOOL)setState:(id)arg1;
- (BOOL)setup:(id)arg1;
- (id)state;

@end
