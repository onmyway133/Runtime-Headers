/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
 */

@interface CIContext : NSObject {
    void * _priv;
}

@property (atomic, readonly) struct Context { int (**x1)(); struct atomic<unsigned int> { unsigned int x_2_1_1; } x2; struct CGColorSpace {} *x3; struct CGColorSpace {} *x4; int x5; bool x6; bool x7; bool x8; bool x9; struct CGContext {} *x10; float x11; bool x12; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_13_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_13_1_2; } x13; struct CGAffineTransform { double x_14_1_1; double x_14_1_2; double x_14_1_3; double x_14_1_4; double x_14_1_5; double x_14_1_6; } x14; unsigned int x15; unsigned long long x16; unsigned long long x17; int x18; bool x19; struct TreeCacheElement { unsigned long long x_20_1_1; struct Kernel {} *x_20_1_2; } x20[1024]; unsigned long long x21; struct ObjectCache<CI::Node> {} *x22; struct ObjectCache<CI::Node> {} *x23; double x24; double x25; id x26; struct RenderTask {} x27; int x28; bool x29; unsigned long long x30; id x31; }*_internalContext;
@property (nonatomic, readonly) struct CGColorSpace { }*workingColorSpace;
@property (nonatomic, readonly) int workingFormat;

// Image: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage

+ (int)_crashed_because_nonaddressable_memory_was_passed_to_render:(id)arg1 toBitmap:(void*)arg2 rowBytes:(long long)arg3 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 format:(int)arg5 colorSpace:(struct CGColorSpace { }*)arg6;
+ (id)_singletonContext;
+ (id)context;
+ (id)contextWithCGContext:(struct CGContext { }*)arg1 options:(id)arg2;
+ (id)contextWithCGLContext:(struct _CGLContextObject { }*)arg1 pixelFormat:(struct _CGLPixelFormatObject { }*)arg2 colorSpace:(struct CGColorSpace { }*)arg3 options:(id)arg4;
+ (id)contextWithCGLContext:(struct _CGLContextObject { }*)arg1 pixelFormat:(struct _CGLPixelFormatObject { }*)arg2 options:(id)arg3;
+ (id)contextWithMTLDevice:(id)arg1;
+ (id)contextWithMTLDevice:(id)arg1 options:(id)arg2;
+ (id)contextWithOptions:(id)arg1;
+ (struct CGColorSpace { }*)defaultGrayColorSpace;
+ (struct CGColorSpace { }*)defaultRGBColorSpace;
+ (struct CGColorSpace { }*)defaultWorkingColorSpace;

- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })CTM;
- (int)_contextColorForInstruments;
- (void)_insertEventMarker:(const char *)arg1;
- (bool)_isCGBackedContext;
- (bool)_isGLBackedContext;
- (bool)_isGLInternalContext;
- (bool)_isMetalInternalContext;
- (struct CGColorSpace { }*)_outputColorSpace;
- (void)abort;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (void)clearCaches;
- (struct CGImage { }*)createCGImage:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGImage { }*)createCGImage:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 format:(int)arg3;
- (struct CGImage { }*)createCGImage:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 format:(int)arg3 colorSpace:(struct CGColorSpace { }*)arg4;
- (struct CGImage { }*)createCGImage:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 format:(int)arg3 colorSpace:(struct CGColorSpace { }*)arg4 deferred:(BOOL)arg5;
- (struct CGLayer { }*)createCGLayerWithSize:(struct CGSize { double x1; double x2; })arg1 info:(struct __CFDictionary { }*)arg2;
- (id)createColorCubeDataForFilters:(id)arg1 dimension:(int)arg2;
- (void)dealloc;
- (id)description;
- (void)drawImage:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)drawImage:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)flatten:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 format:(int)arg3 colorSpace:(struct CGColorSpace { }*)arg4;
- (id)init;
- (id)initWithCGContext:(struct CGContext { }*)arg1 options:(id)arg2;
- (id)initWithCGLContext:(struct _CGLContextObject { }*)arg1 pixelFormat:(struct _CGLPixelFormatObject { }*)arg2;
- (id)initWithCGLContext:(struct _CGLContextObject { }*)arg1 pixelFormat:(struct _CGLPixelFormatObject { }*)arg2 colorSpace:(struct CGColorSpace { }*)arg3 options:(id)arg4;
- (id)initWithCGLContext:(struct _CGLContextObject { }*)arg1 pixelFormat:(struct _CGLPixelFormatObject { }*)arg2 options:(id)arg3;
- (id)initWithMTLDevice:(id)arg1 options:(id)arg2;
- (id)initWithOptions:(id)arg1;
- (struct CGSize { double x1; double x2; })inputImageMaximumSize;
- (void)invalidate;
- (void)lock;
- (unsigned long long)maximumInputImageSize;
- (unsigned long long)maximumOutputImageSize;
- (BOOL)measureRequirementsOf:(id)arg1 query:(int)arg2 :(id*)arg3 results:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4;
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

// CIContext (CIRenderDestination)

- (id)_startTaskToRender:(id)arg1 toDestination:(id)arg2 forPrepareRender:(BOOL)arg3 error:(id*)arg4;
- (BOOL)prepareRender:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 toDestination:(id)arg3 atPoint:(struct CGPoint { double x1; double x2; })arg4 error:(id*)arg5;
- (id)startTaskToClear:(id)arg1 error:(id*)arg2;
- (id)startTaskToRender:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 toDestination:(id)arg3 atPoint:(struct CGPoint { double x1; double x2; })arg4 error:(id*)arg5;
- (id)startTaskToRender:(id)arg1 toDestination:(id)arg2 error:(id*)arg3;

// CIContext (ImageRepresentation)

- (id)HEIFRepresentationOfImage:(id)arg1 format:(int)arg2 colorSpace:(struct CGColorSpace { }*)arg3 options:(id)arg4;
- (id)JPEGRepresentationOfImage:(id)arg1 colorSpace:(struct CGColorSpace { }*)arg2 options:(id)arg3;
- (id)PNGRepresentationOfImage:(id)arg1 format:(int)arg2 colorSpace:(struct CGColorSpace { }*)arg3 options:(id)arg4;
- (id)TIFFRepresentationOfImage:(id)arg1 format:(int)arg2 colorSpace:(struct CGColorSpace { }*)arg3 options:(id)arg4;
- (BOOL)writeHEIFRepresentationOfImage:(id)arg1 toURL:(id)arg2 format:(int)arg3 colorSpace:(struct CGColorSpace { }*)arg4 options:(id)arg5 error:(id*)arg6;
- (BOOL)writeJPEGRepresentationOfImage:(id)arg1 toURL:(id)arg2 colorSpace:(struct CGColorSpace { }*)arg3 options:(id)arg4 error:(id*)arg5;
- (BOOL)writePNGRepresentationOfImage:(id)arg1 toURL:(id)arg2 format:(int)arg3 colorSpace:(struct CGColorSpace { }*)arg4 options:(id)arg5 error:(id*)arg6;
- (BOOL)writeTIFFRepresentationOfImage:(id)arg1 toURL:(id)arg2 format:(int)arg3 colorSpace:(struct CGColorSpace { }*)arg4 options:(id)arg5 error:(id*)arg6;

// CIContext (Internal)

+ (struct Context { int (**x1)(); struct atomic<unsigned int> { unsigned int x_2_1_1; } x2; struct CGColorSpace {} *x3; struct CGColorSpace {} *x4; int x5; bool x6; bool x7; bool x8; bool x9; struct CGContext {} *x10; float x11; bool x12; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_13_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_13_1_2; } x13; struct CGAffineTransform { double x_14_1_1; double x_14_1_2; double x_14_1_3; double x_14_1_4; double x_14_1_5; double x_14_1_6; } x14; unsigned int x15; unsigned long long x16; unsigned long long x17; int x18; bool x19; struct TreeCacheElement { unsigned long long x_20_1_1; struct Kernel {} *x_20_1_2; } x20[1024]; unsigned long long x21; struct ObjectCache<CI::Node> {} *x22; struct ObjectCache<CI::Node> {} *x23; double x24; double x25; id x26; struct RenderTask {} x27; int x28; bool x29; unsigned long long x30; id x31; }*)internalCLContextWithOptions:(id)arg1;
+ (struct Context { int (**x1)(); struct atomic<unsigned int> { unsigned int x_2_1_1; } x2; struct CGColorSpace {} *x3; struct CGColorSpace {} *x4; int x5; bool x6; bool x7; bool x8; bool x9; struct CGContext {} *x10; float x11; bool x12; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_13_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_13_1_2; } x13; struct CGAffineTransform { double x_14_1_1; double x_14_1_2; double x_14_1_3; double x_14_1_4; double x_14_1_5; double x_14_1_6; } x14; unsigned int x15; unsigned long long x16; unsigned long long x17; int x18; bool x19; struct TreeCacheElement { unsigned long long x_20_1_1; struct Kernel {} *x_20_1_2; } x20[1024]; unsigned long long x21; struct ObjectCache<CI::Node> {} *x22; struct ObjectCache<CI::Node> {} *x23; double x24; double x25; id x26; struct RenderTask {} x27; int x28; bool x29; unsigned long long x30; id x31; }*)internalCLContextWithOptions:(id)arg1 glContext:(void*)arg2;
+ (struct Context { int (**x1)(); struct atomic<unsigned int> { unsigned int x_2_1_1; } x2; struct CGColorSpace {} *x3; struct CGColorSpace {} *x4; int x5; bool x6; bool x7; bool x8; bool x9; struct CGContext {} *x10; float x11; bool x12; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_13_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_13_1_2; } x13; struct CGAffineTransform { double x_14_1_1; double x_14_1_2; double x_14_1_3; double x_14_1_4; double x_14_1_5; double x_14_1_6; } x14; unsigned int x15; unsigned long long x16; unsigned long long x17; int x18; bool x19; struct TreeCacheElement { unsigned long long x_20_1_1; struct Kernel {} *x_20_1_2; } x20[1024]; unsigned long long x21; struct ObjectCache<CI::Node> {} *x22; struct ObjectCache<CI::Node> {} *x23; double x24; double x25; id x26; struct RenderTask {} x27; int x28; bool x29; unsigned long long x30; id x31; }*)internalContextWithCGLContext:(struct _CGLContextObject { }*)arg1 pixelFormat:(struct _CGLPixelFormatObject { }*)arg2 options:(id)arg3;
+ (struct Context { int (**x1)(); struct atomic<unsigned int> { unsigned int x_2_1_1; } x2; struct CGColorSpace {} *x3; struct CGColorSpace {} *x4; int x5; bool x6; bool x7; bool x8; bool x9; struct CGContext {} *x10; float x11; bool x12; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_13_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_13_1_2; } x13; struct CGAffineTransform { double x_14_1_1; double x_14_1_2; double x_14_1_3; double x_14_1_4; double x_14_1_5; double x_14_1_6; } x14; unsigned int x15; unsigned long long x16; unsigned long long x17; int x18; bool x19; struct TreeCacheElement { unsigned long long x_20_1_1; struct Kernel {} *x_20_1_2; } x20[1024]; unsigned long long x21; struct ObjectCache<CI::Node> {} *x22; struct ObjectCache<CI::Node> {} *x23; double x24; double x25; id x26; struct RenderTask {} x27; int x28; bool x29; unsigned long long x30; id x31; }*)internalContextWithMTLDevice:(id)arg1 options:(id)arg2;
+ (struct Context { int (**x1)(); struct atomic<unsigned int> { unsigned int x_2_1_1; } x2; struct CGColorSpace {} *x3; struct CGColorSpace {} *x4; int x5; bool x6; bool x7; bool x8; bool x9; struct CGContext {} *x10; float x11; bool x12; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_13_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_13_1_2; } x13; struct CGAffineTransform { double x_14_1_1; double x_14_1_2; double x_14_1_3; double x_14_1_4; double x_14_1_5; double x_14_1_6; } x14; unsigned int x15; unsigned long long x16; unsigned long long x17; int x18; bool x19; struct TreeCacheElement { unsigned long long x_20_1_1; struct Kernel {} *x_20_1_2; } x20[1024]; unsigned long long x21; struct ObjectCache<CI::Node> {} *x22; struct ObjectCache<CI::Node> {} *x23; double x24; double x25; id x26; struct RenderTask {} x27; int x28; bool x29; unsigned long long x30; id x31; }*)internalGLContextWithOptions:(id)arg1;

- (struct CGImage { }*)_createCGImage:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 format:(int)arg3 colorSpace:(struct CGColorSpace { }*)arg4 deferred:(BOOL)arg5 textureLimit:(unsigned long long)arg6;
- (void)_gpuContextCheck;
- (id)_initWithInternalRepresentation:(void*)arg1;
- (struct Context { int (**x1)(); struct atomic<unsigned int> { unsigned int x_2_1_1; } x2; struct CGColorSpace {} *x3; struct CGColorSpace {} *x4; int x5; bool x6; bool x7; bool x8; bool x9; struct CGContext {} *x10; float x11; bool x12; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_13_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_13_1_2; } x13; struct CGAffineTransform { double x_14_1_1; double x_14_1_2; double x_14_1_3; double x_14_1_4; double x_14_1_5; double x_14_1_6; } x14; unsigned int x15; unsigned long long x16; unsigned long long x17; int x18; bool x19; struct TreeCacheElement { unsigned long long x_20_1_1; struct Kernel {} *x_20_1_2; } x20[1024]; unsigned long long x21; struct ObjectCache<CI::Node> {} *x22; struct ObjectCache<CI::Node> {} *x23; double x24; double x25; id x26; struct RenderTask {} x27; int x28; bool x29; unsigned long long x30; id x31; }*)_internalContext;

// CIContext (OfflineGPUSupport)

+ (id)_offlineGPUs;
+ (id)contextForOfflineGPUAtIndex:(unsigned int)arg1;
+ (id)contextForOfflineGPUAtIndex:(unsigned int)arg1 colorSpace:(struct CGColorSpace { }*)arg2 options:(id)arg3 sharedContext:(struct _CGLContextObject { }*)arg4;
+ (id)offlineGPUAtIndex:(unsigned int)arg1;
+ (id)offlineGPUAtIndex:(unsigned int)arg1 colorSpace:(struct CGColorSpace { }*)arg2 options:(id)arg3 sharedContext:(struct _CGLContextObject { }*)arg4;
+ (unsigned int)offlineGPUCount;

// CIContext (QuicklookSupport)

- (id)_pdfDataRepresentation;

// Image: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit

// CIContext (QTOpenGLContextAdditions)

+ (id)contextWithQTOpenGLContext:(id)arg1;

@end
