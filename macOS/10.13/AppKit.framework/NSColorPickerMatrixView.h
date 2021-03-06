/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSColorPickerMatrixView : NSView {
    NSColorList * _colorList;
    <NSColorPickerMatrixViewDelegate> * _delegate;
    struct { 
        unsigned int _emptyEnabled : 1; 
        unsigned int _hasEmptyColorCell : 1; 
        unsigned int _hasGradientBackground : 1; 
        unsigned int _reserved : 29; 
    }  _flags;
    NSImage * _image;
    unsigned long long  _numColumns;
    unsigned long long  _numRows;
    unsigned long long  _selectedIndex;
    struct CGSize { 
        double width; 
        double height; 
    }  _swatchSize;
    NSTrackingArea * _trackArea;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _trackingSwatchRect;
}

@property (atomic, readonly) NSColor *color;
@property (atomic, readwrite, retain) NSColorList *colorList;
@property (atomic, readwrite) <NSColorPickerMatrixViewDelegate> *delegate;
@property (getter=isEmptyColorEnabled, atomic, readwrite) BOOL emptyColorEnabled;
@property (atomic, readwrite) BOOL hasGradientBackground;
@property (atomic, readwrite) unsigned long long numberOfColumns;
@property (atomic, readwrite) struct CGSize { double x1; double x2; } swatchSize;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

+ (id)defaultColorList;
+ (id)defaultImage;
+ (BOOL)hasEmptyColorForDefaultList;

- (id)_accessibilityAttributeValue:(id)arg1 forIndexedChild:(id)arg2;
- (id)_accessibilityChildren;
- (BOOL)_hasEmptyColorCell;
- (void)_updateConfigs;
- (void)dealloc;

// Image: /Applications/Xcode.app/Contents/Developer/usr/lib/libMainThreadChecker.dylib

- (unsigned long long)accessibilityArrayAttributeCount:(id)arg1;
- (id)accessibilityArrayAttributeValues:(id)arg1 index:(unsigned long long)arg2 maxCount:(unsigned long long)arg3;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint { double x1; double x2; })arg1;
- (unsigned long long)accessibilityIndexOfChild:(id)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (id)color;
- (id)colorAtIndex:(unsigned long long)arg1;
- (unsigned long long)colorIndexAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)colorList;
- (id)delegate;
- (void)drawColorPickerHighlightForView:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)hasGradientBackground;
- (id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (BOOL)isEmptyColorEnabled;
- (BOOL)isFlipped;
- (BOOL)isOpaque;
- (void)mouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (unsigned long long)numberOfColumns;
- (unsigned long long)numberOfRows;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForColorAtIndex:(unsigned long long)arg1;
- (void)selectColorAtIndex:(unsigned long long)arg1;
- (void)setColorList:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEmptyColorEnabled:(BOOL)arg1;
- (void)setHasGradientBackground:(BOOL)arg1;
- (void)setNumberOfColumns:(unsigned long long)arg1;
- (void)setSwatchSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })swatchSize;
- (void)updateTrackingAreas;

@end
