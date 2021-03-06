/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABSearchElement : NSObject

+ (void)_setTestPredicatesMatchRecordInStore:(BOOL)arg1;
+ (BOOL)_testPredicatesMatchRecordInStore;
+ (id)searchElementForConjunction:(long long)arg1 children:(id)arg2;

- (id)_predicateForImplClass:(Class)arg1 addressBook:(id)arg2;
- (id)_predicateForImplClass:(Class)arg1 context:(id)arg2 basePersistenceURL:(id)arg3;
- (id)_remoteSearchElementWithPublicClass:(Class)arg1;
- (id)_withinDate;
- (id)affectedStoresInAddressBook:(id)arg1;
- (BOOL)diacriticInsensitiveOption;
- (id)groupsUsedInDefinition;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isReferencingGroup:(id)arg1;
- (BOOL)isSimpleSearch;
- (BOOL)matchesRecord:(id)arg1;
- (BOOL)nts_MatchesRecord:(id)arg1;
- (BOOL)nts_PredicateMatchesRecord:(id)arg1;
- (BOOL)predicateMatchesRecord:(id)arg1;
- (id)prefetchingRelationshipKeyPathsForImplClass:(Class)arg1 inAddressBook:(id)arg2;
- (BOOL)searchGroups;
- (BOOL)searchPeople;
- (id)searchRecordClasses;
- (BOOL)searchSubscribed;
- (void)setDiacriticInsensitiveOption:(BOOL)arg1;
- (void)setSearchValue:(id)arg1;
- (BOOL)usesGroupInDefinition:(id)arg1;

// ABSearchElement (ABSearchElement_PrivateVersioning)

+ (long long)baseEncodingVersion;
+ (void)checkCurrentVersionCompatibleWithCoder:(id)arg1;
+ (void)setEncodingVersion:(long long)arg1;

- (long long)encodingVersion;

@end
