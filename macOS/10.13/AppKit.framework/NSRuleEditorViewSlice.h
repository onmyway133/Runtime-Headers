/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSRuleEditorViewSlice : NSView <NSCoding> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _animationTargetRect;
    NSColor * _backgroundColor;
    struct { 
        unsigned int selected : 1; 
        unsigned int lastSelected : 1; 
        unsigned int hideNonPartDrawing : 1; 
        unsigned int reserved : 29; 
    }  _flags;
    long long  _indentation;
    long long  _rowIndex;
    NSRuleEditor * _ruleEditor;
}

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

+ (void)initialize;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_animationTargetRect;
- (struct CGShading { }*)_backgroundShader;
- (id)_curveColorForIndentation:(long long)arg1;
- (BOOL)_isLastSelected;
- (BOOL)_isSelected;
- (void)_reconfigureSubviews;
- (void)_relayoutSubviewsWidthChanged:(BOOL)arg1;
- (void)_setAnimationTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setHideNonPartDrawing:(BOOL)arg1;
- (void)_setLastSelected:(BOOL)arg1;
- (void)_setSelected:(BOOL)arg1;
- (void)dealloc;

// Image: /Applications/Xcode.app/Contents/Developer/usr/lib/libMainThreadChecker.dylib

- (id)backgroundColor;
- (BOOL)containsDisplayValue:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)indentation;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 ruleEditorView:(id)arg2;
- (void)mouseDown:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (long long)rowIndex;
- (void)setBackgroundColor:(id)arg1;
- (void)setIndentation:(long long)arg1;
- (void)setRowIndex:(long long)arg1;

@end