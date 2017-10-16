/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
 */

@interface AVFigEndpointPickerOutputDeviceDiscoverySessionImpl : NSObject <AVOutputDeviceDiscoverySessionImpl> {
    struct OpaqueFigEndpointPicker { } * _endpointPicker;
    unsigned long long  _features;
    AVOutputDeviceDiscoverySession * _parentSession;
    NSObject<OS_dispatch_queue> * _pickerQueue;
    AVWeakReference * _weakReference;
}

@property (nonatomic, readonly) AVOutputDeviceDiscoverySessionAvailableOutputDevices *availableOutputDevicesObject;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (nonatomic, readonly) BOOL devicePresenceDetected;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite) AVOutputDeviceDiscoverySession *parentOutputDeviceDiscoverySession;
@property (atomic, readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_addFigEndpointPickerNotifications;
- (int)_configureFigEndpointPickerWithFeature:(unsigned long long)arg1;
- (void)_handlePickerServerConnectionDiedNotification;
- (void)_removeFigEndpointPickerNotifications;
- (id)availableOutputDevicesObject;
- (void)dealloc;
- (BOOL)devicePresenceDetected;
- (id)init;
- (id)initWithDeviceFeatures:(unsigned long long)arg1;
- (void)outputDeviceDiscoverySessionDidChangeDiscoveryMode:(id)arg1;
- (id)parentOutputDeviceDiscoverySession;
- (void)setParentOutputDeviceDiscoverySession:(id)arg1;

@end