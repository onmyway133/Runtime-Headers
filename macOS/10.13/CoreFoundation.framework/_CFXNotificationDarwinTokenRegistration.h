/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
 */

@interface _CFXNotificationDarwinTokenRegistration : _CFXNotificationTokenRegistration {
    int  _notifyToken;
}

@property (atomic, readonly) int notifyToken;

- (id)initWithToken:(unsigned long long)arg1 notifyToken:(int)arg2 options:(unsigned long long)arg3 queue:(id)arg4 handler:(id)arg5;
- (void)invalidate;
- (int)notifyToken;

@end
