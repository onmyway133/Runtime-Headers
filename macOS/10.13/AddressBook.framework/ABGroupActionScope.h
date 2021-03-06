/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABGroupActionScope : NSObject {
    ABAccount * _account;
    ABAddressBook * _addressBook;
    ABGroup * _group;
    ABRecordContext * _recordContext;
}

@property (atomic, readonly) ABAccount *account;
@property (atomic, readonly) ABAddressBook *addressBook;
@property (atomic, readonly) ABGroup *group;
@property (atomic, readonly) ABRecordContext *recordContext;

- (id)account;
- (id)addressBook;
- (void)dealloc;
- (id)group;
- (id)groups;
- (id)initWithAccount:(id)arg1 addressBook:(id)arg2 group:(id)arg3;
- (id)initWithGroup:(id)arg1;
- (id)recordContext;

@end
