/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSInputServer : NSObject <NSInputServerMouseTracker, NSInputServiceProvider> {
    id  _delegate;
    NSString * _name;
}

- (void)activeConversationChanged:(id)arg1 toNewConversation:(long long)arg2;
- (void)activeConversationWillChange:(id)arg1 fromOldConversation:(long long)arg2;
- (BOOL)canBeDisabled;
- (void)dealloc;
- (id)description;
- (void)doCommandBySelector:(SEL)arg1 client:(id)arg2;
- (id)initWithDelegate:(id)arg1 name:(id)arg2;
- (void)inputClientBecomeActive:(id)arg1;
- (void)inputClientDisabled:(id)arg1;
- (void)inputClientEnabled:(id)arg1;
- (void)inputClientResignActive:(id)arg1;
- (void)insertText:(id)arg1 client:(id)arg2;
- (void)markedTextAbandoned:(id)arg1;
- (void)markedTextSelectionChanged:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 client:(id)arg2;
- (BOOL)mouseDownOnCharacterIndex:(unsigned long long)arg1 atCoordinate:(struct CGPoint { double x1; double x2; })arg2 withModifier:(unsigned long long)arg3 client:(id)arg4;
- (BOOL)mouseDraggedOnCharacterIndex:(unsigned long long)arg1 atCoordinate:(struct CGPoint { double x1; double x2; })arg2 withModifier:(unsigned long long)arg3 client:(id)arg4;
- (void)mouseUpOnCharacterIndex:(unsigned long long)arg1 atCoordinate:(struct CGPoint { double x1; double x2; })arg2 withModifier:(unsigned long long)arg3 client:(id)arg4;
- (void)terminate:(id)arg1;
- (BOOL)wantsToDelayTextChangeNotifications;
- (BOOL)wantsToHandleMouseEvents;
- (BOOL)wantsToInterpretAllKeystrokes;

// NSInputServer (NSInputServerCompatibility)

- (void)cancelInput:(id)arg1 conversation:(long long)arg2;
- (void)senderDidBecomeActive:(id)arg1;
- (void)senderDidResignActive:(id)arg1;
- (void)setActivated:(BOOL)arg1 sender:(id)arg2;

// NSInputServer (NSInputServerDOOptimization)

- (void)_inputClientChangedStatus:(id)arg1 inputClient:(id)arg2;

@end
