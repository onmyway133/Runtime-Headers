/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABBrowsingSearchConfiguration : ABPersonSearchConfiguration {
    ABAddressBook * _addressBook;
    <ABPersonListHeadlining> * _headliner;
}

@property (atomic, readwrite, retain) ABAddressBook *addressBook;
@property (atomic, readwrite, retain) <ABPersonListHeadlining> *headliner;

- (id)addressBook;
- (void)configureForBrowsingAccount:(id)arg1 group:(id)arg2;
- (void)configurePersonList:(id)arg1 forBrowsingAccount:(id)arg2 group:(id)arg3;
- (void)dealloc;
- (id)headliner;
- (void)incrementSearchCount;
- (id)initWithController:(id)arg1;
- (void)searchForString:(id)arg1;
- (void)setAddressBook:(id)arg1;
- (void)setHeadliner:(id)arg1;
- (BOOL)shouldUnifyPeople;

@end
