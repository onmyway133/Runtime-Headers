/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ViewBridge.framework/Versions/A/ViewBridge
 */

@interface NSCFRunLoopSemaphore : NSObject {
    NSString * _legend;
    NSString * _loggingDomain;
    void * _mode;
    unsigned int  _signaled;
    unsigned int  _stopped;
    unsigned int  _waited;
    unsigned int  _waiting;
    void * reserved;
}

@property (atomic, readwrite, copy) NSString *legend;
@property (atomic, readwrite, copy) NSString *loggingDomain;
@property (atomic, readonly) NSString *mode;

+ (void)_observe:(struct __CFString { }*)arg1 whilePerforming:(id)arg2;
+ (struct __CFString { }*)currentRunLoopMode;
+ (void)initialize;
+ (id)invocations;
+ (struct __CFString { }*)mode;

- (void)_log:(id)arg1;
- (void)dealloc;
- (void)deallocOnAppKitThread;
- (id)init;
- (id)initWithMode:(struct __CFString { }*)arg1;
- (id)legend;
- (id)loggingDomain;
- (id)mode;
- (void)setLegend:(id)arg1;
- (void)setLoggingDomain:(id)arg1;
- (void)signal;
- (void)wait;
- (BOOL)wait:(double)arg1;

@end