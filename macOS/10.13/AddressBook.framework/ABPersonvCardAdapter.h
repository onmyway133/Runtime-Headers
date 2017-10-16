/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABPersonvCardAdapter : NSObject <CNVCardPerson> {
    ABPerson * _person;
}

@property (atomic, readonly) NSDictionary *activityAlerts;
@property (atomic, readonly) NSDateComponents *alternateBirthdayComponents;
@property (atomic, readonly) NSDateComponents *birthdayComponents;
@property (atomic, readonly) NSArray *calendarURIs;
@property (atomic, readonly) NSString *cardDAVUID;
@property (atomic, readonly) NSString *companyName;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly) NSString *department;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) NSArray *emailAddresses;
@property (atomic, readonly) NSString *firstName;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) NSDictionary *imageCropRects;
@property (atomic, readonly) NSData *imageData;
@property (atomic, readonly) NSArray *imageReferences;
@property (atomic, readonly) NSArray *instantMessagingAddresses;
@property (atomic, readonly) BOOL isCompany;
@property (atomic, readonly) BOOL isMe;
@property (atomic, readonly) NSString *jobTitle;
@property (atomic, readonly) NSDictionary *largeImageCropRects;
@property (atomic, readonly) NSData *largeImageData;
@property (atomic, readonly) NSString *lastName;
@property (atomic, readonly) NSString *maidenName;
@property (atomic, readonly) NSString *middleName;
@property (atomic, readonly) int nameOrder;
@property (atomic, readonly) NSArray *namesOfParentGroups;
@property (atomic, readonly) NSString *nickname;
@property (atomic, readonly) NSString *note;
@property (atomic, readonly) NSString *organization;
@property (atomic, readonly) NSArray *otherDateComponents;
@property (atomic, readonly) NSArray *phoneNumbers;
@property (atomic, readonly) NSString *phonemeData;
@property (atomic, readonly) NSString *phoneticFirstName;
@property (atomic, readonly) NSString *phoneticLastName;
@property (atomic, readonly) NSString *phoneticMiddleName;
@property (atomic, readonly) NSString *phoneticOrganization;
@property (atomic, readonly) NSArray *postalAddresses;
@property (atomic, readonly) NSString *preferredApplePersonaIdentifier;
@property (atomic, readonly) NSString *preferredLikenessSource;
@property (atomic, readonly) NSString *pronunciationFirstName;
@property (atomic, readonly) NSString *pronunciationLastName;
@property (atomic, readonly) NSArray *relatedNames;
@property (atomic, readonly) NSArray *socialProfiles;
@property (atomic, readonly) NSString *suffix;
@property (atomic, readonly) Class superclass;
@property (atomic, readonly) NSString *title;
@property (atomic, readonly) NSString *uid;
@property (atomic, readonly) NSArray *unknownProperties;
@property (atomic, readonly) NSArray *urls;

+ (id)adapterWithPerson:(id)arg1;

- (id)activityAlerts;
- (id)alternateBirthdayComponents;
- (id)birthdayComponents;
- (id)calendarURIs;
- (id)cardDAVUID;
- (id)companyName;
- (void)dealloc;
- (id)department;
- (id)emailAddresses;
- (id)firstName;
- (id)imageCropRects;
- (id)imageData;
- (id)imageReferences;
- (id)initWithPerson:(id)arg1;
- (id)instantMessagingAddresses;
- (BOOL)isCompany;
- (BOOL)isMe;
- (id)jobTitle;
- (id)largeImageCropRects;
- (id)largeImageData;
- (id)largeImageHashOfType:(id)arg1;
- (id)lastName;
- (id)maidenName;
- (id)middleName;
- (int)nameOrder;
- (id)namesOfParentGroups;
- (id)nickname;
- (id)note;
- (id)organization;
- (id)otherDateComponents;
- (id)phoneNumbers;
- (id)phonemeData;
- (id)phoneticFirstName;
- (id)phoneticLastName;
- (id)phoneticMiddleName;
- (id)phoneticOrganization;
- (id)postalAddresses;
- (id)preferredApplePersonaIdentifier;
- (id)preferredLikenessSource;
- (id)pronunciationFirstName;
- (id)pronunciationLastName;
- (id)relatedNames;
- (id)socialProfiles;
- (id)suffix;
- (id)title;
- (id)uid;
- (id)unknownProperties;
- (id)urls;
- (id)vCardPropertyItemsForProperty:(id)arg1;
- (id)vCardPropertyItemsForProperty:(id)arg1 valueTransform:(id)arg2;

@end
