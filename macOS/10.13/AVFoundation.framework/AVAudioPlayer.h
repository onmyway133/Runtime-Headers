/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/Frameworks/AVFAudio.framework/Versions/A/AVFAudio
 */

@interface AVAudioPlayer : NSObject {
    id  _impl;
}

@property (atomic, readwrite, copy) NSString *currentDevice;
@property (atomic, readwrite) double currentTime;
@property (atomic, readonly) NSData *data;
@property (atomic, readwrite) <AVAudioPlayerDelegate> *delegate;
@property (atomic, readonly) double deviceCurrentTime;
@property (atomic, readonly) double duration;
@property (atomic, readwrite) BOOL enableRate;
@property (atomic, readonly) AVAudioFormat *format;
@property (getter=isMeteringEnabled, atomic, readwrite) BOOL meteringEnabled;
@property (atomic, readonly) unsigned long long numberOfChannels;
@property (atomic, readwrite) long long numberOfLoops;
@property (atomic, readwrite) float pan;
@property (getter=isPlaying, atomic, readonly) BOOL playing;
@property (atomic, readwrite) float rate;
@property (atomic, readonly) NSDictionary *settings;
@property (atomic, readonly) NSURL *url;
@property (atomic, readwrite) float volume;

- (float)averagePowerForChannel:(unsigned long long)arg1;
- (id)currentDevice;
- (double)currentTime;
- (id)data;
- (void)dealloc;
- (id)delegate;
- (double)deviceCurrentTime;
- (double)duration;
- (BOOL)enableRate;
- (void)finalize;
- (id)format;
- (id)initWithContentsOfURL:(id)arg1 error:(id*)arg2;
- (id)initWithContentsOfURL:(id)arg1 fileTypeHint:(id)arg2 error:(id*)arg3;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)initWithData:(id)arg1 fileTypeHint:(id)arg2 error:(id*)arg3;
- (BOOL)isMeteringEnabled;
- (BOOL)isPlaying;
- (BOOL)mixToUplink;
- (unsigned long long)numberOfChannels;
- (long long)numberOfLoops;
- (float)pan;
- (void)pause;
- (float)peakPowerForChannel:(unsigned long long)arg1;
- (BOOL)play;
- (BOOL)playAtTime:(double)arg1;
- (BOOL)prepareToPlay;
- (float)rate;
- (void)setCurrentDevice:(id)arg1;
- (void)setCurrentTime:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnableRate:(BOOL)arg1;
- (void)setMeteringEnabled:(BOOL)arg1;
- (void)setMixToUplink:(BOOL)arg1;
- (void)setNumberOfLoops:(long long)arg1;
- (void)setPan:(float)arg1;
- (void)setRate:(float)arg1;
- (void)setVolume:(float)arg1;
- (void)setVolume:(float)arg1 fadeDuration:(double)arg2;
- (id)settings;
- (void)stop;
- (void)updateMeters;
- (id)url;
- (float)volume;

// AVAudioPlayer (AVAudioPlayerPriv)

- (void)decodeError:(id)arg1;
- (void)finishedPlaying:(id)arg1;
- (id)impl;
- (id)initBase;

@end
