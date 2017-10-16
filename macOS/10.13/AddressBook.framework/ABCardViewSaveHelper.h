/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABCardViewSaveHelper : NSObject {
    ABCommandExecutor * _commandExecutor;
    CNContactStore * _contactStore;
    NSString * _containerIdentifier;
    AKCardViewDataSource * _dataSource;
    <ABCardViewSaveHelperDelegate> * _delegate;
    BOOL  _hasSaved;
    BOOL  _isContactNewlyCreated;
    BOOL  _isSaving;
}

@property (nonatomic, readwrite, retain) ABCommandExecutor *commandExecutor;
@property (nonatomic, readwrite, retain) CNContactStore *contactStore;
@property (nonatomic, readwrite) NSString *containerIdentifier;
@property (nonatomic, readwrite, retain) AKCardViewDataSource *dataSource;
@property (nonatomic, readwrite) <ABCardViewSaveHelperDelegate> *delegate;
@property (nonatomic, readwrite) BOOL hasSaved;
@property (nonatomic, readwrite) BOOL isContactNewlyCreated;
@property (nonatomic, readwrite) BOOL isSaving;

- (void).cxx_destruct;
- (void)addNewPersonToStoreDataSourceChanges;
- (void)addPerson;
- (void)applyProperties:(id)arg1 fromContact:(id)arg2 toContact:(id)arg3;
- (BOOL)canSave;
- (id)commandExecutor;
- (id)contactByApplyingChangesFromContact:(id)arg1 toContact:(id)arg2;
- (id)contactStore;
- (id)containerIdentifier;
- (id)dataSource;
- (BOOL)dataSourceHasNonLinkChanges;
- (id)delegate;
- (void)deletePeople;
- (void)deleteUnsavedContact;
- (void)executeCommand:(id)arg1;
- (BOOL)hasNameChanges;
- (BOOL)hasPhotoChanges;
- (BOOL)hasSaved;
- (id)initWithContactStore:(id)arg1;
- (BOOL)isContactNewlyCreated;
- (BOOL)isSaving;
- (id)makeAddCommandForContacts:(id)arg1 accountIdentifier:(id)arg2 personInserted:(BOOL)arg3;
- (id)makeDeleteCommandForDeletedContacts:(id)arg1;
- (id)makeLinkCommandForContacts:(id)arg1 linkIdentifier:(id)arg2;
- (id)makeNewPersonToStoreDataSourceChanges;
- (id)makeSetImageCommandForContact:(id)arg1;
- (id)makeUpdateCommandForUpdatedContacts:(id)arg1;
- (void)preferForNameContact:(id)arg1 inContacts:(id)arg2;
- (void)preferForPhotoContact:(id)arg1 inContacts:(id)arg2;
- (id)propertiesToSetOnNewPerson;
- (void)save;
- (void)saveDataSourceWithChanges;
- (void)saveEmptyDataSource;
- (void)setCommandExecutor:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)setContainerIdentifier:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHasSaved:(BOOL)arg1;
- (void)setIsContactNewlyCreated:(BOOL)arg1;
- (void)setIsSaving:(BOOL)arg1;
- (BOOL)shouldAddNewPersonToStoreDataSourceChanges;
- (void)updatePeople;

@end