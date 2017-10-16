/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
 */

@interface CNPhoneNumberContactPredicate : CNPredicate <CNCDContactPredicate, CNSuggestedContactPredicate> {
    CNPhoneNumber * _phoneNumber;
    NSString * _prefixHint;
    BOOL  _returnsMultipleResults;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) CNPhoneNumber *phoneNumber;
@property (nonatomic, readonly, copy) NSString *prefixHint;
@property (nonatomic, readonly) BOOL returnsMultipleResults;
@property (atomic, readonly) Class superclass;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPhoneNumber:(id)arg1 returnMultipleResults:(BOOL)arg2;
- (id)initWithPhoneNumber:(id)arg1 returnMultipleResults:(BOOL)arg2 prefixHint:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)phoneNumber;
- (id)prefixHint;
- (BOOL)returnsMultipleResults;

// CNPhoneNumberContactPredicate (CoreData)

- (id)cn_coreDataPredicate;
- (BOOL)includeResult:(id)arg1;

// CNPhoneNumberContactPredicate (Suggested)

- (id)sgContactMatchesWithSortOrder:(long long)arg1 mutableObjects:(BOOL)arg2 service:(id)arg3 error:(id*)arg4;

@end
