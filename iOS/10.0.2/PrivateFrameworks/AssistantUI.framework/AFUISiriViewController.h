/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@interface AFUISiriViewController : UIViewController <AFUIDelayedActionCommandCacheDelegate, AFUISiriRemoteViewControllerDataSource, AFUISiriRemoteViewControllerDelegate, AFUISiriSessionLocalDataSource, AFUISiriSessionLocalDelegate, AFUISiriViewDelegate, SiriUIAudioRoutePickerControllerDelegate> {
    bool  _active;
    bool  _attemptingRemoteViewControllerPresentation;
    SiriUIConfiguration * _configuration;
    SACarPlaySupportedOEMAppIdList * _currentCarPlaySupportedOEMAppIdList;
    AFUIRequestOptions * _currentRequestOptions;
    long long  _currentRequestSource;
    <AFUISiriViewControllerDataSource> * _dataSource;
    AFUIDelayedActionCommandCache * _delayedActionCommandCache;
    <AFUISiriViewControllerDelegate> * _delegate;
    bool  _eyesFree;
    bool  _hasCalledBeginAppearanceTransition;
    bool  _hasCalledEndAppearanceTransition;
    bool  _inHoldToTalkMode;
    bool  _isStark;
    bool  _mapsGatekeeperEnabled;
    NSNumber * _recordingStartedTimeValue;
    AFUISiriRemoteViewController * _remoteViewController;
    NSObject<OS_dispatch_queue> * _remoteViewControllerDispatchQueue;
    bool  _remoteViewControllerDispatchQueueSuspended;
    SiriUIAudioRoutePickerController * _routePickerController;
    AFUISiriSession * _session;
    bool  _showsStatusBar;
    bool  _siriSessionWantsToEnd;
    UIStatusBar * _statusBar;
    bool  _statusBarEnabled;
    id /* block */  _triggerUpdater;
    NSObject<OS_dispatch_queue> * _uiAppearanceCoreDuetQueue;
    NSString * _uiAppearanceUUIDString;
    double  _viewDidAppearTime;
    bool  _visible;
    long long  _vtEnabledCount;
}

@property (getter=_currentRequestOptions, setter=_setCurrentRequestOptions:, nonatomic, copy) AFUIRequestOptions *currentRequestOptions;
@property (nonatomic) <AFUISiriViewControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AFUISiriViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEyesFree, nonatomic) bool eyesFree;
@property (getter=_hasCalledBeginAppearanceTransition, setter=_setHasCalledBeginAppearanceTransition:, nonatomic) bool hasCalledBeginAppearanceTransition;
@property (getter=_hasCalledEndAppearanceTransition, setter=_setHasCalledEndAppearanceTransition:, nonatomic) bool hasCalledEndAppearanceTransition;
@property (nonatomic, readonly) bool hasScreenSnapshot;
@property (readonly) unsigned long long hash;
@property (getter=_isInHoldToTalkMode, setter=_setInHoldToTalkMode:, nonatomic) bool inHoldToTalkMode;
@property (nonatomic, readonly) bool isProcessingAcousticIdRequest;
@property (nonatomic) bool isStark;
@property (nonatomic) bool mapsGatekeeperEnabled;
@property (getter=_recordingStartedTimeValue, setter=_setRecordingStartedTimeValue:, nonatomic, retain) NSNumber *recordingStartedTimeValue;
@property (getter=_remoteViewController, nonatomic, readonly) AFUISiriRemoteViewController *remoteViewController;
@property (getter=_remoteViewControllerDispatchQueue, nonatomic, readonly) NSObject<OS_dispatch_queue> *remoteViewControllerDispatchQueue;
@property (nonatomic, retain) SiriUIAudioRoutePickerController *routePickerController;
@property (getter=_session, nonatomic, readonly) AFUISiriSession *session;
@property (nonatomic) bool showsStatusBar;
@property (getter=_statusBar, setter=_setStatusBar:, nonatomic, retain) UIStatusBar *statusBar;
@property (nonatomic) bool statusBarEnabled;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView<AFUISiriRemoteViewHosting> *view;
@property (getter=_viewDidAppearTime, setter=_setViewDidAppearTime:, nonatomic) double viewDidAppearTime;
@property (getter=isVisible, nonatomic) bool visible;

- (void).cxx_destruct;
- (void)_activationTriggerDidRelease:(id)arg1;
- (void)_addStatusBar;
- (id)_currentRequestOptions;
- (void)_enqueueRemoteViewControllerMessageBlock:(id /* block */)arg1;
- (void)_enqueueRemoteViewControllerMessageBlockWithWeaklyReferencedRemoteViewController:(id /* block */)arg1;
- (void)_enterHoldToTalkMode;
- (void)_exitHoldToTalkMode;
- (void)_handleMicButtonLongPressBeganFromSource:(long long)arg1;
- (void)_handleMicButtonLongPressEndedFromSource:(long long)arg1;
- (void)_handleMicButtonTapFromSource:(long long)arg1;
- (bool)_hasCalledBeginAppearanceTransition;
- (bool)_hasCalledEndAppearanceTransition;
- (bool)_holdToTalkThresholdHasElapsed;
- (void)_holdToTalkTriggerDidReleaseFromSource:(long long)arg1;
- (void)_informRemoteViewControllerOfParentIfNecessary;
- (bool)_isInHoldToTalkMode;
- (double)_manualEndpointingThreshold;
- (void)_presentDeferredFlamesViewIfNecessary;
- (void)_presentRemoteViewController;
- (void)_recordUIAppearance;
- (void)_recordUIDismissal;
- (id)_recordingStartedTimeValue;
- (id)_remoteViewController;
- (id)_remoteViewControllerDispatchQueue;
- (void)_removeStatusBar;
- (void)_resumeRemoteViewControllerDispatchQueue;
- (id)_routePickerController;
- (void)_sendBeginAppearanceTransitionIfReadyAnimated:(bool)arg1;
- (void)_sendEndAppearanceTransitionIfReady;
- (id)_session;
- (void)_setCurrentRequestOptions:(id)arg1;
- (void)_setHasCalledBeginAppearanceTransition:(bool)arg1;
- (void)_setHasCalledEndAppearanceTransition:(bool)arg1;
- (void)_setInHoldToTalkMode:(bool)arg1;
- (void)_setRecordingStartedTimeValue:(id)arg1;
- (void)_setShowAudioRoutePicker:(bool)arg1;
- (void)_setStatusBar:(id)arg1;
- (void)_setViewDidAppearTime:(double)arg1;
- (void)_setVoiceTriggerEnabled:(bool)arg1;
- (id)_siriView;
- (id)_statusBar;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_statusBarFrame;
- (void)_statusBarFrameDidChange:(id)arg1;
- (void)_suspendRemoteViewControllerDispatchQueue;
- (void)_transitionToAutomaticEndpointMode;
- (void)_updateAudioRoutePicker;
- (double)_viewDidAppearTime;
- (float)audioRecordingPowerLevelForSiriView:(id)arg1;
- (id)bulletinsForSiriSession:(id)arg1;
- (void)cancelTTS;
- (void)commandCache:(id)arg1 didInvalidateDelayedActionCommand:(id)arg2;
- (void)commandCache:(id)arg1 didPerformDelayedActionCommand:(id)arg2;
- (id)contextAppInfosForSiriSession:(id)arg1;
- (id)currentRequestOptions;
- (long long)currentSource;
- (id)dataSource;
- (void)dealloc;
- (void)defrost;
- (id)delegate;
- (void)didMoveToParentViewController:(id)arg1;
- (void)dismissSiriRemoteViewController:(id)arg1 delayForTTS:(bool)arg2;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)endSession;
- (void)handlePasscodeUnlockAndCancelRequest:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)handlePasscodeUnlockWithCompletion:(id /* block */)arg1;
- (void)handleViewFullyRevealed;
- (bool)hasQueuedTTS;
- (bool)hasScreenSnapshot;
- (id)init;
- (id)initWithConnection:(id)arg1 configuration:(id)arg2;
- (bool)isEyesFree;
- (bool)isListening;
- (bool)isPreventingActivationGesture;
- (bool)isProcessingAcousticIdRequest;
- (bool)isStark;
- (bool)isVisible;
- (id)lastAppUpdateTimeForSiriRemoteViewController:(id)arg1;
- (void)loadView;
- (unsigned long long)lockStateForSiriRemoteViewController:(id)arg1;
- (unsigned long long)lockStateForSiriSession:(id)arg1;
- (bool)mapsGatekeeperEnabled;
- (void)notifyOnNextUserInteractionForSiriRemoteViewController:(id)arg1;
- (void)performGenericAceCommands:(id)arg1 forCommandCache:(id)arg2;
- (void)preheat;
- (void)presentRemoteViewControllerIfNecessary;
- (void)resetContextTypes:(long long)arg1;
- (id)routePickerController;
- (void)routePickerController:(id)arg1 hasRoutesToPick:(bool)arg2;
- (void)routePickerControllerPickedNewRoute:(id)arg1 isBluetooth:(bool)arg2;
- (void)setAlertContext;
- (void)setCurrentCarPlaySupportedOEMAppIdList:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEyesFree:(bool)arg1;
- (void)setIsStark:(bool)arg1;
- (void)setLockState:(unsigned long long)arg1;
- (void)setMapsGatekeeperEnabled:(bool)arg1;
- (void)setRoutePickerController:(id)arg1;
- (void)setShowsStatusBar:(bool)arg1;
- (void)setStatusBarEnabled:(bool)arg1;
- (void)setVisible:(bool)arg1;
- (void)shortTapAction;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (bool)shouldAutorotate;
- (void)showPresentationWithIdentifier:(id)arg1 properties:(id)arg2;
- (bool)showsStatusBar;
- (void)siriDidActivateFromSource:(long long)arg1;
- (void)siriDidDeactivate;
- (id)siriRemoteViewController:(id)arg1 bulletinWithIdentifier:(id)arg2;
- (void)siriRemoteViewController:(id)arg1 canLoadPreviousConversation:(id /* block */)arg2;
- (void)siriRemoteViewController:(id)arg1 didChangePresentationPeekMode:(unsigned long long)arg2;
- (void)siriRemoteViewController:(id)arg1 didEncounterUnexpectedServiceError:(id)arg2;
- (void)siriRemoteViewController:(id)arg1 didReadBulletinWithIdentifier:(id)arg2;
- (void)siriRemoteViewController:(id)arg1 handlePasscodeUnlockWithCompletion:(id /* block */)arg2;
- (void)siriRemoteViewController:(id)arg1 launchApplicationWithBundleIdentifier:(id)arg2 withURL:(id)arg3 launchOverSiri:(bool)arg4 replyHandler:(id /* block */)arg5;
- (bool)siriRemoteViewController:(id)arg1 openURL:(id)arg2 appBundleID:(id)arg3 allowSiriDismissal:(bool)arg4;
- (bool)siriRemoteViewController:(id)arg1 openURL:(id)arg2 delaySessionEndForTTS:(bool)arg3;
- (void)siriRemoteViewController:(id)arg1 setBugReportingAvailable:(bool)arg2;
- (void)siriRemoteViewController:(id)arg1 setCarDisplayGatekeeperVisible:(bool)arg2;
- (void)siriRemoteViewController:(id)arg1 setCarDisplaySnippetVisible:(bool)arg2;
- (void)siriRemoteViewController:(id)arg1 setHelpButtonEmphasized:(bool)arg2;
- (void)siriRemoteViewController:(id)arg1 setStatusBarHidden:(bool)arg2;
- (void)siriRemoteViewController:(id)arg1 setStatusViewDisabled:(bool)arg2;
- (void)siriRemoteViewController:(id)arg1 setStatusViewHidden:(bool)arg2;
- (void)siriRemoteViewController:(id)arg1 setStatusViewUserInteractionEnabled:(bool)arg2;
- (void)siriRemoteViewController:(id)arg1 siriIdleAndQuietStatusDidChange:(bool)arg2;
- (void)siriRemoteViewController:(id)arg1 startRequestWithOptions:(id)arg2;
- (void)siriRemoteViewController:(id)arg1 viewServiceDidTerminateWithError:(id)arg2;
- (void)siriRemoteViewController:(id)arg1 willDismissViewControllerWithStatusBarStyle:(long long)arg2;
- (void)siriRemoteViewController:(id)arg1 willPresentViewControllerWithStatusBarStyle:(long long)arg2;
- (void)siriRemoteViewControllerDidDetectMicButtonLongPressBegan:(id)arg1;
- (void)siriRemoteViewControllerDidDetectMicButtonLongPressEnded:(id)arg1;
- (void)siriRemoteViewControllerDidDetectMicButtonTap:(id)arg1;
- (void)siriRemoteViewControllerDidPresentUserInterface:(id)arg1;
- (void)siriRemoteViewControllerPulseHelpButton:(id)arg1;
- (void)siriSession:(id)arg1 didChangeDialogPhase:(id)arg2;
- (void)siriSession:(id)arg1 didChangeToState:(long long)arg2;
- (void)siriSession:(id)arg1 didReceiveDeviceUnlockRequestAndCancelRequest:(bool)arg2 withCompletion:(id /* block */)arg3;
- (void)siriSession:(id)arg1 didReceiveDeviceUnlockRequestWithCompletion:(id /* block */)arg2;
- (bool)siriSessionCanEnd:(id)arg1;
- (void)siriSessionDidEnd:(id)arg1;
- (void)siriSessionDidReceiveDelayedActionCancelCommand:(id)arg1 completion:(id /* block */)arg2;
- (void)siriSessionDidReceiveDelayedActionCommand:(id)arg1 completion:(id /* block */)arg2;
- (void)siriSessionDidResetContext:(id)arg1;
- (void)siriSessionRecordingPreparationHasFinished:(id)arg1;
- (void)siriSessionWillEnd:(id)arg1;
- (bool)siriView:(id)arg1 attemptUnlockWithPassword:(id)arg2;
- (void)siriView:(id)arg1 didReceiveSiriActivationMessageWithSource:(long long)arg2;
- (void)siriViewDidReceiveAudioRouteAction:(id)arg1;
- (void)siriViewDidReceiveBugButtonLongPress:(id)arg1;
- (void)siriViewDidReceiveHelpAction:(id)arg1;
- (void)siriViewDidReceiveReportBugAction:(id)arg1;
- (void)siriViewDidRecieveStatusViewHoldDidBeginAction:(id)arg1;
- (void)siriViewDidRecieveStatusViewHoldDidEndAction:(id)arg1;
- (void)siriViewDidRecieveStatusViewTappedAction:(id)arg1;
- (void)siriWillActivateFromSource:(long long)arg1;
- (void)startGuidedAccessForRemoteViewController:(id)arg1;
- (void)startRequestWithActivationTrigger:(id)arg1;
- (void)startRequestWithOptions:(id)arg1;
- (bool)statusBarEnabled;
- (void)stopRequestWithOptions:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)telephonyRequestCompleted;
- (id)underlyingConnection;
- (void)updateContexts:(long long)arg1;
- (void)updateRequestOptions:(id)arg1;
- (void)updateViewForPercentageRevealed:(double)arg1;
- (void)userInteractionDidOccur;
- (void)userRelevantEventDidOccurInSiriRemoteViewController:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (id)viewServiceApplicationInfo;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillAppearFinishedForSiriRemoteViewController:(id)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillDisappearFinishedForSiriRemoteViewController:(id)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end
