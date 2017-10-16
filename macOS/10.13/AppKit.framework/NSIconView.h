/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSIconView : NSMatrix <NSAnimationDelegate> {
    NSAnimation * _animation;
    _NSIconViewDragContext * _dragContext;
    unsigned long long  _draggingSourceOperationMaskForLocal;
    unsigned long long  _draggingSourceOperationMaskForNonLocal;
    id  _extra;
    struct { 
        unsigned int unused : 29; 
        unsigned int allowsTypeSelect : 1; 
        unsigned int allowsMultipleSelection : 1; 
        unsigned int needsLayoutUpdate : 1; 
    }  _flags;
    double  _iconSize;
    unsigned long long  _imagePosition;
    long long  _itemCount;
    NSMutableArray * _items;
    _NSRubberBand * _rubberBand;
    _NSTypeSelectData * _typeSelectData;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

- (id)_cellThatHasContentAtPoint:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)_checkLoaded;
- (void)_commonInit;
- (void)_createMatrixRowsAndColumns;
- (void)_delegateLoadCell:(id)arg1 forIndex:(long long)arg2;
- (BOOL)_delegateRespondsToWriteIndexes;
- (BOOL)_delegateRespondsTo_nextTypeSelectMatchFromIndex;
- (BOOL)_delegateRespondsTo_shouldTypeSelectForEvent;
- (BOOL)_delegateRespondsTo_typeSelectStringForIndex;
- (id)_delegateTypeSelectStringForIndex:(long long)arg1;
- (long long)_delegate_nextTypeSelectMatchFromIndex:(long long)arg1 toIndex:(long long)arg2 forString:(id)arg3;
- (BOOL)_delegate_shouldTypeSelectForEvent:(id)arg1 withCurrentSearchString:(id)arg2;
- (long long)_determineDropIndexForDragInfo:(id)arg1;
- (void)_dragIndexes:(id)arg1 withEvent:(id)arg2 pasteboard:(id)arg3 source:(id)arg4 slideBack:(BOOL)arg5;
- (BOOL)_dragShouldBeginFromMouseDown:(id)arg1;
- (id)_dropHighlightEdgeColor;
- (long long)_findFirstNonSelectedIndexFrom:(long long)arg1 to:(long long)arg2 selectedIndexes:(id)arg3;
- (id)_firstSelectedCell;
- (void)_flipStateForCell:(id)arg1;
- (BOOL)_flipStateOfCellsInIndexSet:(id)arg1 toState:(long long)arg2;
- (void)_getRowRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg1 columnRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)_handleArrowMovementForChar:(unsigned short)arg1;
- (BOOL)_hasKeyboardFocus;
- (BOOL)_hoverAreaIsSameAsLast:(id)arg1;
- (long long)_internalNextTypeSelectMatchFromIndex:(long long)arg1 toIndex:(long long)arg2 forString:(id)arg3;
- (id)_internalTypeSelectStringForIndex:(long long)arg1;
- (BOOL)_isCellSelected:(id)arg1;
- (long long)_nextTypeSelectMatchFromIndex:(long long)arg1 toIndex:(long long)arg2 forString:(id)arg3;
- (BOOL)_performDragFromMouseDown:(id)arg1;
- (void)_performLayoutIfNeeded;
- (BOOL)_performTypeSelect:(id)arg1;
- (void)_putCellNoUpdate:(id)arg1 atRow:(long long)arg2 column:(long long)arg3;
- (BOOL)_sendDelegateWriteIndexes:(id)arg1 toPasteboard:(id)arg2;
- (void)_setDefaultPrototypeCell;
- (void)_setFocusRingNeedsDisplay;
- (void)_setNeedsDisplayForDropIndex:(long long)arg1;
- (void)_setNeedsDisplayForIndex:(long long)arg1;
- (void)_setNeedsDisplayInRow:(long long)arg1 column:(long long)arg2;
- (void)_setState:(long long)arg1 ofCell:(id)arg2;
- (BOOL)_shouldTypeSelectForEvent:(id)arg1;
- (void)_trackMouseForHitCell:(id)arg1 withEvent:(id)arg2;
- (void)_typeSelectEndCurrentSearch;
- (BOOL)_typeSelectInterpretKeyEvent:(id)arg1;
- (id)_typeSelectStringForIndex:(long long)arg1;
- (BOOL)_typeSelectUndoLastSearch;
- (BOOL)_userCanSelectCell:(id)arg1;
- (BOOL)_userCanSelectIndex:(long long)arg1;
- (BOOL)_userCanSelectIndex:(long long)arg1 withNewSelectedIndexes:(id)arg2;
- (id)_userSelectionIndexesForProposedSelection:(id)arg1;
- (BOOL)_userSetStateOfCellsInSet:(id)arg1 toState:(long long)arg2;
- (void)_validateDropForDragInfo:(id)arg1;
- (void)dealloc;

// Image: /Applications/Xcode.app/Contents/Developer/usr/lib/libMainThreadChecker.dylib

- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (BOOL)allowsMultipleSelection;
- (BOOL)allowsTypeSelect;
- (void)animateSetIconSize:(double)arg1;
- (void)animation:(id)arg1 didReachProgressMark:(float)arg2;
- (void)animationDidEnd:(id)arg1;
- (void)animationDidStop:(id)arg1;
- (BOOL)becomeFirstResponder;
- (void)becomeKeyWindow;
- (id)cellAtIndex:(long long)arg1;
- (id)cellAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cellFrameForCell:(id)arg1;
- (long long)cellIndexAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)currentTypeSelectSearchString;
- (id)delegate;
- (void)deselectAllCells;
- (void)deselectCell:(id)arg1;
- (void)deselectIndex:(long long)arg1;
- (id)dragImageForIndexes:(id)arg1 withEvent:(id)arg2 offset:(struct CGPoint { double x1; double x2; }*)arg3;
- (void)draggedImage:(id)arg1 beganAt:(struct CGPoint { double x1; double x2; })arg2;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint { double x1; double x2; })arg2 operation:(unsigned long long)arg3;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (void)drawCellAtRow:(long long)arg1 column:(long long)arg2;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)getRow:(long long*)arg1 column:(long long*)arg2 forPoint:(struct CGPoint { double x1; double x2; })arg3;
- (BOOL)getRow:(long long*)arg1 column:(long long*)arg2 ofCell:(id)arg3;
- (double)iconSize;
- (BOOL)ignoreModifierKeysWhileDragging;
- (unsigned long long)imagePosition;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)itemCount;
- (void)keyDown:(id)arg1;
- (void)loadCell:(id)arg1;
- (id)makeCellAtRow:(long long)arg1 column:(long long)arg2;
- (void)mouseDown:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)moveUp:(id)arg1;
- (BOOL)needsLayout;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)preservesContentDuringLiveResize;
- (void)reloadCellAtIndex:(long long)arg1;
- (void)reloadData;
- (BOOL)resignFirstResponder;
- (void)resignKeyWindow;
- (void)rubberBand:(id)arg1 rectangleFrom:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 to:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 withEvent:(id)arg4;
- (void)scrollCellToVisible:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)selectCellAtRow:(long long)arg1 column:(long long)arg2;
- (void)selectIndex:(long long)arg1;
- (id)selectedIndexes;
- (void)setAllowsMultipleSelection:(BOOL)arg1;
- (void)setAllowsTypeSelect:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDraggingSourceOperationMask:(unsigned long long)arg1 forLocal:(BOOL)arg2;
- (void)setDropTargetIndex:(long long)arg1;
- (void)setFont:(id)arg1;
- (void)setFrameSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setIconSize:(double)arg1;
- (void)setImagePosition:(unsigned long long)arg1;
- (void)setKeyCell:(id)arg1;
- (void)setNeedsLayout;
- (void)setSelectedIndexes:(id)arg1;
- (BOOL)shouldDelayWindowOrderingForEvent:(id)arg1;
- (void)superviewFrameChanged:(id)arg1;
- (void)updateCell:(id)arg1;
- (void)updateCellSize;
- (void)viewDidMoveToSuperview;
- (void)viewWillDraw;
- (void)viewWillMoveToSuperview:(id)arg1;

@end