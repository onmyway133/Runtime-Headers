/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCScreenInfo : QCPatch {
    BOOL  _cleanAperture;
    QCNumberPort * outputHeight;
    QCIndexPort * outputPixelsHigh;
    QCIndexPort * outputPixelsWide;
    QCNumberPort * outputRatio;
    QCNumberPort * outputResolution;
    QCNumberPort * outputWidth;
}

+ (BOOL)allowsSubpatchesWithIdentifier:(id)arg1;
+ (BOOL)isSafe;

- (BOOL)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3;
- (id)initWithIdentifier:(id)arg1;
- (void)receiveMessage:(id)arg1 name:(id)arg2 attributes:(id)arg3;
- (BOOL)setState:(id)arg1;
- (void)setUseCleanAperture:(BOOL)arg1;
- (BOOL)setup:(id)arg1;
- (id)state;
- (BOOL)useCleanAperture;

// QCScreenInfo (QCInspector)

+ (Class)inspectorClassWithIdentifier:(id)arg1;

@end