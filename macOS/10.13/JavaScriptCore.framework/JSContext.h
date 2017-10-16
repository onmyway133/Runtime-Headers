/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/JavaScriptCore.framework/Versions/A/JavaScriptCore
 */

@interface JSContext : NSObject {
    id  _exceptionHandler;
    struct OpaqueJSContext { } * m_context;
    struct Strong<JSC::JSObject> { 
        struct JSValue {} *m_slot; 
    }  m_exception;
    JSVirtualMachine * m_virtualMachine;
}

@property (atomic, readwrite, retain) JSValue *exception;
@property (atomic, readwrite, copy) id exceptionHandler;
@property (atomic, readonly) JSValue *globalObject;
@property (atomic, readwrite, copy) NSString *name;
@property (atomic, readonly) JSVirtualMachine *virtualMachine;
@property (atomic, readonly, retain) JSWrapperMap *wrapperMap;

+ (id)currentArguments;
+ (id)currentCallee;
+ (id)currentContext;
+ (id)currentThis;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct OpaqueJSContext { }*)JSGlobalContextRef;
- (struct __CFRunLoop { }*)_debuggerRunLoop;
- (BOOL)_includesNativeCallStackWhenReportingExceptions;
- (BOOL)_remoteInspectionEnabled;
- (void)_setDebuggerRunLoop:(struct __CFRunLoop { }*)arg1;
- (void)_setIncludesNativeCallStackWhenReportingExceptions:(BOOL)arg1;
- (void)_setRemoteInspectionEnabled:(BOOL)arg1;
- (void)dealloc;
- (void)ensureWrapperMap;
- (id)evaluateScript:(id)arg1;
- (id)evaluateScript:(id)arg1 withSourceURL:(id)arg2;
- (id)exception;
- (id)exceptionHandler;
- (id)globalObject;
- (id)init;
- (id)initWithVirtualMachine:(id)arg1;
- (id)name;
- (void)setException:(id)arg1;
- (void)setExceptionHandler:(id)arg1;
- (void)setName:(id)arg1;
- (id)virtualMachine;
- (id)wrapperMap;

// JSContext (Internal)

+ (id)contextWithJSGlobalContextRef:(struct OpaqueJSContext { }*)arg1;

- (void)beginCallbackWithData:(/* Warning: unhandled struct encoding: '{CallbackData=^{CallbackData}@@^{OpaqueJSValue}^{OpaqueJSValue}Q^^{OpaqueJSValue}@}' */ struct CallbackData { struct CallbackData {} *x1; id x2; struct OpaqueJSValue {} *x3; struct OpaqueJSValue {} *x4; unsigned long long x5; struct OpaqueJSValue {} **x6; id x7; }*)arg1 calleeValue:(struct OpaqueJSValue { }*)arg2 thisValue:(struct OpaqueJSValue { }*)arg3 argumentCount:(unsigned long long)arg4 arguments:(const struct OpaqueJSValue {}**)arg5;
- (BOOL)boolFromNotifyException:(struct OpaqueJSValue { }*)arg1;
- (void)endCallbackWithData:(/* Warning: unhandled struct encoding: '{CallbackData=^{CallbackData}@@^{OpaqueJSValue}^{OpaqueJSValue}Q^^{OpaqueJSValue}@}' */ struct CallbackData { struct CallbackData {} *x1; id x2; struct OpaqueJSValue {} *x3; struct OpaqueJSValue {} *x4; unsigned long long x5; struct OpaqueJSValue {} **x6; id x7; }*)arg1;
- (id)initWithGlobalContextRef:(struct OpaqueJSContext { }*)arg1;
- (void)notifyException:(struct OpaqueJSValue { }*)arg1;
- (id)valueFromNotifyException:(struct OpaqueJSValue { }*)arg1;
- (id)wrapperForJSObject:(struct OpaqueJSValue { }*)arg1;
- (id)wrapperForObjCObject:(id)arg1;

// JSContext (SubscriptSupport)

- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

@end
