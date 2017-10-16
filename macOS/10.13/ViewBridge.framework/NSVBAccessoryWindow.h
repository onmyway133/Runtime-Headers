/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ViewBridge.framework/Versions/A/ViewBridge
 */

@interface NSVBAccessoryWindow : NSWindow {
    NSVBAccessoryWindowBackstopResponder * _backstopResponder;
    unsigned int  _notificationsRegistered;
    unsigned long long  _orderingInProgress;
    NSRemoteView * _remoteView;
    unsigned long long  _setFrameInProgress;
    NSEvent * _unhandledKeyEvent;
    unsigned int  _willUpdateAccessibilityChildren;
}

@property (atomic, readwrite) unsigned int notificationsRegistered;

- (void)_accessoryViewFrameDidChange:(id)arg1;
- (void)_hierarchyDidChangeInView:(id)arg1;
- (BOOL)_keyViewLoopsMayCrossWindows;
- (id)_orderedDrawerAndWindowKeyLoopGroupingViews;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityParentAttribute;
- (BOOL)canBecomeKeyWindow;
- (void)clearUnhandledKeyEvent;
- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forRemoteView:(id)arg2;
- (void)invalidate;
- (void)keyDown:(id)arg1;
- (void)maintainAccessoryViewNotifications:(BOOL)arg1;
- (BOOL)makeFirstResponder:(id)arg1;
- (id)nextResponder;
- (unsigned int)notificationsRegistered;
- (void)orderWindow:(long long)arg1 relativeTo:(long long)arg2;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 display:(BOOL)arg2;
- (void)setNotificationsRegistered:(unsigned int)arg1;
- (void)setView:(id)arg1;
- (void)superSetFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 display:(BOOL)arg2;
- (id)unhandledKeyEvent;
- (id)view;

@end
