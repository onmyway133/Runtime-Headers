/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABBookCreateGroupCommand : ABBookUndoableCommand {
    ABAccount * _account;
    ABAddressBook * _addressBook;
    ABGroupEntriesList * _groupEntriesList;
    NSString * _groupName;
    NSString * _groupUid;
}

@property (atomic, readwrite, copy) NSString *groupName;
@property (atomic, readwrite, copy) NSString *groupUid;

- (id)actionName;
- (void)dealloc;
- (void)execute;
- (void)executeRedo;
- (void)executeUndo;
- (id)group;
- (id)groupEntryForNewGroup;
- (id)groupName;
- (id)groupUid;
- (id)initWithAccount:(id)arg1 addressBook:(id)arg2 groupEntriesList:(id)arg3;
- (id)makeUntitledGroup;
- (void)setGroupName:(id)arg1;
- (void)setGroupUid:(id)arg1;
- (id)untitledString;
- (void)updateGroupName:(id)arg1;

@end
