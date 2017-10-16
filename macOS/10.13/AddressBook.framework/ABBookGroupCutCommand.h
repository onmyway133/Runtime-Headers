/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABBookGroupCutCommand : ABBookUndoableCommand {
    ABBookGroupCopyCommand * _copyCommand;
    ABBookGroupDeleteCommand * _deleteCommand;
}

- (id)actionName;
- (void)dealloc;
- (void)execute;
- (void)executeRedo;
- (void)executeUndo;
- (id)initWithCopyCommand:(id)arg1 deleteCommand:(id)arg2;

@end
