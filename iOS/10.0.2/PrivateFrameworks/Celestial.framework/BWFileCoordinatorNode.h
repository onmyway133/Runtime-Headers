/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWFileCoordinatorNode : BWNode {
    unsigned long long  _coarseAFStatusCounter;
    long long  _currSettingsID;
    struct OpaqueCMBlockBuffer { } * _emptyMetadataSampleData;
    bool  _firstAudioHasBeenProcessed;
    bool  _flagsLastFrameForVideoCompressor;
    const struct opaqueCMFormatDescription {} ** _formatDescriptionsForInputs;
    bool  _haveSeenAudioWhenStarting;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _inputOffset;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _largestMetadataPTS;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _largestStagedSupportingAudioVideoStagedPTS;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastMasterDuration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastMasterEndingPTS;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastMasterPTS;
    bool  _lowLatencyCanTossExtraVideoWhenStopping;
    bool  _lowLatencyCanTransitionEarlyToRecording;
    bool  _lowLatencyModeEnabled;
    BWNodeInput * _masterInput;
    unsigned long long  _masterInputIndex;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _masterStartingPTS;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _masterStoppingPTS;
    unsigned long long  _numActionOnlyOutputs;
    unsigned long long  _numAudioInputs;
    unsigned long long  _numInputs;
    unsigned long long  _numMetadataInputs;
    unsigned long long  _numOutputs;
    unsigned long long  _numVideoInputs;
    int  _recordingState;
    bool  _sendFlushMarkerWhenStopping;
    FigCaptureRecordingSettings * _settings;
    NSArray * _stagingQueues;
    struct OpaqueFigSimpleMutex { } * _stateMutex;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _stopRecordingPTS;
    int  _terminationErrorCode;
}

+ (void)initialize;

- (struct opaqueCMSampleBuffer { }*)_copyFirstValidLowLatencyAudioBuffer:(struct opaqueCMSampleBuffer { }*)arg1 inputIndex:(unsigned long long)arg2 sbufPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (struct opaqueCMSampleBuffer { }*)_createEmptyMetadataSBufWithPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forInputIndex:(unsigned long long)arg2;
- (void)_doStartingToRecordWithSBuf:(struct opaqueCMSampleBuffer { }*)arg1 inputIndex:(unsigned long long)arg2 sbufPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)_doStoppingOrPausingWithSBuf:(struct opaqueCMSampleBuffer { }*)arg1 inputIndex:(unsigned long long)arg2 sbufPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)_emitMarkerBufferForFileWriterAction:(struct __CFString { }*)arg1 withPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 settings:(id)arg3 errorCode:(int)arg4;
- (void)_emitSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2 toOutput:(id)arg3;
- (void)_emitStagedBufferForIndex:(unsigned long long)arg1;
- (void)_finishStoppingOrPausing:(bool)arg1 withErrorCode:(int)arg2;
- (void)_prepareToPauseOrStopRecording;
- (void)_prepareToResumeRecording;
- (void)_prepareToStartRecordingWithSettings:(id)arg1;
- (void)_printStagingEvent:(struct opaqueCMSampleBuffer { }*)arg1 forNodeInputIndex:(unsigned long long)arg2;
- (void)_stopRecordingWithErrorCode:(int)arg1;
- (void)cancelStartRecordingWithSettings:(id)arg1;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (bool)flagsLastFrameForVideoCompressor;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (void)handleIrisReferenceMovieRequest:(id)arg1 forInput:(id)arg2;
- (id)init;
- (id)initWithNumberOfVideoInputs:(unsigned long long)arg1 numberOfAudioInputs:(unsigned long long)arg2 numberOfMetadataInputs:(unsigned long long)arg3 numberOfActionOnlyOutputs:(unsigned long long)arg4 allowLowLatencyWhenPossible:(bool)arg5;
- (id)nodeSubType;
- (id)nodeType;
- (void)pauseRecording;
- (void)recordingTerminated:(unsigned long long)arg1;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)resumeRecording;
- (void)setFlagsLastFrameForVideoCompressor:(bool)arg1;
- (int)startRecordingWithSettings:(id)arg1 stopAtPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)stopRecordingWithErrorCode:(int)arg1;
- (bool)updateStopPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 previousStopPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg2;

@end
