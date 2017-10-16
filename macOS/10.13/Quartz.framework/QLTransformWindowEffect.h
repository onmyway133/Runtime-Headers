/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
 */

@interface QLTransformWindowEffect : QLAnimationWindowEffect {
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _finalTransform;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _initialTransform;
}

+ (id)transformWindow:(id)arg1 from:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 to:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 duration:(double)arg4;

- (float)animation:(id)arg1 valueForProgress:(float)arg2;
- (void)setValue:(float)arg1;

@end
