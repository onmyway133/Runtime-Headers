/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABDefaultAccountPreference : NSObject {
    ABUserDefaults * _preferences;
    ABAccountRepository * _repository;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)defaultAccount;
- (void)defaultAccountChangedExternally:(id)arg1;
- (id)fallbackAccount;
- (id)initWithAccountRepository:(id)arg1;
- (id)initWithAccountRepository:(id)arg1 defaults:(id)arg2;
- (void)postDidChangeNotifications;
- (void)postDistributedNotification;
- (void)postLocalNotification;
- (void)registerForNotifications;
- (id)sanityCheckDefaultAccount:(id)arg1;
- (id)sanityCheckDefaultAcountIdentifier:(id)arg1;
- (void)setDefaultAccount:(id)arg1;

@end