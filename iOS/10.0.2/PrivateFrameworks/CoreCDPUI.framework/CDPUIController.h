/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
 */

@interface CDPUIController : CDPUIBaseController <CDPDevicePickerDelegate, CDPRemoteSecretEntryDelegate, KeychainSyncViewControllerDelegate> {
    CDPContext * _activeContext;
    <CDPUIDelegate> * _delegate;
    CDPDevicePickerViewController * _devicePicker;
    NSArray * _devices;
    bool  _forceInlinePresentation;
    NSNumber * _icscNumericLength;
    bool  _isNumericICSC;
    bool  _isRandomICSC;
    bool  _isUsingMultipleICSC;
    UINavigationController * _navController;
    CDPRemoteDeviceSecretValidator * _remoteSecretValidator;
    UIViewController * _rootViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CDPUIDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forceInlinePresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginWaitingForApprovalFlow;
- (void)_dismissPresentedViewControllerCompletion:(id /* block */)arg1;
- (id)_enterSecretLaterEscapeOptionWithSecret:(unsigned long long)arg1;
- (id)_escapeOfferForDevice:(id)arg1 withMask:(unsigned long long)arg2;
- (id)_escapeOfferForMultiApprovalWithMask:(unsigned long long)arg1;
- (id)_escapeOfferForSingleApprovalWithMask:(unsigned long long)arg1;
- (id)_escapeOfferForgotAllWithMask:(unsigned long long)arg1;
- (id)_localDeviceClass;
- (id)_newestDeviceFromDevices:(id)arg1;
- (void)_presentRemoteApprovalViewControllerWithEscapeOfferMask:(unsigned long long)arg1;
- (void)_presentRemoteSecretControllerWithNewestDevice:(id)arg1;
- (void)_presentRootController:(id)arg1 completion:(id /* block */)arg2;
- (id)_remoteApprovalEscapeOption;
- (id)_remoteSecretControllerForDevice:(id)arg1;
- (id)_remoteSecretControllerForNewestDevice:(id)arg1;
- (id)_resetAccountDataEscapeOption;
- (void)_setupDevicePickerController:(id /* block */)arg1;
- (void)_showResetKeychainConfirmationAlertWithViewController:(id)arg1;
- (id)_singleICSCEscapeOfferWithMask:(unsigned long long)arg1 withController:(id)arg2;
- (id)_waitingForApprovalEscapeOffer;
- (void)approveFromAnotherDevice:(bool)arg1;
- (void)cancelRemoteApprovalTapped:(id)arg1;
- (void)cancelSignInFromDevicePicker;
- (void)cancelTapped:(id)arg1;
- (void)cancelTappedFromRootViewController:(id)arg1;
- (void)cancelledRemoteSecretEntry:(id)arg1;
- (void)cdpContext:(id)arg1 promptForAdoptionOfMultipleICSC:(id /* block */)arg2;
- (void)cdpContext:(id)arg1 promptForICSCWithIsNumeric:(bool)arg2 numericLength:(id)arg3 isRandom:(bool)arg4 validator:(id)arg5;
- (void)cdpContext:(id)arg1 promptForLocalSecretWithHandler:(id)arg2;
- (void)cdpContext:(id)arg1 promptForRemoteSecretWithDevices:(id)arg2 offeringRemoteApproval:(bool)arg3 validator:(id)arg4;
- (void)cdpContext:(id)arg1 promptToInformUserOfAccountLockOutWithCompletion:(id /* block */)arg2;
- (void)cdpContext:(id)arg1 promptToInformUserOfAccountUnlockWithCompletion:(id /* block */)arg2;
- (id)delegate;
- (void)devicePicker:(id)arg1 didSelectDevice:(id)arg2;
- (void)dismissRecoveryFlow:(id)arg1 completion:(id /* block */)arg2;
- (void)exceededMaximumAttemptsForRemoteSecretEntry:(id)arg1;
- (void)finishValidation:(id)arg1 withError:(id)arg2;
- (bool)forceInlinePresentation;
- (void)keychainSyncController:(id)arg1 didFinishWithResult:(id)arg2 error:(id)arg3;
- (void)performAccountReset:(id)arg1;
- (void)performRemoteApproval:(id)arg1;
- (bool)performingAccountRecovery;
- (void)remoteSecretEntry:(id)arg1 depletedRemainingAttemptsForDevice:(id)arg2;
- (void)remoteSecretEntry:(id)arg1 didAcceptValidRemoteSecretForDevice:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setForceInlinePresentation:(bool)arg1;

@end
