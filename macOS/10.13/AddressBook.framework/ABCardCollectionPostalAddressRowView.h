/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABCardCollectionPostalAddressRowView : ABCardCollectionRowView {
    NSStackView * _addressFieldsContainer;
    BOOL  _isEditing;
    CNPostalAddress * _postalAddress;
}

@property (nonatomic, readwrite, retain) NSStackView *addressFieldsContainer;
@property (nonatomic, readonly) BOOL isEditing;
@property (nonatomic, readwrite, retain) CNPostalAddress *postalAddress;

- (void).cxx_destruct;
- (id)addressFieldsContainer;
- (void)controlTextDidChange:(id)arg1;
- (void)didInsertIntoCollectionView:(id)arg1;
- (id)firstTextField;
- (void)focus;
- (BOOL)hasValue;
- (void)highlightSearchTerms:(id)arg1;
- (BOOL)isEditing;
- (BOOL)isEmptyAndNotFirstResponder;
- (id)makeTouchBar;
- (id)postalAddress;
- (void)processControlTextDidChange:(id)arg1;
- (void)rebuildAddressEntryFields;
- (void)setAddressFieldsContainer:(id)arg1;
- (void)setAddressFieldsEnabled:(BOOL)arg1;
- (void)setPostalAddress:(id)arg1;
- (void)setValueSelectable:(BOOL)arg1;
- (void)textFieldWillBecomeFirstResponder:(id)arg1;
- (void)textFieldWillResignFirstResponder:(id)arg1;
- (id)updateKeyViewLoop;
- (void)updateValueView;
- (id)valueView;

@end
