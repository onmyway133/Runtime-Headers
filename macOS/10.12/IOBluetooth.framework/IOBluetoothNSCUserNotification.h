/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
 */

@interface IOBluetoothNSCUserNotification : IOBluetoothNSUserNotification {
    int (* mCallback;
    void * mRefCon;
}

+ (id)withCallback:(int (*)arg1 refCon:(void*)arg2 name:(id)arg3 object:(id)arg4;

- (void)deliverNotification:(id)arg1;
- (id)initWithCallback:(int (*)arg1 refCon:(void*)arg2 name:(id)arg3 object:(id)arg4;

@end