/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSDocumentRevisionsWindowTransformAnimation : NSAnimation {
    id  _completionHandler;
    double  _fadeOutDuration;
    CABasicAnimation * _frameAnimation;
    BOOL  _hop;
    BOOL  _prefersWindowTransform;
    CAKeyframeAnimation * _scaleAnimation;
    CABasicAnimation * _sizeAnimation;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _startFrame;
    struct CGSize { 
        double width; 
        double height; 
    }  _startScale;
    struct CGSize { 
        double width; 
        double height; 
    }  _startSize;
    struct CGPoint { 
        double x; 
        double y; 
    }  _startTranslate;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _targetFrame;
    struct CGSize { 
        double width; 
        double height; 
    }  _targetScale;
    struct CGSize { 
        double width; 
        double height; 
    }  _targetSize;
    struct CGPoint { 
        double x; 
        double y; 
    }  _targetTranslate;
    CABasicAnimation * _translateAnimation;
    NSWindow * _window;
}

@property (atomic, readwrite, copy) id completionHandler;

+ (void)resetTransformForWindow:(id)arg1;

- (void)_buildWindowTransformAnimations;
- (id)_createScaleFunctionForStartScale:(double)arg1 endScale:(double)arg2 peakScale:(double)arg3;
- (void)_didStopAnimation:(BOOL)arg1;
- (BOOL)_resizesWindow;
- (id)_screen;
- (void)_setTimingFunctionsForAnimationCurve:(unsigned long long)arg1;
- (void)_stopAnimation:(int)arg1 withDisplayLink:(id)arg2;
- (void)_willStartAnimation;
- (double)alphaValueForProgress:(double)arg1;
- (struct CGPoint { double x1; double x2; })anchorPoint;
- (id)completionHandler;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForProgress:(double)arg1;
- (id)initWithWindow:(id)arg1 startFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 targetFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)initWithWindow:(id)arg1 startFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 targetFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 hop:(BOOL)arg4;
- (id)initWithWindow:(id)arg1 startFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 targetFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 startSize:(struct CGSize { double x1; double x2; })arg4 targetSize:(struct CGSize { double x1; double x2; })arg5 hop:(BOOL)arg6;
- (id)keyFramesForAnimationWithSteps:(unsigned long long)arg1 evaluator:(id)arg2;
- (struct CGSize { double x1; double x2; })scaleForProgress:(double)arg1;
- (void)setAnimationCurve:(unsigned long long)arg1;
- (void)setCompletionHandler:(id)arg1;
- (void)setCurrentProgress:(float)arg1;
- (void)setPrefersWindowTransform:(BOOL)arg1;
- (void)setStartFadeOutAtProgress:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeForProgress:(double)arg1;
- (void)startAnimation;
- (struct CGPoint { double x1; double x2; })translationForProgress:(double)arg1;
- (id)valueForKey:(id)arg1 animation:(id)arg2 progress:(double)arg3;
- (id)window;

@end
