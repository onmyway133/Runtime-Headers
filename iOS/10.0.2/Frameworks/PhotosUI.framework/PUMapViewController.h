/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUMapViewController : UIViewController <MKMapViewDelegate, PLDismissableViewController, PUMapAnnotationManagerDataSource, PUOneUpPresentationHelperDelegate, PUPhotoBrowserZoomTransitionDelegate, PUStackedAlbumTransitionDelegate, PXPhotoLibraryUIChangeObserver> {
    PUOneUpPresentationHelper * __oneUpPresentationHelper;
    PUDisplayLink * __oneUpPresentationHelperDisplayLink;
    PUPhotoBrowserOneUpPresentationAdaptor * __photoBrowserOneUpPresentationAdaptor;
    PUMapAnnotationManager * _annotationManager;
    struct CGSize { 
        double width; 
        double height; 
    }  _annotationSize;
    double  _annotationWidth;
    PHFetchResult * _assetsFetchResult;
    double  _borderAnnotationPadding;
    NSObject<PLDiagnosticsProvider> * _diagnosticsProvider;
    NSMutableArray * _mapAnnotations;
    NSArray * _mapItems;
    MKMapView * _mapView;
    unsigned long long  _maxItemsInitialZoom;
    bool  _shouldShowTabBar;
    bool  _shouldShowToolbar;
    PUMapViewControllerSpec * _spec;
    bool  _updatedInitialAnnotations;
    bool  _useCurrentUserLocation;
}

@property (setter=_setOneUpPresentationHelper:, nonatomic, retain) PUOneUpPresentationHelper *_oneUpPresentationHelper;
@property (setter=_setOneUpPresentationHelperDisplayLink:, nonatomic, retain) PUDisplayLink *_oneUpPresentationHelperDisplayLink;
@property (setter=_setPhotoBrowserOneUpPresentationAdaptor:, nonatomic, retain) PUPhotoBrowserOneUpPresentationAdaptor *_photoBrowserOneUpPresentationAdaptor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<PLDiagnosticsProvider> *diagnosticsProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long maxItemsInitialZoom;
@property (nonatomic) bool shouldShowTabBar;
@property (nonatomic) bool shouldShowToolbar;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addLocationsToArray:(id)arg1 forInitialZoomWithMapItems:(id)arg2;
- (id)_annotationViewForPhotoToken:(id)arg1;
- (void)_createAnnotationManager;
- (void)_displayDetailsForAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)_ensureOneUpPresentationHelperWithFetchResult:(id)arg1;
- (void)_handleReportButton:(id)arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_mapRectWithDefaultZoomCenteredAtCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (id)_oneUpPresentationHelper;
- (id)_oneUpPresentationHelperDisplayLink;
- (id)_photoBrowserOneUpPresentationAdaptor;
- (id)_puAnnotationViewForAnnotation:(id)arg1;
- (void)_setOneUpPresentationHelper:(id)arg1;
- (void)_setOneUpPresentationHelperDisplayLink:(id)arg1;
- (void)_setPhotoBrowserOneUpPresentationAdaptor:(id)arg1;
- (void)_showLocations:(id)arg1 animated:(bool)arg2;
- (void)_updateAnnotationsForMapItems:(id)arg1;
- (void)_updateAnnotationsForMapItems:(id)arg1 shouldScroll:(bool)arg2;
- (void)_updateMapAssets;
- (void)_updateNavItem;
- (void)dealloc;
- (id)diagnosticsProvider;
- (void)didReceiveMemoryWarning;
- (id)init;
- (id)initWithSpec:(id)arg1 assetsFetchResult:(id)arg2;
- (id)mapAnnotationManager:(id)arg1 aggregateAnnotationForAnnotations:(id)arg2 averageCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg3;
- (void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(bool)arg2;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(bool)arg2;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (unsigned long long)maxItemsInitialZoom;
- (void)oneUpPresentationHelper:(id)arg1 didDismissOneUpViewController:(id)arg2;
- (bool)oneUpPresentationHelperDisableFinalFadeoutAnimation:(id)arg1;
- (bool)oneUpPresentationHelperShouldLeaveContentOnSecondScreen:(id)arg1;
- (id)oneUpPresentationHelperViewController:(id)arg1;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (bool)prepareForDismissingForced:(bool)arg1;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (bool)pu_wantsTabBarVisible;
- (bool)pu_wantsToolbarVisible;
- (void)setDiagnosticsProvider:(id)arg1;
- (void)setMaxItemsInitialZoom:(unsigned long long)arg1;
- (void)setShouldShowTabBar:(bool)arg1;
- (void)setShouldShowToolbar:(bool)arg1;
- (bool)shouldShowTabBar;
- (bool)shouldShowToolbar;
- (id)stackedAlbumTransition:(id)arg1 layoutForCollection:(id)arg2 forCollectionView:(id)arg3;
- (void)stackedAlbumTransition:(id)arg1 setVisibility:(bool)arg2 forCollection:(id)arg3;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })zoomTransition:(id)arg1 frameForPhotoToken:(id)arg2 operation:(long long)arg3;
- (bool)zoomTransition:(id)arg1 getFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 contentMode:(long long*)arg3 cropInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg4 forPhotoToken:(id)arg5 operation:(long long)arg6;
- (id)zoomTransition:(id)arg1 photoTokenForPhoto:(id)arg2 inCollection:(id)arg3;
- (void)zoomTransition:(id)arg1 setVisibility:(bool)arg2 forPhotoToken:(id)arg3;

@end
