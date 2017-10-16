/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/Versions/A/MetalTools
 */

@interface MTLDebugResourceAccessTracker : NSObject {
    unsigned int  _accessedByCPUFrameCount;
    unsigned int  _accessedByGPUFrameCount;
    unsigned int  _firstAccessFrameByCPU;
    unsigned int  _prevFrameNumCPUAccessed;
    unsigned int  _prevFrameNumGPUAccessed;
    unsigned int  _stateMask;
}

+ (void)_recordResourceAccessesForRenderTargetTexture:(id)arg1;
+ (void)processDeferredAttachments:(/* Warning: unhandled struct encoding: '{ResourceTrackingDeferredAttachments=@@@}' */ struct ResourceTrackingDeferredAttachments { id x1; id x2; }*)arg1;
+ (void)recordRenderTargetAccessesForEndEncoding:(BOOL)arg1 descriptor:(id)arg2 renderPipelineState:(id)arg3 depthStencilState:(id)arg4 deferredAttachments:(/* Warning: unhandled struct encoding: '{ResourceTrackingDeferredAttachments=@@@}' */ struct ResourceTrackingDeferredAttachments { id x1; id x2; }*)arg5 viewport:(struct { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg6 viewportCount:(unsigned int)arg7 scissor:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg8 scissorCount:(unsigned int)arg9;
+ (void)recordResourceAccessesForAttachment:(const struct MTLRenderPassAttachmentDescriptorPrivate { id x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; struct { double x_7_1_1; double x_7_1_2; double x_7_1_3; double x_7_1_4; } x7; double x8; unsigned int x9; id x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; }*)arg1 withStoreAction:(unsigned long long)arg2;
+ (void)recordResourceAccessesForColorAttachmentsWithDescriptor:(id)arg1 renderPipelineState:(id)arg2 forEndEncoding:(BOOL)arg3 deferredAttachments:(/* Warning: unhandled struct encoding: '{ResourceTrackingDeferredAttachments=@@@}' */ struct ResourceTrackingDeferredAttachments { id x1; id x2; }*)arg4;
+ (void)recordResourceAccessesForDepthAttachmentWithDescriptor:(id)arg1 forEndEncoding:(BOOL)arg2 deferredAttachments:(/* Warning: unhandled struct encoding: '{ResourceTrackingDeferredAttachments=@@@}' */ struct ResourceTrackingDeferredAttachments { id x1; id x2; }*)arg3;
+ (void)recordResourceAccessesForStencilAttachmentWithDescriptor:(id)arg1 forEndEncoding:(BOOL)arg2 deferredAttachments:(/* Warning: unhandled struct encoding: '{ResourceTrackingDeferredAttachments=@@@}' */ struct ResourceTrackingDeferredAttachments { id x1; id x2; }*)arg3;
+ (void)recordWritableBuffersOnCommandBuffer:(id)arg1 reflectionArguments:(id)arg2 bufferFuncArgsPtr:(struct { BOOL x1; BOOL x2; unsigned long long x3; id x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; BOOL x9; float x10; float x11; }*)arg3 textureFuncArgsPtr:(struct { BOOL x1; BOOL x2; unsigned long long x3; id x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; BOOL x9; float x10; float x11; }*)arg4;
+ (void)resourceTrackingRecordAccessesToArguments:(id)arg1 bufferFuncArgsPtr:(struct { BOOL x1; BOOL x2; unsigned long long x3; id x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; BOOL x9; float x10; float x11; }*)arg2 textureFuncArgsPtr:(struct { BOOL x1; BOOL x2; unsigned long long x3; id x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; BOOL x9; float x10; float x11; }*)arg3;

- (void)accessedBy:(int)arg1 frame:(unsigned int)arg2 accessTypes:(unsigned int)arg3;
- (unsigned int)conclude;
- (id)init;
- (void)reset;

@end