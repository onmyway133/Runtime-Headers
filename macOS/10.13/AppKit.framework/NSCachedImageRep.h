/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSCachedImageRep : NSImageRep {
    void * _cache;
    struct CGPoint { 
        double x; 
        double y; 
    }  _origin;
    NSWindow * _window;
}

+ (BOOL)_deprecated_hasReversedFlippednessInFlippedImages;
+ (void)initialize;
+ (BOOL)supportsSecureCoding;

- (struct CGImage { }*)CGImageForProposedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 context:(id)arg2 hints:(id)arg3;
- (void*)_cache;
- (id)_cachedImageRepByResizingToSize:(struct CGSize { double x1; double x2; })arg1 rescalingContent:(BOOL)arg2;
- (BOOL)_canDrawOutsideOfItsBounds;
- (void)_computeParams;
- (id)_copyNSCGImageRep;
- (id)_imageRepsForEncodingWithCoder:(id)arg1;
- (id)_initWithSharedKitWindow:(long long)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)_initWithSize:(struct CGSize { double x1; double x2; })arg1 depth:(int)arg2 separate:(BOOL)arg3 alpha:(BOOL)arg4 allowDeep:(BOOL)arg5;
- (BOOL)_isCachedSeparately;
- (BOOL)_isValid;
- (BOOL)_keepCacheWindow;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_logicalWindowSpaceRect;
- (void)_resizeCache:(struct CGSize { double x1; double x2; })arg1 cachedSeparately:(BOOL)arg2 bps:(long long)arg3 numColors:(long long)arg4 hasAlpha:(BOOL)arg5;
- (void)_setKeepCacheWindow:(BOOL)arg1;
- (BOOL)_transferCache:(id)arg1;
- (long long)bitsPerSample;
- (id)colorSpaceName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (BOOL)draw;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasAlpha;
- (id)init;
- (id)initWithCGImage:(struct CGImage { }*)arg1 drawingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 applicableForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 context:(id)arg4 hints:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 depth:(int)arg2 separate:(BOOL)arg3 alpha:(BOOL)arg4;
- (id)initWithWindow:(id)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (BOOL)isApplicableForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(id)arg2 hints:(id)arg3;
- (void)lockFocusFlipped:(BOOL)arg1;
- (long long)pixelsHigh;
- (long long)pixelsWide;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rect;
- (void)setAlpha:(BOOL)arg1;
- (void)unlockFocus;
- (id)window;

@end
