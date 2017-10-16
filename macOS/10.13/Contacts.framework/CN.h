/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
 */

@interface CN : NSObject

// CN (CNContainerPropertyDescription)

+ (id)allContainerProperties;
+ (id)containerEnabledDescription;
+ (id)containerIdentifierDescription;
+ (id)containerNameDescription;
+ (id)containerTypeDescription;
+ (id)writableContainerProperties;

// CN (CNInternationalSupport)

+ (BOOL)hasContactChineseJapaneseKoreanName:(id)arg1;
+ (BOOL)hasContactChineseJapaneseKoreanPhoneticName:(id)arg1;
+ (BOOL)isEmptyNameContact:(id)arg1 phonetic:(BOOL)arg2 includingPrefixAndSuffix:(BOOL)arg3;
+ (id)joinNonEmptyContactProperties:(id)arg1 onContact:(id)arg2;
+ (id)joinNonEmptyContactProperties:(id)arg1 onContact:(id)arg2 withDelimiter:(id)arg3;
+ (id)keyVectorForAllUsedKeysForInternationalSupport;
+ (id)localizedNameDelimiterForContact:(id)arg1;
+ (id)localizedPhoneticNameDelimiterForContact:(id)arg1;
+ (id)orderForContactName:(id)arg1;
+ (id)orderForContactName:(id)arg1 phonetic:(BOOL)arg2;
+ (id)orderForContactPhoneticName:(id)arg1;
+ (id)requiredPropertiesForNameScriptDetection;
+ (id)requiredPropertiesForPhoneticNameScriptDetection;

// CN (CNObjectValidation)

+ (BOOL)areValidDayComponents:(id)arg1 error:(id*)arg2;
+ (BOOL)areValidGregorianDayComponents:(id)arg1 error:(id*)arg2;
+ (BOOL)areValidKeyPaths:(id)arg1 forObject:(id)arg2 expectedClasses:(id)arg3 allowNil:(id)arg4 error:(id*)arg5;
+ (BOOL)areValidNonGregorianDayComponents:(id)arg1 error:(id*)arg2;

// CN (DataMapper)

+ (Class)defaultDataMapperClass;

// CN (MultiValueTransforms)

+ (id)dateComponentsFromDictionaryTransform;
+ (id)dateComponentsToDictionaryTransform;
+ (id)instantMessageAddressFromDictionaryTransform;
+ (id)instantMessageAddressToDictionaryTransform;
+ (id)nullTransform;
+ (id)phoneNumberFromStringTransform;
+ (id)phoneNumberToStringTransform;
+ (id)postalAddressFromDictionaryTransform;
+ (id)postalAddressToDictionaryTransform;
+ (id)relatedContactFromStringTransform;
+ (id)relatedContactToStringTransform;
+ (id)socialProfileFromDictionaryTransform;
+ (id)socialProfileToDictionaryTransform;
+ (id)socialProfileToFoundationProfileTransform;

// CN (PropertyDescription)

+ (id)accountIdentifierDescription;
+ (id)allContactProperties;
+ (id)allContactPropertyKeys;
+ (id)allImageDataProperties;
+ (id)allImageDataPropertyKeys;
+ (id)allNameComponentRelatedProperties;
+ (id)allPhoneticNameComponentProperties;
+ (id)alwaysFetchedProperties;
+ (id)birthdayDescription;
+ (id)calendarURIsDescription;
+ (id)callAlertDescription;
+ (id)contactPropertiesByKey;
+ (id)contactRelationsDescription;
+ (id)contactTypeDescription;
+ (id)creationDateDescription;
+ (id)cropRectDescription;
+ (id)datesDescription;
+ (id)departmentDescription;
+ (id)displayNameOrderDescription;
+ (id)emailAddressesDescription;
+ (id)familyNameDescription;
+ (id)givenNameDescription;
+ (id)identifierDescription;
+ (id)imageDataAvailableDescription;
+ (id)imageDataDescription;
+ (id)instantMessagAddressesDescription;
+ (id)jobTitleDescription;
+ (id)linkIdentifierDescription;
+ (id)mapsDataDescription;
+ (id)middleNameDescription;
+ (id)modificationDateDescription;
+ (id)multiValueContactProperties;
+ (id)namePrefixDescription;
+ (id)nameSuffixDescription;
+ (id)nicknameDescription;
+ (id)nonGregorianBirthdayDescription;
+ (id)noteDescription;
+ (id)organizationNameDescription;
+ (id)phoneNumbersDescription;
+ (id)phonemeDataDescription;
+ (id)phoneticFamilyNameDescription;
+ (id)phoneticGivenNameDescription;
+ (id)phoneticMiddleNameDescription;
+ (id)phoneticOrganizationNameDescription;
+ (id)postalAddressesDescription;
+ (id)preferredApplePersonaIdentifierDescription;
+ (id)preferredForImageDescription;
+ (id)preferredForNameDescription;
+ (id)preferredLikenessSourceDescription;
+ (id)previousFamilyNameDescription;
+ (id)searchIndexDescription;
+ (id)singleValueContactProperties;
+ (id)socialProfilesDescription;
+ (id)sortingFamilyNameDescription;
+ (id)sortingGivenNameDescription;
+ (id)textAlertDescription;
+ (id)thumbnailImageDataDescription;
+ (id)urlAddressesDescription;
+ (id)writableAlwaysFetchedProperties;
+ (id)writableContactProperties;
+ (id)writableMultiValueContactProperties;
+ (id)writableSingleValueContactProperties;

// CN (UnifiedContacts)

+ (id)_unifyContacts:(id)arg1 includingMainStoreContacts:(BOOL)arg2;
+ (void)addLinkedIdentifier:(id)arg1 toLabeledValue:(id)arg2;
+ (id)contactUnifyingContacts:(id)arg1 includingMainStoreContacts:(BOOL)arg2;
+ (id)groupIdentifiersByLabeledValue:(id)arg1 forProperty:(id)arg2;
+ (id)identifierMapForUnifiedContact:(id)arg1 backingContacts:(id)arg2;
+ (id)identifierMapForUnifiedMultiValue:(id)arg1 backingMultiValues:(id)arg2 forProperty:(id)arg3;
+ (unsigned long long)indexOfPreferredContactsForUnifying:(id)arg1 includingMainStoreContacts:(BOOL)arg2;
+ (unsigned long long)indexOfUnifiedIdentifier:(id)arg1 onNonUnifiedMultiValue:(id)arg2 withIdentifierMap:(id)arg3;
+ (id)mutableContactUnifyingContacts:(id)arg1 includingMainStoreContacts:(BOOL)arg2;
+ (id)sourceContactForValue:(id)arg1 labeledValueIdentifier:(id)arg2 propertyKey:(id)arg3 inUnifiedContact:(id)arg4;
+ (id)unifyContactMatchInfos:(id)arg1 linkedContacts:(id)arg2;
+ (id)unifyMultivalues:(id)arg1 forProperty:(id)arg2;

@end