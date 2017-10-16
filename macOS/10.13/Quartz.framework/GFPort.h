/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface GFPort : NSObject <GFBase> {
    NSDictionary * _attributes;
    unsigned long long  _flags;
    GFPort * _originalPort;
    GFNode * _owner;
    GFPort * _rootPort;
    void * _unused;
    NSMutableDictionary * _userInfo;
}

- (id)attributes;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithNode:(id)arg1 arguments:(id)arg2;
- (id)key;
- (id)node;
- (id)originalPort;
- (void)portWillDeleteFromNode;
- (BOOL)setState:(id)arg1;
- (id)state;
- (void)stateUpdated;
- (id)userInfo;

// GFPort (GFNodeActor)

- (void)resetTooltipView;
- (id)setupTooltipView;
- (id)tooltipString;

// GFPort (MessageForwarding)

- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;

// GFPort (Private)

- (unsigned long long)_flags;
- (void)_setFlags:(unsigned long long)arg1;
- (void)_unsetFlags:(unsigned long long)arg1;
- (id)_userInfo;

// GFPort (ProxyNameEditing)

- (id)editName:(id)arg1 inView:(id)arg2;

@end
