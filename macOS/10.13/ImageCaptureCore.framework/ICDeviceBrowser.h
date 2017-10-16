/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ImageCaptureCore.framework/Versions/A/ImageCaptureCore
 */

@interface ICDeviceBrowser : NSObject {
    id  _privateData;
}

@property (atomic, readwrite) unsigned long long browsedDeviceTypeMask;
@property (getter=isBrowsing, atomic, readonly) BOOL browsing;
@property (atomic, readwrite) <ICDeviceBrowserDelegate> *delegate;
@property (atomic, readonly) NSArray *devices;

- (void)addDevice:(id)arg1;
- (void)addTWAINDevice:(id)arg1;
- (unsigned long long)browsedDeviceTypeMask;
- (BOOL)containsDevice:(id)arg1;
- (id)copyOfTWAINDevices;
- (void)dealloc;
- (id)delegate;
- (id)deviceWithRef:(id)arg1;
- (id)devices;
- (void)finalize;
- (id)init;
- (BOOL)isBrowsing;
- (id)preferredDevice;
- (void)removeAllTWAINDevices;
- (void)removeDevice:(id)arg1;
- (void)resetAllTWAINDevices;
- (void)scanForTWAINDevices;
- (void)setBrowsedDeviceTypeMask:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)start;
- (void)stop;

@end
