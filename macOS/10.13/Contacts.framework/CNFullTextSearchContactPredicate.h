/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
 */

@interface CNFullTextSearchContactPredicate : CNPredicate <CNSuggestedContactPredicate> {
    NSArray * _containerIdentifiers;
    NSArray * _groupIdentifiers;
    NSString * _searchString;
}

@property (nonatomic, readonly, copy) NSArray *containerIdentifiers;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *groupIdentifiers;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *searchString;
@property (atomic, readonly) Class superclass;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)containerIdentifiers;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)groupIdentifiers;
- (id)initWithCoder:(id)arg1;
- (id)initWithSearchString:(id)arg1 containerIdentifiers:(id)arg2 groupIdentifiers:(id)arg3;
- (id)searchString;

// CNFullTextSearchContactPredicate (Suggested)

- (id)sgContactMatchesWithSortOrder:(long long)arg1 mutableObjects:(BOOL)arg2 service:(id)arg3 error:(id*)arg4;

@end
