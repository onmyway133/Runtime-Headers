/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
 */

@interface IKHardwareCapsChangeNotifier : NSObject {
    NSMutableArray * _cameraCallbackObjs;
    id  _delegate;
    BOOL  _hasDV;
    BOOL  _hasQ8;
    struct IONotificationPort { } * _notificationPort;
    NSMutableDictionary * _notifierMap;
}

+ (id)hardwareCapsChangeNotifier;

- (void)_broadcastHardwareCaps;
- (BOOL)_isGUIDUnique:(id)arg1;
- (void)audioHardwareChanged:(id)arg1;
- (unsigned int)cameraCallbackCreateNotifier:(unsigned int)arg1;
- (unsigned int)cameraCallbackFindParent:(unsigned int)arg1 parentClass:(const char *)arg2;
- (void)createNotification:(struct __CFDictionary { }*)arg1 callback:(int (*)arg2;
- (void)dealloc;
- (id)delegate;
- (void)finalize;
- (id)init;
- (void)initIOKitNotifications;
- (void)initialize;
- (struct IONotificationPort { }*)notificationPort;
- (id)notifierMap;
- (void)registerForHardwareNotification;
- (void)setDelegate:(id)arg1;
- (void)unregisterForHardwareNotification;
- (id)vcHardwareCaps;

@end