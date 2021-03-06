/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
 */

@interface MKPlaceCardActionsRowViewController : _MKUIViewController <MKActionRowItemViewDelegate, MKModuleViewControllerProtocol> {
    NSArray * _actionButtons;
    MKPlaceActionManager * _actionManager;
    NSArray * _actionRowsArray;
    NSArray * _constraints;
    MKPlaceSectionItemView * _hairlineView;
    NSArray * _items;
    NSLayoutGuide * _marginLayoutguide;
    unsigned long long  _maxButtonsPerRow;
    unsigned long long  _style;
}

@property (nonatomic, readwrite) MKPlaceActionManager *actionManager;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readwrite, copy) NSArray *items;
@property (atomic, readonly) Class superclass;

- (void).cxx_destruct;
- (id)actionManager;
- (void)actionRowSelected:(id)arg1;
- (void)createActionViews;
- (void)createActions;
- (void)createConstraints;
- (void)infoCardThemeChanged:(id)arg1;
- (id)initWithStyle:(unsigned long long)arg1;
- (id)items;
- (void)layoutButtons;
- (void)loadView;
- (unsigned long long)maxButtonsPerRow;
- (void)setActionManager:(id)arg1;
- (void)setItems:(id)arg1;
- (void)viewDidLayout;
- (void)viewDidLoad;

@end
