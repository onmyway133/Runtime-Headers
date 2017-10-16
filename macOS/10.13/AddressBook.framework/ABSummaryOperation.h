/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABSummaryOperation : NSOperation {
    NSString * _accountIdentifier;
    ABAccountRepository * _accountRepository;
}

- (void)dealloc;
- (void)exportSummary:(id)arg1 accountName:(id)arg2;
- (id)initWithAccountRepository:(id)arg1 accountIdentifier:(id)arg2;
- (void)main;
- (id)makeAccount;
- (id)makeAddressBookForAccount:(id)arg1;
- (id)makeSummaryOfAddressBook:(id)arg1;
- (id)outputURLWithAccountName:(id)arg1;

@end
