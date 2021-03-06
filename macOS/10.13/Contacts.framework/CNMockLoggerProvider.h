/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
 */

@interface CNMockLoggerProvider : NSObject <CNContactsLoggerProvider> {
    <CNContactsLogger> * _contactsLogger;
    <CNRegulatoryLogger> * _regulatoryLogger;
    <CNSpotlightIndexingLogger> * _spotlightIndexingLogger;
}

@property (nonatomic, readwrite, retain) <CNContactsLogger> *contactsLogger;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readwrite, retain) <CNRegulatoryLogger> *regulatoryLogger;
@property (nonatomic, readwrite, retain) <CNSpotlightIndexingLogger> *spotlightIndexingLogger;
@property (atomic, readonly) Class superclass;

+ (id)loggerProvider;

- (void).cxx_destruct;
- (id)contactsLogger;
- (id)regulatoryLogger;
- (void)setContactsLogger:(id)arg1;
- (void)setRegulatoryLogger:(id)arg1;
- (void)setSpotlightIndexingLogger:(id)arg1;
- (id)spotlightIndexingLogger;

@end
