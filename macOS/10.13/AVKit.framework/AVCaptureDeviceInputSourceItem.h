/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
 */

@interface AVCaptureDeviceInputSourceItem : NSObject {
    AVCaptureDeviceInputSourceItem * _associatedAudioCaptureDeviceInputSourceItem;
    BOOL  _builtIn;
    AVCaptureDevice * _captureDevice;
    AVCaptureDeviceInputSource * _inputSource;
    NSString * _mediaType;
}

@property (atomic, readwrite, retain) AVCaptureDeviceInputSourceItem *associatedAudioCaptureDeviceInputSourceItem;
@property (getter=isBuiltIn, atomic, readonly) BOOL builtIn;
@property (atomic, readonly) AVCaptureDevice *captureDevice;
@property (atomic, readonly) AVCaptureDeviceInputSource *inputSource;
@property (atomic, readonly, copy) NSString *localizedDisplayName;
@property (atomic, readonly) NSString *mediaType;

- (void).cxx_destruct;
- (id)associatedAudioCaptureDeviceInputSourceItem;
- (id)captureDevice;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDevice:(id)arg1 inputSource:(id)arg2 mediaType:(id)arg3 builtIn:(BOOL)arg4;
- (id)inputSource;
- (BOOL)isBuiltIn;
- (BOOL)isEqual:(id)arg1;
- (id)localizedDisplayName;
- (id)mediaType;
- (void)setAssociatedAudioCaptureDeviceInputSourceItem:(id)arg1;

@end