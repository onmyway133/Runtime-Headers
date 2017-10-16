/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
 */

@interface MTLIOAccelDevice : _MTLDevice {
    unsigned int  _accelID;
    unsigned int  _acceleratorPort;
    Class  _bufferClass;
    struct MTLIOAccelBufferHeap { 
        MTLIOAccelBuffer *buffers[64]; 
        struct MTLRangeAllocator { 
            struct MTLRangeAllocatorElement {} *elements; 
            unsigned int numElements; 
            unsigned int capacity; 
            unsigned int capacityIncrement; 
            unsigned int defaultAlignmentMask; 
        } allocators[64]; 
        unsigned int count; 
    }  _bufferHeaps;
    /* Warning: unhandled struct encoding: '{MTLIOAccelCommandBufferStoragePool={storageQueue=^{MTLIOAccelCommandBufferStorage}^^{MTLIOAccelCommandBufferStorage}}{os_unfair_lock_s=I}ii@}' */ struct MTLIOAccelCommandBufferStoragePool { struct storageQueue { struct MTLIOAccelCommandBufferStorage {} *x_1_1_1; struct MTLIOAccelCommandBufferStorage {} **x_1_1_2; } x1; struct os_unfair_lock_s { unsigned int x_2_1_1; } x2; int x3; int x4; id x5; } * _commandBufferStoragePool;
    unsigned int  _configBits;
    unsigned int  _deviceBits;
    struct __IOAccelDevice { } * _deviceRef;
    NSObject<OS_dispatch_queue> * _device_dispatch_queue;
    unsigned int  _fenceAllocatedCount;
    unsigned long long * _fenceAllocationBitmap;
    unsigned int  _fenceBitmapCount;
    unsigned int  _fenceBitmapSearchStart;
    unsigned int  _fenceMaximumCount;
    unsigned int  _notifyObject;
    struct IONotificationPort { } * _notifyPort;
    int  _numCommandBuffers;
    unsigned long long  _registryID;
    unsigned long long  _resourceMemoryAllocated;
    unsigned long long  _segmentByteThreshold;
    unsigned long long  _sharedMemorySize;
    struct __IOAccelShared { } * _sharedRef;
    /* Warning: unhandled struct encoding: '{?="segmentListShmemPool"@"MTLIOAccelDeviceShmemPool""kernelCommandShmemPool"@"MTLIOAccelDeviceShmemPool""hwResourcePools"^@"hwResourcePoolCount"I"akResourceListPool"@"MTLResourceListPool""akPrivateResourceListPool"@"MTLResourceListPool"}' */ struct { 
        MTLIOAccelDeviceShmemPool *segmentListShmemPool; 
        MTLIOAccelDeviceShmemPool *kernelCommandShmemPool; 
        hwResourcePoolCount **hwResourcePools; 
    }  _storageCreateParams;
    unsigned long long  _textureRam;
    unsigned long long  _videoRam;
}

@property (atomic, readonly) unsigned int acceleratorPort;
@property (atomic, readonly) Class bufferClass;
@property (atomic, readonly) unsigned long long currentAllocatedSize;
@property (atomic, readonly) unsigned long long dedicatedMemorySize;
@property (getter=isHeadless, atomic, readonly) BOOL headless;
@property (atomic, readonly) unsigned int hwResourcePoolCount;
@property (atomic, readonly) id*hwResourcePools;
@property (getter=isLowPower, atomic, readonly) BOOL lowPower;
@property (atomic, readonly) int numCommandBuffers;
@property (getter=areProgrammableSamplePositionsSupported, atomic, readonly) BOOL programmableSamplePositionsSupported;
@property (atomic, readonly) unsigned long long recommendedMaxWorkingSetSize;
@property (atomic, readonly) unsigned long long registryID;
@property (getter=isRemovable, atomic, readonly) BOOL removable;
@property (atomic, readonly) unsigned long long sharedMemorySize;
@property (atomic, readonly) BOOL supportPriorityBand;

+ (void)registerDevices;
+ (void)registerService:(unsigned int)arg1;

- (void)_addResource:(id)arg1;
- (void)_purgeDevice;
- (BOOL)_registerInterestNotification;
- (void)_removeResource:(id)arg1;
- (void)_wasRemoved;
- (unsigned int)acceleratorPort;
- (id)akPrivateResourceListPool;
- (id)akResourceListPool;
- (id)allocBufferSubDataWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 alignment:(int)arg3 heapIndex:(short*)arg4 bufferIndex:(short*)arg5 bufferOffset:(int*)arg6;
- (BOOL)areProgrammableSamplePositionsSupported;
- (Class)bufferClass;
- (unsigned long long)currentAllocatedSize;
- (void)dealloc;
- (void)deallocBufferSubData:(id)arg1 heapIndex:(short)arg2 bufferIndex:(short)arg3 bufferOffset:(int)arg4 length:(int)arg5;
- (unsigned long long)dedicatedMemorySize;
- (struct __IOAccelDevice { }*)deviceRef;
- (short)heapIndexWithOptions:(unsigned long long)arg1;
- (unsigned int)hwResourcePoolCount;
- (id*)hwResourcePools;
- (id)indirectArgumentBufferDecodingData;
- (id)initWithAcceleratorPort:(unsigned int)arg1;
- (unsigned int)initialKernelCommandShmemSize;
- (unsigned int)initialSegmentListShmemSize;
- (BOOL)isHeadless;
- (BOOL)isLowPower;
- (BOOL)isRemovable;
- (id)newCommandQueueWithDescriptor:(id)arg1;
- (id)newCommandQueueWithMaxCommandBufferCount:(unsigned long long)arg1;
- (id)newFence;
- (id)newIndirectArgumentBufferLayoutWithStructType:(id)arg1;
- (id)newIndirectArgumentEncoderWithLayout:(id)arg1;
- (id)newTiledTextureWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 deallocator:(id)arg3 descriptor:(id)arg4 offset:(unsigned long long)arg5 bytesPerRow:(unsigned long long)arg6;
- (id)newTiledTextureWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 descriptor:(id)arg3 offset:(unsigned long long)arg4 bytesPerRow:(unsigned long long)arg5;
- (int)numCommandBuffers;
- (unsigned long long)recommendedMaxWorkingSetSize;
- (unsigned long long)registryID;
- (void)releaseFenceIndex:(unsigned int)arg1;
- (void)setComputePipelineStateCommandShmemSize:(unsigned int)arg1;
- (void)setHwResourcePool:(id*)arg1 count:(int)arg2;
- (void)setIndirectArgumentBufferDecodingData:(id)arg1;
- (void)setSegmentListShmemSize:(unsigned int)arg1;
- (unsigned long long)sharedMemorySize;
- (struct __IOAccelShared { }*)sharedRef;
- (BOOL)supportPriorityBand;

@end
