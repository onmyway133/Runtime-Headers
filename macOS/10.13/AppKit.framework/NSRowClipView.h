/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSRowClipView : NSClipView <CAAnimationDelegate> {
    id  _animationFinishedHandler;
    BOOL  _forDeletion;
    double  _fromYPosition;
    BOOL  _shouldAdjustBounds;
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
}

@property (nonatomic, readwrite, copy) id animationFinishedHandler;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (nonatomic, readwrite) BOOL forDeletion;
@property (nonatomic, readwrite) double fromYPosition;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readwrite) BOOL shouldAdjustBounds;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } targetFrame;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

- (void)_setTrackingAreasDirty:(int)arg1;
- (int)_trackingAreasDirty;
- (void)_updateBoundsForSize:(struct CGSize { double x1; double x2; })arg1;
- (BOOL)_useZinLayerBacking;
- (void)dealloc;

// Image: /Applications/Xcode.app/Contents/Developer/usr/lib/libMainThreadChecker.dylib

- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)animationFinishedHandler;
- (id)animationForKey:(id)arg1;
- (void)cacheDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toBitmapImageRep:(id)arg2;
- (BOOL)forDeletion;
- (double)fromYPosition;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAnimationFinishedHandler:(id)arg1;
- (void)setForDeletion:(BOOL)arg1;
- (void)setFrameSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setFromYPosition:(double)arg1;
- (void)setShouldAdjustBounds:(BOOL)arg1;
- (void)setTargetFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setUpGState;
- (BOOL)shouldAdjustBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetFrame;

@end
