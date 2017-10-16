/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing
 */

@interface SFDeviceOperationWiFiSetup : NSObject {
    id  _completionHandler;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    BOOL  _invalidateCalled;
    double  _metricSeconds;
    SFSession * _sfSession;
    unsigned long long  _startTicks;
    NSObject<OS_dispatch_source> * _timeoutTimer;
}

@property (nonatomic, readwrite, copy) id completionHandler;
@property (nonatomic, readwrite, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readonly) double metricSeconds;
@property (nonatomic, readwrite, retain) SFSession *sfSession;

- (void).cxx_destruct;
- (void)_activate;
- (void)_complete:(id)arg1;
- (void)activate;
- (id)completionHandler;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (double)metricSeconds;
- (void)setCompletionHandler:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setSfSession:(id)arg1;
- (id)sfSession;

@end
