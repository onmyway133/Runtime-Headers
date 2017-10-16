/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSImageRep : NSObject <NSCoding, NSCopying, NSSecureCoding> {
    NSString * _colorSpaceName;
    int  _pixelsHigh;
    int  _pixelsWide;
    struct __repFlags { 
        unsigned int hasAlpha : 1; 
        unsigned int isOpaque : 1; 
        unsigned int cacheParamsComputed : 1; 
        unsigned int cacheAlphaComputed : 1; 
        unsigned int loadState : 2; 
        unsigned int keepCacheWindow : 1; 
        unsigned int reserved : 1; 
        unsigned int bitsPerSample : 8; 
        unsigned int internalLayoutDirection : 2; 
        unsigned int gsaved : 14; 
    }  _repFlags;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (getter=hasAlpha, atomic, readwrite) BOOL alpha;
@property (atomic, readwrite) long long bitsPerSample;
@property (atomic, readwrite, copy) NSString *colorSpaceName;
@property (atomic, readwrite) long long layoutDirection;
@property (getter=isOpaque, atomic, readwrite) BOOL opaque;
@property (atomic, readwrite) long long pixelsHigh;
@property (atomic, readwrite) long long pixelsWide;
@property (atomic, readwrite) struct CGSize { double x1; double x2; } size;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

+ (BOOL)_deprecated_hasReversedFlippednessInFlippedImages;
+ (id)_imageFileTypesNoCaching;
+ (id)_imagePasteboardTypesNoCaching;
+ (Class)_imageRepClassForFileNameExtension:(id)arg1 andHFSFileType:(id)arg2;
+ (id)_imageRepsWithContentsOfFile:(id)arg1 expandImageContentNow:(BOOL)arg2;
+ (id)_imageRepsWithContentsOfURL:(id)arg1 expandImageContentNow:(BOOL)arg2;
+ (id)_imageRepsWithContentsOfURL:(id)arg1 expandImageContentNow:(BOOL)arg2 giveUpOnNetworkURLsWithoutGoodExtensions:(BOOL)arg3;
+ (id)_imageRepsWithData:(id)arg1 fileType:(id)arg2 hfsType:(id)arg3 expandImageContentNow:(BOOL)arg4;
+ (id)_imageTypesNoCaching;
+ (BOOL)_preferFilter;
+ (BOOL)canInitWithData:(id)arg1;
+ (BOOL)canInitWithPasteboard:(id)arg1;
+ (id)imageFileTypes;
+ (id)imagePasteboardTypes;
+ (Class)imageRepClassForData:(id)arg1;
+ (Class)imageRepClassForFileType:(id)arg1;
+ (Class)imageRepClassForPasteboardType:(id)arg1;
+ (Class)imageRepClassForType:(id)arg1;
+ (id)imageRepWithContentsOfFile:(id)arg1;
+ (id)imageRepWithContentsOfURL:(id)arg1;
+ (id)imageRepWithPasteboard:(id)arg1;
+ (id)imageRepsWithContentsOfFile:(id)arg1;
+ (id)imageRepsWithContentsOfURL:(id)arg1;
+ (id)imageRepsWithPasteboard:(id)arg1;
+ (id)imageTypes;
+ (id)imageUnfilteredFileTypes;
+ (id)imageUnfilteredPasteboardTypes;
+ (id)imageUnfilteredTypes;
+ (void)initialize;
+ (void)registerImageRepClass:(Class)arg1;
+ (id)registeredImageRepClasses;
+ (void)unregisterImageRepClass:(Class)arg1;

- (struct CGImage { }*)CGImageForProposedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 context:(id)arg2 hints:(id)arg3;
- (struct CGImage { }*)CGImageForProposedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 context:(id)arg2 hints:(id)arg3 flipped:(BOOL)arg4;
- (struct CGImage { }*)_CGImageRef;
- (id)_bitmapImageReps;
- (id)_bitmapImageRepsForTIFFRepresentation;
- (void*)_createPatternForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(id)arg2;
- (id)_defaultImageHintsIncludeOnlyIfAvailable:(BOOL)arg1;
- (BOOL)_drawFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 operation:(unsigned long long)arg3 alpha:(double)arg4 compositing:(BOOL)arg5 flipped:(BOOL)arg6 ignoreContext:(BOOL)arg7;
- (BOOL)_drawOnlyUsesOneDrawingOperation;
- (id)_imageRep_colorSpaceName;
- (void)_imageRep_setColorSpaceName:(id)arg1;
- (id)_imageRepsForEncodingWithCoder:(id)arg1;
- (long long)_internalLayoutDirection;
- (BOOL)_isValid;
- (BOOL)_loadDataIfNotYetLoaded;
- (struct CGImage { }*)_newCGImageForProposedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 context:(id)arg2 hints:(id)arg3 flipped:(BOOL)arg4;
- (long long)_numberOfColorComponentsNotIncludingAlpha;
- (long long)_pixelsHighOrResolutionIndependent;
- (long long)_pixelsWideOrResolutionIndependent;
- (id)_processedHintsForHints:(id)arg1 includeOnlyIfAvailable:(BOOL)arg2;
- (void)_setCGImageRef:(struct CGImage { }*)arg1;
- (void)_setInternalLayoutDirectionFromCUILayoutDirection:(long long)arg1;
- (long long)_uncachedSize;
- (BOOL)_wantsToBeCached;
- (long long)bitsPerSample;
- (id)colorSpace;
- (id)colorSpaceName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)draw;
- (BOOL)drawAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (BOOL)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 operation:(unsigned long long)arg3 fraction:(double)arg4 respectFlipped:(BOOL)arg5 hints:(id)arg6;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasAlpha;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isOpaque;
- (long long)layoutDirection;
- (long long)pixelsHigh;
- (long long)pixelsWide;
- (id)replacementObjectForCoder:(id)arg1;
- (void)setAlpha:(BOOL)arg1;
- (void)setBitsPerSample:(long long)arg1;
- (void)setColorSpace:(id)arg1;
- (void)setColorSpaceName:(id)arg1;
- (void)setLayoutDirection:(long long)arg1;
- (void)setOpaque:(BOOL)arg1;
- (void)setPixelsHigh:(long long)arg1;
- (void)setPixelsWide:(long long)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;

// NSImageRep (NSSecureCoding)

+ (BOOL)supportsSecureCoding;

// Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit

// NSImageRep (IKAdditions)

- (long long)IKPixelsHigh;
- (long long)IKPixelsWide;

// Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer

// NSImageRep (QCSCN_Additions)

- (long long)QCSCN_PixelsHigh;
- (long long)QCSCN_PixelsWide;

// Image: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit

// NSImageRep (SCNAdditions)

- (long long)SCNPixelsHigh;
- (long long)SCNPixelsWide;

@end
