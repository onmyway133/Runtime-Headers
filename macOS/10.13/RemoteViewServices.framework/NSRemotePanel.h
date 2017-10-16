/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteViewServices.framework/Versions/A/RemoteViewServices
 */

@interface NSRemotePanel : NSObject <NSRemoteServiceConnectionDelegate> {
    NSString * _alertInformationMessage;
    NSString * _alertMessage;
    id  _completionHandler;
    NSError * _currentErrorBeingHandled;
    id  _delegate;
    NSRemotePanelOrderingContext * _orderingContext;
    NSString * _prompt;
    struct __RPFlags { 
        unsigned int isFloating : 1; 
        unsigned int becomesKeyOnlyIfNeeded : 1; 
        unsigned int worksWhenModal : 1; 
        unsigned int isSheet : 1; 
        unsigned int useAlertStyle : 1; 
        unsigned int mainThreadKVOIsActive : 1; 
        unsigned int reserved : 26; 
    }  _rpFlags;
    NSObject<OS_dispatch_semaphore> * _semaphore;
    NSRemoteServiceConnection * _serviceConnection;
    NSObject<OS_dispatch_queue> * _serviceQueue;
    unsigned long long  _state;
    NSString * _title;
    NSRemoteWindowController * _windowController;
}

@property (setter=_setAlertInformativeMessage:, atomic, readwrite, retain) NSString *alertInformationMessage;
@property (setter=_setAlertMessage:, atomic, readwrite, retain) NSString *alertMessage;
@property (atomic, readwrite, copy) id completionHandler;
@property (atomic, readonly) NSRemoteWindowController *controller;
@property (atomic, readwrite) id delegate;
@property (atomic, readonly) BOOL isRunning;
@property (atomic, readwrite) BOOL isSheet;
@property (atomic, readwrite, retain) NSRemotePanelOrderingContext *orderingContext;
@property (atomic, readwrite, retain) NSString *prompt;
@property (atomic, readwrite, retain) NSString *title;
@property (getter=_useAlertStyle, setter=_setUseAlertStyle:, atomic, readwrite) BOOL useAlertStyle;

+ (id)getURLsForCompletionHandlerRequest:(id)arg1;
+ (id)keyPathsForPanelSettings;

- (void)_accessibilityApplyReplyTokens:(id)arg1 windowElement:(id)arg2;
- (void)_accessibilityHandleEnhancedUserInterfaceValueChanged:(id)arg1;
- (void)_accessibilityRemotePanelCompleted;
- (id)_accessibilityRequestTokensWithParent:(id)arg1;
- (void)_attemptRecoveryFromErrorForRequest:(id)arg1;
- (BOOL)_createAuxiliaryConnection;
- (void)_didPresentErrorWithRecovery:(BOOL)arg1 contextInfo:(void*)arg2;
- (void)_handleKVOStateDidChange:(id)arg1;
- (void)_handlePanelComplete:(id)arg1;
- (void)_handlePanelWillExpandDelegate:(id)arg1;
- (void)_handlePerformKeyEquivalent:(id)arg1;
- (void)_handleSetPresentationOptions:(id)arg1;
- (void)_handleShouldEnableURLDelegate:(id)arg1;
- (BOOL)_initRemotePanelSession;
- (void)_invalidatePBOXRemotePanelSession;
- (unsigned long long)_panelType;
- (void)_registerForKVOStateChange;
- (void)_runOrderingOperationWithContext:(id)arg1;
- (void)_sendPanelCompletionRequest:(unsigned long long)arg1;
- (void)_setAlertInformativeMessage:(id)arg1;
- (void)_setAlertMessage:(id)arg1;
- (void)_setDefaultSettings;
- (void)_setUseAlertStyle:(BOOL)arg1;
- (void)_unregisterForKVOStateChange;
- (BOOL)_useAlertStyle;
- (id)alertInformationMessage;
- (id)alertMessage;
- (BOOL)asyncSelectFirstResponderWithDirection:(unsigned long long)arg1;
- (BOOL)becomesKeyOnlyIfNeeded;
- (void)beginSheetModalForWindow:(id)arg1 completionHandler:(id)arg2;
- (void)beginWithCompletionHandler:(id)arg1;
- (void)cancel:(id)arg1;
- (void)cleanup;
- (id)completionHandler;
- (void)connection:(id)arg1 didReceiveError:(id)arg2;
- (void)connection:(id)arg1 didReceiveRequest:(id)arg2;
- (id)contentView;
- (id)controller;
- (void)controller:(id)arg1 hasWindowAvailable:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)dictionaryForObservedValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)getObservedkeyPathsForPanelSettings;
- (id)init;
- (BOOL)isFloatingPanel;
- (BOOL)isRunning;
- (BOOL)isSheet;
- (BOOL)mainThreadKVOActive;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)ok:(id)arg1;
- (void)orderOut:(id)arg1;
- (id)orderingContext;
- (void)panelCompletedWithNewDocumentRequest;
- (void)panelCompletedWithRequest:(id)arg1;
- (id)prompt;
- (long long)runModal;
- (id)serializeSettings;
- (void)setBecomesKeyOnlyIfNeeded:(BOOL)arg1;
- (void)setCompletionHandler:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFloatingPanel:(BOOL)arg1;
- (void)setIsSheet:(BOOL)arg1;
- (void)setMainThreadKVOActive:(BOOL)arg1;
- (void)setOrderingContext:(id)arg1;
- (void)setPrompt:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setWorksWhenModal:(BOOL)arg1;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(id)arg3;
- (void)tellRemotePanelAccessoryViewBecameFirstResponder;
- (id)title;
- (BOOL)worksWhenModal;

@end
