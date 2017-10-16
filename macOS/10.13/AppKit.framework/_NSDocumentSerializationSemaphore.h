/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSDocumentSerializationSemaphore : NSObject {
    NSObject<OS_dispatch_semaphore> * sema;
    unsigned long long  timeout;
    id  timeoutHandler;
}

- (void)dealloc;
- (id)init;
- (id)initWithTimeout:(double)arg1 handler:(id)arg2;
- (void)signal;
- (void)wait;

@end