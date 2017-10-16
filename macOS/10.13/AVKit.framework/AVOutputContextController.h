/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
 */

@interface AVOutputContextController : NSObject {
    AVOutputDevice * _cachedOutputDevice;
    NSString * _cachedOutputDeviceName;
    AVOutputContext * _outputContext;
}

@property (getter=isExternalOutputDevicePicked, atomic, readonly) BOOL externalOutputDevicePicked;
@property (atomic, readonly) AVOutputContext *outputContext;
@property (atomic, readonly) AVOutputDevice *outputDevice;
@property (atomic, readonly) NSString *outputDeviceName;

+ (id)keyPathsForValuesAffectingExternalOutputDevicePicked;

- (void).cxx_destruct;
- (void)_outputDeviceChangedNotification:(id)arg1;
- (void)_updateCachedValues;
- (void)dealloc;
- (id)init;
- (id)initWithOutputContext:(id)arg1;
- (BOOL)isExternalOutputDevicePicked;
- (id)outputContext;
- (id)outputDevice;
- (id)outputDeviceName;
- (BOOL)setOutputDevice:(id)arg1 forFeature:(unsigned long long)arg2;

@end
