/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
 */

@interface SystemPowerNotifier : NSObject {
    id  _delegate;
    struct IONotificationPort { } * _notificationPort;
    unsigned int  _notifier;
    unsigned int  _rootConnection;
}

@property (atomic, readwrite) unsigned int rootConnection;

+ (id)systemPowerNotifierWithTarget:(id)arg1;

- (void)dealloc;
- (void)finalize;
- (id)init;
- (BOOL)notifyDelegate:(unsigned int)arg1;
- (unsigned int)rootConnection;
- (void)setDelegate:(id)arg1;
- (void)setRootConnection:(unsigned int)arg1;

@end
