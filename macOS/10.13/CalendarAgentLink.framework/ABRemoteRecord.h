/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarAgentLink.framework/Versions/A/CalendarAgentLink
 */

@interface ABRemoteRecord : NSObject <NSSecureCoding> {
    NSString * _abAccountIdentifier;
    NSDate * _builtDate;
    NSDate * _creationDate;
    NSArray * _customProperties;
    BOOL  _isPartialObject;
    NSDate * _modificationDate;
    NSURL * _persistentStoreURL;
    long long  _personFlags;
    id  _publicRecord;
    NSString * _uniqueId;
}

@property (atomic, readwrite, copy) NSString *abAccountIdentifier;
@property (atomic, readwrite, retain) NSDate *builtDate;
@property (atomic, readwrite, retain) NSDate *creationDate;
@property (atomic, readwrite, retain) NSArray *customProperties;
@property (atomic, readwrite) BOOL isPartialObject;
@property (atomic, readwrite, retain) NSDate *modificationDate;
@property (atomic, readwrite) long long personFlags;
@property (atomic, readwrite, retain) id publicRecord;
@property (atomic, readwrite, copy) NSString *uniqueId;

// Image: /System/Library/PrivateFrameworks/CalendarAgentLink.framework/Versions/A/CalendarAgentLink

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)abAccountIdentifier;
- (id)builtDate;
- (id)creationDate;
- (id)customProperties;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isPartialObject;
- (id)modificationDate;
- (long long)personFlags;
- (id)publicRecord;
- (void)setAbAccountIdentifier:(id)arg1;
- (void)setBuiltDate:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setCustomProperties:(id)arg1;
- (void)setIsPartialObject:(BOOL)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setPersonFlags:(long long)arg1;
- (void)setPublicRecord:(id)arg1;
- (void)setUniqueId:(id)arg1;
- (id)uniqueId;

// Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook

// ABRemoteRecord (AddressBook)

+ (id)_propertiesAvailableForPartialObjects;
+ (BOOL)_propertyNameRepresentsCustomProperty:(id)arg1 recordType:(id)arg2 addressBook:(id)arg3;
+ (id)abEntityName;
+ (long long)addPropertiesAndTypes:(id)arg1 forClass:(Class)arg2 withAddressBook:(id)arg3 acquireLock:(BOOL)arg4 save:(BOOL)arg5;
+ (id)customPropertyValueKeyNameForPropertyType:(long long)arg1 isSerializedPropertyList:(BOOL*)arg2;
+ (id)propertyTypesForClass:(Class)arg1 withAddressBook:(id)arg2 acquireLock:(BOOL)arg3;
+ (Class)publicRecordClass;
+ (Class)remoteRecordClassForUniqueID:(id)arg1 inAddressBook:(id)arg2;
+ (id)remoteRecordWithUniqueID:(id)arg1 inAddressBook:(id)arg2;
+ (long long)typeOfProperty:(id)arg1 forRecord:(id)arg2;

- (id)_customPropertyValueWithValue:(id)arg1 customProperty:(id)arg2;
- (id)_customPropertyWithName:(id)arg1 addressBook:(id)arg2 lookupInAgent:(BOOL)arg3;
- (void)_setValue:(id)arg1 forCustomPropertyWithName:(id)arg2 addressBook:(id)arg3;
- (id)_valueForCustomProperty:(id)arg1 withValue:(id)arg2;
- (id)_valueForCustomPropertyWithName:(id)arg1;
- (id)_valueForSingleValueCustomProperty:(id)arg1;
- (void)abPublicRecordIsGone:(id)arg1;
- (id)displayName;
- (void)faultIfNeccessaryWithAddressBook:(id)arg1;
- (id)labeledValuesForMultiValue:(id)arg1;
- (id)labeledValuesForMultiValue:(id)arg1 valueTransform:(id)arg2;
- (id)multiValueForLabeledValues:(id)arg1;
- (id)multiValueForProperty:(id)arg1;
- (void)nts_SetSingleValue:(id)arg1 forProperty:(id)arg2;
- (BOOL)nts_SetValue:(id)arg1 forProperty:(id)arg2 record:(id)arg3;
- (id)nts_SingleValueForProperty:(id)arg1;
- (id)nts_ValueForProperty:(id)arg1 record:(id)arg2 addressBook:(id)arg3;
- (id)persistentStoreURLWithBasePersistenceURL:(id)arg1;
- (id)publicRecordCreatingRecordIfNecessaryInAddressBook:(id)arg1;
- (void)setMultiValue:(id)arg1 forProperty:(id)arg2;

@end
