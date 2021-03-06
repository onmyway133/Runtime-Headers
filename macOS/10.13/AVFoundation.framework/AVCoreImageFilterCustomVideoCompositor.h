/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
 */

@interface AVCoreImageFilterCustomVideoCompositor : NSObject <AVVideoCompositing> {
    CIContext * _defaultCIContext;
    NSObject<OS_dispatch_queue> * _defaultCIContextThreadSafety;
    NSObject<OS_dispatch_group> * _filteringRequestsInFlight;
    BOOL  _shouldCancelAllRequests;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) NSObject<OS_dispatch_group> *filteringRequestsInFlight;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *requiredPixelBufferAttributesForRenderContext;
@property (atomic, readwrite) BOOL shouldCancelAllRequests;
@property (nonatomic, readonly) NSDictionary *sourcePixelBufferAttributes;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readonly) BOOL supportsWideColorSourceFrames;

+ (void)initialize;

- (void)_willDeallocOrFinalize;
- (void)cancelAllPendingVideoCompositionRequests;
- (void)dealloc;
- (id)defaultCIContext;
- (id)filteringRequestsInFlight;
- (void)finalize;
- (id)init;
- (void)renderContextChanged:(id)arg1;
- (id)requiredPixelBufferAttributesForRenderContext;
- (void)setShouldCancelAllRequests:(BOOL)arg1;
- (BOOL)shouldCancelAllRequests;
- (id)sourcePixelBufferAttributes;
- (void)startVideoCompositionRequest:(id)arg1;
- (BOOL)supportsWideColorSourceFrames;

@end
