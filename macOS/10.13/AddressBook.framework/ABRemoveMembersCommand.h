/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABRemoveMembersCommand : ABBookUndoableCommand {
    ABAddressBook * _addressBook;
    NSString * _groupIdentifier;
    NSArray * _memberIdentifiers;
}

- (void)_addPeople:(id)arg1 toGroup:(id)arg2;
- (void)_addSubgroups:(id)arg1 toGroup:(id)arg2;
- (id)_fetchGroup;
- (id)_fetchMembers;
- (void)_removePeople:(id)arg1 fromGroup:(id)arg2;
- (void)_removeSubgroups:(id)arg1 fromGroup:(id)arg2;
- (void)dealloc;
- (void)execute;
- (void)executeUndo;
- (id)initWithGroup:(id)arg1 members:(id)arg2 addressBook:(id)arg3;

@end
