/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
 */

@interface IKPictureTakerView : IKImageCropView {
    void * _ikReserved;
}

- (void)IKDVGrabberUpdated:(id)arg1;
- (BOOL)__isRoomWellLit:(char *)arg1 size:(struct CGSize { double x1; double x2; })arg2 bpr:(int)arg3 skipFirstComponent:(BOOL)arg4 spp:(int)arg5;
- (void)_finalizeDirectTakePicture;
- (void)abortTakePicture;
- (void)cameraIsGone:(id)arg1;
- (id)cameraNotConnectedText;
- (id)cameraOffImage;
- (id)cameraOffText;
- (void)cameraPictureNotification:(id)arg1;
- (void)cropElementDidLiveUpdate:(id)arg1;
- (void)dealloc;
- (void)directTakePicture;
- (void)disposeAudio;
- (void)drawIrisClosedInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)drawPositioningCircle;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)finalize;
- (void)fireNextCameraSequence;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)irisClosed:(id)arg1;
- (void)irisOpened:(id)arg1;
- (BOOL)isIrisClosed;
- (BOOL)isLiveCapturing;
- (BOOL)isRoomWellLit;
- (BOOL)isTakingPicture;
- (void)keyDown:(id)arg1;
- (void)pickerViewCommonInit;
- (void)resetCursorRects;
- (void)scheduleCameraPictureNotificationAfterDelay:(double)arg1;
- (void)setCameraCaptureDelay:(float)arg1;
- (void)setCountdownDelegate:(id)arg1;
- (void)setDisableCountDown:(BOOL)arg1;
- (void)setDisableFlash:(BOOL)arg1;
- (void)setFlashColor:(id)arg1;
- (void)setFlashFallTime:(float)arg1;
- (void)setFlashRiseTime:(float)arg1;
- (void)setFlashSaturation:(float)arg1;
- (void)setFlashSustainTime:(float)arg1;
- (short)setupAudio;
- (void)startListeningForCameraEvents;
- (BOOL)startLiveCapture;
- (BOOL)startSequenceGrabber;
- (void)stopListeningForCameraEvents;
- (void)stopLiveCapture;
- (void)stopSequenceGrabber;
- (void)takePicture;

@end
