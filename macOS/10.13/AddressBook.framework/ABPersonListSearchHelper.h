/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABPersonListSearchHelper : NSObject {
    NSDictionary * _cachedPersonEntriesByIdentifier;
    NSDictionary * _cachedSuggestionEntriesByIdentifier;
    BOOL  _includeSuggestions;
    <CNCancelable> * _localSearchSubscription;
    ABPersonListController * _personListController;
    id  _resultHandler;
    CNPublishingSubject * _searchObservable;
    <CNCancelable> * _suggestionSearchSubscription;
}

@property (nonatomic, readwrite, retain) NSDictionary *cachedPersonEntriesByIdentifier;
@property (nonatomic, readwrite, retain) NSDictionary *cachedSuggestionEntriesByIdentifier;
@property (nonatomic, readwrite) BOOL includeSuggestions;
@property (nonatomic, readwrite, retain) <CNCancelable> *localSearchSubscription;
@property (nonatomic, readwrite) ABPersonListController *personListController;
@property (nonatomic, readwrite, copy) id resultHandler;
@property (nonatomic, readwrite, retain) CNPublishingSubject *searchObservable;
@property (nonatomic, readwrite, retain) <CNCancelable> *suggestionSearchSubscription;

+ (BOOL)entriesContainMeEntry:(id)arg1;
+ (BOOL)isDisplayingAllContactsGroupInPersonListController:(id)arg1;
+ (BOOL)isDisplayingTopLevelGroupInPersonListController:(id)arg1;
+ (void)removeAllRecordsFromAddressBook:(id)arg1;
+ (BOOL)shouldIncludeDonatedMeCardForPersonListController:(id)arg1;
+ (BOOL)shouldIncludeSuggestionsForPersonListController:(id)arg1;
+ (id)suggestedMeEntryInEntries:(id)arg1;
+ (id)uniqueSuggestedEntries:(id)arg1 givenCuratedEntries:(id)arg2;

- (void).cxx_destruct;
- (id)augmentEntriesWithDonatedMeEntryIfFound:(id)arg1;
- (id)cachedPersonEntriesByIdentifier;
- (id)cachedSuggestionEntriesByIdentifier;
- (void)cleaupPreviousSuggestions;
- (void)fetchLocalContacts;
- (id)fetchPersonEntriesByUID;
- (id)fetchSuggestedEntriesByUID;
- (id)fetchSuggestedMeEntryByUID;
- (BOOL)includeSuggestions;
- (id)initWithPersonListController:(id)arg1 resultHandler:(id)arg2;
- (id)localSearchSubscription;
- (void)performEntryHandler;
- (void)performLocalSearch:(id)arg1;
- (void)performSuggestionSearch:(id)arg1;
- (id)personListController;
- (void)removeEntries:(id)arg1;
- (id)resultHandler;
- (void)searchForString:(id)arg1;
- (id)searchObservable;
- (void)setCachedPersonEntriesByIdentifier:(id)arg1;
- (void)setCachedSuggestionEntriesByIdentifier:(id)arg1;
- (void)setIncludeSuggestions:(BOOL)arg1;
- (void)setLocalSearchSubscription:(id)arg1;
- (void)setPersonListController:(id)arg1;
- (void)setResultHandler:(id)arg1;
- (void)setSearchObservable:(id)arg1;
- (void)setSuggestionSearchSubscription:(id)arg1;
- (id)suggestionSearchSubscription;

@end
