/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABActionAddSuggestedValue : NSObject <ABActionDelegate> {
    NSString * _property;
    id  _value;
}

@property (atomic, readonly) NSString *actionProperty;

- (id)actionProperty;
- (void)dealloc;
- (id)initWithProperty:(id)arg1 value:(id)arg2;
- (void)performActionForPerson:(id)arg1 identifier:(id)arg2;
- (id)titleForPerson:(id)arg1 identifier:(id)arg2;
- (id)unlocalizedTitle;

@end