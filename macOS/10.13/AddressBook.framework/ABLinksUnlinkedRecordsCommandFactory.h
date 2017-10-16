/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABLinksUnlinkedRecordsCommandFactory : NSObject <ABLinkPeopleCommandFactory> {
    <ABLinkingInfoDataSource> * _adapter;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (id)analyzePeopleInAddressBook;
- (id)buildCommand;
- (Class)builtCommandClass;
- (void)dealloc;
- (id)fetchPeople;
- (id)findPeopleNeedingLinked:(id)arg1;
- (id)initWithAdapter:(id)arg1;
- (id)optimizeOutSingleRecords:(id)arg1;
- (id)separatePeopleByAccount:(id)arg1;

@end