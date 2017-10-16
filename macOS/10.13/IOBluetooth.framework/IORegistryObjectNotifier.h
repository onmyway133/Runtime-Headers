/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
 */

@interface IORegistryObjectNotifier : NSObject {
    struct IONotificationPort { } * _IORegistryObjectNotifierNotificationPort;
    id  _connectObserver;
    SEL  _connectSelector;
    unsigned int  _deviceConnectNotification;
    unsigned int  _deviceDisconnectNotification;
    id  _disconnectObserver;
    SEL  _disconnectSelector;
}

+ (BOOL)objectPresent:(id)arg1;

- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)initForObjectsOfClass:(id)arg1;
- (id)initForObjectsOfClass:(id)arg1 observer:(id)arg2 selector:(SEL)arg3;
- (void)removeAllObservers;
- (BOOL)setConnectObserver:(id)arg1 selector:(SEL)arg2;
- (BOOL)setDisconnectObserver:(id)arg1 selector:(SEL)arg2;

// IORegistryObjectNotifier (Internal)

- (void)objectConnected:(id)arg1;
- (void)objectDisconnected:(id)arg1;
- (void)releaseAllPorts;
- (int)setupNotificationPort;

@end
