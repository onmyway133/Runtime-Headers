/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
 */

@interface AVCaptureAudioFileOutput : AVCaptureFileOutput {
    AVCaptureAudioFileOutputInternal * _internal;
}

@property (nonatomic, readwrite, copy) NSDictionary *audioSettings;
@property (nonatomic, readwrite, copy) NSArray *metadata;

+ (id)_avMetadataToID3Metadata:(id)arg1;
+ (id)availableOutputFileTypes;
+ (void)initialize;
+ (id)new;

- (id)_activeConnections;
- (void)_addActiveConnection:(id)arg1;
- (void)_cancelAllOperations;
- (void)_cancelFileControlCallbackTimeoutTimer;
- (int)_compressorDidRenderConnection:(id)arg1 busNumber:(unsigned int)arg2 processHints:(unsigned int*)arg3 sampleBuffer:(struct opaqueCMSampleBuffer {}**)arg4;
- (void)_controlFileWritingForConnection:(id)arg1 busNumber:(unsigned int)arg2 fileControlToken:(struct OpaqueFileWritingControlToken { }*)arg3;
- (void)_fileControlCallbackTimeout:(id)arg1;
- (unsigned int)_fileWriterUnitElementForConnection:(id)arg1;
- (void)_filesCompleted:(id)arg1;
- (void)_forciblyStopFileWritingForRunningRecordingOperation;
- (void)_handleCanceledOperations:(id)arg1;
- (id)_noDataConnections;
- (void)_operationFailed:(id)arg1;
- (void)_refreshRecordingState;
- (void)_removeActiveConnection:(id)arg1;
- (BOOL)_removeRunningRecordingOperationDescriptorEqualTo:(id)arg1;
- (id)_runningRecordingOperationDescriptor;
- (void)_setNoDataConnections:(id)arg1;
- (void)_setPaused:(BOOL)arg1;
- (void)_setRunningRecordingOperationDescriptor:(id)arg1;
- (void)_setStopError:(id)arg1;
- (void)_startFileControlCallbackTimeoutTimer;
- (void)_startFileWritingForConnection:(id)arg1 fileControlToken:(struct OpaqueFileWritingControlToken { }*)arg2 runningRecordingOperationDescriptor:(id)arg3;
- (void)_startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2;
- (id)_stopError;
- (void)_stopFileWritingForConnection:(id)arg1 fileControlToken:(struct OpaqueFileWritingControlToken { }*)arg2 runningRecordingOperationDescriptor:(id)arg3 stopWritingFlags:(unsigned int)arg4 stopError:(id)arg5;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_syncTime;
- (void)_updateCompressorNodesForConnection:(id)arg1;
- (id)addConnection:(id)arg1 error:(id*)arg2;
- (BOOL)addOutputUnitsForConnection:(id)arg1 toGraph:(struct OpaqueCMIOGraph { }*)arg2 ofCaptureSession:(id)arg3 error:(id*)arg4;
- (id)audioSettings;
- (BOOL)canAddConnectionForMediaType:(id)arg1;
- (int)connectionGraphNodeForConnection:(id)arg1;
- (id)connectionMediaTypes;
- (unsigned int)connectionUnitInputNumberForConnection:(id)arg1;
- (void)dealloc;
- (BOOL)getAudioSplitterNode:(int*)arg1 andAudioMixerNode:(int*)arg2 forConnection:(id)arg3;
- (void)graphWillStartForSession:(id)arg1;
- (void)graphWillStopForSession:(id)arg1 error:(id)arg2;
- (id)init;
- (BOOL)isRecording;
- (BOOL)isRecordingPaused;
- (id)metadata;
- (id)notReadyError;
- (id)outputFileURL;
- (void)pauseRecording;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })recordedDuration;
- (long long)recordedFileSize;
- (void)removeConnection:(id)arg1;
- (void)removeOutputUnitsForConnection:(id)arg1 fromGraph:(struct OpaqueCMIOGraph { }*)arg2 ofCaptureSession:(id)arg3;
- (void)resumeRecording;
- (void)setAudioSettings:(id)arg1;
- (BOOL)setEnabled:(BOOL)arg1 forConnection:(id)arg2;
- (void)setMetadata:(id)arg1;
- (void)startRecordingToOutputFileURL:(id)arg1 outputFileType:(id)arg2 recordingDelegate:(id)arg3;
- (void)startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2;
- (id)stopError;
- (void)stopRecording;

@end
