/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
 */

@interface CNContact : NSObject <CNContactAugmentation, CNObjectValidation, CNSuggested, NSCopying, NSItemProviderReading, NSItemProviderWriting, NSMutableCopying, NSSecureCoding> {
    NSString * _accountIdentifier;
    CNContactKeyVector * _availableKeyDescriptor;
    NSDateComponents * _birthday;
    NSArray * _calendarURIs;
    CNActivityAlert * _callAlert;
    NSString * _cardDAVUID;
    NSArray * _contactRelations;
    long long  _contactType;
    NSDate * _creationDate;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cropRect;
    NSArray * _dates;
    NSString * _departmentName;
    long long  _displayNameOrder;
    NSArray * _emailAddresses;
    NSString * _familyName;
    NSData * _fullscreenImageData;
    NSString * _givenName;
    int  _iOSLegacyIdentifier;
    NSData * _imageData;
    BOOL  _imageDataAvailable;
    NSArray * _instantMessageAddresses;
    NSString * _internalIdentifier;
    NSString * _jobTitle;
    NSString * _linkIdentifier;
    NSArray * _linkedContacts;
    NSString * _mapsData;
    NSString * _middleName;
    NSDate * _modificationDate;
    NSString * _namePrefix;
    NSString * _nameSuffix;
    NSString * _nickname;
    NSDateComponents * _nonGregorianBirthday;
    NSString * _note;
    NSString * _organizationName;
    NSArray * _phoneNumbers;
    NSString * _phonemeData;
    NSString * _phoneticFamilyName;
    NSString * _phoneticGivenName;
    NSString * _phoneticMiddleName;
    NSString * _phoneticOrganizationName;
    NSArray * _postalAddresses;
    NSString * _preferredApplePersonaIdentifier;
    BOOL  _preferredForImage;
    BOOL  _preferredForName;
    NSString * _preferredLikenessSource;
    NSString * _previousFamilyName;
    NSString * _pronunciationFamilyName;
    NSString * _pronunciationGivenName;
    NSString * _searchIndex;
    NSString * _sectionForSortingByFamilyName;
    NSString * _sectionForSortingByGivenName;
    CNContact * _snapshot;
    NSArray * _socialProfiles;
    NSString * _sortingFamilyName;
    NSString * _sortingGivenName;
    NSString * _storeIdentifier;
    NSDictionary * _storeInfo;
    CNActivityAlert * _textAlert;
    NSData * _thumbnailImageData;
    NSArray * _urlAddresses;
}

@property (atomic, readonly, copy) NSString *accountIdentifier;
@property (atomic, readonly, copy) NSDictionary *activityAlerts;
@property (nonatomic, readonly) <CNKeyDescriptor> *availableKeyDescriptor;
@property (nonatomic, readonly) NSSet *availableKeys;
@property (atomic, readonly, copy) NSDateComponents *birthday;
@property (atomic, readonly, copy) NSArray *calendarURIs;
@property (atomic, readonly, copy) CNActivityAlert *callAlert;
@property (atomic, readonly, copy) NSString *cardDAVUID;
@property (atomic, readonly, copy) NSString *companyName;
@property (atomic, readonly, copy) NSArray *contactRelations;
@property (atomic, readonly) long long contactType;
@property (atomic, readonly, copy) NSDate *creationDate;
@property (atomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cropRect;
@property (atomic, readonly, copy) NSArray *dates;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *departmentName;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) long long displayNameOrder;
@property (atomic, readonly, copy) NSArray *emailAddresses;
@property (atomic, readonly, copy) NSString *familyName;
@property (atomic, readonly, copy) NSString *firstName;
@property (atomic, readonly, copy) NSString *fullName;
@property (atomic, readonly, copy) NSData *fullscreenImageData;
@property (atomic, readonly, copy) NSString *givenName;
@property (nonatomic, readonly) BOOL hasBeenPersisted;
@property (nonatomic, readonly) BOOL hasSuggestedProperties;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) int iOSLegacyIdentifier;
@property (atomic, readonly, copy) NSString *identifier;
@property (atomic, readonly, copy) NSData *imageData;
@property (atomic, readonly) BOOL imageDataAvailable;
@property (atomic, readonly, copy) NSArray *instantMessageAddresses;
@property (atomic, readonly, copy) NSString *internalIdentifier;
@property (atomic, readonly, copy) NSString *jobTitle;
@property (atomic, readonly, copy) NSString *lastName;
@property (atomic, readonly, copy) NSString *linkIdentifier;
@property (nonatomic, readonly, copy) NSArray *linkedContacts;
@property (atomic, readonly, copy) NSString *maidenName;
@property (nonatomic, readonly, copy) NSArray *mainStoreLinkedContacts;
@property (atomic, readonly, copy) NSString *mapsData;
@property (atomic, readonly, copy) NSString *middleName;
@property (atomic, readonly, copy) NSDate *modificationDate;
@property (atomic, readonly, copy) NSString *namePrefix;
@property (atomic, readonly, copy) NSString *nameSuffix;
@property (atomic, readonly, copy) NSString *nameTitle;
@property (atomic, readonly, copy) NSString *nickname;
@property (atomic, readonly, copy) NSDateComponents *nonGregorianBirthday;
@property (atomic, readonly, copy) NSString *note;
@property (atomic, readonly, copy) NSString *organizationName;
@property (atomic, readonly, copy) NSArray *phoneNumbers;
@property (atomic, readonly, copy) NSString *phonemeData;
@property (atomic, readonly, copy) NSString *phoneticCompanyName;
@property (atomic, readonly, copy) NSString *phoneticFamilyName;
@property (atomic, readonly, copy) NSString *phoneticFirstName;
@property (atomic, readonly, copy) NSString *phoneticFullName;
@property (atomic, readonly, copy) NSString *phoneticGivenName;
@property (atomic, readonly, copy) NSString *phoneticLastName;
@property (atomic, readonly, copy) NSString *phoneticMiddleName;
@property (atomic, readonly, copy) NSString *phoneticOrganizationName;
@property (atomic, readonly, copy) NSArray *postalAddresses;
@property (atomic, readonly, copy) NSString *preferredApplePersonaIdentifier;
@property (getter=isPreferredForImage, nonatomic, readonly) BOOL preferredForImage;
@property (getter=isPreferredForName, nonatomic, readonly) BOOL preferredForName;
@property (atomic, readonly, copy) NSString *preferredLikenessSource;
@property (atomic, readonly, copy) NSString *previousFamilyName;
@property (atomic, readonly, copy) NSString *pronunciationFamilyName;
@property (atomic, readonly, copy) NSString *pronunciationGivenName;
@property (atomic, readonly, copy) NSArray *relatedNames;
@property (atomic, readonly, copy) NSString *searchIndex;
@property (atomic, readonly, copy) NSString *sectionForSortingByFamilyName;
@property (atomic, readonly, copy) NSString *sectionForSortingByGivenName;
@property (atomic, readonly, copy) NSArray *socialProfiles;
@property (atomic, readonly, copy) NSString *sortingFamilyName;
@property (atomic, readonly, copy) NSString *sortingGivenName;
@property (atomic, readonly, copy) NSString *storeIdentifier;
@property (atomic, readonly, copy) NSDictionary *storeInfo;
@property (atomic, readonly, copy) NSString *stringForIndexing;
@property (getter=isSuggested, nonatomic, readonly) BOOL suggested;
@property (getter=isSuggestedMe, nonatomic, readonly) BOOL suggestedMe;
@property (nonatomic, readonly) NSString *suggestionFoundInBundleId;
@property (nonatomic, readonly) SGRecordId *suggestionRecordId;
@property (atomic, readonly) Class superclass;
@property (atomic, readonly, copy) CNActivityAlert *textAlert;
@property (atomic, readonly, copy) NSData *thumbnailImageData;
@property (getter=isUnified, nonatomic, readonly) BOOL unified;
@property (atomic, readonly, copy) NSArray *urlAddresses;
@property (atomic, readonly, copy) NSArray *writableTypeIdentifiersForItemProvider;

// Image: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts

+ (id)_contactWithContact:(id)arg1 createNewInstance:(BOOL)arg2 propertyDescriptions:(id)arg3;
+ (id)alwaysFetchedKeys;
+ (id)comparatorForNameSortOrder:(long long)arg1;
+ (id)contact;
+ (id)contactWithContact:(id)arg1;
+ (id)contactWithDisplayName:(id)arg1 emailOrPhoneNumber:(id)arg2;
+ (id)contactWithIdentifier:(id)arg1;
+ (id)descriptorForAllComparatorKeys;
+ (id)descriptorForKeyDescriptors:(id)arg1 description:(id)arg2;
+ (id)descriptorWithKeyDescriptors:(id)arg1 description:(id)arg2;
+ (id)identifierProvider;
+ (id)localizedStringForKey:(id)arg1;
+ (id)makeContactAndMergeValuesFromAvailableKeysInContact:(id)arg1;
+ (id)makeIdentifier;
+ (id)makeIdentifierString;
+ (id)newContactWithPropertyKeys:(id)arg1 withValuesFromContact:(id)arg2;
+ (id)preferredImageComparator;
+ (id)storeInfoFromCoder:(id)arg1 storeIdentifier:(id)arg2 key:(id)arg3;
+ (BOOL)supportsSecureCoding;
+ (id)unifyContacts:(id)arg1;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (id)activityAlerts;
- (BOOL)areAllAvailableKeysEqualToContact:(id)arg1 ignoringIdentifiers:(BOOL)arg2;
- (BOOL)areAllPropertiesButContactIdentifierEqualToContact:(id)arg1;
- (BOOL)areAllPropertiesEqualToContactIgnoringIdentifiers:(id)arg1;
- (BOOL)areKeysAvailable:(id)arg1;
- (void)assertKeyIsAvailable:(id)arg1;
- (void)assertKeysAreAvailable:(id)arg1;
- (id)availableKeyDescriptor;
- (id)availableKeys;
- (id)birthday;
- (id)calendarURIs;
- (id)callAlert;
- (id)cardDAVUID;
- (id)contactRelations;
- (long long)contactType;
- (id)copyWithPropertyKeys:(id)arg1;
- (id)copyWithSelfAsSnapshot;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRect;
- (id)dates;
- (id)departmentName;
- (id)description;
- (id)diffToSnapshotAndReturnError:(id*)arg1;
- (long long)displayNameOrder;
- (id)emailAddresses;
- (void)encodeWithCoder:(id)arg1;
- (id)familyName;
- (id)fullName;
- (id)fullscreenImageData;
- (id)givenName;
- (BOOL)hasBeenPersisted;
- (BOOL)hasChanges;
- (unsigned long long)hash;
- (int)iOSLegacyIdentifier;
- (id)identifier;
- (id)imageData;
- (BOOL)imageDataAvailable;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 availableKeyDescriptor:(id)arg2;
- (id)instantMessageAddresses;
- (id)internalIdentifier;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualIgnoringIdentifiers:(id)arg1;
- (BOOL)isKeyAvailable:(id)arg1;
- (BOOL)isPreferredForImage;
- (BOOL)isPreferredForName;
- (BOOL)isProperty:(id)arg1 equalToOtherIgnoreIdentifiers:(id)arg2;
- (BOOL)isUnified;
- (BOOL)isUnifiedWithContactWithIdentifier:(id)arg1;
- (BOOL)isValid:(id*)arg1;
- (id)jobTitle;
- (id)keyVector;
- (id)linkIdentifier;
- (id)linkedContacts;
- (id)linkedContactsFromStoreWithIdentifier:(id)arg1;
- (id)linkedIdentifierMap;
- (id)mainStoreLinkedContacts;
- (id)mapsData;
- (id)middleName;
- (id)modificationDate;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)namePrefix;
- (id)nameSuffix;
- (id)nickname;
- (id)nonGregorianBirthday;
- (id)note;
- (id)organizationName;
- (id)phoneNumbers;
- (id)phonemeData;
- (id)phoneticCompanyName;
- (id)phoneticFamilyName;
- (id)phoneticFullName;
- (id)phoneticGivenName;
- (id)phoneticMiddleName;
- (id)phoneticOrganizationName;
- (id)postalAddresses;
- (id)preferredApplePersonaIdentifier;
- (BOOL)preferredForImage;
- (BOOL)preferredForName;
- (id)preferredLikenessSource;
- (id)previousFamilyName;
- (id)pronunciationFamilyName;
- (id)pronunciationGivenName;
- (id)searchIndex;
- (id)sectionForSortingByFamilyName;
- (id)sectionForSortingByGivenName;
- (id)shortDebugDescription;
- (id)snapshot;
- (id)socialProfiles;
- (id)sortingFamilyName;
- (id)sortingGivenName;
- (id)storeIdentifier;
- (id)storeInfo;
- (id)stringForIndexing;
- (id)textAlert;
- (id)thumbnailImageData;
- (id)urlAddresses;

// CNContact (Deprecated)

- (id)companyName;
- (id)firstName;
- (id)lastName;
- (id)maidenName;
- (id)nameTitle;
- (id)phoneticFirstName;
- (id)phoneticLastName;
- (id)relatedNames;

// CNContact (NSItemProvider)

+ (id)contactWithArchivedData:(id)arg1 error:(id*)arg2;
+ (id)contactWithVCardData:(id)arg1 error:(id*)arg2;
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
+ (id)readableTypeIdentifiersForItemProvider;
+ (id)writableTypeIdentifiersForItemProvider;

- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id)arg2;
- (id)writableTypeIdentifiersForItemProvider;

// CNContact (Predicates)

+ (id)predicateForContactsInContainerWithIdentifier:(id)arg1;
+ (id)predicateForContactsInGroupWithIdentifier:(id)arg1;
+ (id)predicateForContactsMatchingName:(id)arg1;
+ (id)predicateForContactsWithIdentifiers:(id)arg1;

// CNContact (Predicates_Internal)

+ (id)predicateForAllContacts;

// CNContact (Predicates_Private)

+ (id)predicateForContactMatchingEmailAddress:(id)arg1;
+ (id)predicateForContactMatchingPhoneNumber:(id)arg1;
+ (id)predicateForContactsLinkedToContact:(id)arg1;
+ (id)predicateForContactsMatchingCoreDataPredicate:(id)arg1;
+ (id)predicateForContactsMatchingEmailAddress:(id)arg1;
+ (id)predicateForContactsMatchingName:(id)arg1 options:(unsigned long long)arg2;
+ (id)predicateForContactsMatchingPhoneNumber:(id)arg1;
+ (id)predicateForContactsMatchingPhoneNumber:(id)arg1 prefixHint:(id)arg2;
+ (id)predicateForContactsMatchingPostalAddress:(id)arg1;
+ (id)predicateForContactsWithOrganizationName:(id)arg1;

// CNContact (Predicates_Suggestions)

+ (id)predicateForSuggestionIdentifier:(unsigned long long)arg1;

// CNContact (Suggestions)

+ (id)contactFromSuggestion:(id)arg1;
+ (id)contactIdentifierFromSuggestionID:(id)arg1;
+ (id)suggestionIDFromContactIdentifier:(id)arg1;

- (id)copyWithNoSuggestion;
- (BOOL)hasSuggestedProperties;
- (BOOL)isSuggested;
- (BOOL)isSuggestedMe;
- (id)suggestionFoundInBundleId;
- (id)suggestionRecordId;

// Image: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit

// CNContact (MKExtras)

+ (id)mapsContactKeys;

- (BOOL)_maps_isEqualToContact:(id)arg1;

@end
