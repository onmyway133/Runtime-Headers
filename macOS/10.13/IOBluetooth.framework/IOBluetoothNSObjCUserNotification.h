/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
 */

@interface IOBluetoothNSObjCUserNotification : IOBluetoothNSUserNotification {
    id  mObserver;
    SEL  mSelector;
}

+ (id)withObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;

- (void)deliverNotification:(id)arg1;
- (id)initWithObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;

@end
