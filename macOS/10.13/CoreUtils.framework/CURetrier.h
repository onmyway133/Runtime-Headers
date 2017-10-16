/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/Versions/A/CoreUtils
 */

@interface CURetrier : NSObject {
    id  _action;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    double  _interval;
    BOOL  _invalidateCalled;
    id  _invalidationHandler;
    double  _leeway;
    NSObject<OS_dispatch_source> * _retryTimer;
    double  _startTime;
}

@property (nonatomic, readwrite, copy) id action;
@property (nonatomic, readwrite, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readwrite) double interval;
@property (nonatomic, readwrite, copy) id invalidationHandler;
@property (nonatomic, readwrite) double leeway;

- (void).cxx_destruct;
- (id)action;
- (id)dispatchQueue;
- (void)failed;
- (void)failedDirect;
- (id)init;
- (double)interval;
- (void)invalidate;
- (void)invalidateDirect;
- (id)invalidationHandler;
- (double)leeway;
- (void)setAction:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInterval:(double)arg1;
- (void)setInvalidationHandler:(id)arg1;
- (void)setLeeway:(double)arg1;
- (void)start;
- (void)startDirect;
- (void)succeeded;
- (void)succeededDirect;

@end
