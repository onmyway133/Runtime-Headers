/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/Versions/A/ContactsFoundation
 */

@interface _CNThrottledObservable : CNObservable {
    <CNCancelable> * _delayToken;
    double  _interval;
    BOOL  _isCoalescing;
    id  _mostRecentResult;
    <CNObservable> * _observable;
    <CNScheduler> * _observerScheduler;
    unsigned long long  _options;
    <CNScheduler> * _resourceLock;
}

@property (atomic, readwrite, retain) <CNCancelable> *delayToken;
@property (atomic, readonly) double interval;
@property (atomic, readwrite) BOOL isCoalescing;
@property (atomic, readwrite, retain) id mostRecentResult;
@property (atomic, readonly) CNObservable *observable;
@property (atomic, readonly) <CNScheduler> *observerScheduler;
@property (atomic, readonly) unsigned long long options;
@property (atomic, readonly) <CNScheduler> *resourceLock;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delayToken;
- (id)initWithInterval:(double)arg1 options:(unsigned long long)arg2 observable:(id)arg3 schedulerProvider:(id)arg4;
- (double)interval;
- (BOOL)isCoalescing;
- (id)mostRecentResult;
- (id)observable;
- (id)observerScheduler;
- (void)observerScheduler_sendResultToObserver:(id)arg1;
- (unsigned long long)options;
- (id)resourceLock;
- (void)setDelayToken:(id)arg1;
- (void)setIsCoalescing:(BOOL)arg1;
- (void)setMostRecentResult:(id)arg1;
- (id)subscribe:(id)arg1;

@end