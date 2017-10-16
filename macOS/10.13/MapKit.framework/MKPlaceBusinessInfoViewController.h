/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
 */

@interface MKPlaceBusinessInfoViewController : MKPlaceSectionViewController <MKModuleViewControllerProtocol, _MKInfoCardChildViewControllerAnalyticsDelegate> {
    _MKPlaceBusinessInfoRow * _businessInfoRow;
    MKPlaceSectionHeaderView * _headerView;
    MKMapItem * _mapItem;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readwrite, retain) MKMapItem *mapItem;
@property (atomic, readonly) Class superclass;

+ (BOOL)mapItemHasBusinessInfoToDisplay:(id)arg1;

- (void).cxx_destruct;
- (void)_updateBusinessInfo;
- (id)infoCardChildUnactionableUIElements;
- (void)infoCardThemeChanged:(id)arg1;
- (id)mapItem;
- (void)setMapItem:(id)arg1;
- (void)viewDidLoad;

@end
