/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
 */

@interface NSURLConnectionInternal : NSObject <NSURLAuthenticationChallengeSender, NSURLConnectionRequired> {
    NSURLConnection * _connection;
    BOOL  _connectionActive;
    NSDictionary * _connectionProperties;
    NSURLRequest * _currentRequest;
    id  _delegate;
    NSOperationQueue * _delegateQueue;
    NSURLRequest * _originalRequest;
    NSURL * _url;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (id)_connectionProperties;
- (void)_invalidate;
- (void)_reportTimingDataToAWD;
- (void)_setDelegateQueue:(id)arg1;
- (id)_timingData;
- (void)_withActiveConnectionAndDelegate:(id)arg1;
- (void)_withConnectionAndDelegate:(id)arg1;
- (void)_withConnectionAndDelegate:(id)arg1 onlyActive:(BOOL)arg2;
- (void)_withConnectionDisconnectFromConnection;
- (void)cancelAuthenticationChallenge:(id)arg1;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
- (id)currentRequest;
- (void)dealloc;
- (id)initWithInfo:(const struct InternalInit { id x1; id x2; BOOL x3; long long x4; }*)arg1;
- (void)invokeForDelegate:(id)arg1;
- (BOOL)isConnectionActive;
- (id)originalRequest;
- (void)performDefaultHandlingForAuthenticationChallenge:(id)arg1;
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1;
- (void)setConnectionActive:(BOOL)arg1;
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;

@end
