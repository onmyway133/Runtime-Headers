/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
 */

@interface AVCaptureVideoDataOutput : AVCaptureOutput {
    AVCaptureVideoDataOutputInternal * _internal;
}

@property (nonatomic, readwrite) BOOL alwaysDiscardsLateVideoFrames;
@property (nonatomic, readonly) NSArray *availableVideoCVPixelFormatTypes;
@property (nonatomic, readonly) NSArray *availableVideoCodecTypes;
@property (nonatomic, readwrite) struct { long long x1; int x2; unsigned int x3; long long x4; } minFrameDuration;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *sampleBufferCallbackQueue;
@property (nonatomic, readonly) <AVCaptureVideoDataOutputSampleBufferDelegate> *sampleBufferDelegate;
@property (nonatomic, readwrite, copy) NSDictionary *videoSettings;

+ (void)initialize;
+ (id)new;

- (void)_updateCompressorNodesForConnection:(id)arg1;
- (void)_updateVideoDecompressorNodeForConnection:(id)arg1;
- (void)_updateVideoFrameRateGovernorNodeForConnection:(id)arg1;
- (id)addConnection:(id)arg1 error:(id*)arg2;
- (BOOL)addOutputUnitsForConnection:(id)arg1 toGraph:(struct OpaqueCMIOGraph { }*)arg2 ofCaptureSession:(id)arg3 error:(id*)arg4;
- (BOOL)alwaysDiscardsLateVideoFrames;
- (id)avCaptureOutputSettingsForConnection:(id)arg1 fileType:(id)arg2;
- (id)availableVideoCVPixelFormatTypes;
- (id)availableVideoCodecTypes;
- (BOOL)canAddConnectionForMediaType:(id)arg1;
- (int)connectionGraphNodeForConnection:(id)arg1;
- (id)connectionMediaTypes;
- (unsigned int)connectionUnitInputNumberForConnection:(id)arg1;
- (void)dealloc;
- (id)init;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minFrameDuration;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)outputGraphNodeDescriptionForConnection:(id)arg1;
- (void)removeConnection:(id)arg1;
- (void)removeOutputUnitsForConnection:(id)arg1 fromGraph:(struct OpaqueCMIOGraph { }*)arg2 ofCaptureSession:(id)arg3;
- (id)sampleBufferCallbackQueue;
- (id)sampleBufferDelegate;
- (void)setAlwaysDiscardsLateVideoFrames:(BOOL)arg1;
- (void)setMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setSampleBufferDelegate:(id)arg1 queue:(id)arg2;
- (void)setVideoSettings:(id)arg1;
- (BOOL)supportsVideoFieldModeForConnection:(id)arg1;
- (BOOL)supportsVideoMaxFrameDurationForConnection:(id)arg1;
- (BOOL)supportsVideoMinFrameDurationForConnection:(id)arg1;
- (BOOL)supportsVideoMirroringForConnection:(id)arg1;
- (BOOL)supportsVideoOrientationForConnection:(id)arg1;
- (id)videoSettings;

@end
