/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/Versions/A/ToneLibrary
 */

@interface TLAlertQueuePlayerController : NSObject <TLAlertPlaybackBackEndController> {
    TLAlert * _alertForAudioEnvironmentSetup;
    NSObject<OS_dispatch_queue> * _audioEventQueue;
    NSString * _audioEventQueueLabel;
    BOOL  _isAlertActivationAssertionAcquired;
    BOOL  _isAudioEnvironmentSetup;
    BOOL  _isObservingQueuePlayer;
    <TLAlertPlaybackObserver> * _playbackObserver;
    TLAlert * _playingAlert;
    id  _playingAlertCompletionHandler;
    NSString * _playingToneIdentifier;
    AVQueuePlayer * _queuePlayer;
    AVAsset * _toneAssetForPendingPlayingAlert;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

+ (id)_propertyKeysOfInterestForToneAssets;

- (void).cxx_destruct;
- (void)_assertRunningOnAudioEventQueue;
- (float)_audioVolumeForAlert:(id)arg1;
- (void)_beginPreventingAudioSessionDeactivation;
- (BOOL)_canPlayToneAsset:(id)arg1;
- (void)_createQueuePlayerIfNecessary;
- (void)_destroyQueuePlayer;
- (void)_didCompletePlaybackWithCompletionType:(long long)arg1 error:(id)arg2;
- (void)_didEndPlayingAlert;
- (void)_endPreventingAudioSessionDeactivation;
- (id)_fallbackToneIdentifierForPlayingAlert;
- (void)_handleActivationAssertionStatusChangeForAlert:(id)arg1 updatedStatus:(BOOL)arg2;
- (void)_performBlockOnAudioEventQueue:(id)arg1;
- (void)_playAlert:(id)arg1 withCompletionHandler:(id)arg2;
- (void)_prepareAudioEnvironment;
- (void)_queuePlayer:(id)arg1 currentItemStatusWasUpdatedToValue:(long long)arg2;
- (void)_queuePlayer:(id)arg1 currentItemWasUpdatedFromValue:(id)arg2;
- (void)_reloadPlaybackForPlayingAlertWithToneIdentifier:(id)arg1;
- (void)_restoreAudioEnvironment;
- (void)_startObservingQueuePlayer;
- (void)_startPlaybackForAssetWithLoadedProperties:(id)arg1 alert:(id)arg2;
- (void)_startPlaybackForPlayingAlertUsingConfirmedPlayableAsset:(id)arg1;
- (void)_startPlaybackForPlayingAlertUsingConfirmedPlayableAsset:(id)arg1 isFullyReady:(BOOL)arg2;
- (void)_stopObservingQueuePlayer;
- (void)_stopPlayback;
- (void)_stopPlaybackWithOptions:(id)arg1 playerWasAlreadyPausedExternally:(BOOL)arg2;
- (void)_stopPlayingAlerts:(id)arg1 withOptions:(id)arg2 playbackCompletionType:(long long)arg3 completionHandler:(id)arg4;
- (void)_updateAudioVolumeDynamicallyForAlert:(id)arg1 toValue:(float)arg2;
- (void)_willBeginPlayingAlert;
- (void)dealloc;
- (id)description;
- (void)handleActivationAssertionStatusChangeForAlert:(id)arg1 updatedStatus:(BOOL)arg2;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)playAlert:(id)arg1 withCompletionHandler:(id)arg2;
- (void)stopPlayingAlerts:(id)arg1 withOptions:(id)arg2 playbackCompletionType:(long long)arg3 completionHandler:(id)arg4;
- (void)updateAudioVolumeDynamicallyForAlert:(id)arg1 toValue:(float)arg2;

@end
