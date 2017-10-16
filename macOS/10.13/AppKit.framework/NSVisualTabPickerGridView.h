/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSVisualTabPickerGridView : NSView <NSVisualTabPickerTileContainerDataSource, NSVisualTabPickerTileContainerDelegate> {
    NSMutableArray * _additionalVerticalOffsetForTilesAtRow;
    NSMutableArray * _arrayOfTabItemsPerContainer;
    NSMutableDictionary * _cachedSnapshots;
    unsigned long long  _currentMaximumNumberOfContainersPerRow;
    <NSVisualTabPickerGridViewDataSource> * _dataSource;
    <NSVisualTabPickerGridViewDelegate> * _delegate;
    BOOL  _didStartEntryAnimation;
    BOOL  _gridAnimationInProgress;
    NSView * _gridContainerView;
    double  _leftGridOffset;
    BOOL  _shouldDisplayHostnameForThumbnailContainers;
    BOOL  _shouldHighlightTiles;
    BOOL  _shouldShowCloseButtons;
    BOOL  _shouldShowNewTabButton;
    NSMutableArray * _tileContainerViews;
    double  _tileHeight;
    double  _tileWidth;
    NSVisualTabPickerRootViewController * _visualTabPickerViewController;
}

@property (nonatomic, readwrite) <NSVisualTabPickerGridViewDataSource> *dataSource;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (nonatomic, readwrite) <NSVisualTabPickerGridViewDelegate> *delegate;
@property (atomic, readonly, copy) NSString *description;
@property (nonatomic, readonly) BOOL gridAnimationInProgress;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readonly) BOOL shouldDisplayHostnameForThumbnailContainers;
@property (nonatomic, readwrite) BOOL shouldHighlightTiles;
@property (nonatomic, readwrite) BOOL shouldShowCloseButtons;
@property (nonatomic, readwrite) BOOL shouldShowNewTabButton;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readwrite) NSVisualTabPickerRootViewController *visualTabPickerViewController;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

- (void).cxx_destruct;
- (void)_addContainerViewAtIndex:(unsigned long long)arg1 isVisible:(BOOL)arg2;
- (void)_addCreateNewTabContainerView;
- (double)_additionalHeightTakenByStackedTilesForRow:(unsigned long long)arg1;
- (void)_computeArrayOfTabItemsPerContainer;
- (void)_computeLayoutConstants;
- (void)_containerViewForTabItem:(id)arg1 containerView:(id*)arg2 indexInContainerView:(unsigned long long*)arg3;
- (void)_dispatchMouseEventToTileContainers:(id)arg1;
- (void)_entryAnimationHasFinished;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForTileAtIndex:(unsigned long long)arg1;
- (void)_getHorizontalLeftOffset:(double*)arg1 rightOffset:(double*)arg2;
- (void)_hideTilesNotVisibleDuringExitAnimation;
- (double)_horizontalMargin;
- (unsigned long long)_indexForContainerView:(id)arg1;
- (unsigned long long)_indexOfContainerForTabViewItem:(id)arg1;
- (unsigned long long)_maximumNumberOfContainersPerRow;
- (unsigned long long)_numberOfRows;
- (unsigned long long)_numberOfTilesInGridView;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfVisibleTiles;
- (void)_resetGridView;
- (void)_setUpContainerViews;
- (void)_setUpGridContainer;
- (BOOL)_shouldDisplayNewTabContainer;
- (void)_startGridAnimation:(long long)arg1 completionHandler:(id)arg2;
- (id)_tabViewItemAtIndex:(unsigned long long)arg1 inContainerAtIndex:(unsigned long long)arg2;
- (id)_tabViewItemAtIndex:(unsigned long long)arg1 inContainerView:(id)arg2;
- (void)_unhideAllTiles;
- (void)_updateSize;
- (void)_updateTilePositions;
- (void)_willStartExitAnimation;

// Image: /Applications/Xcode.app/Contents/Developer/usr/lib/libMainThreadChecker.dylib

- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (void)addTabViewItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)canCloseNSVisualTabPickerTileContainerView:(id)arg1;
- (id)dataSource;
- (id)delegate;
- (void)didRequestNewTabForNSVisualTabPickerTileContainerView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfSelectedTile;
- (BOOL)gridAnimationInProgress;
- (double)gridViewContentHeight;
- (void)hideCloseButtons;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 visualTabPickerViewController:(id)arg2;
- (void)mouseEntered:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (unsigned long long)numberOfTilesInNSVisualTabPickerTileContainerView:(id)arg1;
- (void)reloadGridView;
- (void)reloadTabViewItem:(id)arg1;
- (void)removeTabViewItem:(id)arg1;
- (void)selectTabBarItem:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrameSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setShouldHighlightTiles:(BOOL)arg1;
- (void)setShouldShowCloseButtons:(BOOL)arg1;
- (void)setShouldShowNewTabButton:(BOOL)arg1;
- (void)setVisualTabPickerViewController:(id)arg1;
- (BOOL)shouldDisplayHostnameForThumbnailContainers;
- (BOOL)shouldHighlightTiles;
- (BOOL)shouldShowCloseButtons;
- (BOOL)shouldShowNewTabButton;
- (void)startGridAnimation:(long long)arg1 completionHandler:(id)arg2;
- (id)titleForNSVisualTabPickerTileContainerView:(id)arg1;
- (void)updateGridViewLayout;
- (void)visualTabPickerTileContainerView:(id)arg1 closeTileAtIndex:(unsigned long long)arg2;
- (void)visualTabPickerTileContainerView:(id)arg1 didSelectTileAtIndex:(unsigned long long)arg2;
- (id)visualTabPickerTileContainerView:(id)arg1 titleForTileAtIndex:(unsigned long long)arg2;
- (id)visualTabPickerTileContainerView:(id)arg1 viewForTileAtIndex:(unsigned long long)arg2;
- (id)visualTabPickerViewController;

@end
