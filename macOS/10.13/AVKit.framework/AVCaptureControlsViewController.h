/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
 */

@interface AVCaptureControlsViewController : AVControlsViewController <NSMenuDelegate, NSTouchBarProvider> {
    AVCaptureController * _captureController;
    AVCaptureView * _captureView;
    BOOL  _isDiscoveringWirelessCaptureDevices;
    id  _menuDidCompleteNotificationToken;
    NSMenu * _sourceAndQualitySelectionMenu;
}

@property (nonatomic, readwrite) AVCaptureController *captureController;
@property (nonatomic, readwrite) AVCaptureView *captureView;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readwrite, retain) NSMenu *sourceAndQualitySelectionMenu;
@property (atomic, readonly) Class superclass;
@property (atomic, readonly) NSTouchBar *touchBar;

- (void).cxx_destruct;
- (void)addItemWithTitle:(id)arg1 andSubitemsForInputSourceItems:(id)arg2 selectedItem:(id)arg3 toMenu:(id)arg4;
- (void)addItemWithTitle:(id)arg1 qualityItems:(id)arg2 selectedQualityItem:(id)arg3 toMenu:(id)arg4;
- (id)captureController;
- (void)captureDeviceSelectionButtonPressed:(id)arg1;
- (id)captureView;
- (void)dealloc;
- (void)hideControlsForAuxiliaryControl;
- (id)init;
- (void)menuNeedsUpdate:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setCaptureController:(id)arg1;
- (void)setCaptureView:(id)arg1;
- (void)setSourceAndQualitySelectionMenu:(id)arg1;
- (void)showControlsForAuxiliaryControl;
- (id)sourceAndQualitySelectionMenu;
- (void)takeSelectedCaptureDeviceInputSourceItemFromRepresentedObjectOf:(id)arg1;
- (void)takeSelectedCaptureQualityItemFromRepresentedObjectOf:(id)arg1;
- (id)touchBar;

@end
