/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSFunctionRowBackgroundBlurView : NSView {
    _NSFunctionRowBackgroundBlurViewBackdropLayer * _backdrop;
    double  _blurRadius;
    _NSFunctionRowBackgroundBlurViewLayer * _container;
}

@property (atomic, readwrite) double blurRadius;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

+ (id)defaultAnimationForKey:(id)arg1;

- (Class)_animatorClass;
- (BOOL)_shouldDoLayerPerformanceUpdates;
- (void)dealloc;

// Image: /Applications/Xcode.app/Contents/Developer/usr/lib/libMainThreadChecker.dylib

- (double)blurRadius;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)makeBackingLayer;
- (void)setBlurRadius:(double)arg1;
- (void)setLayer:(id)arg1;

@end
