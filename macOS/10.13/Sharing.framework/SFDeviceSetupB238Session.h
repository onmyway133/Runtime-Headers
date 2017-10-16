/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing
 */

@interface SFDeviceSetupB238Session : NSObject <AVAudioPlayerDelegate> {
    BOOL  _acpSecured;
    BOOL  _activateCalled;
    NSDictionary * _additionalMetrics;
    BOOL  _apcEnabled;
    BOOL  _apcInitDone;
    APCListener * _apcListener;
    NSString * _apcPasscode;
    BOOL  _apcPlayAgain;
    BOOL  _apcPlaying;
    BOOL  _apcSkip;
    BOOL  _apcStartDone;
    BOOL  _apcStartedPairSetup;
    int  _apcState;
    BOOL  _apcSupported;
    NSObject<OS_dispatch_source> * _apcTimer;
    BOOL  _apcTryingPasscode;
    BOOL  _appleMusicEnabled;
    id  _audioPlayerCompletion;
    AVAudioPlayer * _audioPlayerDone;
    AVAudioPlayer * _audioPlayerStart;
    AVAudioPlayer * _audioPlayerStep;
    BOOL  _audioProgress;
    double  _basicConfigSecs;
    unsigned long long  _basicConfigStartTicks;
    int  _basicConfigState;
    NSString * _deviceGUID;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    double  _finishSecs;
    unsigned long long  _finishStartTicks;
    int  _finishState;
    NSString * _iCloudUserID;
    NSString * _iTunesUserID;
    BOOL  _invalidateCalled;
    unsigned int  _pairSetupFlags;
    double  _pairSetupSecs;
    int  _pairSetupState;
    SFDevice * _peerDevice;
    unsigned long long  _peerFeatureFlags;
    BOOL  _preAuthEnabled;
    int  _preAuthState;
    int  _preflightAppleMusicState;
    BOOL  _preflightEnabled;
    int  _preflightWiFiState;
    int  _preflightiCloudState;
    int  _preflightiTunesState;
    id  _progressHandler;
    id  _promptForAppleMusicHandler;
    id  _promptForHomeHandler;
    id  _promptForPINHandler;
    id  _promptForRoomHandler;
    id  _promptForSiriLanguageHandler;
    id  _promptToShareSettingsHandler;
    SFSession * _sfSession;
    BOOL  _sfSessionSecured;
    int  _sfSessionState;
    BOOL  _shareSettingsAgreed;
    int  _shareSettingsState;
    unsigned int  _siriFlags;
    NSArray * _siriLanguageCodes;
    long long  _siriLanguageIndex;
    int  _siriLanguageState;
    BOOL  _siriPasscodeEnabled;
    BOOL  _siriPasscodeInitDone;
    BOOL  _siriPasscodeSecured;
    int  _siriPasscodeState;
    NSString * _siriPreferredLanguage;
    unsigned long long  _startTicks;
    double  _totalSecs;
    BOOL  _touchRemoteEnabled;
    BOOL  _wifiSetupEnabled;
    SFDeviceOperationWiFiSetup * _wifiSetupOperation;
    double  _wifiSetupSecs;
    int  _wifiSetupState;
}

@property (nonatomic, readwrite, copy) NSDictionary *additionalMetrics;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (nonatomic, readwrite, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readwrite, retain) SFDevice *peerDevice;
@property (nonatomic, readwrite, copy) id progressHandler;
@property (nonatomic, readwrite, copy) id promptForAppleMusicHandler;
@property (nonatomic, readwrite, copy) id promptForHomeHandler;
@property (nonatomic, readwrite, copy) id promptForPINHandler;
@property (nonatomic, readwrite, copy) id promptForRoomHandler;
@property (nonatomic, readwrite, copy) id promptForSiriLanguageHandler;
@property (nonatomic, readwrite, copy) id promptToShareSettingsHandler;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readwrite) BOOL touchRemoteEnabled;

- (void).cxx_destruct;
- (void)_activate;
- (void)_cleanup;
- (void)_cleanupSession;
- (void)_invalidate;
- (void)_playLocalSoundID:(int)arg1 remoteSoundID:(int)arg2;
- (void)_playLocalSoundID:(int)arg1 remoteSoundID:(int)arg2 completion:(id)arg3;
- (void)_promptForPINWithFlags:(unsigned int)arg1 throttleSeconds:(int)arg2;
- (void)_reportError:(id)arg1 label:(id)arg2;
- (void)_run;
- (int)_runAppleMusic;
- (int)_runAudioPasscode;
- (void)_runAudioPasscodeCleanup;
- (void)_runAudioPasscodeHandleData:(id)arg1;
- (void)_runAudioPasscodeInitRequest;
- (void)_runAudioPasscodeInitResponse:(id)arg1 error:(id)arg2;
- (void)_runAudioPasscodeStartRequest;
- (void)_runAudioPasscodeStartResponse:(id)arg1 error:(id)arg2;
- (void)_runAudioPasscodeStopRequest;
- (void)_runAudioPasscodeTimeout;
- (int)_runBasicConfig;
- (void)_runBasicConfigReceiveResponse:(id)arg1 error:(id)arg2;
- (void)_runBasicConfigSendRequest;
- (void)_runFinishResponse:(id)arg1;
- (int)_runFinishStart;
- (int)_runPairSetup;
- (int)_runPreAuth;
- (void)_runPreAuthRequest;
- (void)_runPreAuthResponse:(id)arg1 error:(id)arg2;
- (int)_runPreflightWiFi;
- (int)_runPreflightiCloud;
- (int)_runPreflightiTunes;
- (int)_runSFSessionStart;
- (int)_runShareSettings;
- (int)_runSiriLanguage;
- (int)_runSiriPasscode;
- (void)_runSiriPasscodeInitRequest;
- (void)_runSiriPasscodeInitResponse:(id)arg1 error:(id)arg2;
- (void)_runSiriPasscodeStartPairSetup;
- (int)_runWiFiSetup;
- (void)_setupAudio;
- (void)_speakPasscodeWithCompletion:(id)arg1;
- (void)activate;
- (id)additionalMetrics;
- (void)appleMusicNext;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2;
- (void)audioSessionInterrupted:(id)arg1;
- (void)dealloc;
- (id)dispatchQueue;
- (void)homeKitSelectHome:(id)arg1;
- (void)homeKitSelectRoom:(id)arg1;
- (id)init;
- (void)invalidate;
- (void)pairSetupTryPIN:(id)arg1;
- (id)peerDevice;
- (void)playAudioPasscodeAgain;
- (id)progressHandler;
- (id)promptForAppleMusicHandler;
- (id)promptForHomeHandler;
- (id)promptForPINHandler;
- (id)promptForRoomHandler;
- (id)promptForSiriLanguageHandler;
- (id)promptToShareSettingsHandler;
- (void)setAdditionalMetrics:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setPeerDevice:(id)arg1;
- (void)setProgressHandler:(id)arg1;
- (void)setPromptForAppleMusicHandler:(id)arg1;
- (void)setPromptForHomeHandler:(id)arg1;
- (void)setPromptForPINHandler:(id)arg1;
- (void)setPromptForRoomHandler:(id)arg1;
- (void)setPromptForSiriLanguageHandler:(id)arg1;
- (void)setPromptToShareSettingsHandler:(id)arg1;
- (void)setTouchRemoteEnabled:(BOOL)arg1;
- (void)shareSettingsAgreed;
- (void)siriLanguagePicked:(long long)arg1;
- (void)skipAudioPasscode;
- (void)speakPasscodeWithCompletion:(id)arg1;
- (BOOL)touchRemoteEnabled;

@end