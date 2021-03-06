/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ViewBridge.framework/Versions/A/ViewBridge
 */

@interface NSVB_QueueingProxy : NSVB_TargetedProxy {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _queuedInvocations;
    id  _shouldSuspendInvocationBlock;
    unsigned long long  _suspensionCount;
}

+ (id)proxyWithTarget:(id)arg1;
+ (id)proxyWithTarget:(id)arg1 shouldSuspendInvocationBlock:(id)arg2;

- (void)_dispatchSuspendedMessages;
- (void)dealloc;
- (id)description;
- (void)forwardInvocation:(id)arg1;
- (void)removeAllEnqueuedInvocations;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)resume;
- (void)suspend;

@end
