/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABActionSocialProfileSendMessage : ABActionSocialProfile <NSSharingServiceDelegate> {
    <CNUIShareKitTransitionProvider> * _transitionProvider;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;
@property (atomic, readwrite, retain) <CNUIShareKitTransitionProvider> *transitionProvider;

- (id)_actionURLForProfile:(id)arg1;
- (id)_localizationStringKeyForProfile:(id)arg1;
- (void)dealloc;
- (void)performActionForPerson:(id)arg1 identifier:(id)arg2;
- (void)performActionForPerson:(id)arg1 identifier:(id)arg2 transitionProvider:(id)arg3;
- (void)setTransitionProvider:(id)arg1;
- (id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long*)arg3;
- (id)sharingServiceNameForSocialProfileService:(id)arg1;
- (BOOL)shouldEnableActionForPerson:(id)arg1 identifier:(id)arg2;
- (id)transitionProvider;

@end
