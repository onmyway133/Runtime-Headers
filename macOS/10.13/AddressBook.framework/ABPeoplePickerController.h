/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABPeoplePickerController : NSWindowController <ABPeoplePickerTableViewDataSource, ABPeoplePickerTableViewDelegate, ABPersonListControllerProtocol, ABPersonListDelegate, ABPersonSearchControllerDelegate, NSWindowRestoration> {
    ABAccount * _account;
    ABAddressBook * _addressBook;
    NSArray * _allSections;
    NSMutableDictionary * _columnFilters;
    ABGroup * _displayedGroup;
    NSMutableDictionary * _entryForRecordReverseMap;
    ABPeoplePickerExternalNotificationWatcher * _externalNotificationWatcher;
    ABPeoplePickerGroupEntriesFactory * _groupEntriesFactory;
    ABGroupEntriesList * _groupEntriesList;
    ABPeoplePickerGroupListController * _groupListController;
    ABPeoplePickerGroupHelperFactory * _helperFactory;
    BOOL  _inDistributionListEditor;
    ABPeoplePickerLocalNotificationWatcher * _localNotificationWatcher;
    ABPersonEntriesList * _personEntriesList;
    ABPersonListController * _personListController;
    ABPeoplePickerScope * _pickerScope;
    NSDictionary * _savedSelection;
    ABPersonListSearchController * _searchController;
    BOOL  _shouldAutomaticallyEditInsertedGroupNames;
    BOOL  _shouldUnifyPeople;
    BOOL  _singleCard;
    NSView * accessoryViewContainer;
    BOOL  allowsGroupSelection;
    NSString * autosaveName;
    NSArray * availableProperties;
    NSSegmentedControl * mNavigationControl;
    ABPeoplePickerTableView * mPickerTableView;
    NSSearchField * mSearchField;
    NSTextField * mStatusTextField;
    NSMenu * newSourceOrGroupMenu;
    NSSplitView * peoplePickerSplitView;
    NSArray * peopleSortDescriptors;
    NSView * pickerView;
    NSArrayController * propertyController;
    NSArray * propertyDescriptions;
    NSString * targetedPath;
    NSWindow * testWindow;
}

@property (nonatomic, readwrite, retain) NSView *accessoryView;
@property (atomic, readwrite, retain) ABAccount *account;
@property (nonatomic, readwrite, retain) ABAddressBook *addressBook;
@property (nonatomic, readwrite) BOOL allowsGroupSelection;
@property (nonatomic, readwrite) BOOL allowsMultipleSelection;
@property (nonatomic, readwrite, retain) NSString *autosaveName;
@property (atomic, readonly) NSArray *availableProperties;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readwrite, retain) ABGroup *displayedGroup;
@property (nonatomic, readwrite, retain) NSString *displayedProperty;
@property (atomic, readonly) NSArray *entries;
@property (atomic, readwrite, copy) NSString *filterTerms;
@property (nonatomic, readwrite) SEL groupDoubleAction;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite, retain) <ABPersonListHeadlining> *headliner;
@property (atomic, readwrite) BOOL inDistributionListEditor;
@property (nonatomic, readwrite) SEL nameDoubleAction;
@property (nonatomic, readwrite, retain) NSArray *peopleSortDescriptors;
@property (atomic, readonly) NSArray *personEntries;
@property (atomic, readwrite, retain) ABPersonEntriesList *personEntriesList;
@property (nonatomic, readonly) NSView *pickerView;
@property (atomic, readonly) NSArray *properties;
@property (nonatomic, readwrite, retain) NSArray *propertyDescriptions;
@property (atomic, readwrite) ABPersonListSearchController *searchController;
@property (atomic, readwrite, copy) NSArray *selectedEntries;
@property (atomic, readonly) BOOL shouldIncludeGroups;
@property (atomic, readwrite) BOOL shouldUnifyPeople;
@property (atomic, readwrite) BOOL showsDirectories;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readwrite) id target;
@property (nonatomic, readonly) NSWindow *testWindow;
@property (nonatomic, readwrite) int valueSelectionBehavior;

+ (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(id)arg3;
+ (BOOL)shouldRegisterForUndoNotifications;

- (id)_addProperty:(id)arg1;
- (id)_defaultTitleForProperty:(id)arg1;
- (void)_generateResultsForSelection;
- (id)_peoplePickerPropertyForProperty:(id)arg1;
- (void)_postSelectionChangedNotification;
- (void)_removeProperty:(id)arg1 key:(id)arg2;
- (id)_searchField;
- (id)_selectedSubrowObjectsAtIndex:(unsigned long long)arg1;
- (id)_subrowObjectsAtIndex:(unsigned long long)arg1;
- (id)accessoryView;
- (id)account;
- (void)addFilter:(id)arg1 title:(id)arg2 identifier:(id)arg3;
- (void)addInstantMessageService:(id)arg1;
- (void)addProperty:(id)arg1;
- (id)addressBook;
- (id)affectedStores;
- (BOOL)allowsGroupSelection;
- (BOOL)allowsMultipleSelection;
- (id)autosaveDefaultsKey;
- (id)autosaveName;
- (id)availableProperties;
- (void)awakeFromNib;
- (void)clearExtraUniqueIdsInSearchResults;
- (void)clearSearchField:(id)arg1;
- (id)columnTitleForProperty:(id)arg1;
- (void)dealloc;
- (void)deleteKey:(id)arg1;
- (void)deselectAll:(id)arg1;
- (void)deselectGroup:(id)arg1;
- (void)deselectIdentifier:(id)arg1 forPerson:(id)arg2;
- (void)deselectRecord:(id)arg1;
- (id)displayedGroup;
- (id)displayedProperty;
- (id)entries;
- (void)fetchContacts;
- (id)fetchPredicate;
- (id)filterTerms;
- (void)generateResultsForProperty:(id)arg1;
- (SEL)groupDoubleAction;
- (BOOL)hasTableBorder;
- (id)headliner;
- (BOOL)inDistributionListEditor;
- (void)loadAutosaveValues;
- (SEL)nameDoubleAction;
- (void)notifyTableViewOfChanges;
- (long long)numberOfRowsInTableView:(id)arg1;
- (long long)numberOfSubrowsInTableView:(id)arg1 forRow:(long long)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pasteboard:(id)arg1 provideDataForType:(id)arg2;
- (id)peopleForRowIndexes:(id)arg1;
- (id)peopleInFocusedSelection;
- (id)peopleSortDescriptors;
- (id)peopleUIDsForRowIndexes:(id)arg1;
- (id)personEntries;
- (void)personEntriesDidChange:(id)arg1;
- (id)personEntriesList;
- (BOOL)personList:(id)arg1 acceptFilenamesDrop:(id)arg2;
- (BOOL)personList:(id)arg1 acceptGroupsDrop:(id)arg2;
- (void)personList:(id)arg1 didSelectEntries:(id)arg2;
- (unsigned long long)personList:(id)arg1 validateFilenamesDrop:(id)arg2;
- (unsigned long long)personList:(id)arg1 validateGroupsDrop:(id)arg2;
- (void)personListDidDoubleClick:(id)arg1;
- (id)pickerView;
- (id)properties;
- (id)propertyDescriptions;
- (void)rearrangeObjects;
- (id)recordsForGroups:(id)arg1;
- (void)reflectChangesInUIForNotificationUserInfo:(id)arg1;
- (void)removeInstantMessageService:(id)arg1;
- (void)removeProperty:(id)arg1;
- (void)restoreSelection;
- (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(id)arg3;
- (void)saveAutosaveValues;
- (void)saveSelection;
- (void)scrollVisibleToSelectedRow;
- (id)searchController;
- (void)searchControllerDidBeginSearching:(id)arg1;
- (void)searchControllerDidCancelSearching:(id)arg1;
- (void)searchControllerDidFinishSearching:(id)arg1;
- (void)searchControllerDidUpdateSearch:(id)arg1;
- (void)searchControllerWillBeginSearching:(id)arg1;
- (void)searchOperation:(id)arg1 foundRecords:(id)arg2;
- (void)selectColumnIdentifier:(id)arg1;
- (void)selectGroup:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (void)selectIdentifier:(id)arg1 forPerson:(id)arg2 byExtendingSelection:(BOOL)arg3;
- (void)selectNext:(id)arg1;
- (void)selectPrevious:(id)arg1;
- (void)selectRecord:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (id)selectedEntries;
- (id)selectedGroups;
- (id)selectedIdentifiersForEntry:(id)arg1;
- (id)selectedIdentifiersForPerson:(id)arg1;
- (id)selectedRecords;
- (id)selectedValues;
- (id)selectedValuesForEntry:(id)arg1;
- (void)setAccessoryView:(id)arg1;
- (void)setAccount:(id)arg1;
- (void)setAccounts:(id)arg1;
- (void)setAddressBook:(id)arg1;
- (void)setAllowsGroupSelection:(BOOL)arg1;
- (void)setAllowsMultipleSelection:(BOOL)arg1;
- (void)setAutosaveName:(id)arg1;
- (void)setCardEditingMode:(BOOL)arg1;
- (void)setColumnTitle:(id)arg1 forProperty:(id)arg2;
- (void)setDisplayedGroup:(id)arg1;
- (void)setDisplayedProperty:(id)arg1;
- (void)setFilterTerms:(id)arg1;
- (void)setGroupDoubleAction:(SEL)arg1;
- (void)setHasTableBorder:(BOOL)arg1;
- (void)setHeadliner:(id)arg1;
- (void)setInDistributionListEditor:(BOOL)arg1;
- (void)setNameDoubleAction:(SEL)arg1;
- (void)setPeopleSortDescriptors:(id)arg1;
- (void)setPersonEntriesList:(id)arg1;
- (void)setPropertyDescriptions:(id)arg1;
- (void)setSearchController:(id)arg1;
- (void)setSelectedEntries:(id)arg1;
- (void)setShouldUnifyPeople:(BOOL)arg1;
- (void)setShowsDirectories:(BOOL)arg1;
- (void)setTarget:(id)arg1;
- (void)setTypes:(id)arg1 forProperty:(id)arg2;
- (void)setValueSelectionBehavior:(int)arg1;
- (BOOL)shouldDrawHorizontalSeparators;
- (BOOL)shouldIncludeGroups;
- (BOOL)shouldIncludeLinkedPeople;
- (BOOL)shouldUnifyPeople;
- (BOOL)showsDirectories;
- (BOOL)sourceListHasFocus;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize { double x1; double x2; })arg2;
- (void)swipeWithEvent:(id)arg1;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (double)tableView:(id)arg1 heightOfSubrow:(long long)arg2 ofRow:(long long)arg3;
- (id)tableView:(id)arg1 namesOfPromisedFilesDroppedAtDestination:(id)arg2 forDraggedRowsWithIndexes:(id)arg3;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 userClickedSubrow:(long long)arg2 ofRow:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (void)tableViewColumnDidResize:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)target;
- (id)testWindow;
- (void)toggleCardEditingMode:(id)arg1;
- (void)tweakSearchField;
- (void)updateCanEditSelectedContacts;
- (void)updateCardStatusText;
- (void)updateFilterPredicate;
- (void)updateSuggestedContacts;
- (int)valueSelectionBehavior;
- (void)window:(id)arg1 willEncodeRestorableState:(id)arg2;
- (void)writePeopleUIDs:(id)arg1 groupUIDs:(id)arg2 toPasteboard:(id)arg3;
- (void)writeSplitViewColumnWidthsToPrefs:(BOOL)arg1;

@end
