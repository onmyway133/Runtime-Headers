/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
 */

@interface AVFunctionBarCaptureInputSourceSelectionViewController : NSViewController {
    NSStackView * _additionalAudioCaptureSourceButtonsView;
    NSMutableArray * _bindings;
    <AVFunctionBarRecordingControlsControllingInternal> * _captureController;
    NSStackView * _captureSourceButtonsView;
    NSSegmentedControl * _captureSourceSegmentedControl;
    NSView * _controlsContainerView;
    long long  _controlsType;
    <AVFunctionBarCaptureInputSourceSelectionViewControllerDelegate> * _delegate;
}

@property (atomic, readwrite, retain) <AVFunctionBarRecordingControlsControllingInternal> *captureController;
@property (atomic, readonly) NSArray *captureInputSourceItems;
@property (atomic, readwrite) long long controlsType;
@property (nonatomic, readwrite) <AVFunctionBarCaptureInputSourceSelectionViewControllerDelegate> *delegate;
@property (atomic, readonly) NSString *labelStringValue;
@property (atomic, readonly) AVFunctionBarCaptureInputSourceItem *selectedCaptureInputSourceItem;
@property (getter=isSelectionWithSegmentedControlPossible, atomic, readonly) BOOL selectionWithSegmentedControlPossible;
@property (atomic, readonly) BOOL showsAdditionalAudioCaptureInputSourceItems;
@property (atomic, readonly) BOOL showsLabel;
@property (atomic, readonly) BOOL showsScrollViewWithButtons;
@property (atomic, readonly) BOOL showsSegmentedControl;

+ (id)keyPathsForValuesAffectingCaptureInputSourceItems;
+ (id)keyPathsForValuesAffectingSelectedCaptureInputSourceItem;
+ (id)keyPathsForValuesAffectingSelectionWithSegmentedControlPossible;
+ (id)keyPathsForValuesAffectingShowsAdditionalAudioCaptureInputSourceItems;
+ (id)keyPathsForValuesAffectingShowsLabel;
+ (id)keyPathsForValuesAffectingShowsScrollViewWithButtons;
+ (id)keyPathsForValuesAffectingShowsSegmentedControl;

- (void).cxx_destruct;
- (void)_bindObject:(id)arg1 withBinding:(id)arg2 toObject:(id)arg3 withKeyPath:(id)arg4 options:(id)arg5;
- (void)_loadCaptureSourceButtonsView;
- (void)_loadCaptureSourceSegmentedControl;
- (id)_makeLabel;
- (id)_makeSelectionButtonWithInputSourceItem:(id)arg1;
- (void)_notifyDelegateSelectedCaptureInputSourceItemChangeTo:(id)arg1;
- (void)_unbindAllObjects;
- (void)_updateSourceSelectionControlStates;
- (void)_updateSourceSelectionControls;
- (void)actionSegmentedControlSelectionChanged:(id)arg1;
- (void)actionSelectFunctionBarCaptureInputSourceItem:(id)arg1;
- (id)captureController;
- (id)captureInputSourceItems;
- (long long)controlsType;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (BOOL)isSelectionWithSegmentedControlPossible;
- (id)labelStringValue;
- (void)loadView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)selectedCaptureInputSourceItem;
- (void)setCaptureController:(id)arg1;
- (void)setControlsType:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (BOOL)showsAdditionalAudioCaptureInputSourceItems;
- (BOOL)showsLabel;
- (BOOL)showsScrollViewWithButtons;
- (BOOL)showsSegmentedControl;

@end
