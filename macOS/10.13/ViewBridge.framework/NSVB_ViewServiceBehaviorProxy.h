/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ViewBridge.framework/Versions/A/ViewBridge
 */

@interface NSVB_ViewServiceBehaviorProxy : NSVB_TargetedProxy <_UIViewServiceUIBehaviorInterface> {
    BOOL  __automatic_invalidation_invalidated;
    int  __automatic_invalidation_retainCount;
    NSVB_ViewServiceFencingControlProxy * _fencingControlProxy;
    unsigned int  _scope;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) unsigned int scope;
@property (atomic, readonly) Class superclass;

+ (id)activeFencePort;
+ (id)proxyWrappingExportedObject:(id)arg1 forCommunicationAtScope:(unsigned int)arg2 exportedProtocol:(id)arg3;

- (int)__automatic_invalidation_logic;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (void)dealloc;
- (id)description;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (unsigned int)scope;

@end
