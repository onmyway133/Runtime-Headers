/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing
 */

@interface SFDeviceSetupAppleTVSession : NSObject {
    BOOL  _activateCalled;
    int  _basicConfigState;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    int  _finishState;
    BOOL  _iCloudAccountMatches;
    NSString * _iTunesUserID;
    BOOL  _invalidateCalled;
    double  _pairSetupSecs;
    int  _pairSetupState;
    SFDevice * _peerDevice;
    int  _preAuthState;
    int  _preflightWiFiState;
    int  _preflightiTunesState;
    id  _progressHandler;
    id  _promptForHomeHandler;
    id  _promptForPINHandler;
    id  _promptForRoomHandler;
    SFSession * _sfSession;
    int  _sfSessionState;
    BOOL  _useSFSession;
}

@property (nonatomic, readwrite, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readwrite, retain) SFDevice *peerDevice;
@property (nonatomic, readwrite, copy) id progressHandler;
@property (nonatomic, readwrite, copy) id promptForHomeHandler;
@property (nonatomic, readwrite, copy) id promptForPINHandler;
@property (nonatomic, readwrite, copy) id promptForRoomHandler;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_reportError:(id)arg1 label:(id)arg2;
- (void)_run;
- (int)_runBasicConfig;
- (void)_runBasicConfigRequest;
- (void)_runBasicConfigResponse:(id)arg1 error:(id)arg2;
- (int)_runFinish:(BOOL)arg1;
- (int)_runPairSetup;
- (int)_runPreAuth;
- (void)_runPreAuthRequest;
- (void)_runPreAuthResponse:(id)arg1 error:(id)arg2;
- (int)_runPreflightWiFi;
- (int)_runPreflightiTunes;
- (int)_runSFSessionStart;
- (BOOL)_verifyiCloudMatch:(unsigned long long)arg1 error:(id*)arg2;
- (void)activate;
- (void)dealloc;
- (id)dispatchQueue;
- (void)homeKitSelectHome:(id)arg1;
- (void)homeKitSelectRoom:(id)arg1;
- (id)init;
- (void)invalidate;
- (void)pairSetupTryPIN:(id)arg1;
- (id)peerDevice;
- (id)progressHandler;
- (id)promptForHomeHandler;
- (id)promptForPINHandler;
- (id)promptForRoomHandler;
- (void)setDispatchQueue:(id)arg1;
- (void)setPeerDevice:(id)arg1;
- (void)setProgressHandler:(id)arg1;
- (void)setPromptForHomeHandler:(id)arg1;
- (void)setPromptForPINHandler:(id)arg1;
- (void)setPromptForRoomHandler:(id)arg1;

@end