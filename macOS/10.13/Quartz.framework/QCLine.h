/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCLine : QCRenderingPatch {
    QCColorPort * inputEndColor;
    QCNumberPort * inputEndX;
    QCNumberPort * inputEndY;
    QCNumberPort * inputEndZ;
    QCNumberPort * inputLineWidth;
    QCColorPort * inputStartColor;
    QCNumberPort * inputStartX;
    QCNumberPort * inputStartY;
    QCNumberPort * inputStartZ;
    QCOpenGLPort_ZBuffer * inputZBuffer;
}

+ (BOOL)allowsSubpatchesWithIdentifier:(id)arg1;
+ (int)executionModeWithIdentifier:(id)arg1;
+ (BOOL)isSafe;

- (BOOL)allowsScissors:(id)arg1;
- (BOOL)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3;
- (id)initWithIdentifier:(id)arg1;
- (BOOL)setup:(id)arg1;

@end
