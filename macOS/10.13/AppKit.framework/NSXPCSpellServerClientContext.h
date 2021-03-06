/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSXPCSpellServerClientContext : NSObject {
    NSXPCSpellServerClient * _client;
    NSError * _error;
    BOOL  _hasProxy;
    NSString * _messageName;
    NSObject<OS_dispatch_semaphore> * _waiter;
}

+ (void)signalWaiter:(id)arg1;

- (id)client;
- (void)dealloc;
- (id)error;
- (void)finish;
- (id)initWithClient:(id)arg1 messageName:(id)arg2 waitForReply:(BOOL)arg3;
- (id)messageName;
- (id)proxy;
- (id)waiter;

@end
