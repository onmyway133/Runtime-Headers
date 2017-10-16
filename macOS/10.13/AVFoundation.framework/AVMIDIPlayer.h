/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/Frameworks/AVFAudio.framework/Versions/A/AVFAudio
 */

@interface AVMIDIPlayer : NSObject {
    void * _impl;
}

@property (nonatomic, readwrite) double currentPosition;
@property (nonatomic, readonly) double duration;
@property (getter=isPlaying, nonatomic, readonly) BOOL playing;
@property (nonatomic, readwrite) float rate;

- (double)beatsForHostTime:(unsigned long long)arg1;
- (double)currentPosition;
- (void)dealloc;
- (double)duration;
- (void)finalize;
- (unsigned long long)hostTimeForBeats:(double)arg1;
- (id)initWithContentsOfURL:(id)arg1 soundBankURL:(id)arg2 error:(id*)arg3;
- (id)initWithData:(id)arg1 soundBankURL:(id)arg2 error:(id*)arg3;
- (BOOL)isPlaying;
- (void)play:(id)arg1;
- (void)prepareToPlay;
- (float)rate;
- (void)setCurrentPosition:(double)arg1;
- (void)setRate:(float)arg1;
- (void)stop;

// AVMIDIPlayer (AVMIDIPlayerPriv)

- (void)destroyBase;
- (/* Warning: unhandled struct encoding: '{MIDIPlayerImpl=^{OpaqueAUGraph}^{OpaqueMusicPlayer}^{OpaqueMusicSequence}d@?@}' */ struct MIDIPlayerImpl { struct OpaqueAUGraph {} *x1; struct OpaqueMusicPlayer {} *x2; struct OpaqueMusicSequence {} *x3; double x4; id x5; id x6; }*)impl;
- (id)initBase;

@end
