/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/Versions/A/ContactsFoundation
 */

@interface CNPublishingSubject : CNObservable <CNObserver> {
    CNObservableContractEnforcement * _enforcement;
    NSMutableArray * _observers;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (nonatomic, readonly) CNObservableContractEnforcement *enforcement;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addObserver:(id)arg1;
- (id)_allObservers;
- (void)_removeObserver:(id)arg1;
- (id)enforcement;
- (id)init;
- (void)observerDidComplete;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidReceiveResult:(id)arg1;
- (id)subscribe:(id)arg1;

@end
