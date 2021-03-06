/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
 */

@interface CNContainer : NSObject <NSCopying, NSSecureCoding> {
    NSString * _accountIdentifier;
    BOOL  _enabled;
    NSString * _identifier;
    NSString * _name;
    CNContainerPermissions * _permissions;
    CNContainer * _snapshot;
    long long  _type;
}

@property (atomic, readonly, copy) NSString *accountIdentifier;
@property (getter=isEnabled, atomic, readonly) BOOL enabled;
@property (atomic, readonly, copy) NSString *identifier;
@property (atomic, readonly, copy) NSString *name;
@property (atomic, readonly, copy) CNContainerPermissions *permissions;
@property (nonatomic, readonly, copy) CNContainer *snapshot;
@property (atomic, readonly) long long type;

+ (id)identifierProvider;
+ (id)makeDefaultContainerPermissions;
+ (id)makeIdentifier;
+ (id)makeIdentifierString;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionForContainerType:(long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContainer:(id)arg1;
- (id)initWithIdentifier:(id)arg1 accountIdentifier:(id)arg2 name:(id)arg3 type:(long long)arg4 permissions:(id)arg5;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 type:(long long)arg3;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 type:(long long)arg2;
- (BOOL)isEnabled;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)name;
- (id)permissions;
- (id)snapshot;
- (long long)type;

// CNContainer (Predicates)

+ (id)predicateForContainerOfContactWithIdentifier:(id)arg1;
+ (id)predicateForContainerOfGroupWithIdentifier:(id)arg1;
+ (id)predicateForContainersWithIdentifiers:(id)arg1;

// CNContainer (Predicates_Internal)

+ (id)predicateForAllContainers;

@end
