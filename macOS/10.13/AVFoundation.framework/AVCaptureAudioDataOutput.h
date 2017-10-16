/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
 */

@interface AVCaptureAudioDataOutput : AVCaptureOutput {
    AVCaptureAudioDataOutputInternal * _internal;
}

@property (nonatomic, readwrite, copy) NSDictionary *audioSettings;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *sampleBufferCallbackQueue;
@property (nonatomic, readonly) <AVCaptureAudioDataOutputSampleBufferDelegate> *sampleBufferDelegate;

+ (void)initialize;
+ (id)new;

- (void)_updateCompressorNodesForConnection:(id)arg1;
- (BOOL)addOutputUnitsForConnection:(id)arg1 toGraph:(struct OpaqueCMIOGraph { }*)arg2 ofCaptureSession:(id)arg3 error:(id*)arg4;
- (id)audioSettings;
- (id)avCaptureOutputSettingsForConnection:(id)arg1 fileType:(id)arg2;
- (BOOL)canAddConnectionForMediaType:(id)arg1;
- (int)connectionGraphNodeForConnection:(id)arg1;
- (id)connectionMediaTypes;
- (unsigned int)connectionUnitInputNumberForConnection:(id)arg1;
- (void)dealloc;
- (BOOL)getAudioSplitterNode:(int*)arg1 andAudioMixerNode:(int*)arg2 forConnection:(id)arg3;
- (id)init;
- (id)outputGraphNodeDescriptionForConnection:(id)arg1;
- (void)removeOutputUnitsForConnection:(id)arg1 fromGraph:(struct OpaqueCMIOGraph { }*)arg2 ofCaptureSession:(id)arg3;
- (id)sampleBufferCallbackQueue;
- (id)sampleBufferDelegate;
- (void)setAudioSettings:(id)arg1;
- (void)setSampleBufferDelegate:(id)arg1 queue:(id)arg2;

@end
