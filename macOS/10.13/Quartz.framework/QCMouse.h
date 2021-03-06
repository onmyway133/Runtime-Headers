/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCMouse : QCPatch {
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
    QCBooleanPort * _inputResetMagnification;
    QCBooleanPort * _inputResetRotation;
    QCBooleanPort * _inputResetScroll;
    QCNumberPort * _inputScrollFactor;
    BOOL  _integrate;
    BOOL  _integrateMagnification;
    BOOL  _integrateRotation;
    BOOL  _multitouch;
    QCNumberPort * _outputMagnification;
    QCNumberPort * _outputRotation;
    QCNumberPort * _outputSwipeX;
    QCNumberPort * _outputSwipeY;
    QCBooleanPort * outputButton1;
    QCBooleanPort * outputButton2;
    QCBooleanPort * outputButton3;
    QCNumberPort * outputScrollX;
    QCNumberPort * outputScrollY;
    QCNumberPort * outputScrollZ;
    QCNumberPort * outputX;
    QCNumberPort * outputY;
}

+ (BOOL)allowsSubpatchesWithIdentifier:(id)arg1;
+ (int)executionModeWithIdentifier:(id)arg1;
+ (BOOL)isSafe;
+ (id)stateKeysWithIdentifier:(id)arg1;
+ (unsigned long long)stateVersionWithIdentifier:(id)arg1;
+ (int)timeModeWithIdentifier:(id)arg1;

- (BOOL)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3;
- (id)initWithIdentifier:(id)arg1;
- (BOOL)integrate;
- (double)nextExecutionTime:(id)arg1 time:(double)arg2 arguments:(id)arg3;
- (void)receiveMessage:(id)arg1 name:(id)arg2 attributes:(id)arg3;
- (void)setIntegrate:(BOOL)arg1;
- (void)setIntegrateMagnification:(BOOL)arg1;
- (void)setIntegrateRotation:(BOOL)arg1;
- (void)setMultitouch:(BOOL)arg1;
- (BOOL)setState:(id)arg1;
- (BOOL)setup:(id)arg1;
- (id)state;

// QCMouse (QCInspector)

+ (id)inspectorNibNameWithIdentifier:(id)arg1;

@end
