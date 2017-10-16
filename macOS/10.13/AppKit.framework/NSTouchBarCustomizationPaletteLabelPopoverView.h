/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSTouchBarCustomizationPaletteLabelPopoverView : NSView {
    NSVisualEffectView * _backdrop;
    _NSCartoucheMaskLayer * _backdropMask;
    struct CGSize { 
        double width; 
        double height; 
    }  _cartouchSize;
    NSImage * _cartoucheImage;
    unsigned long long  _cartoucheSide;
    double  _center;
    NSView * _contentView;
    double  _edgeInset;
    double  _minHeight;
    CALayer * _primaryShadow;
    _NSCartoucheMaskLayer * _primaryShadowMask;
    _NSCartoucheMaskLayer * _primaryShadowShadow;
    float  _radius;
    CALayer * _rimShadow;
    _NSCartoucheMaskLayer * _rimShadowMask;
    _NSCartoucheMaskLayer * _rimShadowShadow;
    CALayer * _shadows;
}

@property (atomic, readwrite) double center;
@property (atomic, readwrite, retain) NSView *contentView;
@property (atomic, readwrite) double edgeInset;
@property (atomic, readwrite) double minHeight;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

- (void)dealloc;

// Image: /Applications/Xcode.app/Contents/Developer/usr/lib/libMainThreadChecker.dylib

- (double)center;
- (id)contentView;
- (double)edgeInset;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layout;
- (double)minHeight;
- (void)setCenter:(double)arg1;
- (void)setContentView:(id)arg1;
- (void)setEdgeInset:(double)arg1;
- (void)setMinHeight:(double)arg1;

@end
