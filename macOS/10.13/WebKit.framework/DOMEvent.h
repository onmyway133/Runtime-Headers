/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebKitLegacy.framework/Versions/A/WebKitLegacy
 */

@interface DOMEvent : DOMObject

@property (atomic, readonly) BOOL bubbles;
@property (atomic, readwrite) BOOL cancelBubble;
@property (atomic, readonly) BOOL cancelable;
@property (atomic, readonly) <DOMEventTarget> *currentTarget;
@property (atomic, readonly) unsigned short eventPhase;
@property (atomic, readwrite) BOOL returnValue;
@property (atomic, readonly) <DOMEventTarget> *srcElement;
@property (atomic, readonly) <DOMEventTarget> *target;
@property (atomic, readonly) unsigned long long timeStamp;
@property (atomic, readonly, copy) NSString *type;

- (BOOL)bubbles;
- (BOOL)cancelBubble;
- (BOOL)cancelable;
- (BOOL)composed;
- (id)currentTarget;
- (void)dealloc;
- (BOOL)defaultPrevented;
- (unsigned short)eventPhase;
- (void)initEvent:(id)arg1 canBubbleArg:(BOOL)arg2 cancelableArg:(BOOL)arg3;
- (BOOL)isTrusted;
- (void)preventDefault;
- (BOOL)returnValue;
- (void)setCancelBubble:(BOOL)arg1;
- (void)setReturnValue:(BOOL)arg1;
- (id)srcElement;
- (void)stopImmediatePropagation;
- (void)stopPropagation;
- (id)target;
- (unsigned long long)timeStamp;
- (id)type;

// DOMEvent (DOMEventDeprecated)

- (void)initEvent:(id)arg1 :(BOOL)arg2 :(BOOL)arg3;

@end