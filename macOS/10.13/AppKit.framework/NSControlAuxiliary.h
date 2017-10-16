/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSControlAuxiliary : NSObject {
    SEL  _action;
    struct { 
        unsigned int guardEnabled : 1; 
        unsigned int guardLocked : 1; 
        unsigned int insetMitigation : 2; 
        unsigned int restingMitigation : 2; 
        unsigned int reserved : 26; 
    }  _flags;
    long long  _tag;
    id  _target;
    NSTimer * _touchingTooLongTimer;
}

@property (atomic, readwrite) SEL action;
@property (atomic, readwrite) BOOL guardEnabled;
@property (atomic, readwrite) BOOL guardLocked;
@property (atomic, readwrite) long long tag;
@property (atomic, readwrite) id target;
@property (atomic, readwrite) long long touchBarInsetMitigation;
@property (atomic, readwrite) long long touchBarRestingMitigation;
@property (atomic, readwrite, retain) NSTimer *touchingTooLongTimer;

- (SEL)action;
- (void)dealloc;
- (BOOL)guardEnabled;
- (BOOL)guardLocked;
- (void)removeTouchingTooLongTimer;
- (void)setAction:(SEL)arg1;
- (void)setGuardEnabled:(BOOL)arg1;
- (void)setGuardLocked:(BOOL)arg1;
- (void)setTag:(long long)arg1;
- (void)setTarget:(id)arg1;
- (void)setTouchBarInsetMitigation:(long long)arg1;
- (void)setTouchBarRestingMitigation:(long long)arg1;
- (void)setTouchingTooLongTimer:(id)arg1;
- (long long)tag;
- (id)target;
- (long long)touchBarInsetMitigation;
- (long long)touchBarRestingMitigation;
- (id)touchingTooLongTimer;

@end