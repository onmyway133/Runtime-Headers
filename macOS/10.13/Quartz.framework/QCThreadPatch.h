/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCThreadPatch : QCPatch {
    id  _argument;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _parameterMutex;
    id  _result;
    struct _opaque_pthread_cond_t { 
        long long __sig; 
        BOOL __opaque[40]; 
    }  _threadCondition;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _threadMutex;
    BOOL  _threadRunning;
    SEL  _threadSelector;
    void * _unused4;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)_finalize_QCThreadPatch;
- (void)_thread:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (id)getThreadArgument;
- (id)getThreadResult;
- (id)initWithIdentifier:(id)arg1;
- (BOOL)isThreadRunning;
- (double)nextExecutionTime:(id)arg1 time:(double)arg2 arguments:(id)arg3;
- (BOOL)runThreadWithSelector:(SEL)arg1 argument:(id)arg2;
- (void)setThreadArgument:(id)arg1;
- (void)setThreadResult:(id)arg1;
- (void)waitUntilThreadDone;

@end
