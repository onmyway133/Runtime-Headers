/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
 */

@interface IKCameraIconCellView : NSTableCellView {
    NSImageView * _burstIcon;
    IKCameraItem * _cameraItem;
    NSImageView * _livePhotoIcon;
    NSImageView * _lockIcon;
    NSImageView * _successIcon;
}

@property (atomic, readwrite) NSImageView *burstIcon;
@property (atomic, readwrite) IKCameraItem *cameraItem;
@property (atomic, readwrite) NSImageView *livePhotoIcon;
@property (atomic, readwrite) NSImageView *lockIcon;
@property (atomic, readwrite) NSImageView *successIcon;

- (id)burstIcon;
- (id)cameraItem;
- (void)drawRectxxx:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)livePhotoIcon;
- (id)lockIcon;
- (void)setBurstIcon:(id)arg1;
- (void)setCameraItem:(id)arg1;
- (void)setLivePhotoIcon:(id)arg1;
- (void)setLockIcon:(id)arg1;
- (void)setObjectValue:(id)arg1;
- (void)setSuccessIcon:(id)arg1;
- (id)successIcon;

@end
