/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABCleanGroupListRowView : NSTableRowView <ABGroupListRowView> {
    NSTrackingArea * _contentTrackingArea;
    BOOL  _highlighted;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic, readwrite) BOOL highlighted;
@property (atomic, readonly) Class superclass;

- (void).cxx_destruct;
- (void)ABBookGroupListRowView_commonInit;
- (void)addTrackingAreaToVisibleRect;
- (void)enumerateGroupListCellViewsWithBlock:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)isHighlighted;
- (BOOL)mouseDownCanMoveWindow;
- (void)mouseEntered:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)updateSelectionAppearanceOfCellViews;
- (void)x_drawSelectionInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
