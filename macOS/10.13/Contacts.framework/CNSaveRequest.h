/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
 */

@interface CNSaveRequest : NSObject <CNObjectValidation, NSSecureCoding> {
    NSMutableDictionary * _addedAccountContainersByIdentifier;
    NSMutableArray * _addedAccounts;
    NSMutableDictionary * _addedContactsByIdentifier;
    NSMutableDictionary * _addedContainersByIdentifier;
    NSMutableDictionary * _addedGroupsByIdentifier;
    NSMutableDictionary * _addedMembersByGroupIdentifier;
    NSMutableDictionary * _addedSubgroupsByGroupIdentifier;
    NSString * _changeHistoryClientIdentifier;
    NSMutableArray * _contactChangeRequests;
    NSMutableDictionary * _deletedContactsByIdentifier;
    NSMutableDictionary * _deletedContainersByIdentifier;
    NSMutableDictionary * _deletedGroupsByIdentifier;
    NSString * _meCardIdentifier;
    NSMutableDictionary * _movedContainersByIdentifier;
    NSMutableDictionary * _parentRecordsByIdentifier;
    NSMutableDictionary * _removedMembersByGroupIdentifier;
    NSMutableDictionary * _removedSubgroupsByGroupIdentifier;
    NSString * _saveRequestIdentifier;
    BOOL  _unsafeApplyChangesOnly;
    NSMutableArray * _updatedContacts;
    NSMutableArray * _updatedContainers;
    NSMutableArray * _updatedGroups;
}

@property (atomic, readonly, copy) NSDictionary *addedAccountContainersByParentContainerIdentifier;
@property (nonatomic, readonly, copy) NSArray *addedAccounts;
@property (atomic, readonly, copy) NSDictionary *addedContactsByContainerIdentifier;
@property (atomic, readonly, copy) NSDictionary *addedContainersByParentContainerIdentifier;
@property (atomic, readonly, copy) NSDictionary *addedGroupsByContainerIdentifier;
@property (atomic, readonly, copy) NSDictionary *addedMembersByGroupIdentifier;
@property (atomic, readonly, copy) NSDictionary *addedSubgroupsByGroupIdentifier;
@property (nonatomic, readonly, copy) NSArray *allAccountIdentifierStrings;
@property (nonatomic, readonly, copy) NSArray *allContactIdentifiers;
@property (nonatomic, readonly, copy) NSArray *allContacts;
@property (nonatomic, readonly, copy) NSArray *allContainers;
@property (nonatomic, readonly, copy) NSArray *allGroupIdentifiers;
@property (nonatomic, readonly, copy) NSArray *allGroups;
@property (nonatomic, readwrite, copy) NSString *changeHistoryClientIdentifier;
@property (nonatomic, readonly, copy) NSArray *contactChangeRequests;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSArray *deletedContacts;
@property (atomic, readonly, copy) NSDictionary *deletedContactsByIdentifier;
@property (atomic, readonly, copy) NSArray *deletedContainers;
@property (atomic, readonly, copy) NSArray *deletedGroups;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly, copy) NSString *meCardIdentifier;
@property (atomic, readonly, copy) NSDictionary *movedContainersByParentContainerIdentifier;
@property (atomic, readonly, copy) NSDictionary *removedMembersByGroupIdentifier;
@property (atomic, readonly, copy) NSDictionary *removedSubgroupsByGroupIdentifier;
@property (atomic, readonly, copy) NSString *saveRequestIdentifier;
@property (nonatomic, readonly, copy) NSString *storeIdentifier;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readwrite) BOOL unsafeApplyChangesOnly;
@property (atomic, readonly, copy) NSArray *updatedContacts;
@property (atomic, readonly, copy) NSArray *updatedContainers;
@property (atomic, readonly, copy) NSArray *updatedGroups;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryOfArraysFromDictionaryOfDictionaries:(id)arg1;
- (void)_insertContact:(id)arg1 intoDictionary:(id)arg2 complementDictionary:(id)arg3;
- (void)addAccount:(id)arg1;
- (void)addContact:(id)arg1 toContainerWithIdentifier:(id)arg2;
- (void)addContainer:(id)arg1 toAccountWithIdentifier:(id)arg2;
- (void)addContainer:(id)arg1 toContainerWithIdentifier:(id)arg2;
- (void)addGroup:(id)arg1 toContainerWithIdentifier:(id)arg2;
- (void)addMember:(id)arg1 toGroup:(id)arg2;
- (void)addSubgroup:(id)arg1 toGroup:(id)arg2;
- (id)addedAccountContainersByParentContainerIdentifier;
- (id)addedAccounts;
- (id)addedContactsByContainerIdentifier;
- (id)addedContainersByParentContainerIdentifier;
- (id)addedGroupsByContainerIdentifier;
- (id)addedMembersByGroupIdentifier;
- (id)addedSubgroupsByGroupIdentifier;
- (id)allAccountIdentifierStrings;
- (id)allAccountIdentifiers;
- (id)allContactIdentifiers;
- (id)allContacts;
- (id)allContainerIdentifierStrings:(BOOL*)arg1;
- (id)allContainerIdentifiers:(BOOL*)arg1;
- (id)allContainers;
- (id)allGroupIdentifiers;
- (id)allGroups;
- (id)changeHistoryClientIdentifier;
- (id)contactChangeRequests;
- (void)deleteContact:(id)arg1;
- (void)deleteContainer:(id)arg1;
- (void)deleteGroup:(id)arg1;
- (id)deletedContacts;
- (id)deletedContactsByIdentifier;
- (id)deletedContainers;
- (id)deletedGroups;
- (void)encodeWithCoder:(id)arg1;
- (id)flattenedDictionaryForDictionaryOfTuples:(id)arg1;
- (id)groupWithAddedMemberForGroupIdentifier:(id)arg1;
- (id)groupWithAddedSubgroupForGroupIdentifier:(id)arg1;
- (id)groupWithRemovedMemberForGroupIdentifier:(id)arg1;
- (id)groupWithRemovedSubgroupForGroupIdentifier:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid:(id*)arg1;
- (void)linkContact:(id)arg1 toContact:(id)arg2;
- (id)meCardIdentifier;
- (void)moveContainer:(id)arg1 toContainerWithIdentifier:(id)arg2;
- (id)movedContainersByParentContainerIdentifier;
- (void)preferLinkedContactForImage:(id)arg1 inUnifiedContact:(id)arg2;
- (void)preferLinkedContactForName:(id)arg1 inUnifiedContact:(id)arg2;
- (void)queueUpdatedObject:(id)arg1 intoArray:(id)arg2;
- (void)removeMember:(id)arg1 fromGroup:(id)arg2;
- (void)removeSubgroup:(id)arg1 fromGroup:(id)arg2;
- (id)removedMembersByGroupIdentifier;
- (id)removedSubgroupsByGroupIdentifier;
- (id)saveRequestIdentifier;
- (void)setChangeHistoryClientIdentifier:(id)arg1;
- (void)setMeCardIdentifier:(id)arg1;
- (void)setUnsafeApplyChangesOnly:(BOOL)arg1;
- (id)storeIdentifier;
- (void)unlinkContact:(id)arg1;
- (BOOL)unsafeApplyChangesOnly;
- (void)updateContact:(id)arg1;
- (void)updateContainer:(id)arg1;
- (void)updateGroup:(id)arg1;
- (id)updatedContacts;
- (id)updatedContainers;
- (id)updatedGroups;

// CNSaveRequest (WatchOS)

- (void)setLinkIdentifier:(id)arg1 forContact:(id)arg2;

@end
