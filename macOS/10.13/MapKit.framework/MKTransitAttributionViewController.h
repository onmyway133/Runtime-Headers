/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
 */

@interface MKTransitAttributionViewController : _MKClickableTableViewController <GEOResourceManifestTileGroupObserver, MKModuleViewControllerProtocol, _MKInfoCardChildViewControllerAnalyticsDelegate> {
    <MKTransitAttributionViewControllerDelegate> * _delegate;
    BOOL  _isAttributionURLAvailable;
    <GEOTransitLineItem> * _lineItem;
    MKMapItem * _mapItem;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (nonatomic, readwrite) <MKTransitAttributionViewControllerDelegate> *delegate;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readwrite, retain) <GEOTransitLineItem> *lineItem;
@property (nonatomic, readwrite, retain) MKMapItem *mapItem;
@property (atomic, readonly) Class superclass;

- (void).cxx_destruct;
- (id)_attribution;
- (id)_attributionCell;
- (void)_commonInit;
- (BOOL)_hasAttribution;
- (void)_presentTransitAttributionDetails;
- (void)_transitInfoUpdated;
- (void)dealloc;
- (id)delegate;
- (id)initWithMapItem:(id)arg1;
- (id)initWithTransitLineItem:(id)arg1;
- (id)lineItem;
- (id)mapItem;
- (long long)numberOfRowsInTableView:(id)arg1;
- (BOOL)requiresPreferredContentSizeInStackingView;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLineItem:(id)arg1;
- (void)setMapItem:(id)arg1;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (void)tableView:(id)arg1 mouseUpOnRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldClickRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
