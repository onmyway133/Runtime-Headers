/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABGroupDropPasteboardDataCategorizer : NSObject {
    ABGroupDropDestination * _destination;
    NSMutableSet * _groupUidsExistingInDestination;
    NSMutableSet * _groupUidsToImport;
    NSMutableArray * _linkedPersonUidsToImport;
    ABGroupDropPasteboardData * _pasteboardData;
    NSMutableSet * _personUidsExistingInDestination;
}

@property (atomic, readonly) NSSet *groupUidsExistingInDestination;
@property (atomic, readonly) NSSet *groupUidsToImport;
@property (atomic, readonly) NSArray *linkedPersonUidsToImport;
@property (atomic, readonly) NSSet *personUidsExistingInDestination;

- (BOOL)canAddMembers;
- (BOOL)canImportRecords;
- (void)categorizeGroupUid:(id)arg1;
- (void)categorizeGroupUids;
- (void)categorizePasteboardData;
- (void)categorizePeopleUids;
- (void)dealloc;
- (id)groupUidsExistingInDestination;
- (id)groupUidsToImport;
- (BOOL)groupWouldCauseACycleWithDestinationGroup:(id)arg1;
- (BOOL)hasGroupsToImport;
- (BOOL)hasPeopleToImport;
- (id)initWithPasteboardData:(id)arg1 dropDestination:(id)arg2;
- (id)linkedPersonUidsToImport;
- (id)personUidsExistingInDestination;
- (void)removeAllGroupsIfNoDestinationGroup;
- (void)removeGroupsAlreadyASubgroupOfTheDestinationGroup;
- (void)removeGroupsInPersonListThatWouldCauseACycle:(id)arg1;
- (void)removePeopleAlreadyAMemberOfTheDestinationGroup;

@end
