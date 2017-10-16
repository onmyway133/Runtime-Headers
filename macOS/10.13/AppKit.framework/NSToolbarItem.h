/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSToolbarItem : NSObject <NSCopying, NSValidatedUserInterfaceItem> {
    NSImage * _image;
    NSString * _itemIdentifier;
    id  _itemViewer;
    NSString * _label;
    unsigned long long  _labelAlignment;
    struct CGSize { 
        double width; 
        double height; 
    }  _maxSize;
    NSMenuItem * _menuItemRep;
    struct CGSize { 
        double width; 
        double height; 
    }  _minSize;
    NSString * _paletteLabel;
    long long  _tag;
    struct __tbiFlags { 
        unsigned int viewRespondsToIsEnabled : 1; 
        unsigned int viewRespondsToSetEnabled : 1; 
        unsigned int viewRespondsToTag : 1; 
        unsigned int viewRespondsToSetTag : 1; 
        unsigned int viewRespondsToAction : 1; 
        unsigned int viewRespondsToSetAction : 1; 
        unsigned int viewRespondsToTarget : 1; 
        unsigned int viewRespondsToSetTarget : 1; 
        unsigned int viewRespondsToImage : 1; 
        unsigned int viewRespondsToSetImage : 1; 
        unsigned int isEnabled : 1; 
        unsigned int isUserRemovable : 1; 
        unsigned int menuHasBeenSet : 1; 
        unsigned int menuRepIsDefault : 1; 
        unsigned int viewHasBeenLoaded : 1; 
        unsigned int drawingForDragImage : 1; 
        unsigned int isCustomItemType : 1; 
        unsigned int hasValidatedAutoModeConfiguration : 1; 
        unsigned int useAutoModeConfiguration : 1; 
        unsigned int fromBaseLocalizedNib : 1; 
        unsigned int autovalidationDisabled : 1; 
        unsigned int tagHasBeenSet : 1; 
        unsigned int sizeHasBeenSet : 1; 
        unsigned int stateWasDisabledBeforeSheet : 1; 
        unsigned int wantsToBeCentered : 1; 
        unsigned int RESERVED : 7; 
    }  _tbiFlags;
    id  _tbiReserved;
    NSString * _toolTip;
    NSToolbar * _toolbar;
    id  _toolbarItemReserved;
    NSView * _view;
}

@property (atomic, readwrite) SEL action;
@property (atomic, readonly) BOOL allowsDuplicatesInToolbar;
@property (atomic, readwrite) BOOL autovalidates;
@property (getter=isEnabled, atomic, readwrite) BOOL enabled;
@property (atomic, readwrite, retain) NSImage *image;
@property (atomic, readonly, copy) NSString *itemIdentifier;
@property (atomic, readwrite, copy) NSString *label;
@property (atomic, readwrite) struct CGSize { double x1; double x2; } maxSize;
@property (atomic, readwrite, retain) NSMenuItem *menuFormRepresentation;
@property (atomic, readwrite) struct CGSize { double x1; double x2; } minSize;
@property (atomic, readwrite, copy) NSString *paletteLabel;
@property (atomic, readwrite) long long tag;
@property (atomic, readwrite) id target;
@property (atomic, readwrite, copy) NSString *toolTip;
@property (atomic, readonly) NSToolbar *toolbar;
@property (atomic, readwrite, retain) NSView *view;
@property (atomic, readwrite) long long visibilityPriority;

+ (id)_imageForDrawingInRectOfSize:(struct CGSize { double x1; double x2; })arg1 fromImage:(id)arg2;
+ (id)_newCloudSharingItem;
+ (id)_newCustomizeToolbarItem;
+ (id)_newPrintItem;
+ (id)_newShowColorsItem;
+ (id)_newShowFontsItem;
+ (id)_newToggleSidebarItem;
+ (double)_resizeWeight;
+ (BOOL)_resizeWeightSharedWithDuplicateItems;
+ (BOOL)allowsDuplicatesInToolbar;
+ (id)newStandardItemWithItemIdentifier:(id)arg1;
+ (id)standardItemWithItemIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)_allPossibleLabelsToFit;
- (id)_allocDefaultView;
- (BOOL)_applicableLabelIsEnabledAtIndex:(long long)arg1 forDisplayMode:(unsigned long long)arg2 isInPalette:(BOOL)arg3;
- (id)_applicableLabelsArrayForDisplayMode:(unsigned long long)arg1 isInPalette:(BOOL)arg2;
- (void)_autorecalculateMinSize:(struct CGSize { double x1; double x2; }*)arg1 maxSize:(struct CGSize { double x1; double x2; }*)arg2;
- (void)_autorecalculateSizesIfNotSetExplicitly;
- (BOOL)_canUserSetVisibilityPriority;
- (void)_clearDefaultMenuFormRepresentation;
- (void)_collectItemRectsForLabels:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 count:(unsigned long long)arg2 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)_collectItemRectsForLabels:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 count:(unsigned long long)arg2 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 controlBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (void)_collectItemRectsForViews:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 count:(unsigned long long)arg2 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)_collectItemRectsForViews:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 count:(unsigned long long)arg2 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 controlBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (id)_computeDefaultMenuFormRepresentation;
- (id)_copyOfCustomView;
- (BOOL)_emptyContents;
- (void)_forceSetView:(id)arg1;
- (BOOL)_getPartitionRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 inWindowCoordinatesForWindow:(id)arg2;
- (id)_imageForMenu;
- (double)_interlabelPadding;
- (double)_interviewPadding;
- (BOOL)_isCustomItemType;
- (BOOL)_isEnabledAndHasEnabledSubitem;
- (BOOL)_isPartitionItem;
- (id)_itemAtLabelIndex:(long long)arg1;
- (id)_itemAtViewIndex:(long long)arg1;
- (void)_itemLayoutChanged;
- (id)_itemMenuInPaletteForEvent:(id)arg1;
- (id)_label;
- (void)_loadViewIfNecessary;
- (id)_menuFormRepresentationForOverflowMenu;
- (BOOL)_menuRepresentationHasBeenSet;
- (BOOL)_menuRepresentationIsDefault;
- (BOOL)_mouseDownInSurroundingRegionShouldMoveWindow;
- (BOOL)_needsRedisplayWhenBeginningToolbarEditing;
- (void)_noteDefaultMenuAttributeChanged;
- (id)_paletteLabel;
- (id)_partitionAdapter;
- (void)_performMenuFormRepresentationClick;
- (void)_performSwitchToIconMode;
- (void)_prepareToolbarItemForSheet;
- (double)_resizeWeight;
- (BOOL)_resizeWeightSharedWithDuplicateItems;
- (void)_restoreToolbarItemAfterSheet;
- (struct CGSize { double x1; double x2; })_scalableMaxSize;
- (struct CGSize { double x1; double x2; })_scalableMinSize;
- (void)_setAllPossibleLabelsToFit:(id)arg1;
- (void)_setItemIdentifier:(id)arg1;
- (void)_setPartitionAdapter:(id)arg1;
- (void)_setSizesToFittingSizeIfBaseLocalized;
- (BOOL)_shouldApplySearchFieldAdjustment;
- (BOOL)_shouldApplyTextFieldAdjustment;
- (BOOL)_shouldValidateMenuFormRepresentation;
- (void)_standardCommonMenuFormRepresentationClicked:(id)arg1;
- (void)_standardCustomMenuFormRepresentationClicked:(id)arg1;
- (id)_startingWindowForSendAction:(SEL)arg1;
- (struct CGSize { double x1; double x2; })_textOrSearchFieldAdjustedMinOrMaxSize:(BOOL)arg1;
- (void)_toolbarItemCommonInit;
- (void)_toolbarItemPartitionAdapterDidChangeExcludedRect:(id)arg1;
- (void)_validateAsCommonItem:(id)arg1;
- (void)_validateAsCustomItem:(id)arg1;
- (void)_validateInPresenceOfSheet;
- (void)_validateMenuFormRepresentation:(id)arg1;
- (BOOL)_viewIsEnabledAtIndex:(long long)arg1;
- (id)_viewsArray;
- (BOOL)_wantsCopyForInsertionIntoToolbar:(id)arg1 isPalette:(BOOL)arg2;
- (BOOL)_wantsImageWrapperForInsertionIntoPaletteToolbar:(id)arg1;
- (SEL)action;
- (BOOL)allowsDuplicatesInToolbar;
- (BOOL)autovalidates;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionService;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemIdentifier:(id)arg1;
- (id)initWithType:(int)arg1 itemIdentifier:(id)arg2;
- (BOOL)isEnabled;
- (id)itemIdentifier;
- (int)itemType;
- (id)label;
- (struct CGSize { double x1; double x2; })maxSize;
- (id)menuFormRepresentation;
- (struct CGSize { double x1; double x2; })minSize;
- (id)paletteLabel;
- (double)preferredWidthRatio;
- (id)propertyListRepresentation;
- (void)setAction:(SEL)arg1;
- (void)setAutovalidates:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setImage:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setMaxSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMenuFormRepresentation:(id)arg1;
- (void)setMinSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPaletteLabel:(id)arg1;
- (void)setPreferredWidthRatio:(double)arg1;
- (void)setPropertyListRepresentation:(id)arg1;
- (void)setTag:(long long)arg1;
- (void)setTarget:(id)arg1;
- (void)setToolTip:(id)arg1;
- (void)setView:(id)arg1;
- (void)setVisibilityPriority:(long long)arg1;
- (void)setWantsToBeCentered:(BOOL)arg1;
- (long long)tag;
- (id)target;
- (id)toolTip;
- (id)toolbar;
- (void)validate;
- (BOOL)validateMenuItem:(id)arg1;
- (id)view;
- (long long)visibilityPriority;
- (BOOL)wantsToBeCentered;

// NSToolbarItem (NSInternal_CommonAndCustomTypeMethods)

+ (id)newSeparatorItem;
+ (id)separatorItemIdentifier;
+ (id)spaceItemIdentifier;

- (BOOL)_allowToolbarToStealEvent:(id)arg1;
- (void)_beginDrawForDragging;
- (id)_button;
- (id)_buttonAtIndex:(unsigned long long)arg1;
- (void)_endDrawForDragging;
- (BOOL)_handleSendControlSize:(unsigned long long)arg1 toCellOfView:(id)arg2;
- (BOOL)_handleSendControlSize:(unsigned long long)arg1 toView:(id)arg2;
- (id)_initialViewToSelectFromDirection:(long long)arg1;
- (BOOL)_isDrawingForDragImage;
- (BOOL)_isUserRemovable;
- (int)_itemType;
- (id)_itemViewer;
- (unsigned long long)_labelAlignment;
- (id)_menuFormRepresentation;
- (BOOL)_participatesInDefiningMinimumGridWidthForCustomizationPalette;
- (void)_setIsUserRemovable:(BOOL)arg1;
- (void)_setItemViewer:(id)arg1;
- (void)_setToolbar:(id)arg1;
- (id)_toolbar;
- (id)_view;
- (void)configureForDisplayMode:(unsigned long long)arg1 andSizeMode:(unsigned long long)arg2;
- (BOOL)isSeparatorItem;
- (BOOL)usesMenuFormRepresentationInDisplayMode:(unsigned long long)arg1;
- (BOOL)wantsToDrawIconInDisplayMode:(unsigned long long)arg1;
- (BOOL)wantsToDrawIconIntoLabelAreaInDisplayMode:(unsigned long long)arg1;
- (BOOL)wantsToDrawLabelInDisplayMode:(unsigned long long)arg1;
- (BOOL)wantsToDrawLabelInPalette;

// NSToolbarItem (NSPrivateVars)

- (void)_setSizeHasBeenSet:(BOOL)arg1;
- (BOOL)_sizeHasBeenSet;

// NSToolbarItem (NSToolbarItemCommonType)

- (struct CGSize { double x1; double x2; })_buttonFrameSizeForSizeMode:(unsigned long long)arg1;

@end
