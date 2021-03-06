/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
 */

@interface _CNContactsLogger : NSObject <CNContactsLogger> {
    NSObject<OS_os_log> * _log;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_os_log> *log;
@property (atomic, readonly) Class superclass;

- (void).cxx_destruct;
- (void)SPIUsageLackingEntitlementGrantedForPID:(int)arg1;
- (void)SPIUsageLackingEntitlementRejectedForPID:(int)arg1;
- (void)XPCConnectionWasInterrupted;
- (void)XPCConnectionWasInvalidated;
- (void)addingContacts:(id)arg1 toContainerWithIdentifier:(id)arg2;
- (void)changingMeContact:(id)arg1;
- (void)clearingChangeHistory:(id)arg1;
- (void)contactsAccessWasGranted:(BOOL)arg1;
- (void)deletingContact:(id)arg1;
- (void)didFetchContacts:(id)arg1 error:(id)arg2;
- (void)didFetchEncodedContacts:(id)arg1 error:(id)arg2;
- (void)fetchContactsMatchingPredicate:(id)arg1 unifyResults:(BOOL)arg2 keysToFetch:(id)arg3;
- (void)fetchContactsProgressivelyMatchingPredicate:(id)arg1 unifyResults:(BOOL)arg2 keysToFetch:(id)arg3;
- (void)fetchEncodedContactsMatchingPredicate:(id)arg1 unifyResults:(BOOL)arg2 keysToFetch:(id)arg3;
- (void)fetchingChangeHistory:(id)arg1;
- (void)fetchingContactCount:(id)arg1;
- (void)fetchingContactIdentifierWithMatchingDictionary:(id)arg1;
- (void)fetchingContactWithUserActivity:(id)arg1;
- (void)fetchingContacts:(id)arg1;
- (void)fetchingContactsBatch:(id)arg1;
- (void)fetchingContainers:(id)arg1;
- (void)fetchingDefaultContainerIdentifier:(id)arg1;
- (void)fetchingGroups:(id)arg1;
- (void)fetchingMeContactIdentifier:(id)arg1;
- (id)init;
- (void)internalError:(id)arg1;
- (id)log;
- (void)noAccessToContactsWithError:(id)arg1;
- (void)registeringForChangeHistory:(id)arg1;
- (void)requestingAccessForContacts:(id)arg1;
- (void)saveRequestFailed:(id)arg1;
- (void)saveRequestInvalid:(id)arg1;
- (void)saving:(id)arg1;
- (void)serviceError:(id)arg1;
- (void)servicingContactsRequest:(id)arg1;
- (void)tccAccessPreflightWasDenied;
- (void)tccAccessRequestWasDenied;
- (void)unregisteringForChangeHistory:(id)arg1;
- (void)updatingContact:(id)arg1;

@end
