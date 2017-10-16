/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABCNInMemorySaveTransaction : NSObject <ABCNDataMapperSaveTransaction> {
    ABCNMutableInMemoryState * _mutableState;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (void)addContacts:(id)arg1 withSaveResponse:(id)arg2;
- (void)addGroups:(id)arg1 withSaveResponse:(id)arg2;
- (void)clearMeCardIdentifierWithSaveResponse:(id)arg1;
- (BOOL)commitChangesWithSaveResponse:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (void)deleteContacts:(id)arg1 withSaveResponse:(id)arg2;
- (void)deleteGroups:(id)arg1 withSaveResponse:(id)arg2;
- (id)initWithMutableState:(id)arg1;
- (void)setMeCardIdentifier:(id)arg1 withSaveResponse:(id)arg2;
- (void)updateContacts:(id)arg1 withSaveResponse:(id)arg2;
- (void)updateGroups:(id)arg1 withSaveResponse:(id)arg2;

@end
