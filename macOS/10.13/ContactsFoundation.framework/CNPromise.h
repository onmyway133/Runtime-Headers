/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/Versions/A/ContactsFoundation
 */

@interface CNPromise : NSObject <CNPromise> {
    CNFuture * _future;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) CNFuture *future;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (id)boolErrorCompletionHandlerAdapter;
- (id)completionHandlerAdapter;
- (id)completionHandlerAdapterWithDefaultValue:(id)arg1;
- (void)dealloc;
- (id)errorOnlyCompletionHandlerAdapter;
- (BOOL)finishWithError:(id)arg1;
- (BOOL)finishWithResult:(id)arg1;
- (BOOL)finishWithResult:(id)arg1 error:(id)arg2;
- (id)future;
- (id)init;

@end