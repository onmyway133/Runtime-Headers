/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebKitLegacy.framework/Versions/A/WebKitLegacy
 */

@interface DOMKeyboardEvent : DOMUIEvent

@property (atomic, readonly) BOOL altGraphKey;
@property (atomic, readonly) BOOL altKey;
@property (atomic, readonly) int charCode;
@property (atomic, readonly) BOOL ctrlKey;
@property (atomic, readonly) int keyCode;
@property (atomic, readonly, copy) NSString *keyIdentifier;
@property (atomic, readonly) unsigned int keyLocation;
@property (atomic, readonly) unsigned int location;
@property (atomic, readonly) BOOL metaKey;
@property (atomic, readonly) BOOL shiftKey;

- (BOOL)altGraphKey;
- (BOOL)altKey;
- (int)charCode;
- (BOOL)ctrlKey;
- (BOOL)getModifierState:(id)arg1;
- (void)initKeyboardEvent:(id)arg1 canBubble:(BOOL)arg2 cancelable:(BOOL)arg3 view:(id)arg4 keyIdentifier:(id)arg5 keyLocation:(unsigned int)arg6 ctrlKey:(BOOL)arg7 altKey:(BOOL)arg8 shiftKey:(BOOL)arg9 metaKey:(BOOL)arg10;
- (void)initKeyboardEvent:(id)arg1 canBubble:(BOOL)arg2 cancelable:(BOOL)arg3 view:(id)arg4 keyIdentifier:(id)arg5 keyLocation:(unsigned int)arg6 ctrlKey:(BOOL)arg7 altKey:(BOOL)arg8 shiftKey:(BOOL)arg9 metaKey:(BOOL)arg10 altGraphKey:(BOOL)arg11;
- (void)initKeyboardEvent:(id)arg1 canBubble:(BOOL)arg2 cancelable:(BOOL)arg3 view:(id)arg4 keyIdentifier:(id)arg5 location:(unsigned int)arg6 ctrlKey:(BOOL)arg7 altKey:(BOOL)arg8 shiftKey:(BOOL)arg9 metaKey:(BOOL)arg10;
- (void)initKeyboardEvent:(id)arg1 canBubble:(BOOL)arg2 cancelable:(BOOL)arg3 view:(id)arg4 keyIdentifier:(id)arg5 location:(unsigned int)arg6 ctrlKey:(BOOL)arg7 altKey:(BOOL)arg8 shiftKey:(BOOL)arg9 metaKey:(BOOL)arg10 altGraphKey:(BOOL)arg11;
- (int)keyCode;
- (id)keyIdentifier;
- (unsigned int)keyLocation;
- (unsigned int)location;
- (BOOL)metaKey;
- (BOOL)shiftKey;

@end