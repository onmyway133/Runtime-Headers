/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/Versions/A/ContactsFoundation
 */

@interface _CNMainThreadScheduler : NSObject <CNScheduler>

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (id)afterDelay:(double)arg1 performBlock:(id)arg2;
- (id)afterDelay:(double)arg1 performBlock:(id)arg2 qualityOfService:(unsigned long long)arg3;
- (void)performBlock:(id)arg1;
- (void)performBlock:(id)arg1 qualityOfService:(unsigned long long)arg2;
- (id)performCancelableBlock:(id)arg1;
- (id)performCancelableBlock:(id)arg1 qualityOfService:(unsigned long long)arg2;
- (double)timestamp;

@end
