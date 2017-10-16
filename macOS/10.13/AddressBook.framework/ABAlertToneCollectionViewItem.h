/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABAlertToneCollectionViewItem : ABCollectionViewItem <TKTonePickerViewControllerDelegate> {
    TKTonePickerViewController * _tonePickerViewController;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readwrite, retain) TKTonePickerViewController *tonePickerViewController;

- (void).cxx_destruct;
- (id)_labelMenuItems;
- (id)_localizedLabel;
- (BOOL)_shouldShowAddItemButton;
- (BOOL)_shouldShowRemoveItemButton;
- (void)_updateViewValue;
- (void)setTonePickerViewController:(id)arg1;
- (BOOL)shouldEnableEditPopupButton;
- (BOOL)supportsClickToEdit;
- (id)toneIdentifierFromAlert:(id)arg1;
- (id)toneNameForIdentifier:(id)arg1;
- (id)tonePickerViewController;
- (void)tonePickerViewController:(id)arg1 selectedToneWithIdentifier:(id)arg2;

@end
