/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation
 */

@interface MNObserverHashTable : NSObject {
    NSHashTable * _observers;
    Protocol * _protocol;
}

@property (atomic, readonly) BOOL hasObservers;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)description;
- (void)forwardInvocation:(id)arg1;
- (BOOL)hasObservers;
- (id)initWithProtocol:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)removeObserver:(id)arg1;

@end