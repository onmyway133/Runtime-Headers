/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneKit.framework/Versions/A/ToneKit
 */

@interface TKTonePickerPopUpButtonViewController : NSViewController <TKTonePickerContentViewController, TKTonePickerControllerDelegate> {
    <TKTonePickerContentViewControllerDelegate> * _delegate;
    TKPickerPopUpButton * _popUpButton;
    TKTonePickerController * _tonePickerController;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (nonatomic, readwrite) <TKTonePickerContentViewControllerDelegate> *delegate;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readonly) NSView *tonePickerContentView;
@property (nonatomic, readonly) NSResponder *tonePickerResponder;

- (void).cxx_destruct;
- (void)_invalidatePopUpButtonMenu;
- (void)_reloadPopUpButtonMenu;
- (void)_tonePickerMenuItemWasSelected:(id)arg1;
- (void)_tonePickerSectionMenuItemWasSelected:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithTonePickerController:(id)arg1;
- (void)loadView;
- (void)setDelegate:(id)arg1;
- (id)tonePickerContentView;
- (void)tonePickerController:(id)arg1 selectedToneWithIdentifier:(id)arg2;
- (void)tonePickerControllerDidReloadTones:(id)arg1;
- (id)tonePickerResponder;
- (BOOL)validateMenuItem:(id)arg1;

@end
