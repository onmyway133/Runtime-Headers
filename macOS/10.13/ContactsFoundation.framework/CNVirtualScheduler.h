/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/Versions/A/ContactsFoundation
 */

@interface CNVirtualScheduler : NSObject <CNScheduler> {
    unsigned long long  _clock;
    BOOL  _isPerforming;
    BOOL  _isStarted;
    unsigned long long  _nextSchedulableTick;
    CNQueue * _queue;
    unsigned long long  _stopTime;
}

@property (atomic, readonly) unsigned long long clock;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

+ (id)providerWithScheduler:(id)arg1;
+ (unsigned long long)timeWithDelay:(double)arg1 fromClock:(unsigned long long)arg2;

- (void).cxx_destruct;
- (unsigned long long)_nextSchedulableTick;
- (BOOL)_performJobs;
- (id)_scheduleBlock:(id)arg1 atTime:(unsigned long long)arg2;
- (void)advanceBy:(unsigned long long)arg1;
- (void)advanceTo:(unsigned long long)arg1;
- (id)afterDelay:(double)arg1 performBlock:(id)arg2;
- (id)afterDelay:(double)arg1 performBlock:(id)arg2 qualityOfService:(unsigned long long)arg3;
- (unsigned long long)clock;
- (id)description;
- (BOOL)hasJobsScheduled;
- (id)init;
- (void)performBlock:(id)arg1;
- (void)performBlock:(id)arg1 qualityOfService:(unsigned long long)arg2;
- (id)performCancelableBlock:(id)arg1;
- (id)performCancelableBlock:(id)arg1 qualityOfService:(unsigned long long)arg2;
- (void)start;
- (void)stop;
- (double)timestamp;

@end