/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/OpenDirectory.framework/Versions/A/OpenDirectory
 */

@interface ODRecord : NSObject

@property (nonatomic, readonly, copy) NSString *recordName;
@property (nonatomic, readonly, copy) NSString *recordType;
@property (atomic, readonly) long long secondsUntilAuthenticationsExpire;
@property (atomic, readonly) long long secondsUntilPasswordExpires;

- (struct __ODRecord { }*)__getODRecordRef;
- (unsigned long long)_cfTypeID;
- (id)accountPoliciesAndReturnError:(id*)arg1;
- (BOOL)addAccountPolicy:(id)arg1 toCategory:(id)arg2 error:(id*)arg3;
- (BOOL)addMemberRecord:(id)arg1 error:(id*)arg2;
- (BOOL)addValue:(id)arg1 toAttribute:(id)arg2 error:(id*)arg3;
- (BOOL)authenticationAllowedAndReturnError:(id*)arg1;
- (BOOL)changePassword:(id)arg1 toPassword:(id)arg2 error:(id*)arg3;
- (BOOL)deleteRecordAndReturnError:(id*)arg1;
- (id)description;
- (id)effectivePoliciesAndReturnError:(id*)arg1;
- (BOOL)isMemberRecord:(id)arg1 error:(id*)arg2;
- (BOOL)isMemberRecordRefresh:(id)arg1 error:(id*)arg2;
- (BOOL)passwordChangeAllowed:(id)arg1 error:(id*)arg2;
- (id)passwordContentSummaryAndReturnError:(id*)arg1;
- (id)passwordPolicyAndReturnError:(id*)arg1;
- (id)policiesAndReturnError:(id*)arg1;
- (id)recordDetailsForAttributes:(id)arg1 error:(id*)arg2;
- (id)recordName;
- (id)recordType;
- (BOOL)removeAccountPolicy:(id)arg1 fromCategory:(id)arg2 error:(id*)arg3;
- (BOOL)removeMemberRecord:(id)arg1 error:(id*)arg2;
- (BOOL)removePolicy:(id)arg1 error:(id*)arg2;
- (BOOL)removeValue:(id)arg1 fromAttribute:(id)arg2 error:(id*)arg3;
- (BOOL)removeValuesForAttribute:(id)arg1 error:(id*)arg2;
- (long long)secondsUntilAuthenticationsExpire;
- (long long)secondsUntilPasswordExpires;
- (BOOL)setAccountPolicies:(id)arg1 error:(id*)arg2;
- (BOOL)setNodeCredentials:(id)arg1 password:(id)arg2 error:(id*)arg3;
- (BOOL)setNodeCredentialsUsingKerberosCache:(id)arg1 error:(id*)arg2;
- (BOOL)setNodeCredentialsWithRecordType:(id)arg1 authenticationType:(id)arg2 authenticationItems:(id)arg3 continueItems:(id*)arg4 context:(id*)arg5 error:(id*)arg6;
- (BOOL)setPolicies:(id)arg1 error:(id*)arg2;
- (BOOL)setPolicy:(id)arg1 value:(id)arg2 error:(id*)arg3;
- (BOOL)setValue:(id)arg1 forAttribute:(id)arg2 error:(id*)arg3;
- (id)supportedPoliciesAndReturnError:(id*)arg1;
- (BOOL)synchronizeAndReturnError:(id*)arg1;
- (id)valuesForAttribute:(id)arg1 error:(id*)arg2;
- (BOOL)verifyExtendedWithAuthenticationType:(id)arg1 authenticationItems:(id)arg2 continueItems:(id*)arg3 context:(id*)arg4 error:(id*)arg5;
- (BOOL)verifyPassword:(id)arg1 error:(id*)arg2;
- (BOOL)willAuthenticationsExpire:(unsigned long long)arg1;
- (BOOL)willPasswordExpire:(unsigned long long)arg1;

// ODRecord (NSKeyValueCoding)

+ (BOOL)accessInstanceVariablesDirectly;

- (id)valueForUndefinedKey:(id)arg1;

// ODRecord (ODRecordGroupExtensionsPrivate)

- (id)enumerateMembersWithOptions:(unsigned int)arg1 returnAttributes:(id)arg2 usingBlock:(id)arg3;
- (id)enumerateMembershipWithOptions:(unsigned int)arg1 returnAttributes:(id)arg2 usingBlock:(id)arg3;

@end
