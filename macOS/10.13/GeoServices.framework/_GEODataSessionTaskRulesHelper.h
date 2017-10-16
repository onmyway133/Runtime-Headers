/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface _GEODataSessionTaskRulesHelper : NSObject <GEODataSessionTaskRules> {
    <GEODataSessionTask> * _completedSubtask;
    NSObject<OS_dispatch_queue> * _isolation;
    NSHashTable * _observers;
    <GEODataSessionTask> * _urlTask;
    <GEODataSessionTask> * _xpcTask;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (void).cxx_destruct;
- (void)_notifyObserversOfCompletedSubtask;
- (void)addCompletedSubtaskObserver:(id)arg1;
- (id)completedSubtaskForDataTask:(id)arg1;
- (void)dataTask:(id)arg1 didCompleteSubtask:(id)arg2;
- (BOOL)dataTask:(id)arg1 shouldCreateSubtaskOfType:(unsigned long long)arg2 forRequest:(id)arg3;
- (BOOL)dataTask:(id)arg1 shouldStartSubtask:(id)arg2 ofType:(unsigned long long)arg3;
- (id)init;
- (id)initForType:(unsigned long long)arg1;
- (void)removeCompletedSubtaskObserver:(id)arg1;
- (void)setSubtask:(id)arg1 ofType:(unsigned long long)arg2;

@end
