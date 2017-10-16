/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SecurityInterface.framework/Versions/A/SecurityInterface
 */

@interface SFChooseIdentityPanel : NSPanel {
    id  _reserved_SFChooseIdentityPanel;
}

+ (id)sharedChooseIdentityPanel;

- (void)beginSheetForWindow:(id)arg1 modalDelegate:(id)arg2 didEndSelector:(SEL)arg3 contextInfo:(void*)arg4 identities:(id)arg5 message:(id)arg6;
- (BOOL)certificatesDisclosed;
- (void)dealloc;
- (id)domain;
- (id)helpAnchor;
- (struct OpaqueSecIdentityRef { }*)identity;
- (id)informativeText;
- (id)init;
- (void)lock;
- (id)policies;
- (long long)runModalForIdentities:(id)arg1 message:(id)arg2;
- (void)setAlternateButtonTitle:(id)arg1;
- (void)setCertificatesDisclosed:(BOOL)arg1;
- (void)setDefaultButtonTitle:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setHelpAnchor:(id)arg1;
- (void)setInformativeText:(id)arg1;
- (void)setPolicies:(id)arg1;
- (void)setShowsHelp:(BOOL)arg1;
- (BOOL)showsHelp;
- (void)unlock;

// SFChooseIdentityPanel (Accessors)

- (id)_aboveContentBox;
- (id)_aboveContentHeightConstraint;
- (id)_alternateButton;
- (id)_alternateButtonTitle;
- (id)_bottomContentBox;
- (id)_certDataArray;
- (id)_certGroupView;
- (id)_certTable;
- (id)_certView;
- (void*)_clientContextInfo;
- (id)_clientDelegate;
- (SEL)_clientDidEndSelector;
- (id)_defaultButton;
- (id)_defaultButtonTitle;
- (id)_defaultHelpAnchor;
- (id)_defaultInformation;
- (id)_defaultMessage;
- (id)_discloseContentBox;
- (id)_helpButton;
- (id)_iconView;
- (id)_identities;
- (long long)_indexOfChosenIdentity;
- (id)_informationField;
- (id)_messageField;
- (id)_panel;
- (id)_parentWindowForSheet;
- (BOOL)_runAsSheet;
- (void)_setContextInfo:(void*)arg1;
- (void)_setDidEndSelector:(SEL)arg1;
- (void)_setParentWindowForSheet:(id)arg1;
- (void)_setRunAsSheet:(BOOL)arg1;
- (void)_setSavedDelegate:(id)arg1;
- (id)_showCertButton;
- (BOOL)_showsCertButton;
- (struct __SecTrust { }*)_trust;
- (void)setDefaultInformation:(id)arg1;
- (void)setDefaultMessage:(id)arg1;
- (void)setRef:(id*)arg1 toObj:(id)arg2;
- (void)set_aboveContentBox:(id)arg1;
- (void)set_aboveContentHeightConstraint:(id)arg1;
- (void)set_alternateButton:(id)arg1;
- (void)set_bottomContentBox:(id)arg1;
- (void)set_cancelButton:(id)arg1;
- (void)set_certGroupView:(id)arg1;
- (void)set_certTable:(id)arg1;
- (void)set_certView:(id)arg1;
- (void)set_defaultButton:(id)arg1;
- (void)set_discloseContentBox:(id)arg1;
- (void)set_helpButton:(id)arg1;
- (void)set_iconView:(id)arg1;
- (void)set_informationField:(id)arg1;
- (void)set_messageField:(id)arg1;
- (void)set_okButton:(id)arg1;
- (void)set_panel:(id)arg1;
- (void)set_showCertButton:(id)arg1;

// SFChooseIdentityPanel (Private)

- (void)_cancelClicked:(id)arg1;
- (void)_chooseIdentitySheetDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void*)arg3;
- (id)_dataAtIndex:(int)arg1;
- (void)_discloseCertificates:(BOOL)arg1;
- (void)_discloseClicked:(id)arg1;
- (void)_dismissWithCode:(long long)arg1;
- (void)_doubleClickAction:(id)arg1;
- (void)_helpClicked:(id)arg1;
- (id)_initWithNib:(id)arg1;
- (void)_okClicked:(id)arg1;
- (void)_prepPanel:(id)arg1 identities:(id)arg2;
- (id)_reserved_SFChooseIdentityPanel;
- (long long)_runFullDialog;
- (void)_runFullDialogSheet;
- (void)_updateIdentityPreference:(struct OpaqueSecIdentityRef { }*)arg1 domain:(id)arg2;
- (int)numberOfRowsInTableView:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(int)arg3;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableViewSelectionDidChange:(id)arg1;

@end