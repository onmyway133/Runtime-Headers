/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKInternalAudioPlayer : NSObject <AVAudioPlayerDelegate> {
    AVAudioPlayer * _avAudioPlayer;
    AVPlayer * _avPlayer;
    bool  _avPlayerPlayRequested;
    bool  _avPlayerPrepareRequested;
    long long  _avPlayerState;
    <CKInternalAudioPlayerDelegate> * _delegate;
    AVPlayerItem * _playerItem;
    long long  _playerType;
}

@property (nonatomic, readonly) double currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKInternalAudioPlayerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) double deviceCurrentTime;
@property (nonatomic, readonly) double duration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long playerType;
@property (getter=isPlaying, nonatomic, readonly) bool playing;
@property (readonly) Class superclass;
@property (nonatomic) float volume;

- (void).cxx_destruct;
- (void)_handleAVPlayerItemStateChange;
- (void)_notifyPlayerDidFinishSuccessfully:(bool)arg1;
- (void)_notifyPlayerDidPrepareAudioFileSuccessfully:(bool)arg1;
- (bool)_playAtTime:(double)arg1;
- (void)_playerItemDidEndNotification:(id)arg1;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(bool)arg2;
- (double)currentTime;
- (void)dealloc;
- (id)delegate;
- (double)deviceCurrentTime;
- (double)duration;
- (id)initWithContentsOfURL:(id)arg1 playerType:(long long)arg2;
- (bool)isPlaying;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pause;
- (bool)playAtTime:(double)arg1;
- (long long)playerType;
- (void)prepareToPlay;
- (void)setDelegate:(id)arg1;
- (void)setVolume:(float)arg1;
- (void)stop;
- (float)volume;

@end
