/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABPerson : ABRecord

@property (atomic, readwrite) BOOL isPreferredForName;
@property (atomic, readwrite) BOOL isPreferredForPhoto;
@property (atomic, readwrite, copy) NSString *linkId;
@property (atomic, readwrite, copy) NSString *phonemeData;

+ (void)addCustomPropertiesAndTypesFromAddressBook:(id)arg1 toAddressBook:(id)arg2;
+ (long long)addPropertiesAndTypes:(id)arg1;
+ (long long)addPropertiesAndTypes:(id)arg1 withAddressBook:(id)arg2;
+ (long long)addPropertiesAndTypes:(id)arg1 withAddressBook:(id)arg2 acquireLock:(BOOL)arg3;
+ (long long)addPropertiesAndTypes:(id)arg1 withAddressBook:(id)arg2 acquireLock:(BOOL)arg3 save:(BOOL)arg4;
+ (id)builtInProperties;
+ (id)instantMessageProperties;
+ (id)instantMessageServiceKeyToPropertyMapping;
+ (id)instantMessageServiceKeys;
+ (id)makeLinkIdentifier;
+ (id)peopleFromVCardData:(id)arg1;
+ (id)personFromDictionary:(id)arg1;
+ (id)personFromDictionary:(id)arg1 addressBook:(id)arg2 skipUnknownProperties:(BOOL)arg3 generateMultiValueIDs:(BOOL)arg4;
+ (id)predicateForLinkId:(id)arg1;
+ (Class)remoteObjectClass;
+ (long long)removeProperties:(id)arg1;
+ (id)searchElementForProperty:(id)arg1 label:(id)arg2 key:(id)arg3 value:(id)arg4 comparison:(long long)arg5;

- (id)_compositeNameIncludingAuxiliaryElements:(BOOL)arg1;
- (id)_fullName;
- (id)_fullNameIncludingAuxiliaryElements:(BOOL)arg1;
- (id)_fullPhoneticName;
- (BOOL)_isCompany;
- (BOOL)_isLastNameFirst;
- (BOOL)_isMe;
- (id)_mapURLForAddressWithId:(id)arg1;
- (BOOL)_propertyHasChanged:(id)arg1;
- (id)_realCompositeName;
- (id)_realCompositeNameIncludingAuxiliaryElements:(BOOL)arg1;
- (BOOL)_requiresSeparateBirthdayCalendar;
- (BOOL)_shouldAssignNewDatabaseImplToAccount;
- (id)alternateName;
- (id)archivableDataFromCropRects:(id)arg1;
- (id)availableLabelsForProperty:(id)arg1;
- (BOOL)canEditInCardView;
- (id)compositeName;
- (id)createAlternateName;
- (id)createFirstLastSorting:(BOOL)arg1 part1:(BOOL)arg2;
- (void)createFirstLastSortingNamePart1:(const struct __CFString {}**)arg1 part2:(const struct __CFString {}**)arg2;
- (void)createLastFirstSortingNamePart1:(const struct __CFString {}**)arg1 part2:(const struct __CFString {}**)arg2;
- (id)cropRectsFromArchivableData:(id)arg1;
- (id)displayName;
- (id)fetchUpdatedBackingObject;
- (BOOL)hasCustomImage;
- (BOOL)hasCustomImageOfKind:(id)arg1;
- (id)imageDirectory;
- (id)imagePathOfKind:(id)arg1;
- (void)importPerson:(id)arg1;
- (id)initWithVCardRepresentation:(id)arg1;
- (id)initWithVCardRepresentation:(id)arg1 addressBook:(id)arg2;
- (BOOL)isPreferredForName;
- (BOOL)isPreferredForPhoto;
- (BOOL)isReadOnly;
- (BOOL)isTransient;
- (id)linkId;
- (void)linkWithPerson:(id)arg1;
- (id)linkedPeople;
- (id)linkedPeopleSortedForPhotos;
- (id)linkedPeopleWithSortDescriptors:(id)arg1;
- (void)mergePerson:(id)arg1;
- (id)nts_AlternateName;
- (void)nts_CascadeRemove;
- (id)nts_StringForIndexing;
- (id)nts__RealCompositeName;
- (id)nts__fullName;
- (id)nts__fullNameIncludingAuxiliaryElements:(BOOL)arg1;
- (id)nts__fullPhoneticName;
- (BOOL)nts__isCompany;
- (BOOL)nts__isLastNameFirst;
- (void)nts_addPropertyValueToArchive:(id)arg1 forPropertyKey:(id)arg2;
- (BOOL)nts_canRemove;
- (id)nts_coreDataFullNameIncludingAuxiliaryElements:(BOOL)arg1;
- (void)nts_importSingleValue:(id)arg1 fromArchive:(id)arg2 forPropertyKey:(id)arg3;
- (id)nts_phonemeData;
- (id)nts_ringtone;
- (void)nts_setPhonemeData:(id)arg1;
- (void)nts_setRingtone:(id)arg1;
- (void)nts_setTexttone:(id)arg1;
- (id)nts_texttone;
- (id)parentGroups;
- (id)phonemeData;
- (void)populateWithDictionary:(id)arg1 skipUnknownProperties:(BOOL)arg2 generateMultiValueIDs:(BOOL)arg3 recordIsNew:(BOOL)arg4;
- (void)resetWithDictionary:(id)arg1 skipUnknownProperties:(BOOL)arg2 generateMultiValueIDs:(BOOL)arg3;
- (id)ringtone;
- (void)setIsPreferredForName:(BOOL)arg1;
- (void)setIsPreferredForPhoto:(BOOL)arg1;
- (void)setLinkId:(id)arg1;
- (void)setPhonemeData:(id)arg1;
- (void)setRingtone:(id)arg1;
- (void)setTexttone:(id)arg1;
- (id)similarNameForHashing;
- (id)stringForIndexing;
- (id)stringForXcode;
- (id)texttone;
- (id)unifiedPerson;
- (id)unifiedValueForProperty:(id)arg1;
- (void)unlink;
- (id)vCardRepresentation;
- (id)valueSanitizer;

// ABPerson (ABPersonAdditions)

+ (id)builtInLabels;
+ (id)builtInLabelsForProperty:(id)arg1;
+ (id)initialFieldsForProperty:(id)arg1;
+ (id)initialInstantMessageServiceKeys;

- (BOOL)_abAddress:(id)arg1 isSimilarToAddress:(id)arg2;
- (BOOL)abHasSimilarAddress:(id)arg1;
- (id)abUsedProperties;
- (id)allProperties;
- (id)allPropertiesIncludingImage:(BOOL)arg1;
- (unsigned long long)indexOfLabel:(id)arg1 inMultiValue:(id)arg2 testValue:(id)arg3;
- (BOOL)isEmptyPerson;
- (void)mergeMultiValue:(id)arg1 forProperty:(id)arg2;
- (void)mergeNote:(id)arg1;
- (void)mergeSingleValue:(id)arg1 forProperty:(id)arg2;
- (id)mergedSimilarMultiValuesIn:(id)arg1 forProperty:(id)arg2 changes:(id)arg3;
- (id)relatedMatchesForIdentifier:(id)arg1;
- (id)relatedMatchesForName:(id)arg1 label:(id)arg2 givenLastName:(id)arg3;
- (void)setAllProperties:(id)arg1;
- (void)updateMultiValue:(id)arg1 forProperty:(id)arg2 changes:(id)arg3;
- (void)updateMultiValue:(id)arg1 forProperty:(id)arg2 changes:(id)arg3 replaceValues:(BOOL)arg4;
- (void)updateNote:(id)arg1 changes:(id)arg2;
- (void)updateSingleValue:(id)arg1 forProperty:(id)arg2 changes:(id)arg3;

// ABPerson (ABPersonImageAdditions)

+ (id)_netInfoImageData;
+ (id)_pathForImageTaggedByEmails:(id)arg1;
+ (void)cancelLoadingImageDataForTag:(long long)arg1;

- (long long)_beginLoadingImageDataForClient:(id)arg1;
- (id)_customImageData;
- (id)_image;
- (id)_imageOfKind:(id)arg1;
- (void)_makeSureImagesFolderExistsForImageWithURL:(id)arg1;
- (void)_removeExistingImageAtURL:(id)arg1;
- (BOOL)_saveImageDataToDisk:(id)arg1 kind:(id)arg2;
- (BOOL)_writeImageData:(id)arg1 toURL:(id)arg2;
- (long long)beginLoadingImageDataForClient:(id)arg1;
- (BOOL)clearAllClippingRects;
- (id)clippingRectParametersForAllTypes;
- (id)clippingRectParametersForType:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageClippingRectOfType:(id)arg1 imageKind:(id)arg2;
- (id)imageClippingRectTypesOfKind:(id)arg1;
- (id)imageClippingRectsOfKind:(id)arg1;
- (id)imageData;
- (id)imageDataFromLargeImageByApplyingClippingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)imageDataFromLargeImageByApplyingClippingRectOfType:(id)arg1;
- (id)imageDataOfKind:(id)arg1;
- (id)imageReference;
- (id)imageReferences;
- (BOOL)isDataCachedForImageReference:(id)arg1;
- (id)largeImageClippingRectIDOfType:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })largeImageClippingRectOfType:(id)arg1;
- (id)largeImageClippingRectTypes;
- (id)largeImageData;
- (id)largeImageHashOfType:(id)arg1;
- (id)largeImagePath;
- (long long)loadImageDataWithCompletionHandler:(id)arg1;
- (id)nts_CustomImageData;
- (id)nts_PathForUIDTaggedImage;
- (id)nts_PathForUIDTaggedImageOfKind:(id)arg1;
- (BOOL)nts_SetImageData:(id)arg1 kind:(id)arg2;
- (id)nts_pathForLocalImage;
- (id)nts_pathForLocalImageOfKind:(id)arg1;
- (id)pathForUIDTaggedImage;
- (id)photoHelper;
- (BOOL)removeExtendedAttributesWithKeys:(id)arg1 fromFile:(id)arg2;
- (void)removeImageReference:(id)arg1;
- (BOOL)setClippingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forKey:(id)arg2 onFile:(id)arg3;
- (BOOL)setHashOfData:(id)arg1 forKey:(id)arg2 onFile:(id)arg3;
- (BOOL)setIdentifier:(id)arg1 forKey:(id)arg2 onFile:(id)arg3;
- (BOOL)setImageData:(id)arg1;
- (BOOL)setImageData:(id)arg1 forReference:(id)arg2;
- (BOOL)setImageData:(id)arg1 forReference:(id)arg2 clipRects:(id)arg3;
- (BOOL)setImageData:(id)arg1 kind:(id)arg2;
- (BOOL)setLargeImageClippingRect:(id)arg1;
- (BOOL)setLargeImageData:(id)arg1;

// ABPerson (ABPersonVCardAdditions)

+ (void)clearPrivateFields;
+ (void)eachPrivateField:(id)arg1;
+ (void)extractProperty:(id*)arg1 identifier:(id*)arg2 fromField:(id)arg3;
+ (BOOL)includeNotesInVCards;
+ (BOOL)includePhotosInVCards;
+ (id)personWithVCardData:(id)arg1 orFetchedFromAddressBook:(id)arg2;
+ (BOOL)privateVCardEnabled;
+ (id)recordIdentifierFromVCard:(id)arg1;
+ (void)setIncludeNotesInVCards:(BOOL)arg1;
+ (void)setIncludePhotosInVCards:(BOOL)arg1;
+ (void)setPrivateVCardEnabled:(BOOL)arg1;
+ (void)setVCardField:(id)arg1 isPrivate:(BOOL)arg2;
+ (id)vCardPrivateFields;
+ (BOOL)vcardFieldisPrivate:(id)arg1;

- (id)_21vCardRepresentationAsData;
- (id)_vCardRepresentationAsString;
- (id)_vCardRepresentationAsStringIncludeNotes:(BOOL)arg1 includePhotos:(BOOL)arg2;
- (id)_vCardRepresentationAsStringUsingPreferencesForOptions;
- (id)_vCardRepresentationAsStringWithOptions:(id)arg1;
- (id)encodedDataForValue:(id)arg1 charsetName:(id*)arg2;

// ABPerson (ABRecordImageAdditionsInternal)

- (id)imageMemento;
- (void)setImageFromMemento:(id)arg1;

// ABPerson (ABUniquelyNamedLinkedPeople)

- (id)uniquelyNamedLinkedPeople;

// ABPerson (MatchAndMergeInternal)

- (BOOL)_isIgnoredPropertyForMerging:(id)arg1;
- (BOOL)_matchAndMerge_MergePerson:(id)arg1;
- (BOOL)_mergeProperty:(id)arg1 forPerson:(id)arg2;
- (BOOL)_propertyIsIdentical:(id)arg1 forPerson:(id)arg2;
- (BOOL)_takeGroupMembershipsFromPeople:(id)arg1;
- (BOOL)_takeGroupMembershipsFromPerson:(id)arg1;

@end
