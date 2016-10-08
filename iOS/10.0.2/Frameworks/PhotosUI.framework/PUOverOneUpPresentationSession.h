/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUOverOneUpPresentationSession : NSObject <PLDismissableViewController, PUAvalancheReviewControllerDelegate, PUCollectionViewLayoutProvider, PUOneUpPhotosSharingTransitionDelegate, PUPhotoEditViewControllerPresentationDelegate, PUPhotoMarkupViewControllerObserver, PUPhotosSharingViewControllerDelegate, PUSlideshowViewControllerDelegate, PUVideoEditViewControllerPresentationDelegate> {
    PUAvalancheReviewController * __avalancheReviewController;
    PUEditViewController * __editViewController;
    bool  __needsUpdatePresentedViewControllers;
    PUPhotoMarkupViewController * __photoMarkupViewController;
    struct NSHashTable { Class x1; } * __presentedViewControllers;
    PUPhotosSharingViewController * __sharingViewController;
    PUSlideshowViewController * __slideshowViewController;
    PUAssetReference * __stashedAssetReference;
    <PUOverOneUpPresentationSessionBarsDelegate> * _barsDelegate;
    struct { 
        bool respondsToActivities; 
        bool respondsToBarButtonItem; 
    }  _barsDelegateFlags;
    <PUOverOneUpPresentationSessionDelegate> * _delegate;
    struct { 
        bool respondsToTilingView; 
        bool respondsToViewController; 
        bool respondsToBrowsingViewModel; 
        bool respondsToDidPresent; 
        bool respondsToDidFinish; 
        bool respondsToIsReady; 
    }  _delegateFlags;
}

@property (setter=_setAvalancheReviewController:, nonatomic, retain) PUAvalancheReviewController *_avalancheReviewController;
@property (setter=_setEditViewController:, nonatomic, retain) PUEditViewController *_editViewController;
@property (setter=_setNeedsUpdatePresentedViewControllers:, nonatomic) bool _needsUpdatePresentedViewControllers;
@property (setter=_setPhotoMarkupViewController:, nonatomic, retain) PUPhotoMarkupViewController *_photoMarkupViewController;
@property (setter=_setPresentedViewControllers:, nonatomic, retain) NSHashTable *_presentedViewControllers;
@property (setter=_setSharingViewController:, nonatomic, retain) PUPhotosSharingViewController *_sharingViewController;
@property (setter=_setSlideshowViewController:, nonatomic, retain) PUSlideshowViewController *_slideshowViewController;
@property (setter=_setStashedAssetReference:, nonatomic, copy) PUAssetReference *_stashedAssetReference;
@property (nonatomic) <PUOverOneUpPresentationSessionBarsDelegate> *barsDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUOverOneUpPresentationSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_assetCollectionsDataSourceForCurrentModalViewController;
- (id)_assetReferenceAtGlobalIndex:(long long)arg1;
- (id)_assetReferenceFromAsset:(id)arg1 hintIndexPath:(id)arg2 hintCollection:(id)arg3;
- (id)_assetsDataSource;
- (id)_avalancheReviewController;
- (id)_currentTileController;
- (bool)_dismissAvalancheReviewController:(id)arg1 animated:(bool)arg2 completionHandler:(id /* block */)arg3;
- (bool)_dismissEditViewController:(id)arg1 animated:(bool)arg2 completionHandler:(id /* block */)arg3;
- (bool)_dismissPhotoMarkupViewController:(id)arg1 animated:(bool)arg2 completionHandler:(id /* block */)arg3;
- (bool)_dismissPhotosSharingViewController:(id)arg1 animated:(bool)arg2 completionHandler:(id /* block */)arg3;
- (bool)_dismissSlideshowViewController:(id)arg1 animated:(bool)arg2 completionHandler:(id /* block */)arg3;
- (id)_editViewController;
- (void)_finalizeAvalancheReviewControllerDismiss;
- (void)_finalizeSharingViewControllerDismiss;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameAtIndexPath:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForAssetReference:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForItemAtIndexPath:(id)arg1 inAssetCollectionsDataSource:(id)arg2 allowZoom:(bool)arg3;
- (long long)_globalIndexForAssetReference:(id)arg1;
- (long long)_globalIndexForIndexPath:(id)arg1;
- (id)_indexPathForGlobalIndex:(long long)arg1;
- (void)_invalidatePresentedViewControllers;
- (bool)_needsUpdatePresentedViewControllers;
- (long long)_numberOfItems;
- (void)_performNavigationRequestForAssetDisplayDescriptor:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_photoMarkupViewController;
- (void)_prepareForSharingViewControllerDismiss:(id)arg1 withAsset:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)_presentAvalancheReviewController:(id)arg1;
- (bool)_presentEditViewController:(id)arg1;
- (bool)_presentPhotoMarkupViewController:(id)arg1;
- (bool)_presentPhotosSharingViewController:(id)arg1;
- (bool)_presentScreenRoutePickerViewController:(id)arg1;
- (bool)_presentSlideshowViewController:(id)arg1;
- (struct NSHashTable { Class x1; }*)_presentedViewControllers;
- (void)_setAvalancheReviewController:(id)arg1;
- (void)_setEditViewController:(id)arg1;
- (void)_setNeedsUpdatePresentedViewControllers:(bool)arg1;
- (void)_setPhotoMarkupViewController:(id)arg1;
- (void)_setPresentedViewControllers:(struct NSHashTable { Class x1; }*)arg1;
- (void)_setSharingViewController:(id)arg1;
- (void)_setSlideshowViewController:(id)arg1;
- (void)_setStashedAssetReference:(id)arg1;
- (id)_sharingViewController;
- (id)_slideshowViewController;
- (id)_stashedAssetReference;
- (long long)_tileCountForCurrentModalViewController;
- (id)_tilingView;
- (void)_updatePresentedViewControllersIfNeeded;
- (id)_viewModel;
- (void)avalancheReviewControllerDidComplete:(id)arg1 animated:(bool)arg2;
- (void)avalancheReviewControllerDidComplete:(id)arg1 withAsset:(id)arg2 animated:(bool)arg3;
- (id)barsDelegate;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (id)delegate;
- (void)dismissViewController:(id)arg1 animated:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)finishOverOneUpPresentationSessionDismissForced:(bool)arg1 animated:(bool)arg2;
- (bool)isPresentingAnOverOneUpViewController;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)photoEditController:(id)arg1 didFinishPreparingForTransitionAfterEditingAsset:(id)arg2;
- (void)photoMarkupController:(id)arg1 didFinishWithSavedAsset:(id)arg2;
- (struct CGPoint { double x1; double x2; })photosSharingTransition:(id)arg1 contentOffsetForAssetReference:(id)arg2;
- (id)photosSharingTransition:(id)arg1 layoutForAssetReference:(id)arg2;
- (void)photosSharingTransition:(id)arg1 setVisibility:(bool)arg2 forAssetReference:(id)arg3;
- (id)photosSharingTransitionTransitioningView:(id)arg1;
- (void)photosSharingTransitionWillAnimateDismissal:(id)arg1;
- (void)photosSharingTransitionWillAnimatePresentation:(id)arg1;
- (void)photosSharingViewController:(id)arg1 didCompleteWithActivityType:(id)arg2 success:(bool)arg3 withAsset:(id)arg4;
- (void)photosSharingViewControllerDidCancel:(id)arg1 needsDismiss:(bool)arg2;
- (void)photosSharingViewControllerWillCancel:(id)arg1 withAsset:(id)arg2;
- (void)ppt_cancelActivity;
- (void)ppt_dismissShareSheetWithCompletion:(id /* block */)arg1;
- (void)ppt_presentPhotoEditor;
- (void)ppt_presentShareSheetWithCompletion:(id /* block */)arg1;
- (void)ppt_shareUsing:(id)arg1;
- (void)ppt_tapNextButton:(id /* block */)arg1;
- (bool)prepareForDismissingForced:(bool)arg1;
- (bool)presentViewController:(id)arg1 animated:(bool)arg2;
- (void)setBarsDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)slideshowViewControllerDidFinish:(id)arg1 withVisibleAssets:(id)arg2;
- (void)videoEditViewController:(id)arg1 didFinishPreparingForTransitionAfterEditingAsset:(id)arg2 modificationDate:(id)arg3 seekTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (id)viewController;

@end
