/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABPersonViewNotificationWatcher : NSObject {
    ABCardViewNotificationHandler * _cardViewNotificationHandler;
}

- (void)addressBookChangedExternally:(id)arg1;
- (void)dealloc;
- (id)initWithCardViewNotificationHandler:(id)arg1;
- (void)managedObjectContextObjectsDidChange:(id)arg1;
- (void)registerForExternalNotifications;
- (void)registerForLocalNotificationsWithAddressBook:(id)arg1;
- (void)registerForNotificationsWithAddressBook:(id)arg1;
- (void)removeNotificationObservers;

@end
