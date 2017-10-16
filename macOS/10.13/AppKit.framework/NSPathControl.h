/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSPathControl : NSControl <DebugHierarchyObject> {
    id  _delegate;
    unsigned long long  _draggingSourceOperationMaskForLocal;
    unsigned long long  _draggingSourceOperationMaskForNonLocal;
    id  _pathAux;
    long long  _reserved;
}

@property (atomic, readwrite, copy) NSURL *URL;
@property (atomic, readwrite, copy) NSArray *allowedTypes;
@property (atomic, readwrite, copy) NSColor *backgroundColor;
@property (atomic, readonly) NSPathControlItem *clickedPathItem;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readwrite) <NSPathControlDelegate> *delegate;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readwrite) SEL doubleAction;
@property (getter=isEditable, atomic, readwrite) BOOL editable;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite, retain) NSMenu *menu;
@property (atomic, readwrite, copy) NSArray *pathItems;
@property (atomic, readwrite) long long pathStyle;
@property (atomic, readwrite, copy) NSAttributedString *placeholderAttributedString;
@property (atomic, readwrite, copy) NSString *placeholderString;
@property (atomic, readonly) Class superclass;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

+ (Class)cellClass;

- (void)_commonInit;
- (id)_dragImageForCell:(id)arg1 withEvent:(id)arg2 offset:(struct CGPoint { double x1; double x2; }*)arg3;
- (BOOL)_dragShouldBeginFromMouseDown:(id)arg1;
- (id)_draggedURL:(id)arg1;
- (void)_ensureDragContext;
- (BOOL)_hasRectangularFocusRingAroundFrame;
- (BOOL)_isFirstResponder;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_mainContentBounds;
- (BOOL)_performDragOfCell:(id)arg1 fromMouseDown:(id)arg2;
- (void)_removeTrackingRects;
- (void)_setNeedsDisplay;
- (void)_toolTipManagerWillRecomputeToolTipsByRemoving:(BOOL)arg1 adding:(BOOL)arg2;
- (void)_updateDropTargetForDraggingInfo:(id)arg1;
- (void)_updateDropTargetToCell:(id)arg1;
- (void)_windowChangedKeyState;
- (void)dealloc;

// Image: /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/Library/Debugger/libViewDebuggerSupport.dylib

// NSPathControl (DebugHierarchyAdditions)

- (id)debugHierarchyPropertyDescriptions;

// NSPathControl (DebugHierarchyHelpers)

- (id)__dbg_allowedTypes;

// Image: /Applications/Xcode.app/Contents/Developer/usr/lib/libMainThreadChecker.dylib

- (id)URL;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (id)allowedTypes;
- (id)arrayWithArray:(id)arg1 transformedByBlock:(id)arg2;
- (id)backgroundColor;
- (double)baselineOffsetFromBottom;
- (BOOL)becomeFirstResponder;
- (id)clickedPathComponentCell;
- (id)clickedPathItem;
- (void)concludeDragOperation:(id)arg1;
- (id)delegate;
- (SEL)doubleAction;
- (void)draggedImage:(id)arg1 beganAt:(struct CGPoint { double x1; double x2; })arg2;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint { double x1; double x2; })arg2 operation:(unsigned long long)arg3;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)ignoreModifierKeysWhileDragging;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)isEditable;
- (BOOL)isFlipped;
- (id)menu;
- (void)mouseDown:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseExited:(id)arg1;
- (BOOL)needsPanelToBecomeKey;
- (id)ns_widgetType;
- (void)pathCell:(id)arg1 willDisplayOpenPanel:(id)arg2;
- (void)pathCell:(id)arg1 willPopUpMenu:(id)arg2;
- (id)pathComponentCells;
- (id)pathItems;
- (long long)pathStyle;
- (BOOL)performDragOperation:(id)arg1;
- (id)placeholderAttributedString;
- (id)placeholderString;
- (BOOL)preservesContentDuringLiveResize;
- (BOOL)resignFirstResponder;
- (void)setAllowedTypes:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCell:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDoubleAction:(SEL)arg1;
- (void)setDraggingSourceOperationMask:(unsigned long long)arg1 forLocal:(BOOL)arg2;
- (void)setEditable:(BOOL)arg1;
- (void)setFrameSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMenu:(id)arg1;
- (void)setPathComponentCells:(id)arg1;
- (void)setPathItems:(id)arg1;
- (void)setPathStyle:(long long)arg1;
- (void)setPlaceholderAttributedString:(id)arg1;
- (void)setPlaceholderString:(id)arg1;
- (void)setURL:(id)arg1;
- (void)updateTrackingAreas;

@end
