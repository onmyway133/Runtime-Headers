/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABBookGroupCopyCommand : ABBookCommand {
    ABGroup * _group;
    NSPasteboard * _pasteboard;
}

- (void)dealloc;
- (void)execute;
- (id)initWithPasteboard:(id)arg1 group:(id)arg2;
- (id)pasteboardData;

@end
