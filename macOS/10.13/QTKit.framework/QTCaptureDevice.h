/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
 */

@interface QTCaptureDevice : NSObject <NSCoding> {
    QTCaptureDeviceInternal * _internal;
    long long  _reserved1;
    long long  _reserved2;
    long long  _reserved3;
}

+ (id)_linkedDevicesLock;
+ (id)_registeredDeviceClassNames;
+ (id)defaultInputDeviceWithMediaType:(id)arg1;
+ (id)deviceWithUniqueID:(id)arg1;
+ (id)devicesWithIOType:(int)arg1;
+ (id)inputDevices;
+ (id)inputDevicesWithMediaType:(id)arg1;
+ (id)tundraBundleIdentifier;

- (void)_forceClosed;
- (void)_removeAllLinkedDevices;
- (BOOL)_startUsingDevice:(id*)arg1;
- (void)_stopUsingDevice;
- (void)addLinkedDeviceWithoutReentering:(id)arg1;
- (id)attributeForKey:(id)arg1;
- (BOOL)attributeIsReadOnly:(id)arg1;
- (BOOL)automaticallyAdjustsFeatureControls;
- (id)availableStillImageFormats;
- (Class)classForCoder;
- (void)close;
- (struct OpaqueCMIOUnit { }*)connectionUnit;
- (unsigned int)connectionUnitComponentSubType;
- (void)dealloc;
- (id)description;
- (id)deviceAttributes;
- (void)deviceConnectionDidChange;
- (void)deviceConnectionWillChange;
- (unsigned int)deviceID;
- (long long)deviceSystem;
- (void)didChangeAttributeForKey:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (id)formatDescriptions;
- (BOOL)hasMediaType:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isConnected;
- (BOOL)isHighResolutionCamera;
- (BOOL)isInUseByAnotherApplication;
- (BOOL)isOpen;
- (BOOL)isPassThroughRecommendedOnCurrentHardware;
- (id)linkedDevices;
- (id)localizedDisplayName;
- (id)modelUniqueID;
- (BOOL)nativelySupportsCompressionOptions:(id)arg1;
- (BOOL)open:(id*)arg1;
- (void)removeLinkedDeviceWithoutReentering:(id)arg1;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (void)setAutomaticallyAdjustsFeatureControls:(BOOL)arg1;
- (void)setDeviceAttributes:(id)arg1;
- (void)setLinkedDevices:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (BOOL)startUsingDevice:(id*)arg1;
- (id)stillImageSampleBufferWithFormat:(id)arg1 error:(id*)arg2;
- (void)stopUsingDevice;
- (unsigned int)transportType;
- (id)uniqueID;
- (id)valueForUndefinedKey:(id)arg1;
- (void)willChangeAttributeForKey:(id)arg1;

@end
