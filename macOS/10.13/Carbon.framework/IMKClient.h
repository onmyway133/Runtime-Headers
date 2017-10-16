/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/HIToolbox.framework/Versions/A/HIToolbox
 */

@interface IMKClient : NSObject <IMKClientProtocol> {
    NSBundle * _bundle;
    NSString * _bundleIdentifier;
    BOOL  _cleanTermination;
    BOOL  _clientHasDied;
    NSString * _connection;
    IMKInputSession * _currentSession;
    struct OpaqueEventHandlerRef { } * _eventHandlerRef;
    long long  _exceptionTimeoutBumpCount;
    BOOL  _getServerGetMenuWasCalledDuringRetry;
    long long  _getServerRetryCount;
    SEL  _getServerRetryNotificationSel;
    id  _getServerRetryNotificationTarget;
    BOOL  _getServerRetryPending;
    NSDictionary * _inputMethodInfoDictionary;
    NSXPCListenerEndpoint * _inputMethodXPCEndpoint;
    BOOL  _isIMKExtension;
    BOOL  _isServerStarted;
    struct __CFMessagePort { } * _launchPort;
    NSXPCConnection * _launcherXPCConnection;
    BOOL  _lookedForMenuKeys;
    NSDictionary * _modeMenuKeys;
    NSDictionary * _modes;
    NSRecursiveLock * _remoteProxyLock;
    NSDictionary * _selectorDictionary;
    NSConnection * _serverConnection;
    id  _serverDOProxy;
    BOOL  _serverDiedBadly;
    NSString * _serverName;
    double  _timeout;
    id  _tisSelectInputSourceCompletionBlock;
    BOOL  _waitingForMenu;
    id  completionBlock;
    NSArray * localizedStrings;
}

@property (atomic, readwrite) BOOL _waitingForMenu;
@property (atomic, readwrite) BOOL cleanTermination;
@property (getter=isIMKExtension, nonatomic, readonly) BOOL isIMKExtension;
@property (atomic, readwrite) BOOL serverDiedBadly;

+ (BOOL)clientServerXPCBlockStallLogging;
+ (BOOL)isClientServerTracing;
+ (BOOL)isClientServerXPCTracing;
+ (BOOL)isConnectionTracing;
+ (BOOL)isDataTracingOn;
+ (BOOL)isGeneralDebuggingOn;

- (void)_addActionFrom:(id)arg1 toDictionary:(id)arg2 forCarbonMenu:(struct OpaqueMenuRef { }*)arg3 base:(unsigned long long)arg4;
- (id)_buildSelectorDictionaryFromMenuDict:(id)arg1 settingCommandID:(struct OpaqueMenuRef { }*)arg2;
- (BOOL)_bumpTimeout;
- (id)_bundle;
- (void)_cancelGetServerRetry;
- (void)_checkSetTISCompletionBlock;
- (struct OpaqueMenuRef { }*)_createAndInstallMenuSetSelectorDictFromMenuDict:(id)arg1;
- (double)_defaultTimeout;
- (struct OpaqueEventHandlerRef { }*)_eventHandlerRef;
- (void)_getServerRetry;
- (BOOL)_haveSafeServerProxy:(id)arg1;
- (id)_inputMethodInfoDictionary;
- (BOOL)_isNonLaunchOption;
- (BOOL)_isPalette;
- (BOOL)_isServerRetryPending;
- (int)_launch:(id)arg1 fromBundle:(id)arg2 throughPort:(struct __CFMessagePort { }*)arg3 usingSBExtension:(BOOL)arg4;
- (struct __TISInputSource { }*)_mapKeyCodeToInputSource:(id)arg1 modifiers:(id)arg2;
- (void)_mapKeyCodeToInputSource:(id)arg1 modifiers:(id)arg2 completionHandler:(id)arg3;
- (id)_modeMenuKeys;
- (void)_modeMenuKeysWithCompletionHandler:(id)arg1;
- (BOOL)_requestGetServerRetryNotifyingTarget:(id)arg1 withSelector:(SEL)arg2;
- (id)_selectorDictionary;
- (void)_senderIsInvalid:(id)arg1;
- (void)_setBundleIdentifier:(id)arg1;
- (void)_setEventHandlerRef:(struct OpaqueEventHandlerRef { }*)arg1;
- (void)_setSelectorDictionary:(id)arg1;
- (BOOL)_setTargetForServerRetry:(id)arg1;
- (BOOL)_startServer_AllowingSandboxExtension:(BOOL)arg1;
- (id)_targetForServerRetry;
- (double)_timeout;
- (void)_untargetFromServerRetry:(id)arg1;
- (BOOL)_waitingForMenu;
- (id)bundleIdentifier;
- (BOOL)cleanTermination;
- (id)completionBlock;
- (id)currentSession;
- (void)dealloc;
- (void)fulfillServerDependentWork;
- (BOOL)haveTISSelectCompletionBlock;
- (id)imageFileForName:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 isIMKExtension:(BOOL)arg2;
- (void)invalidateServerConnection;
- (BOOL)isClientServerTracing;
- (BOOL)isClientServerXPCTracing;
- (BOOL)isConnectionTracing;
- (BOOL)isDataTracingOn;
- (BOOL)isGeneralDebuggingOn;
- (BOOL)isIMKExtension;
- (id)localizedStringForKey:(id)arg1;
- (struct OpaqueMenuRef { }*)menu;
- (struct OpaqueMenuRef { }*)menuWithCompletionBlock:(id)arg1;
- (void)menuWithCompletionHandler:(id)arg1;
- (id)modes;
- (void)modesWithCompletionHandler:(id)arg1;
- (BOOL)serverDiedBadly;
- (void)serverWillTerminate;
- (void)setCleanTermination:(BOOL)arg1;
- (void)setCompletionBlock:(id)arg1;
- (void)setCurrentSession:(id)arg1;
- (void)setServerDiedBadly:(BOOL)arg1;
- (void)setTISSelectCompletionBlock:(id)arg1;
- (void)set_waitingForMenu:(BOOL)arg1;
- (BOOL)shouldUseXPC;
- (BOOL)switchedInputMode:(struct OpaqueEventRef { }*)arg1;
- (void)switchedInputMode:(struct OpaqueEventRef { }*)arg1 completionHandler:(id)arg2;
- (id)tisSelectCompletionBlock;

// IMKClient (IMKClientConnection_DO)

- (id)_getServerDOProxy;
- (id)_safeServerDOProxy;
- (id)_serverConnection;
- (id)serverDOProxy;

// IMKClient (IMKClientConnection_XPC)

+ (id)imExtensionBundlePaths;
+ (struct __CFString { }*)privateRunLoopMode;
+ (void)xpcSetupForMessaging;

- (BOOL)_getServerXPCProxyForSession:(id)arg1;
- (void)_invalidateXPCConnectionEndpoint;
- (void)_receiveXPCConnectionEndpoint:(id)arg1;
- (id)inputMethodXPCEndpoint;
- (void)invalidateIMKXPCEndpointForBundleIdentifier:(id)arg1;
- (id)remoteXPCProxyForSession:(id)arg1 fromCaller:(SEL)arg2;
- (void)setIMKXPCEndpoint:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)startServerSetupForEndpoint;

// IMKClient (IMKClient_Main_Thread_Tracking)

+ (struct __CFRunLoop { }*)IMKRunLoopGetMain;
+ (void)IMKRunLoopUpdateMain;
+ (void)IMK_Catch_Log_Stalled_PerformBlocks_DispatchTime:(double)arg1 withSelector:(SEL)arg2;

// IMKClient (IMKClient_XPCReplyWaitCount_Locking)

+ (void)replyWaitCount_decrementWithLocking;
+ (void)replyWaitCount_incrementWithLocking;
+ (void)replyWaitCount_lockDecrement;
+ (void)replyWaitCount_lockIncrement;
+ (int)replyWaitCount_testWithLocking;
+ (void)replyWaitCount_unlock;

@end
