/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSCoreUIImageRep : NSImageRep {
    struct __CFDictionary { } * _coreUIImageOptions;
    NSAppearance * _preferredAppearance;
}

@property (atomic, readwrite, retain) NSAppearance *preferredAppearance;

+ (id)imageRepWithCGImage:(struct CGImage { }*)arg1;
+ (id)imageRepWithCGLayer:(struct CGLayer { }*)arg1;
+ (id)imageRepWithCocoaName:(id)arg1;

- (BOOL)_drawOnlyUsesOneDrawingOperation;
- (BOOL)_isValid;
- (BOOL)_wantsToBeCached;
- (void)addEffects:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectWithExtraEffects:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectWithExtraEffectsForState:(unsigned long long)arg1 backgroundStyle:(int)arg2 context:(id)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct __CFDictionary { }*)coreUIDrawOptions;
- (void)dealloc;
- (id)description;
- (BOOL)draw;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasEffects;
- (id)initWithCGImage:(struct CGImage { }*)arg1;
- (id)initWithCGLayer:(struct CGLayer { }*)arg1;
- (id)initWithCocoaName:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoreUIDrawOptions:(struct __CFDictionary { }*)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (BOOL)isTemplate;
- (id)preferredAppearance;
- (void)setBackgroundStyle:(int)arg1;
- (void)setPreferredAppearance:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setSuppressesCache:(BOOL)arg1;
- (void)setTemplate:(BOOL)arg1;
- (unsigned long long)state;
- (BOOL)suppressesCache;

@end
