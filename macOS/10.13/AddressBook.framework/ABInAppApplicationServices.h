/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABInAppApplicationServices : NSObject <ABApplicationServices>

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (id)appDelegate;
- (void)showContactWithUniqueId:(id)arg1 shouldUnify:(BOOL)arg2;
- (void)showMCCConfigForAccountID:(id)arg1;
- (void)showPasswordPanelModalForWindow:(id)arg1 forAccountWithIdentifier:(id)arg2 completion:(id)arg3;

@end
