/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSTouchBarCustomizationPalettePushButton : NSControl <NSAccessibilityButton> {
    id  _autounbinder;
    BOOL  _isHighlighted;
    double  _paletteScaleFactor;
    NSString * _title;
    NSTextField * _titleField;
}

@property (atomic, readonly, copy) NSColor *_bezelBackgroundColor;
@property (atomic, readonly, copy) NSAttributedString *_labelFontAttributedString;
@property (atomic, readonly) double _labelFontSize;
@property (atomic, readonly, copy) NSColor *_labelTextColor;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (getter=isHighlighted, atomic, readwrite) BOOL highlighted;
@property (atomic, readwrite) double paletteScaleFactor;
@property (atomic, readonly) Class superclass;
@property (atomic, readwrite, copy) NSString *title;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

+ (id)buttonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
+ (id)keyPathsForValuesAffecting_labelFontAttributedString;
+ (id)keyPathsForValuesAffecting_labelFontSize;
+ (id)keyPathsForValuesInvalidatingDisplay;
+ (id)keyPathsForValuesInvalidatingIntrinsicContentSize;

- (void)_accessibilityDisplayOptionsDidChange:(id)arg1;
- (id)_bezelBackgroundColor;
- (id)_labelFontAttributedString;
- (double)_labelFontSize;
- (id)_labelTextColor;
- (void)dealloc;

// NSTouchBarCustomizationPalettePushButton (_NSAutounbinder)

- (id)_autounbinder;
- (oneway void)release;

// Image: /Applications/Xcode.app/Contents/Developer/usr/lib/libMainThreadChecker.dylib

- (id)accessibilityLabel;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityRole;
- (BOOL)allowsVibrancy;
- (double)firstBaselineOffsetFromTop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (BOOL)isAccessibilityElement;
- (BOOL)isHighlighted;
- (double)lastBaselineOffsetFromBottom;
- (void)mouseDown:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (double)paletteScaleFactor;
- (void)setHighlighted:(BOOL)arg1;
- (void)setPaletteScaleFactor:(double)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)updateLayer;
- (BOOL)wantsLayer;
- (BOOL)wantsUpdateLayer;

@end
