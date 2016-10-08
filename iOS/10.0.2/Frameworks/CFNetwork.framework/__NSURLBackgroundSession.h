/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __NSURLBackgroundSession : __NSCFURLSession <NDBackgroundSessionClient, NSURLSessionSubclass> {
    NSString * _appWakeUUID;
    NSURL * _assetDownloadDirectory;
    bool  _companionAvailable;
    NSURL * _downloadDirectory;
    unsigned long long  _identSeed;
    id /* block */  _invalidateCallback;
    NSObject<OS_dispatch_queue> * _invalidateQueue;
    NSError * _invalidationError;
    bool  _isInvalid;
    bool  _isPrivileged;
    int  _notifyToken;
    <NDBackgroundSessionProtocol> * _remoteSession;
    NSMutableArray * _taskIDsToFailOnReconnection;
    NSMutableDictionary * _tasks;
    bool  _tryToReconnect;
    unsigned long long  _wifiRetainCount;
    NSXPCConnection * _xpcConn;
}

@property (copy) NSString *appWakeUUID;
@property (getter=isCompanionAvailable) bool companionAvailable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)AVAssetDownloadTaskForURLAsset:(id)arg1 assetTitle:(id)arg2 assetArtworkData:(id)arg3 options:(id)arg4;
- (id)AVAssetDownloadTaskForURLAsset:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
- (id)_AVAssetDownloadTaskForURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
- (id)_downloadTaskForRequest:(id)arg1;
- (id)_downloadTaskForResumeData:(id)arg1;
- (id)_onqueue_AVAssetDownloadTaskForURLAsset:(id)arg1 URL:(id)arg2 destinationURL:(id)arg3 assetTitle:(id)arg4 assetArtworkData:(id)arg5 options:(id)arg6;
- (void)_onqueue_completeInvalidation:(bool)arg1;
- (id)_onqueue_dataTaskForRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)_onqueue_disavowTask:(id)arg1;
- (id)_onqueue_downloadTaskForRequest:(id)arg1 resumeData:(id)arg2 completion:(id /* block */)arg3;
- (id)_onqueue_dummyTaskForClass:(Class)arg1 withRequest:(id)arg2 error:(id)arg3;
- (void)_onqueue_flushWithCompletionHandler:(id /* block */)arg1;
- (void)_onqueue_getTasksWithCompletionHandler:(id /* block */)arg1;
- (void)_onqueue_invalidateSession:(bool)arg1 withQueue:(id)arg2 completion:(id /* block */)arg3;
- (void)_onqueue_invokeInvalidateCallback;
- (void)_onqueue_resetStorageWithCompletionHandler:(id /* block */)arg1;
- (void)_onqueue_retryDataTaskWithIdentifier:(unsigned long long)arg1;
- (id)_onqueue_uploadTaskForRequest:(id)arg1 uploadFile:(id)arg2 bodyData:(id)arg3 completion:(id /* block */)arg4;
- (id)appWakeUUID;
- (void)appWasLaunchedForBackgroundSession:(id)arg1;
- (void)backgroundAVAssetDownloadTask:(unsigned long long)arg1 didLoadTimeRange:(id)arg2 totalTimeRangesLoaded:(id)arg3 timeRangeExpectedToLoad:(id)arg4;
- (void)backgroundAVAssetDownloadTask:(unsigned long long)arg1 didReceiveDownloadToken:(unsigned long long)arg2;
- (void)backgroundAVAssetDownloadTask:(unsigned long long)arg1 didResolveMediaSelectionProperyList:(id)arg2;
- (void)backgroundAVAssetDownloadTaskDidUpdateProgress:(unsigned long long)arg1 totalBytesWritten:(unsigned long long)arg2 totalBytesExpectedToWrite:(unsigned long long)arg3;
- (void)backgroundDataTask:(unsigned long long)arg1 didReceiveData:(id)arg2 withReply:(id /* block */)arg3;
- (void)backgroundDataTaskDidBecomeDownloadTask:(unsigned long long)arg1;
- (void)backgroundDownloadTask:(unsigned long long)arg1 didFinishDownloadingToURL:(id)arg2 reply:(id /* block */)arg3;
- (void)backgroundDownloadTask:(unsigned long long)arg1 didResumeAtOffset:(long long)arg2 expectedTotalBytes:(long long)arg3;
- (void)backgroundDownloadTask:(unsigned long long)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (id)backgroundDownloadsDirectory;
- (id)backgroundResumeDataFromClientResumeData:(id)arg1;
- (id)backgroundResumeDataFromLegacyClientResumeData:(id)arg1;
- (void)backgroundSessionDidFinishAppWake:(id)arg1 reply:(id /* block */)arg2;
- (void)backgroundSessionDidStartAppWake:(id)arg1 reply:(id /* block */)arg2;
- (void)backgroundTask:(unsigned long long)arg1 _willSendRequestForEstablishedConnection:(id)arg2 reply:(id /* block */)arg3;
- (void)backgroundTask:(unsigned long long)arg1 didCompleteWithError:(id)arg2 info:(id)arg3 reply:(id /* block */)arg4;
- (void)backgroundTask:(unsigned long long)arg1 didFinishCollectingMetrics:(id)arg2 reply:(id /* block */)arg3;
- (void)backgroundTask:(unsigned long long)arg1 didReceiveChallenge:(id)arg2 reply:(id /* block */)arg3;
- (void)backgroundTask:(unsigned long long)arg1 didReceiveResponse:(id)arg2 timingData:(id)arg3;
- (void)backgroundTask:(unsigned long long)arg1 didReceiveResponse:(id)arg2 timingData:(id)arg3 reply:(id /* block */)arg4;
- (void)backgroundTask:(unsigned long long)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpectedToSend:(long long)arg4;
- (void)backgroundTask:(unsigned long long)arg1 getAuthHeadersForResponse:(id)arg2 reply:(id /* block */)arg3;
- (void)backgroundTask:(unsigned long long)arg1 hasConnectionWaitingWithError:(id)arg2;
- (void)backgroundTask:(unsigned long long)arg1 hasConnectionWaitingWithReason:(long long)arg2;
- (void)backgroundTask:(unsigned long long)arg1 needNewBodyStream:(bool)arg2 withReply:(id /* block */)arg3;
- (void)backgroundTask:(unsigned long long)arg1 willPerformHTTPRedirection:(id)arg2 withNewRequest:(id)arg3 reply:(id /* block */)arg4;
- (void)backgroundTaskDidResume:(unsigned long long)arg1;
- (void)backgroundTaskDidSuspend:(unsigned long long)arg1;
- (void)backgroundTaskHasConnectionWaiting:(unsigned long long)arg1;
- (id)cachesDirectory;
- (void)cameIntoForeground:(id)arg1;
- (void)cleanupConfig;
- (id)connectionLostErrorWithURL:(id)arg1;
- (id)copyTasks;
- (void)credStorage_allCredentialsWithReply:(id /* block */)arg1;
- (void)credStorage_credentialsForProtectionSpace:(id)arg1 reply:(id /* block */)arg2;
- (void)credStorage_defaultCredentialForProtectionSpace:(id)arg1 reply:(id /* block */)arg2;
- (void)credStorage_getInitialCredentialDictionariesWithReply:(id /* block */)arg1;
- (void)credStorage_removeCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (void)credStorage_setCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (void)credStorage_setDefaultCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (id)dataTaskForRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (id)disconnectedErrorWithURL:(id)arg1;
- (id)downloadTaskForRequest:(id)arg1 downloadFilePath:(id)arg2 resumeData:(id)arg3 completion:(id /* block */)arg4;
- (id)ensureRemoteSession;
- (void)failDisconnectedTasks;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (bool)isCompanionAvailable;
- (void)moveFileForResumeData:(id)arg1 fromDirectory:(id)arg2 toDirectory:(id)arg3;
- (void)moveFileToBackgroundDownloadsDirectoryForLocalResumeData:(id)arg1;
- (void)moveFileToTempForBackgroundResumeData:(id)arg1;
- (void)openFileAtPath:(id)arg1 mode:(int)arg2 withReply:(id /* block */)arg3;
- (void)performBlockOnQueueAndRethrowExceptions:(id /* block */)arg1;
- (id)placeholderErrorWithURL:(id)arg1;
- (void)recreateExistingTasks:(id)arg1;
- (id)requestWithCookiesApplied:(id)arg1;
- (void)sendInvalidationRequest;
- (void)setAppWakeUUID:(id)arg1;
- (void)setCompanionAvailable:(bool)arg1;
- (void)setCookiesFromResponse:(id)arg1 forOriginalRequest:(id)arg2 partitionIdentifier:(id)arg3;
- (void)setPropertyOnStreamWithIdentifier:(unsigned long long)arg1 propDict:(id)arg2 propKey:(id)arg3;
- (void)setupBackgroundSession;
- (void)setupXPCConnection;
- (id)taskForIdentifier:(unsigned long long)arg1;
- (id)uploadTaskForRequest:(id)arg1 uploadFile:(id)arg2 bodyData:(id)arg3 completion:(id /* block */)arg4;
- (void)validateSerializabilityForRequest:(id)arg1 completion:(id)arg2;
- (void)validateUploadFile:(id)arg1;
- (void)wentToBackground:(id)arg1;
- (void)willRetryBackgroundDataTask:(unsigned long long)arg1 withError:(id)arg2 timingData:(id)arg3;

@end
