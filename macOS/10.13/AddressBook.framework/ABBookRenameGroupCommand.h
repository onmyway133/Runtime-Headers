/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABBookRenameGroupCommand : ABBookUndoableCommand {
    ABAccount * _account;
    ABAddressBook * _addressBook;
    ABGroupEntriesList * _groupEntriesList;
    NSString * _groupUid;
    NSString * _newName;
    NSString * _oldName;
}

+ (id)commandWithAddressBook:(id)arg1 group:(id)arg2 newName:(id)arg3 groupEntriesList:(id)arg4;

- (id)actionName;
- (void)dealloc;
- (void)execute;
- (void)executeUndo;
- (id)group;
- (void)setGroupName:(id)arg1;
- (id)validGroup;

@end
