/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSSplitDividerView : NSView {
    NSColor * _backgroundColor;
    id  _backgroundLayer;
    long long  _orientation;
    long long  _style;
    NSNumber * _thickness;
}

@property (atomic, readwrite, copy) NSColor *backgroundColor;
@property (atomic, readwrite) long long orientation;
@property (atomic, readwrite) long long style;
@property (atomic, readwrite, copy) NSNumber *thickness;

- (struct __CFString { }*)_coreUIDimpleVariant;
- (id)_coreUIOptions;
- (struct __CFString { }*)_coreUIOrientation;
- (struct __CFString { }*)_coreUIState;
- (void)_drawDimpleInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)_isInTexturedWindow;
- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (BOOL)allowsVibrancy;
- (id)backgroundColor;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)effectiveThickness;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithStyle:(long long)arg1 orientation:(long long)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (BOOL)isOpaque;
- (BOOL)mouseDownCanMoveWindow;
- (long long)orientation;
- (void)setBackgroundColor:(id)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setStyle:(long long)arg1;
- (void)setThickness:(id)arg1;
- (BOOL)shouldBeArchived;
- (long long)style;
- (id)thickness;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;

@end