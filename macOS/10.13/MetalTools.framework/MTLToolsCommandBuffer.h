/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/Versions/A/MetalTools
 */

@interface MTLToolsCommandBuffer : MTLToolsObject <MTLCommandBufferSPI> {
    MTLToolsPointerArray * _blitCommandEncoders;
    MTLToolsPointerArray * _computeCommandEncoders;
    struct { 
        unsigned int hasCommit : 1; 
        unsigned int addedCompletedHandler : 1; 
        unsigned int addedScheduledHandler : 1; 
        unsigned int padding : 29; 
    }  _flags;
    MTLToolsPointerArray * _parallelRenderCommandEncoders;
    MTLToolsPointerArray * _renderCommandEncoders;
    NSMutableSet * _retainedObjects;
    struct ILayerLockingPolicy { int (**x1)(); } * _retainedObjectsLock;
}

@property (atomic, readonly) double GPUEndTime;
@property (atomic, readonly) double GPUStartTime;
@property (nonatomic, readonly) MTLToolsPointerArray *blitCommandEncoders;
@property (atomic, readonly) <MTLCommandQueue> *commandQueue;
@property (nonatomic, readonly) MTLToolsPointerArray *computeCommandEncoders;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) <MTLDevice> *device;
@property (atomic, readonly) NSError *error;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) double kernelEndTime;
@property (atomic, readonly) double kernelStartTime;
@property (atomic, readwrite, copy) NSString *label;
@property (getter=getListIndex, nonatomic, readwrite) unsigned long long listIndex;
@property (nonatomic, readonly) MTLToolsPointerArray *parallelRenderCommandEncoders;
@property (getter=isProfilingEnabled, atomic, readwrite) BOOL profilingEnabled;
@property (atomic, readonly) NSDictionary *profilingResults;
@property (nonatomic, readonly) MTLToolsPointerArray *renderCommandEncoders;
@property (nonatomic, readonly) NSMutableSet *retainedObjects;
@property (nonatomic, readwrite) struct ILayerLockingPolicy { int (**x1)(); }*retainedObjectsLock;
@property (atomic, readonly) BOOL retainedReferences;
@property (atomic, readonly) unsigned long long status;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readonly) NSMutableDictionary *userDictionary;

- (double)GPUEndTime;
- (double)GPUStartTime;
- (void)acceptVisitor:(id)arg1;
- (void)addCompletedHandler:(id)arg1;
- (void)addRetainedObject:(id)arg1;
- (void)addScheduledHandler:(id)arg1;
- (id)blitCommandEncoder;
- (id)blitCommandEncoders;
- (void)clearRetainedObjects;
- (id)commandQueue;
- (void)commit;
- (id)computeCommandEncoder;
- (id)computeCommandEncoders;
- (void)dealloc;
- (id)debugCommandEncoder;
- (void)enqueue;
- (id)error;
- (unsigned long long)getListIndex;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (BOOL)isProfilingEnabled;
- (double)kernelEndTime;
- (double)kernelStartTime;
- (id)label;
- (id)parallelRenderCommandEncoderWithDescriptor:(id)arg1;
- (id)parallelRenderCommandEncoders;
- (void)popDebugGroup;
- (void)presentDrawable:(id)arg1;
- (void)presentDrawable:(id)arg1 atTime:(double)arg2;
- (id)profilingResults;
- (void)pushDebugGroup:(id)arg1;
- (id)renderCommandEncoderWithDescriptor:(id)arg1;
- (id)renderCommandEncoders;
- (id)retainedObjects;
- (struct ILayerLockingPolicy { int (**x1)(); }*)retainedObjectsLock;
- (BOOL)retainedReferences;
- (id)sampledComputeCommandEncoderWithProgramInfoBuffer:(struct { unsigned int x1 : 8; unsigned int x2 : 24; unsigned int x3; unsigned long long x4; unsigned long long x5; }*)arg1 capacity:(unsigned long long)arg2;
- (id)sampledRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(struct { unsigned int x1 : 8; unsigned int x2 : 24; unsigned int x3; unsigned long long x4; unsigned long long x5; }*)arg2 capacity:(unsigned long long)arg3;
- (void)setLabel:(id)arg1;
- (void)setProfilingEnabled:(BOOL)arg1;
- (void)setRetainedObjectsLock:(struct ILayerLockingPolicy { int (**x1)(); }*)arg1;
- (unsigned long long)status;
- (id)unwrapMTLRenderPassDescriptor:(id)arg1;
- (id)userDictionary;
- (void)waitUntilCompleted;
- (void)waitUntilScheduled;

@end
