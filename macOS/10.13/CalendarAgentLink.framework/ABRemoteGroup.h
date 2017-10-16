/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarAgentLink.framework/Versions/A/CalendarAgentLink
 */

@interface ABRemoteGroup : ABRemoteRecord <NSCopying> {
    NSString * _name;
}

@property (atomic, readwrite, copy) NSString *name;

// Image: /System/Library/PrivateFrameworks/CalendarAgentLink.framework/Versions/A/CalendarAgentLink

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;

// Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook

// ABRemoteGroup (AddressBook)

+ (id)abEntityName;
+ (Class)publicRecordClass;
+ (id)remoteRecordWithUniqueID:(id)arg1 inAddressBook:(id)arg2;

- (void)nts_SetSingleValue:(id)arg1 forProperty:(id)arg2;
- (id)nts_SingleValueForProperty:(id)arg1;

@end
