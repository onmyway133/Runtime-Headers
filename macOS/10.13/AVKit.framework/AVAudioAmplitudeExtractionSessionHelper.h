/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
 */

@interface AVAudioAmplitudeExtractionSessionHelper : NSObject {
    id * _amplitudeSampleDataArray;
    AVAtomicCancelationToken * _cancelationToken;
    int  _isExtractionFinished;
    float  _maximumExtractedAmplitude;
    NSObject<OS_dispatch_queue> * _maximumExtractedAmplitudeQueue;
    unsigned long long  _numberOfAmplitudeSamplesPerSecond;
    unsigned long long  _numberOfChannels;
    int  _numberOfExtractedAmplitudeSamples;
    AVAudioAmplitudeExtractionSession * _owner;
    NSObject<OS_dispatch_queue> * _ownerQueue;
    AVAudioExtractor * _uncompressedAudioExtractor;
}

@property (nonatomic, readonly) unsigned long long numberOfAmplitudeSamplesPerSecond;
@property (nonatomic, readonly) AVAudioExtractor *uncompressedAudioExtractor;

- (void).cxx_destruct;
- (id)amplitudeSamplesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)availableAmplitudeSampleIndexes;
- (void)dealloc;
- (id)init;
- (id)initWithOwner:(id)arg1 uncompressedAudioExtractor:(id)arg2 numberOfAmplitudeSamplesPerSecond:(unsigned long long)arg3;
- (void)invalidate;
- (BOOL)isExtractionFinished;
- (float)maximumExtractedAmplitude;
- (unsigned long long)numberOfAmplitudeSamplesPerSecond;
- (id)uncompressedAudioExtractor;

@end
