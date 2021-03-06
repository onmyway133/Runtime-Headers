/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSColorPanelFavoritesList : NSView <NSCollectionViewDataSource, NSCollectionViewDelegate, NSUserInterfaceValidations> {
    NSCollectionView * _collectionView;
    id  _colorSelectionHandler;
    NSArray * _savedColors;
    NSArray * _savedColorsStoreIndexes;
}

@property (atomic, readwrite, copy) id colorSelectionHandler;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) NSArray *presentedColors;
@property (atomic, readonly) Class superclass;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

- (void)_commonInit;
- (void)_favoritesDidChange:(id)arg1;
- (void)dealloc;

// Image: /Applications/Xcode.app/Contents/Developer/usr/lib/libMainThreadChecker.dylib

- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (BOOL)collectionView:(id)arg1 acceptDrop:(id)arg2 indexPath:(id)arg3 dropOperation:(long long)arg4;
- (BOOL)collectionView:(id)arg1 canDragItemsAtIndexPaths:(id)arg2 withEvent:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemsAtIndexPaths:(id)arg2;
- (void)collectionView:(id)arg1 draggingSession:(id)arg2 endedAtPoint:(struct CGPoint { double x1; double x2; })arg3 dragOperation:(unsigned long long)arg4;
- (id)collectionView:(id)arg1 itemForRepresentedObjectAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 shouldDeselectItemsAtIndexPaths:(id)arg2;
- (id)collectionView:(id)arg1 shouldSelectItemsAtIndexPaths:(id)arg2;
- (unsigned long long)collectionView:(id)arg1 validateDrop:(id)arg2 proposedIndexPath:(id*)arg3 dropOperation:(long long*)arg4;
- (BOOL)collectionView:(id)arg1 writeItemsAtIndexPaths:(id)arg2 toPasteboard:(id)arg3;
- (id)colorSelectionHandler;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)delete:(id)arg1;
- (void)deleteBackward:(id)arg1;
- (void)deleteBackwardByDecomposingPreviousCharacter:(id)arg1;
- (void)deleteCurrentColorAndSelectNext;
- (void)deleteCurrentColorAndSelectPrevious;
- (void)deleteForward:(id)arg1;
- (void)deleteToBeginningOfLine:(id)arg1;
- (void)deleteToBeginningOfParagraph:(id)arg1;
- (void)deleteToEndOfLine:(id)arg1;
- (void)deleteToEndOfParagraph:(id)arg1;
- (void)deleteWordBackward:(id)arg1;
- (void)deleteWordForward:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)paste:(id)arg1;
- (id)presentedColors;
- (id)savedColors;
- (void)setColorSelectionHandler:(id)arg1;
- (void)setSavedColors:(id)arg1;
- (long long)storeIndexForColorIndex:(long long)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;

@end
