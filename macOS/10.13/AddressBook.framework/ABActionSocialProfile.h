/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABActionSocialProfile : NSObject <ABActionDelegate>

@property (atomic, readonly) NSString *actionProperty;

- (id)_actionURLForProfile:(id)arg1;
- (id)_localizationStringKeyForProfile:(id)arg1;
- (id)_standardURLForProfile:(id)arg1;
- (id)actionProperty;
- (void)performActionForPerson:(id)arg1 identifier:(id)arg2;
- (BOOL)shouldEnableActionForPerson:(id)arg1 identifier:(id)arg2;
- (id)titleForPerson:(id)arg1 identifier:(id)arg2;
- (id)unlocalizedTitle;

@end
