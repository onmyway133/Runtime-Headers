/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/Versions/A/MetalTools
 */

@interface MTLToolsDevice : MTLToolsObject <MTLDeviceSPI> {
    MTLToolsPointerArray * _buffers;
    MTLToolsPointerArray * _commandQueues;
    MTLToolsPointerArray * _computePipelineStates;
    MTLToolsPointerArray * _depthStencilStates;
    <MTLDeviceSPI> * _deviceWrapper;
    MTLToolsPointerArray * _fences;
    MTLToolsPointerArray * _functions;
    MTLToolsPointerArray * _heaps;
    MTLToolsPointerArray * _indirectArgumentEncoders;
    BOOL  _integrated;
    MTLToolsPointerArray * _libraries;
    unsigned long long  _memorySize;
    MTLToolsPointerArray * _pipelineStates;
    MTLToolsPointerArray * _samplers;
    MTLToolsPointerArray * _textureLayouts;
    MTLToolsPointerArray * _textures;
}

@property (getter=isASTCPixelFormatsSupported, atomic, readonly) BOOL ASTCPixelFormatsSupported;
@property (atomic, readonly) unsigned int acceleratorPort;
@property (atomic, readonly) unsigned long long argumentBuffersSupport;
@property (nonatomic, readonly) MTLToolsPointerArray *buffers;
@property (nonatomic, readonly) MTLToolsPointerArray *commandQueues;
@property (nonatomic, readonly) MTLToolsPointerArray *computePipelineStates;
@property (atomic, readonly) unsigned long long currentAllocatedSize;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly) unsigned long long dedicatedMemorySize;
@property (getter=isDepth24Stencil8PixelFormatSupported, atomic, readonly) BOOL depth24Stencil8PixelFormatSupported;
@property (nonatomic, readonly) MTLToolsPointerArray *depthStencilStates;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long deviceLinearReadOnlyTextureAlignmentBytes;
@property (atomic, readonly) unsigned long long deviceLinearTextureAlignmentBytes;
@property (atomic, readonly) unsigned long long doubleFPConfig;
@property (atomic, readonly) unsigned long long featureProfile;
@property (nonatomic, readonly) MTLToolsPointerArray *fences;
@property (getter=isFramebufferReadSupported, atomic, readonly) BOOL framebufferReadSupported;
@property (nonatomic, readonly) MTLToolsPointerArray *functions;
@property (atomic, readonly) unsigned long long halfFPConfig;
@property (atomic, readonly) unsigned long long hash;
@property (getter=isHeadless, atomic, readonly) BOOL headless;
@property (nonatomic, readonly) MTLToolsPointerArray *heaps;
@property (atomic, readonly) struct IndirectArgumentBufferCapabilities { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 29; } indirectArgumentBufferCapabilities;
@property (atomic, readonly) unsigned long long indirectArgumentBuffersSupport;
@property (nonatomic, readonly) MTLToolsPointerArray *indirectArgumentEncoders;
@property (getter=isIntegrated, atomic, readonly) BOOL integrated;
@property (atomic, readonly) unsigned long long iosurfaceReadOnlyTextureAlignmentBytes;
@property (atomic, readonly) unsigned long long iosurfaceTextureAlignmentBytes;
@property (nonatomic, readonly) MTLToolsPointerArray *libraries;
@property (atomic, readonly) const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; float x19; float x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; unsigned int x29; unsigned int x30; unsigned int x31; unsigned int x32; unsigned int x33; unsigned int x34; unsigned int x35; unsigned int x36; unsigned int x37; unsigned int x38; unsigned int x39; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; }*limits;
@property (atomic, readonly) unsigned long long linearTextureAlignmentBytes;
@property (getter=isLowPower, atomic, readonly) BOOL lowPower;
@property (getter=isMagicMipmapSupported, atomic, readonly) BOOL magicMipmapSupported;
@property (atomic, readonly) unsigned long long maxBufferLength;
@property (atomic, readonly) unsigned long long maxColorAttachments;
@property (atomic, readonly) unsigned long long maxComputeBuffers;
@property (atomic, readonly) unsigned long long maxComputeInlineDataSize;
@property (atomic, readonly) unsigned long long maxComputeLocalMemorySizes;
@property (atomic, readonly) unsigned long long maxComputeSamplers;
@property (atomic, readonly) unsigned long long maxComputeTextures;
@property (atomic, readonly) unsigned long long maxComputeThreadgroupMemory;
@property (atomic, readonly) unsigned long long maxComputeThreadgroupMemoryAlignmentBytes;
@property (atomic, readonly) unsigned long long maxCustomSamplePositions;
@property (atomic, readonly) unsigned long long maxFragmentBuffers;
@property (atomic, readonly) unsigned long long maxFragmentInlineDataSize;
@property (atomic, readonly) unsigned long long maxFragmentSamplers;
@property (atomic, readonly) unsigned long long maxFragmentTextures;
@property (atomic, readonly) unsigned long long maxFunctionConstantIndices;
@property (atomic, readonly) unsigned long long maxInterpolants;
@property (atomic, readonly) unsigned long long maxInterpolatedComponents;
@property (atomic, readonly) float maxLineWidth;
@property (atomic, readonly) float maxPointSize;
@property (atomic, readonly) unsigned long long maxTessellationFactor;
@property (atomic, readonly) unsigned long long maxTextureDepth3D;
@property (atomic, readonly) unsigned long long maxTextureDimensionCube;
@property (atomic, readonly) unsigned long long maxTextureHeight2D;
@property (atomic, readonly) unsigned long long maxTextureHeight3D;
@property (atomic, readonly) unsigned long long maxTextureLayers;
@property (atomic, readonly) unsigned long long maxTextureWidth1D;
@property (atomic, readonly) unsigned long long maxTextureWidth2D;
@property (atomic, readonly) unsigned long long maxTextureWidth3D;
@property (atomic, readonly) unsigned long long maxThreadgroupMemoryLength;
@property (atomic, readonly) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; } maxThreadsPerThreadgroup;
@property (atomic, readonly) unsigned long long maxTotalComputeThreadsPerThreadgroup;
@property (atomic, readonly) unsigned long long maxVertexAttributes;
@property (atomic, readonly) unsigned long long maxVertexBuffers;
@property (atomic, readonly) unsigned long long maxVertexInlineDataSize;
@property (atomic, readonly) unsigned long long maxVertexSamplers;
@property (atomic, readonly) unsigned long long maxVertexTextures;
@property (atomic, readonly) unsigned long long maxViewportCount;
@property (atomic, readonly) unsigned long long maxVisibilityQueryOffset;
@property (atomic, readonly) unsigned long long memorySize;
@property (nonatomic, readwrite) BOOL metalAssertionsEnabled;
@property (atomic, readonly) unsigned long long minBufferNoCopyAlignmentBytes;
@property (atomic, readonly) unsigned long long minConstantBufferAlignmentBytes;
@property (atomic, readonly) NSString *name;
@property (nonatomic, readonly) MTLToolsPointerArray *pipelineStates;
@property (getter=areProgrammableSamplePositionsSupported, atomic, readonly) BOOL programmableSamplePositionsSupported;
@property (getter=isQuadDataSharingSupported, atomic, readonly) BOOL quadDataSharingSupported;
@property (getter=areRasterOrderGroupsSupported, atomic, readonly) BOOL rasterOrderGroupsSupported;
@property (atomic, readonly) unsigned long long readWriteTextureSupport;
@property (atomic, readonly) unsigned long long recommendedMaxWorkingSetSize;
@property (atomic, readonly) unsigned long long registryID;
@property (getter=isRemovable, atomic, readonly) BOOL removable;
@property (atomic, readonly) BOOL requiresIABEmulation;
@property (nonatomic, readonly) MTLToolsPointerArray *samplers;
@property (atomic, readwrite) BOOL shaderDebugInfoCaching;
@property (atomic, readonly) unsigned long long sharedMemorySize;
@property (atomic, readonly) unsigned long long singleFPConfig;
@property (atomic, readonly) Class superclass;
@property (atomic, readonly) BOOL supportPriorityBand;
@property (getter=isSystemDefaultDevice, atomic, readonly) BOOL systemDefaultDevice;
@property (nonatomic, readonly) MTLToolsPointerArray *textureLayouts;
@property (nonatomic, readonly) MTLToolsPointerArray *textures;

+ (void)registerDevices;

- (BOOL)_registerInterestNotification;
- (void)_removeRequested;
- (void)_setDeviceWrapper:(id)arg1;
- (void)_wasRemoved;
- (unsigned int)acceleratorPort;
- (void)acceptVisitor:(id)arg1;
- (BOOL)areProgrammableSamplePositionsSupported;
- (BOOL)areRasterOrderGroupsSupported;
- (unsigned long long)argumentBuffersSupport;
- (id)buffers;
- (id)commandQueues;
- (void)compilerPropagatesThreadPriority:(bool)arg1;
- (id)computePipelineStates;
- (unsigned long long)currentAllocatedSize;
- (void)dealloc;
- (unsigned long long)dedicatedMemorySize;
- (id)depthStencilStates;
- (unsigned long long)deviceLinearReadOnlyTextureAlignmentBytes;
- (unsigned long long)deviceLinearTextureAlignmentBytes;
- (BOOL)deviceOrFeatureProfileSupportsFeatureSet:(unsigned long long)arg1;
- (BOOL)deviceSupportsFeatureSet:(unsigned long long)arg1;
- (unsigned long long)doubleFPConfig;
- (id)familyName;
- (unsigned long long)featureProfile;
- (id)fences;
- (id)functions;
- (void)getDefaultSamplePositions:(struct { float x1; float x2; }*)arg1 count:(unsigned long long)arg2;
- (unsigned long long)halfFPConfig;
- (struct { unsigned long long x1; unsigned long long x2; })heapBufferSizeAndAlignWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (struct { unsigned long long x1; unsigned long long x2; })heapTextureSizeAndAlignWithDescriptor:(id)arg1;
- (id)heaps;
- (struct IndirectArgumentBufferCapabilities { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 29; })indirectArgumentBufferCapabilities;
- (id)indirectArgumentEncoders;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2 lockingPolicy:(struct ILayerLockingPolicy { int (**x1)(); }*)arg3;
- (unsigned long long)iosurfaceReadOnlyTextureAlignmentBytes;
- (unsigned long long)iosurfaceTextureAlignmentBytes;
- (BOOL)isASTCPixelFormatsSupported;
- (BOOL)isDepth24Stencil8PixelFormatSupported;
- (BOOL)isFramebufferReadSupported;
- (BOOL)isHeadless;
- (BOOL)isIntegrated;
- (BOOL)isLowPower;
- (BOOL)isMagicMipmapSupported;
- (BOOL)isRemovable;
- (id)libraries;
- (struct { unsigned int x1; unsigned int x2; })libraryCacheStats;
- (const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; float x19; float x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; unsigned int x29; unsigned int x30; unsigned int x31; unsigned int x32; unsigned int x33; unsigned int x34; unsigned int x35; unsigned int x36; unsigned int x37; unsigned int x38; unsigned int x39; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; }*)limits;
- (unsigned long long)linearTextureAlignmentBytes;
- (BOOL)mapShaderSampleBufferWithBuffer:(struct { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 capacity:(unsigned long long)arg2 size:(unsigned long long)arg3;
- (unsigned long long)maxBufferLength;
- (unsigned long long)maxColorAttachments;
- (unsigned long long)maxComputeBuffers;
- (unsigned long long)maxComputeInlineDataSize;
- (unsigned long long)maxComputeLocalMemorySizes;
- (unsigned long long)maxComputeSamplers;
- (unsigned long long)maxComputeTextures;
- (unsigned long long)maxComputeThreadgroupMemory;
- (unsigned long long)maxComputeThreadgroupMemoryAlignmentBytes;
- (unsigned long long)maxCustomSamplePositions;
- (unsigned long long)maxFragmentBuffers;
- (unsigned long long)maxFragmentInlineDataSize;
- (unsigned long long)maxFragmentSamplers;
- (unsigned long long)maxFragmentTextures;
- (unsigned long long)maxFunctionConstantIndices;
- (unsigned long long)maxInterpolants;
- (unsigned long long)maxInterpolatedComponents;
- (float)maxLineWidth;
- (float)maxPointSize;
- (unsigned long long)maxTessellationFactor;
- (unsigned long long)maxTextureDepth3D;
- (unsigned long long)maxTextureDimensionCube;
- (unsigned long long)maxTextureHeight2D;
- (unsigned long long)maxTextureHeight3D;
- (unsigned long long)maxTextureLayers;
- (unsigned long long)maxTextureWidth1D;
- (unsigned long long)maxTextureWidth2D;
- (unsigned long long)maxTextureWidth3D;
- (unsigned long long)maxThreadgroupMemoryLength;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })maxThreadsPerThreadgroup;
- (unsigned long long)maxTotalComputeThreadsPerThreadgroup;
- (unsigned long long)maxVertexAttributes;
- (unsigned long long)maxVertexBuffers;
- (unsigned long long)maxVertexInlineDataSize;
- (unsigned long long)maxVertexSamplers;
- (unsigned long long)maxVertexTextures;
- (unsigned long long)maxViewportCount;
- (unsigned long long)maxVisibilityQueryOffset;
- (unsigned long long)memorySize;
- (BOOL)metalAssertionsEnabled;
- (unsigned long long)minBufferNoCopyAlignmentBytes;
- (unsigned long long)minConstantBufferAlignmentBytes;
- (unsigned long long)minLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1;
- (unsigned long long)minimumLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1;
- (id)name;
- (id)newArgumentEncoderWithArguments:(id)arg1;
- (id)newArgumentEncoderWithLayout:(id)arg1;
- (id)newBufferWithBytes:(const void*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)newBufferWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 deallocator:(id)arg4;
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)newCommandQueue;
- (id)newCommandQueueWithDescriptor:(id)arg1;
- (id)newCommandQueueWithMaxCommandBufferCount:(unsigned long long)arg1;
- (void)newComputePipelineStateWithDescriptor:(id)arg1 completionHandler:(id)arg2;
- (id)newComputePipelineStateWithDescriptor:(id)arg1 error:(id*)arg2;
- (void)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id)arg3;
- (id)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (void)newComputePipelineStateWithFunction:(id)arg1 completionHandler:(id)arg2;
- (id)newComputePipelineStateWithFunction:(id)arg1 error:(id*)arg2;
- (void)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id)arg3;
- (id)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (id)newComputePipelineStateWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const struct { bool x1; unsigned long long x2; struct { /* ? */ } *x3; }*)arg2 error:(id*)arg3;
- (id)newDefaultLibrary;
- (id)newDefaultLibraryWithBundle:(id)arg1 error:(id*)arg2;
- (id)newDepthStencilStateWithDescriptor:(id)arg1;
- (id)newFence;
- (id)newHeapWithDescriptor:(id)arg1;
- (id)newIndirectArgumentBufferLayoutWithStructType:(id)arg1;
- (id)newIndirectArgumentEncoderWithArguments:(id)arg1;
- (id)newIndirectArgumentEncoderWithLayout:(id)arg1;
- (id)newLibraryWithCIFilters:(id)arg1 imageFilterFunctionInfo:(const struct { bool x1; unsigned long long x2; struct { /* ? */ } *x3; }*)arg2 error:(id*)arg3;
- (id)newLibraryWithCIFiltersForComputePipeline:(id)arg1 imageFilterFunctionInfo:(const struct { bool x1; unsigned long long x2; struct { /* ? */ } *x3; }*)arg2 error:(id*)arg3;
- (id)newLibraryWithData:(id)arg1 error:(id*)arg2;
- (id)newLibraryWithFile:(id)arg1 error:(id*)arg2;
- (void)newLibraryWithSource:(id)arg1 options:(id)arg2 completionHandler:(id)arg3;
- (id)newLibraryWithSource:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)newLibraryWithURL:(id)arg1 error:(id*)arg2;
- (void)newRenderPipelineStateWithDescriptor:(id)arg1 completionHandler:(id)arg2;
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 error:(id*)arg2;
- (void)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id)arg3;
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (id)newSamplerStateWithDescriptor:(id)arg1;
- (id)newTextureWithDescriptor:(id)arg1;
- (id)newTextureWithDescriptor:(id)arg1 iosurface:(struct __IOSurface { }*)arg2 plane:(unsigned long long)arg3;
- (id)newTextureWithSurface:(unsigned long long)arg1 buffer:(unsigned long long)arg2;
- (id)newTiledTextureWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 deallocator:(id)arg3 descriptor:(id)arg4 offset:(unsigned long long)arg5 bytesPerRow:(unsigned long long)arg6;
- (id)newTiledTextureWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 descriptor:(id)arg3 offset:(unsigned long long)arg4 bytesPerRow:(unsigned long long)arg5;
- (struct { unsigned int x1; unsigned int x2; })pipelineCacheStats;
- (id)pipelineStates;
- (id)productName;
- (unsigned long long)readWriteTextureSupport;
- (unsigned long long)recommendedMaxWorkingSetSize;
- (unsigned long long)registryID;
- (BOOL)requiresIABEmulation;
- (id)samplers;
- (void)setMetalAssertionsEnabled:(BOOL)arg1;
- (void)setShaderDebugInfoCaching:(BOOL)arg1;
- (void)setupMPSFunctionTable:(struct MPSFunctionTable { }*)arg1;
- (BOOL)shaderDebugInfoCaching;
- (unsigned long long)sharedMemorySize;
- (unsigned long long)singleFPConfig;
- (BOOL)supportPriorityBand;
- (BOOL)supportsFeatureSet:(unsigned long long)arg1;
- (BOOL)supportsSampleCount:(unsigned long long)arg1;
- (BOOL)supportsTextureSampleCount:(unsigned long long)arg1;
- (id)textureLayouts;
- (id)textures;
- (void)unloadShaderCaches;
- (void)unmapShaderSampleBuffer;
- (id)unwrapMTLComputePipelineDescriptor:(id)arg1;
- (id)unwrapMTLRenderPipelineDescriptor:(id)arg1;
- (id)vendorName;

@end