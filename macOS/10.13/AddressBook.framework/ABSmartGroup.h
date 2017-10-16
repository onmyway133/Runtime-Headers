/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABSmartGroup : ABGroup {
    NSSet * _cachedMembers;
}

+ (id)builtInProperties;
+ (id)nts_RecordFromDictionaryRepresentation:(id)arg1 withRecordMapping:(id)arg2 addressBook:(id)arg3 generateIds:(BOOL)arg4;
+ (Class)remoteObjectClass;
+ (id)smartGroups;

- (BOOL)_isSmartGroupParentOfRecord:(id)arg1;
- (id)_members;
- (void)_setCachedMembers:(id)arg1;
- (BOOL)_shouldAssignNewDatabaseImplToAccount;
- (BOOL)addMember:(id)arg1;
- (BOOL)addSubgroup:(id)arg1;
- (BOOL)canDeletePeople;
- (BOOL)canRemoveMembers;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (id)distributionIdentifierForProperty:(id)arg1 person:(id)arg2;
- (BOOL)isModified;
- (BOOL)isPublishable;
- (id)members;
- (id)nts_DescriptionDictionary;
- (BOOL)nts_IsModified;
- (id)nts_Members;
- (id)nts_SearchElement;
- (void)nts_SetIsModified:(BOOL)arg1;
- (void)nts_SetSearchElement:(id)arg1;
- (void)nts_SetTracksModification:(BOOL)arg1;
- (id)nts_Subgroups;
- (BOOL)nts_TracksModification;
- (id)parentGroups;
- (BOOL)removeMember:(id)arg1;
- (BOOL)removeSubgroup:(id)arg1;
- (id)searchElement;
- (BOOL)setDistributionIdentifier:(id)arg1 forProperty:(id)arg2 person:(id)arg3;
- (void)setIsModified:(BOOL)arg1;
- (void)setSearchElement:(id)arg1;
- (void)setTracksModification:(BOOL)arg1;
- (id)subgroups;
- (BOOL)supportsDistributionList;
- (BOOL)tracksModification;
- (id)uniqueIdForDrag;

// ABSmartGroup (ABSmartGroupAdditions)

+ (id)addGroupFromDictionary:(id)arg1;

- (id)allProperties;
- (id)icon;
- (void)setAllProperties:(id)arg1;

@end
