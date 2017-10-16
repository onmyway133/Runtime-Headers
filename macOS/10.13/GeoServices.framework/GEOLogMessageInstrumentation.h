/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOLogMessageInstrumentation : NSObject {
    BOOL  _exitWhenAllInstrumentationLogsFlushed;
    NSObject<OS_dispatch_queue> * _instrumenationQueue;
    NSObject<OS_dispatch_source> * _logMessageInstrumentationFlushTimer;
    unsigned long long  _logMessageNothingToFlushCounter;
    unsigned int  _logMsgInstrumentationEnableCounter;
    NSLock * _logMsgInstrumentationEnableLock;
    NSMutableDictionary * _msgCountForRegisteredEvents;
    NSString * _msgCountUserDefaultsKey;
    NSMutableArray * _registeredEventNames;
}

+ (id)cacheManager;
+ (id)createDefaultInstrumentation;
+ (id)defaultInstrumentation;
+ (void)disableDefaultInstrumentation;

- (void).cxx_destruct;
- (void)_registerEventName:(id)arg1;
- (void)captureLogMessage:(id)arg1 forEventName:(id)arg2 fromLogFrameworkAdaptor:(BOOL)arg3;
- (void)captureLogMessageCollectionRequest:(id)arg1 forEventName:(id)arg2 fromLogFrameworkAdaptor:(BOOL)arg3;
- (void)captureLogMsgCountForEventName:(id)arg1 logMsgCount:(long long)arg2 fromLogFrameworkAdaptor:(BOOL)arg3;
- (BOOL)disableLogMsgInstrumentation;
- (void)enableLogMsgInstrumentation;
- (id)init;
- (void)waitForEmptyInstrumentationQueue:(id)arg1;

@end
