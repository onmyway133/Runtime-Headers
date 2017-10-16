/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSScrubberContainerView : NSView {
    BOOL  _center;
    id  _innerView;
}

@property (atomic, readwrite) BOOL centerSubviews;
@property (atomic, readwrite, retain) id innerView;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

+ (id)keyPathsForValuesInvalidatingLayout;

- (void)dealloc;

// Image: /Applications/Xcode.app/Contents/Developer/usr/lib/libMainThreadChecker.dylib

- (BOOL)centerSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)innerView;
- (void)layout;
- (void)setCenterSubviews:(BOOL)arg1;
- (void)setInnerView:(id)arg1;
- (BOOL)wantsUpdateLayer;

@end