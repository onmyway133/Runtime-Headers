/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIContext : NSObject {
    void * _priv;
}

@property (readonly) struct Context { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; struct CGColorSpace {} *x3; struct CGColorSpace {} *x4; int x5; bool x6; bool x7; bool x8; bool x9; struct CGContext {} *x10; float x11; bool x12; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_13_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_13_1_2; } x13; struct CGAffineTransform { double x_14_1_1; double x_14_1_2; double x_14_1_3; double x_14_1_4; double x_14_1_5; double x_14_1_6; } x14; int x15; unsigned long long x16; unsigned long long x17; int x18; bool x19; struct TreeCacheElement { struct Hash { unsigned char x_1_2_1[20]; } x_20_1_1; unsigned long long x_20_1_2; struct Kernel {} *x_20_1_3; } x20[1024]; unsigned long long x21; double x22; double x23; bool x24; id x25; }*_internalContext;
@property (nonatomic, readonly) struct CGColorSpace { }*workingColorSpace;
@property (nonatomic, readonly) int workingFormat;

+ (int)_crashed_because_nonaddressable_memory_was_passed_to_render:(id)arg1 toBitmap:(void*)arg2 rowBytes:(long long)arg3 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 format:(int)arg5 colorSpace:(struct CGColorSpace { }*)arg6;
+ (id)_singletonContext;
+ (id)context;
+ (id)contextWithCGContext:(struct CGContext { }*)arg1 options:(id)arg2;
+ (id)contextWithEAGLContext:(id)arg1;
+ (id)contextWithEAGLContext:(id)arg1 options:(id)arg2;
+ (id)contextWithMTLDevice:(id)arg1;
+ (id)contextWithMTLDevice:(id)arg1 options:(id)arg2;
+ (id)contextWithOptions:(id)arg1;
+ (struct CGColorSpace { }*)defaultGrayColorSpace;
+ (struct CGColorSpace { }*)defaultRGBColorSpace;
+ (struct CGColorSpace { }*)defaultWorkingColorSpace;
+ (struct Context { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; struct CGColorSpace {} *x3; struct CGColorSpace {} *x4; int x5; bool x6; bool x7; bool x8; bool x9; struct CGContext {} *x10; float x11; bool x12; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_13_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_13_1_2; } x13; struct CGAffineTransform { double x_14_1_1; double x_14_1_2; double x_14_1_3; double x_14_1_4; double x_14_1_5; double x_14_1_6; } x14; int x15; unsigned long long x16; unsigned long long x17; int x18; bool x19; struct TreeCacheElement { struct Hash { unsigned char x_1_2_1[20]; } x_20_1_1; unsigned long long x_20_1_2; struct Kernel {} *x_20_1_3; } x20[1024]; unsigned long long x21; double x22; double x23; bool x24; id x25; }*)internalCLContextWithOptions:(id)arg1;
+ (struct Context { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; struct CGColorSpace {} *x3; struct CGColorSpace {} *x4; int x5; bool x6; bool x7; bool x8; bool x9; struct CGContext {} *x10; float x11; bool x12; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_13_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_13_1_2; } x13; struct CGAffineTransform { double x_14_1_1; double x_14_1_2; double x_14_1_3; double x_14_1_4; double x_14_1_5; double x_14_1_6; } x14; int x15; unsigned long long x16; unsigned long long x17; int x18; bool x19; struct TreeCacheElement { struct Hash { unsigned char x_1_2_1[20]; } x_20_1_1; unsigned long long x_20_1_2; struct Kernel {} *x_20_1_3; } x20[1024]; unsigned long long x21; double x22; double x23; bool x24; id x25; }*)internalCLContextWithOptions:(id)arg1 glContext:(void*)arg2;
+ (struct Context { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; struct CGColorSpace {} *x3; struct CGColorSpace {} *x4; int x5; bool x6; bool x7; bool x8; bool x9; struct CGContext {} *x10; float x11; bool x12; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_13_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_13_1_2; } x13; struct CGAffineTransform { double x_14_1_1; double x_14_1_2; double x_14_1_3; double x_14_1_4; double x_14_1_5; double x_14_1_6; } x14; int x15; unsigned long long x16; unsigned long long x17; int x18; bool x19; struct TreeCacheElement { struct Hash { unsigned char x_1_2_1[20]; } x_20_1_1; unsigned long long x_20_1_2; struct Kernel {} *x_20_1_3; } x20[1024]; unsigned long long x21; double x22; double x23; bool x24; id x25; }*)internalContextWithEAGLContext:(id)arg1 options:(id)arg2;
+ (struct Context { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; struct CGColorSpace {} *x3; struct CGColorSpace {} *x4; int x5; bool x6; bool x7; bool x8; bool x9; struct CGContext {} *x10; float x11; bool x12; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_13_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_13_1_2; } x13; struct CGAffineTransform { double x_14_1_1; double x_14_1_2; double x_14_1_3; double x_14_1_4; double x_14_1_5; double x_14_1_6; } x14; int x15; unsigned long long x16; unsigned long long x17; int x18; bool x19; struct TreeCacheElement { struct Hash { unsigned char x_1_2_1[20]; } x_20_1_1; unsigned long long x_20_1_2; struct Kernel {} *x_20_1_3; } x20[1024]; unsigned long long x21; double x22; double x23; bool x24; id x25; }*)internalContextWithMTLDevice:(id)arg1 options:(id)arg2;
+ (struct Context { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; struct CGColorSpace {} *x3; struct CGColorSpace {} *x4; int x5; bool x6; bool x7; bool x8; bool x9; struct CGContext {} *x10; float x11; bool x12; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_13_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_13_1_2; } x13; struct CGAffineTransform { double x_14_1_1; double x_14_1_2; double x_14_1_3; double x_14_1_4; double x_14_1_5; double x_14_1_6; } x14; int x15; unsigned long long x16; unsigned long long x17; int x18; bool x19; struct TreeCacheElement { struct Hash { unsigned char x_1_2_1[20]; } x_20_1_1; unsigned long long x_20_1_2; struct Kernel {} *x_20_1_3; } x20[1024]; unsigned long long x21; double x22; double x23; bool x24; id x25; }*)internalGLContextWithOptions:(id)arg1;

- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })CTM;
- (id)JPEGRepresentationOfImage:(id)arg1 colorSpace:(struct CGColorSpace { }*)arg2 options:(id)arg3;
- (id)TIFFRepresentationOfImage:(id)arg1 format:(int)arg2 colorSpace:(struct CGColorSpace { }*)arg3 options:(id)arg4;
- (struct CGImage { }*)_createCGImage:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 format:(int)arg3 colorSpace:(struct CGColorSpace { }*)arg4 deferred:(bool)arg5 textureLimit:(unsigned long long)arg6;
- (void)_gpuContextCheck;
- (id)_initWithInternalRepresentation:(void*)arg1;
- (void)_insertEventMarker:(const char *)arg1;
- (struct Context { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; struct CGColorSpace {} *x3; struct CGColorSpace {} *x4; int x5; bool x6; bool x7; bool x8; bool x9; struct CGContext {} *x10; float x11; bool x12; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_13_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_13_1_2; } x13; struct CGAffineTransform { double x_14_1_1; double x_14_1_2; double x_14_1_3; double x_14_1_4; double x_14_1_5; double x_14_1_6; } x14; int x15; unsigned long long x16; unsigned long long x17; int x18; bool x19; struct TreeCacheElement { struct Hash { unsigned char x_1_2_1[20]; } x_20_1_1; unsigned long long x_20_1_2; struct Kernel {} *x_20_1_3; } x20[1024]; unsigned long long x21; double x22; double x23; bool x24; id x25; }*)_internalContext;
- (bool)_isCGBackedContext;
- (bool)_isEAGLBackedContext;
- (struct CGColorSpace { }*)_outputColorSpace;
- (void)abort;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (void)clearCaches;
- (struct CGImage { }*)createCGImage:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGImage { }*)createCGImage:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 format:(int)arg3;
- (struct CGImage { }*)createCGImage:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 format:(int)arg3 colorSpace:(struct CGColorSpace { }*)arg4;
- (struct CGImage { }*)createCGImage:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 format:(int)arg3 colorSpace:(struct CGColorSpace { }*)arg4 deferred:(bool)arg5;
- (struct CGLayer { }*)createCGLayerWithSize:(struct CGSize { double x1; double x2; })arg1 info:(struct __CFDictionary { }*)arg2;
- (id)createColorCubeDataForFilters:(id)arg1 dimension:(int)arg2;
- (struct __IOSurface { }*)createIOSurface:(id)arg1;
- (struct __IOSurface { }*)createIOSurface:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)dealloc;
- (id)description;
- (void)drawImage:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)drawImage:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)flatten:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 format:(int)arg3 colorSpace:(struct CGColorSpace { }*)arg4;
- (id)init;
- (id)initWithCGContext:(struct CGContext { }*)arg1 options:(id)arg2;
- (id)initWithEAGLContext:(id)arg1;
- (id)initWithEAGLContext:(id)arg1 options:(id)arg2;
- (id)initWithMTLDevice:(id)arg1 options:(id)arg2;
- (id)initWithOptions:(id)arg1;
- (struct CGSize { double x1; double x2; })inputImageMaximumSize;
- (void)invalidate;
- (void)lock;
- (unsigned long long)maximumInputImageSize;
- (unsigned long long)maximumOutputImageSize;
- (bool)measureRequirementsOf:(id)arg1 query:(int)arg2 :(id*)arg3 results:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4;
- (id)objectForKey:(id)arg1;
- (struct CGSize { double x1; double x2; })outputImageMaximumSize;
- (void)reclaimResources;
- (void)render:(id)arg1;
- (void)render:(id)arg1 toBitmap:(void*)arg2 rowBytes:(long long)arg3 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 format:(int)arg5 colorSpace:(struct CGColorSpace { }*)arg6;
- (void)render:(id)arg1 toCVPixelBuffer:(struct __CVBuffer { }*)arg2;
- (void)render:(id)arg1 toCVPixelBuffer:(struct __CVBuffer { }*)arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 colorSpace:(struct CGColorSpace { }*)arg4;
- (void)render:(id)arg1 toIOSurface:(struct __IOSurface { }*)arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 colorSpace:(struct CGColorSpace { }*)arg4;
- (void)render:(id)arg1 toMTLTexture:(id)arg2 commandBuffer:(id)arg3 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 colorSpace:(struct CGColorSpace { }*)arg5;
- (void)render:(id)arg1 toTexture:(unsigned int)arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 colorSpace:(struct CGColorSpace { }*)arg4;
- (void)render:(id)arg1 toTexture:(unsigned int)arg2 target:(unsigned int)arg3 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 colorSpace:(struct CGColorSpace { }*)arg5;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCTM:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)unlock;
- (struct CGColorSpace { }*)workingColorSpace;
- (int)workingFormat;
- (bool)writeJPEGRepresentationOfImage:(id)arg1 toURL:(id)arg2 colorSpace:(struct CGColorSpace { }*)arg3 options:(id)arg4 error:(id*)arg5;
- (bool)writeTIFFRepresentationOfImage:(id)arg1 toURL:(id)arg2 format:(int)arg3 colorSpace:(struct CGColorSpace { }*)arg4 options:(id)arg5 error:(id*)arg6;

@end
