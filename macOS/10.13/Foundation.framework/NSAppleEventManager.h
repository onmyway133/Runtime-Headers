/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSAppleEventManager : NSObject {
    BOOL  _isPreparedForDispatch;
    BOOL  _padding;
}

@property (atomic, readonly, retain) NSAppleEventDescriptor *currentAppleEvent;
@property (atomic, readonly, retain) NSAppleEventDescriptor *currentReplyAppleEvent;

+ (id)sharedAppleEventManager;

- (id)appleEventForSuspensionID:(struct __NSAppleEventManagerSuspension { }*)arg1;
- (id)currentAppleEvent;
- (id)currentReplyAppleEvent;
- (short)dispatchRawAppleEvent:(const struct AEDesc { unsigned int x1; struct OpaqueAEDataStorageType {} **x2; }*)arg1 withRawReply:(struct AEDesc { unsigned int x1; struct OpaqueAEDataStorageType {} **x2; }*)arg2 handlerRefCon:(void*)arg3;
- (id)init;
- (void)removeEventHandlerForEventClass:(unsigned int)arg1 andEventID:(unsigned int)arg2;
- (id)replyAppleEventForSuspensionID:(struct __NSAppleEventManagerSuspension { }*)arg1;
- (void)resumeWithSuspensionID:(struct __NSAppleEventManagerSuspension { }*)arg1;
- (void)setCurrentAppleEventAndReplyEventWithSuspensionID:(struct __NSAppleEventManagerSuspension { }*)arg1;
- (void)setEventHandler:(id)arg1 andSelector:(SEL)arg2 forEventClass:(unsigned int)arg3 andEventID:(unsigned int)arg4;
- (const struct __NSAppleEventManagerSuspension { }*)suspendCurrentAppleEvent;

// NSAppleEventManager (NSInternal)

+ (BOOL)_eventAccessGroups:(id)arg1 matchesDefinitionGroups:(id)arg2;

- (id)_perThreadHandlingStack:(BOOL)arg1;
- (BOOL)_popIfTopHandling:(id)arg1;
- (id)_poppedTopHandling;
- (void)_pushHandling:(id)arg1;
- (void)_resumeIfNotTopHandling:(id)arg1 withScriptCommandResult:(id)arg2;
- (void)_setEventSecurityHandler:(id)arg1 andSelector:(SEL)arg2 forEventClass:(unsigned int)arg3 andEventID:(unsigned int)arg4;
- (void)_suspendIfTopHandling:(id)arg1;
- (id)_topHandling;

// NSAppleEventManager (NSPrivate)

- (void)_prepareForDispatch;

@end
