/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABShowAsCommand : ABCommand {
    long long  _personType;
    ABGroup * _selectedGroup;
    NSMutableArray * _selectedMembers;
}

- (void)_showAs;
- (void)dealloc;
- (BOOL)doIt;
- (void)finalize;
- (id)initWithGroup:(id)arg1 members:(id)arg2 showAs:(long long)arg3 addressBook:(id)arg4;
- (void)redoIt;
- (void)undoIt;

@end
