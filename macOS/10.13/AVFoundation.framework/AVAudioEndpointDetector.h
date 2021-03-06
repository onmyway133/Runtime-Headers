/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/Frameworks/AVFAudio.framework/Versions/A/AVFAudio
 */

@interface AVAudioEndpointDetector : NSObject <AVEndpointVADEventHandler> {
    void * _impl;
}

@property (nonatomic, readonly) bool VADConfigurationIsInitialized;
@property (nonatomic, readonly) AVAudioFormat *audioFormat;
@property (nonatomic, readonly) NSArray *categoryDimensions;
@property (nonatomic, readonly) struct AudioTimeStamp { double x1; unsigned long long x2; double x3; unsigned long long x4; struct SMPTETime { short x_5_1_1; short x_5_1_2; unsigned int x_5_1_3; unsigned int x_5_1_4; unsigned int x_5_1_5; short x_5_1_6; short x_5_1_7; short x_5_1_8; short x_5_1_9; } x5; unsigned int x6; unsigned int x7; } currentTime;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned int fullCategoryDimension;
@property (nonatomic, readonly) unsigned int fullInterleavedDimension;
@property (nonatomic, readonly) unsigned int fullTimingDimension;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *interleavedCategoryAndTimingDimensions;
@property (nonatomic, readonly) unsigned long long maximumSamplesPerBuffer;
@property (nonatomic, readonly) unsigned int numCategories;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readonly) NSArray *timingDimensions;

- (const struct VAD3Configuration { }*)VAD3ConfigurationFromHost;
- (bool)VADConfigurationIsInitialized;
- (id)audioFormat;
- (id)categoryDimensions;
- (id)categoryNameWhichCorrespondToCategoryNum:(unsigned int)arg1;
- (id)categoryValueNameForCategoryNum:(unsigned int)arg1 categoryValue:(unsigned int)arg2;
- (int)convertToAVVADStateValueThisEDLDecision:(int)arg1;
- (id)createNSMutableArrayFromStdVectorOfFloat32:(const struct vector<float, std::__1::allocator<float> > { float *x1; float *x2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_1_1; } x3; }*)arg1;
- (id)createNSMutableArrayFromStdVectorOfFloat64:(const struct vector<double, std::__1::allocator<double> > { double *x1; double *x2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_1_1; } x3; }*)arg1;
- (id)createNSMutableArrayFromStdVectorOfUInt32:(const struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x1; unsigned int *x2; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x_3_1_1; } x3; }*)arg1;
- (struct AudioTimeStamp { double x1; unsigned long long x2; double x3; unsigned long long x4; struct SMPTETime { short x_5_1_1; short x_5_1_2; unsigned int x_5_1_3; unsigned int x_5_1_4; unsigned int x_5_1_5; short x_5_1_6; short x_5_1_7; short x_5_1_8; short x_5_1_9; } x5; unsigned int x6; unsigned int x7; })currentTime;
- (void)dealloc;
- (void)decodeFullWithStateCode:(unsigned int*)arg1 timingCode:(unsigned int*)arg2 fullCode:(unsigned int)arg3;
- (int)decodeOffline;
- (id)decodeState:(unsigned int)arg1;
- (void)decodeStateAndTimingDeinterleaved:(id*)arg1 timingValues:(id*)arg2 fullCode:(unsigned int)arg3;
- (id)decodeStateAndTimingInterleaved:(id)arg1 fullCode:(unsigned int)arg2;
- (id)decodeTiming:(unsigned int)arg1;
- (unsigned int)encodeFullWithStateCode:(unsigned int)arg1 timingCode:(unsigned int)arg2;
- (unsigned int)encodeState:(id)arg1;
- (unsigned int)encodeStateAndTimingDeinterleaved:(id)arg1 timingValues:(id)arg2;
- (unsigned int)encodeStateAndTimingValuesInterleaved:(id)arg1;
- (unsigned int)encodeTiming:(id)arg1;
- (unsigned int)fullCategoryDimension;
- (unsigned int)fullInterleavedDimension;
- (unsigned int)fullTimingDimension;
- (void)handleVADEventOfType:(int)arg1 andOfCategoryNum:(unsigned int)arg2 havingTimeStamp:(double)arg3 andHavingValue:(const void*)arg4;
- (struct EndpointVAD3Host { int (**x1)(); float x2; float x3; float x4; struct CAStreamBasicDescription { double x_5_1_1; unsigned int x_5_1_2; unsigned int x_5_1_3; unsigned int x_5_1_4; unsigned int x_5_1_5; unsigned int x_5_1_6; unsigned int x_5_1_7; unsigned int x_5_1_8; unsigned int x_5_1_9; } x5; float x6; float x7; float x8; float x9; struct AVAudioEndpointDetectorUtility { void *x_10_1_1; } x10; id x11; struct ComponentInstanceRecord {} x12; struct unique_ptr<EndpointVAD3FileSaver, std::__1::default_delete<EndpointVAD3FileSaver> > { struct __compressed_pair<EndpointVAD3FileSaver *, std::__1::default_delete<EndpointVAD3FileSaver> > { struct EndpointVAD3FileSaver {} *x_1_2_1; } x_13_1_1; } x13; struct AudioTimeStamp { double x_14_1_1; unsigned long long x_14_1_2; double x_14_1_3; unsigned long long x_14_1_4; struct SMPTETime { short x_5_2_1; short x_5_2_2; unsigned int x_5_2_3; unsigned int x_5_2_4; unsigned int x_5_2_5; short x_5_2_6; short x_5_2_7; short x_5_2_8; short x_5_2_9; } x_14_1_5; unsigned int x_14_1_6; unsigned int x_14_1_7; } x14; }*)host;
- (id)init;
- (id)interleavedCategoryAndTimingDimensions;
- (unsigned long long)maximumSamplesPerBuffer;
- (unsigned int)numCategories;
- (unsigned int)numCategoryValuesFromCategoryNum:(unsigned int)arg1;
- (long long)numberFramesInAudioFile:(const struct OpaqueExtAudioFile { }*)arg1;
- (struct OpaqueExtAudioFile { }*)openAudioFile:(id)arg1;
- (void)populateFloat32StdVector:(struct vector<float, std::__1::allocator<float> > { float *x1; float *x2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_1_1; } x3; }*)arg1 withFloatValuesFromNSArray:(id)arg2;
- (void)populateFloat64StdVector:(struct vector<double, std::__1::allocator<double> > { double *x1; double *x2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_1_1; } x3; }*)arg1 withDoubleValuesFromNSArray:(id)arg2;
- (void)populateUInt32StdVector:(struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x1; unsigned int *x2; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x_3_1_1; } x3; }*)arg1 withUnsignedIntValuesFromNSArray:(id)arg2;
- (void)printAndLogMessage:(id)arg1;
- (void)printToConsoleEventType:(int)arg1 AVVADStateValue:(int)arg2 eventTimeStampSeconds:(double)arg3 categoryName:(id)arg4 callToAUTime:(double)arg5;
- (int)processAudioBufferList:(struct AudioBufferList { unsigned int x1; struct AudioBuffer { unsigned int x_2_1_1; unsigned int x_2_1_2; void *x_2_1_3; } x2[1]; }*)arg1 ofMaximumCapacity:(unsigned int)arg2 containingPayloadOf:(unsigned int)arg3;
- (int)processAudioFileNamed:(id)arg1 andSaveInOutputObsFeatFilename:(id)arg2 andSaveInOutputULDATFeatFilename:(id)arg3 andSaveInOutputULDATAudioFilename:(id)arg4 andSaveInOutputASAFeatFilename:(id)arg5 andSaveInOutputASAAudioFilename:(id)arg6 accordingToEPFilenamePrefix:(id)arg7 accordingToRawStateFilenamePrefix:(id)arg8 accordingToPostDistFilenamePrefix:(id)arg9;
- (void)registerAUForOSXDevelopment;
- (int)resetAudioUnit;
- (void)resetTimerToZero;
- (void)saveToEndpointerEventLogThis:(int)arg1 ofCategoryNum:(unsigned int)arg2 withTimeStamp:(double)arg3 withCallToAUTime:(double)arg4;
- (void)saveToPosteriorDistributionsLogThisMarginalPosterior:(id)arg1 ofCategoryNum:(unsigned int)arg2 withTimeStamp:(double)arg3;
- (void)saveToRawStatesLogThis:(const unsigned int*)arg1 ofCategoryNum:(unsigned int)arg2 withTimeStamp:(double)arg3;
- (void)saveToRecurrentEventLogThis:(int)arg1 ofCategoryNum:(unsigned int)arg2 withTimeStamp:(double)arg3 withCallToAUTime:(double)arg4;
- (int)setupAudioUnitWithAPListFilename:(id)arg1 anAudioBufferSizeMilliseconds:(double)arg2 aRealtimeOperationMode:(bool)arg3 aDecoderLatencyInSecs:(float)arg4 anEndpointerInterspeechWaitTimeSec:(float)arg5 aSmoothingWindowMinSpeechSec:(float)arg6 aSmoothingWindowMinNonspeechSec:(float)arg7;
- (int)tearDownAudioUnit;
- (id)timingDimensions;
- (unsigned int)timingModelOrderForCategoryNum:(unsigned int)arg1;

@end
