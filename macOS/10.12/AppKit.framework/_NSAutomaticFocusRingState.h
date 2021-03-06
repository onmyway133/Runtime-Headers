/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSAutomaticFocusRingState : NSObject {
    NSValue * alreadyFocusedWindow;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  animatedFocusRingBounds;
    NSTimer * animationTimer;
    NSBitmapImageRep * automaticFocusRingBitmap;
    CALayer * automaticFocusRingLayer;
    BOOL  automaticFocusRingNeedsUpdate;
    NSRegion * automaticFocusRingRegion;
    BOOL  automaticFocusRingShown;
    NSView * automaticFocusRingView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  automaticFocusRingWindowRect;
    double  focusRingAnimationStartTime;
    NSView * lastNonNilFocusRingView;
    double  nilFocusTime;
    NSResponder * previousActiveFirstResponder;
}

@property (atomic, readwrite, retain) NSValue *alreadyFocusedWindow;
@property (atomic, readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } animatedFocusRingBounds;
@property (atomic, readwrite, retain) NSTimer *animationTimer;
@property (atomic, readwrite, retain) NSBitmapImageRep *automaticFocusRingBitmap;
@property (atomic, readwrite, retain) CALayer *automaticFocusRingLayer;
@property (atomic, readwrite) BOOL automaticFocusRingNeedsUpdate;
@property (atomic, readwrite, retain) NSRegion *automaticFocusRingRegion;
@property (atomic, readwrite) BOOL automaticFocusRingShown;
@property (atomic, readwrite, retain) NSView *automaticFocusRingView;
@property (atomic, readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } automaticFocusRingWindowRect;
@property (atomic, readwrite) double focusRingAnimationStartTime;
@property (atomic, readwrite) NSView *lastNonNilFocusRingView;
@property (atomic, readwrite) double nilFocusTime;
@property (atomic, readwrite, retain) NSResponder *previousActiveFirstResponder;

- (id)alreadyFocusedWindow;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })animatedFocusRingBounds;
- (id)animationTimer;
- (id)automaticFocusRingBitmap;
- (id)automaticFocusRingLayer;
- (BOOL)automaticFocusRingNeedsUpdate;
- (id)automaticFocusRingRegion;
- (BOOL)automaticFocusRingShown;
- (id)automaticFocusRingView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })automaticFocusRingWindowRect;
- (double)focusRingAnimationStartTime;
- (id)lastNonNilFocusRingView;
- (double)nilFocusTime;
- (id)previousActiveFirstResponder;
- (void)setAlreadyFocusedWindow:(id)arg1;
- (void)setAnimatedFocusRingBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAnimationTimer:(id)arg1;
- (void)setAutomaticFocusRingBitmap:(id)arg1;
- (void)setAutomaticFocusRingLayer:(id)arg1;
- (void)setAutomaticFocusRingNeedsUpdate:(BOOL)arg1;
- (void)setAutomaticFocusRingRegion:(id)arg1;
- (void)setAutomaticFocusRingShown:(BOOL)arg1;
- (void)setAutomaticFocusRingView:(id)arg1;
- (void)setAutomaticFocusRingWindowRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFocusRingAnimationStartTime:(double)arg1;
- (void)setLastNonNilFocusRingView:(id)arg1;
- (void)setNilFocusTime:(double)arg1;
- (void)setPreviousActiveFirstResponder:(id)arg1;

@end
