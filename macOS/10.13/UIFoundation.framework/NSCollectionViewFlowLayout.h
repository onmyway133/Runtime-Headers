/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
 */

@interface NSCollectionViewFlowLayout : NSCollectionViewLayout {
    NSMutableIndexSet * _collapsedSectionIndexes;
    NSMutableDictionary * _collapsedSectionScrollOffsets;
    struct CGPoint { 
        double x; 
        double y; 
    }  _contentOffsetAdjustment;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSizeAdjustment;
    struct CGSize { 
        double width; 
        double height; 
    }  _currentLayoutSize;
    _NSFlowLayoutInfo * _data;
    NSMutableDictionary * _deletedItemsAttributesDict;
    NSMutableDictionary * _deletedSectionFootersAttributesDict;
    NSMutableDictionary * _deletedSectionHeadersAttributesDict;
    struct CGSize { 
        double width; 
        double height; 
    }  _estimatedItemSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _footerReferenceSize;
    struct { 
        unsigned int delegateSizeForItem : 1; 
        unsigned int delegateSizeForInsertionGap : 1; 
        unsigned int delegateReferenceSizeForHeader : 1; 
        unsigned int delegateReferenceSizeForFooter : 1; 
        unsigned int delegateInsetForSection : 1; 
        unsigned int delegateInteritemSpacingForSection : 1; 
        unsigned int delegateLineSpacingForSection : 1; 
        unsigned int delegateAlignmentOptions : 1; 
        unsigned int layoutDataIsValid : 1; 
        unsigned int delegateInfoIsValid : 1; 
        unsigned int roundsToScreenScale : 1; 
        unsigned int delegateSizesForSection : 1; 
        unsigned int sectionHeadersFloat : 1; 
        unsigned int sectionFootersFloat : 1; 
        unsigned int headerFollowsSectionMargins : 1; 
        unsigned int footerFollowsSectionMargins : 1; 
        unsigned int isSingleColumnOrRow : 1; 
        unsigned int collapsesSectionsToFirstItem : 1; 
        unsigned int suppressGapOpening : 1; 
    }  _gridLayoutFlags;
    struct CGSize { 
        double width; 
        double height; 
    }  _headerReferenceSize;
    NSMutableArray * _indexPathsToValidate;
    NSMutableDictionary * _insertedItemsAttributesDict;
    NSMutableDictionary * _insertedSectionFootersAttributesDict;
    NSMutableDictionary * _insertedSectionHeadersAttributesDict;
    double  _interitemSpacing;
    struct CGSize { 
        double width; 
        double height; 
    }  _itemSize;
    double  _lineSpacing;
    NSDictionary * _rowAlignmentsOptionsDictionary;
    long long  _scrollDirection;
    struct NSEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _sectionInset;
}

@property (nonatomic, readwrite) struct CGSize { double x1; double x2; } estimatedItemSize;
@property (getter=_estimatesSizes, nonatomic, readonly) BOOL estimatesSizes;
@property (nonatomic, readwrite) struct CGSize { double x1; double x2; } footerReferenceSize;
@property (nonatomic, readwrite) struct CGSize { double x1; double x2; } headerReferenceSize;
@property (nonatomic, readwrite) struct CGSize { double x1; double x2; } itemSize;
@property (nonatomic, readwrite) double minimumInteritemSpacing;
@property (nonatomic, readwrite) double minimumLineSpacing;
@property (nonatomic, readwrite) long long scrollDirection;
@property (atomic, readwrite) BOOL sectionFootersPinToVisibleBounds;
@property (atomic, readwrite) BOOL sectionHeadersPinToVisibleBounds;
@property (nonatomic, readwrite) struct NSEdgeInsets { double x1; double x2; double x3; double x4; } sectionInset;
@property (getter=_suppressGapOpening, atomic, readonly) BOOL suppressGapOpening;

+ (Class)invalidationContextClass;

- (void).cxx_destruct;
- (BOOL)_autoscrollSectionWithEvent:(id)arg1;
- (BOOL)_boundsAndInsetsAreValidForReferenceDimension;
- (struct CGSize { double x1; double x2; })_cachedSizeForInsertionGap;
- (void)_calculateAttributesForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)_cellsShouldConferWithAutolayoutEngineForSizingInfo;
- (void)_collapseSectionAtIndex:(unsigned long long)arg1;
- (id)_collapsedSectionIndexes;
- (id)_collapsedSectionScrollOffsets;
- (BOOL)_collapsesSectionsToFirstItem;
- (double)_dimensionFromCollectionView;
- (struct CGSize { double x1; double x2; })_effectiveEstimatedItemSize;
- (BOOL)_estimatesSizes;
- (id)_existingLayoutAttributesForItemAtIndexPath:(id)arg1;
- (void)_expandSectionAtIndex:(unsigned long long)arg1;
- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })_fastScrollingIndexBarInsets;
- (id)_fetchAndCacheNewLayoutAttributesForCellWithIndexPath:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_fetchItemsInfoForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_findCollapseButtonForSectionAtIndex:(unsigned long long)arg1;
- (BOOL)_footerFollowsSectionMargins;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForFooterInSection:(long long)arg1 usingData:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForFooterInSection:(long long)arg1 usingData:(id)arg2 floated:(BOOL*)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForHeaderInSection:(long long)arg1 usingData:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForHeaderInSection:(long long)arg1 usingData:(id)arg2 floated:(BOOL*)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForItem:(long long)arg1 inSection:(long long)arg2 usingData:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForSectionAtIndex:(unsigned long long)arg1;
- (void)_getSizingInfosWithExistingSizingDictionary:(id)arg1;
- (BOOL)_headerFollowsSectionMargins;
- (void)_invalidateButKeepAllInfo;
- (void)_invalidateButKeepDelegateInfo;
- (BOOL)_isSingleColumnOrRow;
- (id)_layoutAttributesForItemsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_makeCollapsedSectionIndexes;
- (id)_makeCollapsedSectionScrollOffsets;
- (void)_resetCachedItems;
- (BOOL)_roundsToScreenScale;
- (id)_rowAlignmentOptions;
- (void)_scrollCollapsedSection:(id)arg1 atIndex:(unsigned long long)arg2 byDelta:(double)arg3;
- (double)_scrollOffsetForCollapsedSection:(id)arg1 atIndex:(unsigned long long)arg2;
- (double)_scrollOffsetForCollapsedSectionAtIndex:(unsigned long long)arg1;
- (BOOL)_scrollSectionWithEvent:(id)arg1;
- (void)_scrollToItemsAtIndexPaths:(id)arg1 scrollPosition:(unsigned long long)arg2;
- (long long)_sectionArrayIndexForIndexPath:(id)arg1;
- (BOOL)_sectionAtIndex:(unsigned long long)arg1 shouldShowCollapseButton:(BOOL)arg2;
- (BOOL)_sectionAtIndexIsCollapsed:(unsigned long long)arg1;
- (void)_setCachedSizeForInsertionGap:(struct CGSize { double x1; double x2; })arg1;
- (void)_setCollapsesSectionsToFirstItem:(BOOL)arg1;
- (void)_setFooterFollowsSectionMargins:(BOOL)arg1;
- (void)_setHeaderFollowsSectionMargins:(BOOL)arg1;
- (void)_setNeedsLayoutComputationWithoutInvalidation;
- (void)_setRoundsToScreenScale:(BOOL)arg1;
- (void)_setRowAlignmentsOptions:(id)arg1;
- (double)_setScrollOffset:(double)arg1 forCollapsedSection:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)_setSingleColumnOrRow:(BOOL)arg1;
- (void)_shiftCollapsedSectionIndexesForDeleteOfSectionAtIndex:(long long)arg1;
- (void)_shiftCollapsedSectionIndexesForInsertOfSectionAtIndex:(long long)arg1;
- (void)_shiftCollapsedSectionIndexesForMoveOfSectionFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (BOOL)_shouldScrollToContentBeginningInRightToLeft;
- (struct CGSize { double x1; double x2; })_sizeForInsertionGap;
- (BOOL)_suppressGapOpening;
- (void)_updateCollapsedSectionTrackingForUpdate:(id)arg1;
- (void)_updateContentSizeScrollingDimensionWithDelta:(double)arg1;
- (void)_updateDelegateFlags;
- (void)_updateItemsLayoutForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 allowsPartialUpdate:(BOOL)arg2;
- (void)collapseSectionAtIndex:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (void)encodeWithCoder:(id)arg1;
- (struct CGSize { double x1; double x2; })estimatedItemSize;
- (void)expandSectionAtIndex:(unsigned long long)arg1;
- (id)finalLayoutAttributesForDeletedItemAtIndexPath:(id)arg1;
- (id)finalLayoutAttributesForFooterInDeletedSection:(long long)arg1;
- (id)finalLayoutAttributesForHeaderInDeletedSection:(long long)arg1;
- (void)finalizeCollectionViewUpdates;
- (struct CGSize { double x1; double x2; })footerReferenceSize;
- (struct CGSize { double x1; double x2; })headerReferenceSize;
- (id)indexPathForItemAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)indexesForSectionFootersInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)indexesForSectionFootersInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 usingData:(id)arg2;
- (id)indexesForSectionHeadersInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)indexesForSectionHeadersInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 usingData:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initialLayoutAttributesForFooterInInsertedSection:(long long)arg1;
- (id)initialLayoutAttributesForHeaderInInsertedSection:(long long)arg1;
- (id)initialLayoutAttributesForInsertedItemAtIndexPath:(id)arg1;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)invalidationContextForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2;
- (struct CGSize { double x1; double x2; })itemSize;
- (id)layoutAttributesForDropTargetAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForFooterInSection:(long long)arg1;
- (id)layoutAttributesForFooterInSection:(long long)arg1 usingData:(id)arg2;
- (id)layoutAttributesForHeaderInSection:(long long)arg1;
- (id)layoutAttributesForHeaderInSection:(long long)arg1 usingData:(id)arg2;
- (id)layoutAttributesForInterItemGapBeforeIndexPath:(id)arg1;
- (id)layoutAttributesForInterSectionGapAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1 usingData:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
- (void)prepareLayout;
- (long long)scrollDirection;
- (BOOL)sectionAtIndexIsCollapsed:(unsigned long long)arg1;
- (BOOL)sectionFootersPinToVisibleBounds;
- (BOOL)sectionHeadersPinToVisibleBounds;
- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })sectionInset;
- (void)setEstimatedItemSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setFooterReferenceSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setHeaderReferenceSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setItemSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMinimumInteritemSpacing:(double)arg1;
- (void)setMinimumLineSpacing:(double)arg1;
- (void)setScrollDirection:(long long)arg1;
- (void)setSectionFootersPinToVisibleBounds:(BOOL)arg1;
- (void)setSectionHeadersPinToVisibleBounds:(BOOL)arg1;
- (void)setSectionInset:(struct NSEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2;
- (struct CGSize { double x1; double x2; })synchronizeLayout;

@end
