/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSMagnifierWindowContentViewLoupe : NSView <NSMagnifierWindowContentView> {
    NSColor * _cachedColor;
    NSBezierPath * _clipPath;
    NSTextField * _colorLabel;
    NSBitmapImageRep * _contentImageRep;
    long long  _loupeMode;
}

@property (atomic, readwrite, retain) NSBitmapImageRep *contentImageRep;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

+ (struct CGSize { double x1; double x2; })magnifierViewSize;

- (void)dealloc;

// Image: /Applications/Xcode.app/Contents/Developer/usr/lib/libMainThreadChecker.dylib

- (id)borderColor;
- (id)color;
- (id)contentImageRep;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (double)magnifiedPointsPerPixel;
- (struct CGPoint { double x1; double x2; })magnifyingGlassCenterPosition;
- (double)magnifyingGlassRadius;
- (void)setContentImageRep:(id)arg1;
- (void)setNextMode;

@end
