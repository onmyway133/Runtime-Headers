/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABMetadataRecordFactory : NSObject {
    ABAccount * _account;
    ABAddressBook * _addressBook;
    NSMutableDictionary * _recordMapping;
}

- (id)account;
- (void)dealloc;
- (id)initWithAddressBook:(id)arg1 recordMapping:(id)arg2;
- (id)initWithAddressBook:(id)arg1 recordMapping:(id)arg2 account:(id)arg3;
- (id)makeGroupWithDictionaryRepresentation:(id)arg1;
- (id)makeInfoWithDictionaryRepresentation:(id)arg1;
- (id)makePersonWithDictionaryRepresentation:(id)arg1;
- (id)makeRecordWithClass:(Class)arg1 dictionary:(id)arg2 generateIds:(BOOL)arg3;
- (id)makeSmartGroupWithDictionaryRepresentation:(id)arg1;
- (id)makeSubscriptionWithDictionaryRepresentation:(id)arg1;

@end
