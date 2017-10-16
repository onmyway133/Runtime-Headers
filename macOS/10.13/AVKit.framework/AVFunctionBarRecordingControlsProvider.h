/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
 */

@interface AVFunctionBarRecordingControlsProvider : NSResponder <AVFunctionBarAudioCaptureDeviceSelectionButtonViewControllerDelegate, AVFunctionBarCaptureInputSourceSelectionViewControllerDelegate, NSTouchBarDelegate, NSTouchBarProvider> {
    NSPopoverTouchBarItem * _audioCaptureDeviceSelectionButtonFunctionBarItem;
    NSCustomTouchBarItem * _audioCaptureDeviceSelectionFunctionBarItem;
    <AVFunctionBarRecordingControlsControllingInternal> * _captureController;
    NSCustomTouchBarItem * _captureInputSourceSelectionFunctionBarItem;
    long long  _controlsType;
    NSTouchBar * _functionBar;
    AVFunctionBarAudioCaptureDeviceSelectionButtonViewController * _functionBarAudioCaptureDeviceSelectionButtonViewController;
    AVFunctionBarCaptureInputSourceSelectionViewController * _functionBarAudioCaptureDeviceSelectionViewController;
    AVFunctionBarCaptureInputSourceSelectionViewController * _functionBarCaptureInputSourceSelectionViewController;
    AVFunctionBarRecordingControlsViewController * _functionBarRecordingControlsViewController;
    BOOL  _optionKeyPressed;
    NSSpaceTouchBarItem * _popoverSpaceFunctionBarItem;
    <AVFunctionBarRecordingControlsControlling> * _recordingControlsController;
    NSCustomTouchBarItem * _recordingControlsFunctionBarItem;
    NSSpaceTouchBarItem * _zeroMinimumWidthSpaceFunctionBarItem;
}

@property (atomic, readwrite, retain) <AVFunctionBarRecordingControlsControllingInternal> *captureController;
@property (atomic, readwrite) long long controlsType;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (getter=isOptionKeyPressed, atomic, readwrite) BOOL optionKeyPressed;
@property (atomic, readwrite, retain) <AVFunctionBarRecordingControlsControlling> *recordingControlsController;
@property (atomic, readonly) Class superclass;
@property (atomic, readonly) NSTouchBar *touchBar;

- (void).cxx_destruct;
- (id)_functionBarAudioCaptureDeviceSelectionButtonViewController;
- (id)_functionBarAudioCaptureDeviceSelectionViewController;
- (id)_functionBarCaptureInputSourceSelectionViewController;
- (id)_functionBarRecordingControlsViewController;
- (BOOL)_isFunctionBarAudioCaptureDeviceSelectionButtonViewControllerLoaded;
- (BOOL)_isFunctionBarAudioCaptureDeviceSelectionViewControllerLoaded;
- (BOOL)_isFunctionBarCaptureInputSourceSelectionViewControllerLoaded;
- (BOOL)_isFunctionBarRecordingControlsViewControllerLoaded;
- (void)_updateFunctionBarCaptureInputSourceSelectionViewControllerControlsType;
- (void)_updateFunctionBarItemIdentifiersForFunctionBar:(id)arg1;
- (id)captureController;
- (long long)controlsType;
- (void)dealloc;
- (void)functionBarAudioCaptureDeviceSelectionButtonViewControllerPresentDeviceSelectionPopover:(id)arg1;
- (void)functionBarCaptureInputSourceSelectionViewController:(id)arg1 didSelectFunctionBarCaptureInputSourceItem:(id)arg2;
- (id)init;
- (BOOL)isOptionKeyPressed;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)recordingControlsController;
- (void)setCaptureController:(id)arg1;
- (void)setControlsType:(long long)arg1;
- (void)setOptionKeyPressed:(BOOL)arg1;
- (void)setRecordingControlsController:(id)arg1;
- (id)touchBar;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;

@end