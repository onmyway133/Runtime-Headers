/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/Versions/A/MetalTools
 */

@interface MTLDebugTexture : MTLToolsTexture {
    unsigned long long  _bytesPerRow;
    MTLDebugResource * _common;
    MTLDebugDevice * _debugDevice;
    MTLTextureDescriptor * _descriptor;
    unsigned long long  _offset;
    struct MTLPixelFormatInfo { 
        char *name; 
        unsigned int flags; 
        unsigned long long castClass; 
        union { 
            struct MTLNormalPixelFormatInfo { 
                unsigned long long pixelBytes; 
                unsigned char componentCount; 
            } normal; 
            struct MTLCompressedPixelFormatInfo { 
                unsigned long long blockBytes; 
                unsigned long long blockWidth; 
                unsigned long long blockHeight; 
                unsigned long long blockDepth; 
            } compressed; 
        } type; 
    }  _pixelFormatInfo;
    unsigned long long  _plane;
    unsigned long long  _purgeableState;
    BOOL  _purgeableStateHasBeenSet;
    MTLDebugResourceAccessTracker * _resourceAccessTracker;
    unsigned int  _textureUsage;
    unsigned long long  _usageRequired;
}

@property (nonatomic, readonly) unsigned long long bytesPerRow;
@property (nonatomic, readonly) MTLDebugResource *common;
@property (nonatomic, readonly, copy) MTLTextureDescriptor *descriptor;
@property (nonatomic, readonly) unsigned long long offset;
@property (nonatomic, readonly) unsigned long long plane;
@property (nonatomic, readonly) unsigned long long purgeableState;
@property (nonatomic, readonly) BOOL purgeableStateHasBeenSet;
@property (nonatomic, readonly) BOOL resourceTrackingEnabled;
@property (nonatomic, readonly) unsigned int resourceUsage;
@property (nonatomic, readwrite) unsigned int textureUsage;

- (void)_initResourceTrackingWithDevice:(id)arg1;
- (BOOL)_resourceHasMemory;
- (void)accessedByCPU;
- (void)accessedByGPU;
- (void)blitManagedToPrivate;
- (void)blitManagedToShared;
- (unsigned long long)bytesPerRow;
- (id)common;
- (void)dealloc;
- (id)description;
- (id)descriptor;
- (BOOL)doesAliasAllResources:(const id*)arg1 count:(unsigned long long)arg2;
- (BOOL)doesAliasAnyResources:(const id*)arg1 count:(unsigned long long)arg2;
- (BOOL)doesAliasResource:(id)arg1;
- (void)getBytes:(void*)arg1 bytesPerRow:(unsigned long long)arg2 bytesPerImage:(unsigned long long)arg3 fromRegion:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg4 mipmapLevel:(unsigned long long)arg5 slice:(unsigned long long)arg6;
- (void)getBytes:(void*)arg1 bytesPerRow:(unsigned long long)arg2 fromRegion:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg3 mipmapLevel:(unsigned long long)arg4;
- (id)heap;
- (id)initWithBaseTexture:(id)arg1 device:(id)arg2 buffer:(id)arg3 descriptor:(id)arg4 offset:(unsigned long long)arg5 bytesPerRow:(unsigned long long)arg6;
- (id)initWithBaseTexture:(id)arg1 device:(id)arg2 descriptor:(id)arg3;
- (id)initWithBaseTexture:(id)arg1 device:(id)arg2 descriptor:(id)arg3 plane:(unsigned long long)arg4;
- (id)initWithBaseTexture:(id)arg1 device:(id)arg2 texture:(id)arg3 descriptor:(id)arg4;
- (id)initWithBaseTexture:(id)arg1 device:(id)arg2 texture:(id)arg3 pixelFormat:(unsigned long long)arg4;
- (id)initWithBaseTexture:(id)arg1 device:(id)arg2 texture:(id)arg3 pixelFormat:(unsigned long long)arg4 textureType:(unsigned long long)arg5 levels:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 slices:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg7;
- (id)initWithBaseTexture:(id)arg1 heap:(id)arg2 device:(id)arg3 descriptor:(id)arg4;
- (void)makeAliasable;
- (id)newTextureViewWithPixelFormat:(unsigned long long)arg1;
- (id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 slices:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (unsigned long long)offset;
- (unsigned long long)plane;
- (unsigned long long)purgeableState;
- (BOOL)purgeableStateHasBeenSet;
- (void)replaceRegion:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg1 mipmapLevel:(unsigned long long)arg2 slice:(unsigned long long)arg3 withBytes:(const void*)arg4 bytesPerRow:(unsigned long long)arg5 bytesPerImage:(unsigned long long)arg6;
- (void)replaceRegion:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg1 mipmapLevel:(unsigned long long)arg2 withBytes:(const void*)arg3 bytesPerRow:(unsigned long long)arg4;
- (BOOL)requireUsage:(unsigned long long)arg1;
- (BOOL)resourceTrackingEnabled;
- (unsigned int)resourceUsage;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (void)setTextureUsage:(unsigned int)arg1;
- (unsigned int)textureUsage;

@end
