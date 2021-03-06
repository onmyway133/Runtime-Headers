/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing
 */

@interface SFDeviceSetupWHAService : NSObject {
    BOOL  _activateCalled;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    BOOL  _invalidateCalled;
    id  _progressHandler;
    SFService * _sfService;
    SFSession * _sfSession;
}

@property (nonatomic, readwrite, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readwrite, copy) id progressHandler;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_handleInfoExchange:(id)arg1 responseHandler:(id)arg2;
- (void)_handleRequest:(id)arg1 flags:(unsigned int)arg2 session:(id)arg3 responseHandler:(id)arg4;
- (void)_handleSessionEnded:(id)arg1;
- (void)_handleSessionStarted:(id)arg1;
- (void)_sfServiceStart;
- (void)activate;
- (void)dealloc;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (id)progressHandler;
- (void)setDispatchQueue:(id)arg1;
- (void)setProgressHandler:(id)arg1;

@end
