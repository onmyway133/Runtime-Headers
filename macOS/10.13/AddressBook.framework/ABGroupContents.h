/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABGroupContents : ABRecord {
    NSString * _groupUID;
    NSString * _memberUID;
}

+ (id)builtInProperties;
+ (long long)nts_FindMemberUID:(id)arg1 inArray:(id)arg2;

- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)nts_DistributionIdentifierForProperty:(id)arg1;
- (id)nts_GroupUID;
- (id)nts_InitWithGroupUID:(id)arg1 memberUID:(id)arg2 addressBook:(id)arg3;
- (void)nts_InsertInArray:(id)arg1;
- (id)nts_MemberUID;
- (BOOL)nts_SetDistributionIdentifier:(id)arg1 forProperty:(id)arg2 allowFetching:(BOOL)arg3;

@end
