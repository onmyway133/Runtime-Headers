/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
 */

@interface CNCDRecordSaveCache : NSObject {
    NSManagedObjectContext * _context;
    NSString * _entityName;
    NSMutableDictionary * _recordsByIdentifier;
}

- (void).cxx_destruct;
- (void)enumerateCoreDataContactsMatchingContacts:(id)arg1 withBlock:(id)arg2;
- (void)enumerateCoreDataGroupsMatchingGroups:(id)arg1 withBlock:(id)arg2;
- (BOOL)fetchAllIdentifiers:(id)arg1 error:(id*)arg2;
- (id)fetchIndexedRecordsWithIdentifiers:(id)arg1 error:(id*)arg2;
- (id)fetchRecordsWithIdentifiers:(id)arg1 error:(id*)arg2;
- (id)initWithContext:(id)arg1 entityName:(id)arg2;
- (id)recordForIdentifier:(id)arg1;
- (id)recordsForIdentifiers:(id)arg1;

@end
