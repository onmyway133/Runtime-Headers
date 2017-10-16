/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABPersonVCardParsedResultBuilderFactory : NSObject <CNVCardParsedResultBuilderFactory> {
    ABAccount * _account;
    ABAddressBook * _addressBook;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

+ (id)factoryWithAddressBook:(id)arg1 account:(id)arg2;

- (void)dealloc;
- (id)initWithAddressBook:(id)arg1 account:(id)arg2;
- (id)makeBuilder;

@end
