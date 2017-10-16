/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
 */

@interface CNContactsUserDefaults : NSObject

@property (atomic, readonly, copy) NSString *countryCode;
@property (nonatomic, readwrite) long long displayNameOrder;
@property (nonatomic, readwrite) long long shortNameFormat;
@property (getter=isShortNameFormatEnabled, nonatomic, readwrite) BOOL shortNameFormatEnabled;
@property (nonatomic, readwrite) BOOL shortNameFormatPrefersNicknames;
@property (atomic, readonly) long long sortOrder;

+ (void)flushSharedInstance;
+ (id)sharedDefaults;

- (id)countryCode;
- (long long)displayNameOrder;
- (id)init;
- (BOOL)isShortNameFormatEnabled;
- (long long)newContactDisplayNameOrder;
- (void)setDisplayNameOrder:(long long)arg1;
- (void)setShortNameFormat:(long long)arg1;
- (void)setShortNameFormatEnabled:(BOOL)arg1;
- (void)setShortNameFormatPrefersNicknames:(BOOL)arg1;
- (long long)shortNameFormat;
- (BOOL)shortNameFormatPrefersNicknames;
- (long long)sortOrder;

@end
