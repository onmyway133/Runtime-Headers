/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsPersistence.framework/Versions/A/ContactsPersistence
 */

@interface CNCDPersistenceStack : NSObject {
    id  _backendProvider;
    id  _notificationSource;
}

@property (atomic, readwrite) id notificationSource;

// Image: /System/Library/PrivateFrameworks/ContactsPersistence.framework/Versions/A/ContactsPersistence

+ (void)_createContactsDirectoryIfNeededAtURL:(id)arg1;
+ (id)accountIdentifierForManagedObject:(id)arg1;
+ (id)accountIdentifierFromPersistentStoreURL:(id)arg1;
+ (id)defaultContactsStoreDirectoryURL;
+ (id)persistenceStackWithAccountCollection:(id)arg1;
+ (id)persistenceStackWithInMemoryBackend;

- (void)dealloc;
- (id)initWithBackendProvider:(id)arg1;
- (id)makePersistenceContext;
- (id)notificationSource;
- (void)setNotificationSource:(id)arg1;

// Image: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts

// CNCDPersistenceStack (CNCDAddressBookBackend)

+ (id)persistenceStackWithAddressBook:(id)arg1;
+ (id)persistenceStackWithAddressBookURL:(id)arg1;
+ (id)persistenceStackWithSharedAddressBook;

@end