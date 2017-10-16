/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCTablet : QCPatch {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    QCBooleanPort * outputLowerButton;
    QCNumberPort * outputPressure;
    QCNumberPort * outputTiltX;
    QCNumberPort * outputTiltY;
    QCBooleanPort * outputTipButton;
    QCBooleanPort * outputUpperButton;
    QCNumberPort * outputX;
    QCNumberPort * outputY;
}

+ (BOOL)allowsSubpatchesWithIdentifier:(id)arg1;
+ (int)executionModeWithIdentifier:(id)arg1;
+ (BOOL)isSafe;
+ (int)timeModeWithIdentifier:(id)arg1;

- (BOOL)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3;
- (void)receiveMessage:(id)arg1 name:(id)arg2 attributes:(id)arg3;
- (BOOL)setup:(id)arg1;

@end
